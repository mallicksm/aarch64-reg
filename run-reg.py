"""
Copyright (c) 2019 Ash Wilding. All rights reserved.

SPDX-License-Identifier: MIT

This script builds the library from the AArch64 System Register XML.

Usage:

    python3.8 run-build.py XML_PATH

Example:

    curl -O https://developer.arm.com/-/media/developer/products/architecture/armv8-a-architecture/2020-06/SysReg_xml_v86A-2020-06.tar.gz
    tar xf SysReg_xml_v86A-2020-06.tar.gz
    python3.8 run-build.py SysReg_xml_v86A-2020-06

"""

import bs4
import os
import shutil
import sys
from functools import reduce
PREAMBLE = f"""\
//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------
"""

class AArch64XML(bs4.BeautifulSoup):
    """ Wrapper around BeautifulSoup for easier parsing of AArch64 XML. """

    class ParseError(Exception):
        """ Base class of exceptions raised while parsing AArch64 XML. """
        registered_errors = {}

        def __init__( self, xml_node:bs4.BeautifulSoup, message:str="No specific error info" ) -> None:
            self.xml_node = xml_node
            self.message = message
            if message in self.__class__.registered_errors:
                self.__class__.registered_errors[message] += 1
            else:
                self.__class__.registered_errors[message] = 1

        def __str__( self ) -> str:
            return f"\n\n{self.xml_node}\n\n{type(self).__name__}{': '+self.message if self.message else ''}"

    class AttrValueError(ParseError):
        """ Raised when an XML node has an attribute value that we don't yet know how to handle. """
        pass

    class NumChildrenError(ParseError):
        """ Raised when an XML node does not have the expected number of children. """
        pass

    def assert_attr_equals( self, attr:str, expected_value:str ) -> None:
        if not self[attr] == expected_value:
            raise AArch64XML.AttrValueError(self, f'xml["{attr}"]={self[attr]}')

    def assert_child_exists( self, child:str ) -> None:
        children = self.find_all_exact(child)
        if not(type(children) is list and len(children) > 0):
            raise AArch64XML.NumChildrenError(self, f"no '{child}' child node")

    def assert_str_not_numbered( self, s:str, entity:str, spaces_ok:bool=False ) -> None:
        if not spaces_ok:
            if len(s.split()) > 1:
                raise AArch64XML.AttrValueError(self, f"{entity} name has spaces")
        if '<' in s:
            raise AArch64XML.AttrValueError(self, f"{entity} name contains {s[s.find('<'):s.find('>')+1]}")

    def find_all_exact( self, child:str, assert_only_one:bool=False ):
        """
        Wrapper around BeautifulSoup's find_all(), but only returning exact
        matches.

        Further, can optionally build in an assertion that only a single child
        node is returned. In this case, that child node itself is returned
        rather than a single-element list.
        """
        children = [c for c in self.find_all(child) if c.name == child]
        for c in children:
            c.__class__ = AArch64XML
        if assert_only_one:
            if len(children) == 1:
                return children[0]
            else:
                raise AArch64XML.NumChildrenError(self, f"expected 1x '{child}' child node but got {'more' if len(children) > 1 else 'none'}")
        return children

    def attr_exists( self, attr:str ) -> bool:
        """ bs4 doesn't support 'if x in y' so use a try/except clause instead. """
        try:
            probe = self[attr]
        except KeyError:
            return False
        return True


