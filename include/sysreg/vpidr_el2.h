//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_VPIDR_EL2
#define H_VPIDR_EL2

union vpidr_el2 {
   unsigned long _;
   struct {
      unsigned long revision : 4;
      unsigned long partnum : 12;
      unsigned long architecture : 4;
      unsigned long variant : 4;
      unsigned long implementer : 8;
      unsigned long res0_63_32 : 32;
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
