#!/usr/bin/env python3
import xml.etree.ElementTree as ET
from datetime import date
import getpass
import argparse
import os
import glob

def parse_register_xml(xml_path):
    import xml.etree.ElementTree as ET
    tree = ET.parse(xml_path)
    root = tree.getroot()
    registers = []

    for reg in root.findall(".//register"):
        reg_name = reg.findtext("reg_short_name")
        reg_long = reg.findtext("reg_long_name")

        # Inline logic from extract_clean_text
        purpose_elem = reg.find(".//purpose_text/para")
        if purpose_elem is not None:
            purpose_text = ''.join(purpose_elem.itertext()).strip()
        else:
            purpose_text = ""

        fields_info = []
        for fields_block in reg.findall(".//fields"):
            cond_elem = fields_block.find("fields_condition")
            if cond_elem is not None:
                cond_text = cond_elem.text or ""
                if "implemented" in cond_text and "not implemented" not in cond_text:
                    continue  # Skip fields that only apply if a feature *is implemented*

            for field in fields_block.findall(".//field"):
                if field.find("fields_condition") is not None:
                    continue

                name = field.findtext("field_name") or field.findtext("field_shortdesc", "").replace(" ", "_")
                msb = int(field.findtext("field_msb") or 0)
                lsb = int(field.findtext("field_lsb") or 0)

                desc_elem = field.find(".//field_description/para")
                if desc_elem is not None:
                    desc = ''.join(desc_elem.itertext()).strip()
                else:
                    desc = ""

                reset_elem = field.find(".//field_reset_standard_text")
                reset = reset_elem.text if reset_elem is not None else None

                if desc.startswith("Reserved"):
                    name = f"Reserved{name}_{msb}_{lsb}"
                    desc = "Reserved"

                fields_info.append({
                    "name": name,
                    "bit_range": f"[{msb}:{lsb}]",
                    "msb": msb,
                    "lsb": lsb,
                    "description": desc,
                    "reset": reset
                })

        registers.append({
            "short_name": reg_name,
            "long_name": reg_long,
            "fields": fields_info,
            "purpose_text": purpose_text
        })

    return registers

def generate_ascii_diagram(register_name, fields, width=32):
    def extract_inline_and_table_labels(fields, width, cell_width=3):
        inline_labels = [""] * width
        label_table = []
        for field in fields:
            name, msb, lsb = field['name'], field['msb'], field['lsb']
            size = msb - lsb + 1
            if name.startswith("Reserved") or msb >= width or msb < lsb:
                continue
            if size == 1 and len(name) <= cell_width:
                inline_labels[lsb] = name
            else:
                label_table.append(f"{msb}:{lsb} => {name}")
                if msb != lsb:
                    inline_labels[lsb] = "*"
                    inline_labels[msb] = "o"
                else:
                    inline_labels[lsb] = "x"
        return inline_labels, label_table

    def emit_row(lo, hi, cell_width=3):
        bit_line = " ".join(f"{i:>{cell_width}}" for i in reversed(range(lo, hi + 1)))
        top =    "╭" + "┬".join("─" * cell_width for _ in range(hi - lo + 1)) + "╮"
        mid =    "│" + "│".join(f"{inline_labels[i]:^{cell_width}}" if inline_labels[i] else " " * cell_width for i in reversed(range(lo, hi + 1))) + "│"
        bottom = "╰" + "┴".join("─" * cell_width for _ in range(hi - lo + 1)) + "╯"
        return f"// {bit_line}\n// {top}\n// {mid}\n// {bottom}"

    def has_non_reserved_upper_half(fields):
        # drop >32 portion of the table if reserved
        for field in fields:
            if field['msb'] < 32:
                continue
            if not field['name'].startswith("Reserved"):
                return True
        return False

    def max_inline_label_length(fields, max_inline_width=4):
        # chose if < 4 to make the table more compact
        max_len = 2
        for field in fields:
            name, msb, lsb = field['name'], field['msb'], field['lsb']
            if name.startswith("Reserved") or msb != lsb:
                continue
            if len(name) > max_inline_width:
                continue
            max_len = max(max_len, len(name))
        return max_len

    # start printing here
    max_inline_width = 4
    cell_width = min(max_inline_label_length(fields, max_inline_width), max_inline_width)
    inline_labels, label_table = extract_inline_and_table_labels(fields, width, cell_width)
    print(f"// Register: {register_name}")
    if width == 64:
        if has_non_reserved_upper_half(fields):
            print(emit_row(32, 63, cell_width))
        print(emit_row(0, 31, cell_width))
    else:
        print(emit_row(0, width - 1, cell_width))

    if label_table:
        print("// Field key:")
        for entry in label_table:
            print(f"// {entry}")

def one_line_wrap(text, width=120):
    if len(text) <= width:
        return text
    break_idx = max(text.rfind(',', 0, width), text.rfind('.', 0, width), text.rfind(' ', 0, width))
    return text[:break_idx + 1].strip() if break_idx > 0 else text[:width]

def find_file_in_sysreg(pattern, search_dir="sysreg"):
    pattern = f"*{pattern}*"
    matches = glob.glob(os.path.join(search_dir, "**", pattern), recursive=True)
    if not matches:
        raise FileNotFoundError(f"No file matching '{pattern}' under '{search_dir}/'")
    return matches[0]  # Return the first match

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Parse and render AArch64 register definition.")
    parser.add_argument("-r", "--regfile", required=True, help="Register XML filename (e.g., AArch64-sctlr_el3.xml)")
    args = parser.parse_args()
    xml_path = find_file_in_sysreg(args.regfile)
    registers = parse_register_xml(xml_path)

    for reg in registers:
        print(f"//------------------------------------------------------------------------------")
        print(f"// Register: {reg['short_name']} - {reg['long_name']}")
        print(f"// Description: {reg['purpose_text']}")
        print(f"// Author: {getpass.getuser()}")
        print(f"// Date: {date.today()}")
        print(f"// Mode; autogenerated by regparse.py")
        print(f"//------------------------------------------------------------------------------")
        print()
        print(f"#ifndef H_{reg['short_name']}")
        print(f"#define H_{reg['short_name']}")
        print(f'#include <stdlib.h>')
        print(f'#include "arch_helpers.h"')
        generate_ascii_diagram(reg['short_name'], reg['fields'])
        print(f"union {reg['short_name']} {{")
        print(f"   uint64_t _;")
        print(f"   struct {{")
        for field in reversed(reg['fields']):
            bit_width = field['msb'] - field['lsb'] + 1
            reset = f", Reset: {field['reset']}" if field['reset'] else ""
            comment = f" // {one_line_wrap(field['description'])}{reset}" if field['description'] != "Reserved" else ""
            print(f"      uint64_t {field['name']:<24}: {bit_width:>2};{comment}")
        print(f"   }};")
        print(f"}};")
        print(f"DEFINE_SYSREG_READ_FUNC({reg['short_name']}, {reg['short_name']})")
        print(f"DEFINE_SYSREG_WRITE_FUNC({reg['short_name']}, {reg['short_name']})")
        print(f"#endif // H_{reg['short_name']}")