class Field():
    """ Class representing a bitfield in a system register. """

    def __init__( self, xml:AArch64XML ):
        self.msb = int(xml.field_msb.string)
        self.lsb = int(xml.field_lsb.string)
        self.res = 0

        xml.assert_attr_equals('is_variable_length', 'False')
        xml.assert_attr_equals('has_partial_fieldset', 'False')
        xml.assert_attr_equals('is_linked_to_partial_fieldset', 'False')

        def get_res( s:str ) -> int:
            if s.startswith("RES"):
                return int(s[-1])
            elif s.startswith("RAZ") or s.startswith("UNKNOWN"):
                return 0
            elif s.startswith("RAO"):
                return 1
            else:
                raise ValueError

        try:
            if xml.attr_exists('rwtype'):
                self.res = get_res(xml['rwtype'])
                self.name = f'res{self.res}_{self.msb}' + ('' if self.msb == self.lsb else f'_{self.lsb}')
            else:
                self.name = xml.field_name.string.lower()
                if xml.attr_exists('reserved_type'):
                    self.res = get_res(xml['reserved_type'])
        except ValueError as e:
            raise AArch64XML.AttrValueError(xml, f"parsing field rwtype/reserved_type")
        except AttributeError as e:
            self.name = xml.find_all_exact("field_shortdesc", assert_only_one=True).string

        xml.assert_str_not_numbered(self.name, "field", spaces_ok=True)
        for c in [' ', '[', ':', ']', ',', '.', '-']:
            self.name = self.name.replace(c, '_')
        while "__" in self.name:
            self.name = self.name.replace("__", "_")
        self.name = self.name.replace("64_bit_value_", "")

        if self.name == "implementation_defined":
            self.name = f"impdef_{self.msb}{f'_{self.lsb}' if self.msb > self.lsb else ''}"

    @property
    def decl( self ) -> str:
        return f"""
      uint64 {self.name} : {self.msb - self.lsb + 1};"""


class Register():
    """ Class representing a system register. """

    def __init__( self, xml_path:str ):
        with open(xml_path) as xml_file:
            xml = bs4.BeautifulSoup(xml_file.read(), features='html.parser')
        xml.__class__ = AArch64XML
        xml.assert_child_exists('register_page')
        xml = xml.register_page
        xml.assert_child_exists('registers')
        xml = xml.registers

        xml = xml.find_all_exact('register', assert_only_one=True)
        xml.assert_attr_equals('execution_state', 'AArch64')

        self.name = xml.reg_short_name.string.lower()
        xml.assert_str_not_numbered(self.name, "register")

        self.fields = []
        fields = xml.find_all_exact('fields', assert_only_one=True)
        for field_xml in fields.find_all_exact('field'):
            f = Field(field_xml)
            if not self.fields:
                self.fields.append(f)
            else:
                """ Only append if this is a new field. """
                if not f.msb == self.fields[-1].msb:
                    self.fields.append(f)
        self.fields.reverse()

        self.ops = {}
        self.readable = False
        self.writeable = False
        access_mechanisms = xml.find_all_exact('access_mechanisms', assert_only_one=True)
        for am_xml in access_mechanisms.find_all_exact('access_mechanism'):
            accessor_name = am_xml['accessor'].lower()
            if accessor_name.endswith(self.name) or accessor_name.replace("icc_", "icv_").endswith(self.name):
                if not self.ops:
                    for enc_xml in am_xml.find_all_exact('enc'):
                        self.ops[enc_xml['n']] = int(enc_xml['v'][2:], 2)

                if not self.readable:
                    if am_xml['accessor'].startswith("MRS"):
                        self.readable = True

                if not self.writeable:
                    if am_xml['accessor'].startswith("MSR"):
                        self.writeable = True

        if not self.readable and not self.writeable:
            raise AArch64XML.ParseError(access_mechanisms, "no accessors")


    @property
    def decl( self ) -> str:
        return f"""
union {self.name} {{
   uint64 _;
   struct {{{"".join([f.decl for f in self.fields])}
   }};
}};
"""

    @property
    def encoding( self ) -> str:
        return f's{r.ops["op0"]}_{r.ops["op1"]}_c{r.ops["CRn"]}_c{r.ops["CRm"]}_{r.ops["op2"]}'

    @property
    def read( self ) -> str:
        return '' if not self.readable else f"""\
static inline union {self.name} r_{self.name} ( void ) {{
   union {self.name} tmp;
   __asm volatile(
      "MRS %0, {self.encoding}"
      : "=r" (tmp._)
   );
   return tmp;
}}
"""
    @property
    def write( self ) -> str:
        return '' if not self.readable else f"""\
static inline void w_{self.name} ( union {self.name} x ) {{
   __asm volatile(
      "MSR {self.encoding}, %0"
      : /* w */
      : "r" (x._)
   );
}}
"""

