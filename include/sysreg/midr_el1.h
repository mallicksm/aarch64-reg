//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_MIDR_EL1
#define H_MIDR_EL1

union midr_el1 {
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

static inline union midr_el1 r_midr_el1 ( void ) {
   union midr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c0_c0_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_midr_el1 ( union midr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c0_c0_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_MIDR_EL1 */
#endif
