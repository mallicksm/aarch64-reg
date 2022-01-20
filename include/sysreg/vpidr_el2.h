//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_VPIDR_EL2
#define H_VPIDR_EL2

union vpidr_el2 {
   uint64 _;
   struct {
      uint64 revision : 4;
      uint64 partnum : 12;
      uint64 architecture : 4;
      uint64 variant : 4;
      uint64 implementer : 8;
      uint64 res0_63_32 : 32;
   };
};

static inline union vpidr_el2 r_vpidr_el2 ( void ) {
   union vpidr_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c0_c0_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_vpidr_el2 ( union vpidr_el2 x ) {
   __asm volatile(
      "MSR s3_4_c0_c0_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_VPIDR_EL2 */
#endif