if __name__ == "__main__":
    if not len(sys.argv) == 2:
        print(f"example usage: python3.8 {sys.argv[0]} /path/to/xml/directory/")
        sys.exit(1)

    files = []
    try:
        for (_, _, f) in os.walk(sys.argv[1]):
            files.extend(f)
            break
    except OSError as e:
        print(e)
        sys.exit(e.errno if hasattr(e, "errno") else 1)

    def rmdir( path:str ) -> None:
        try:
            shutil.rmtree(path, ignore_errors=True)
        except OSError as e:
            sys.exit(e.errno if hasattr(e, "errno") else 1)

    def mkdir( path:str ) -> None:
        dirs = path.split("/")
        for i in range(len(dirs)):
            try:
                os.mkdir("/".join(dirs[:i+1]))
            except FileExistsError:
                pass
            except OSError as e:
                print(e)
                sys.exit(e.errno if hasattr(e, "errno") else 1)

    class FilenameFilter:
        instructions = ["ic", "dc", "tlbi", "at", "cfp", "cpp", "dvp"]
        counts = {}

        @classmethod
        def check( cls, path:str ) -> bool:
            if not path.startswith("AArch64-"):
                """ ignore AArch32 and external system registers """
                return False
            if path.startswith("AArch64-sysindex") or path.startswith("AArch64-regindex"):
                """ ignore index files """
                return False
            if path.startswith("AArch64-s1_") or path.startswith("AArch64-s3_"):
                """ ignore example instructions """
                return False
            if path.startswith("AArch64-sp_el3"):
                """ sp_el3 cannot be accessed using MRS/MSR """
                return False
            for instr in cls.instructions:
                """ ignore instructions that look like system registers """
                if not instr in cls.counts:
                    cls.counts[instr] = 0
                if path.startswith(f"AArch64-{instr}-"):
                    cls.counts[instr] += 1
                    return False
            return True

        @classmethod
        def report( cls ) -> str:
            ret = f"skipped {reduce(lambda a,b: a+b, cls.counts.values())} files corresponding to instructions:"
            for instr,count in cls.counts.items():
                ret += f"\n - {instr} (x{count})"
            return ret

    rmdir("include")
    rmdir("test")
    mkdir(f"include/sysreg")

    ok = []
    failures = []
    print("========== build start ==========")
    for f in sorted(list(filter(FilenameFilter.check, files))):
        print(f"parsing {f}")
        try:
            r = Register(f"{sys.argv[1]}/{f}")
        except AArch64XML.ParseError as e:
            failures.append(f)
            print(e)
            print(f"failed to parse {f}: {e.message}\n\n")
        else:
            ok.append(f)
            with open(f"include/sysreg/{r.name}.h", "w") as header_file:
                header_file.write(f"""\
{PREAMBLE}
#ifndef H_{r.name.upper()}
#define H_{r.name.upper()}
{r.decl}
{r.read}
{r.write}
/* H_{r.name.upper()} */
#endif
""")
    if failures:
        print("========== build failures ==========")
        print("\n".join(failures))

    print("========== build results ==========")
    print(FilenameFilter.report())
    print(f"successfully built {len(ok)} of the remaining {len(ok)+len(failures)} files ({len(failures)} errors)")

    if failures:
        print("NOTE: these error messages are expected! this tool is still in development")
        print("summary of issues the tool cannot yet parse:")
        keys = sorted(AArch64XML.ParseError.registered_errors.keys())
        for k in keys:
            print(f" - {k} (x{AArch64XML.ParseError.registered_errors[k]})'")

