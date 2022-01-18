//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_ICH_MISR_EL2
#define H_ICH_MISR_EL2

union ich_misr_el2 {
   unsigned long _;
   struct {
      unsigned long eoi : 1;
      unsigned long u : 1;
      unsigned long lrenp : 1;
      unsigned long np : 1;
      unsigned long vgrp0e : 1;
      unsigned long vgrp0d : 1;
      unsigned long vgrp1e : 1;
      unsigned long vgrp1d : 1;
      unsigned long res0_63_8 : 56;
   };
};

static inline union ich_misr_el2 r_ich_misr_el2 ( void ) {
   union ich_misr_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c12_c11_2"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_ich_misr_el2 ( union ich_misr_el2 x ) {
   __asm volatile(
      "MSR s3_4_c12_c11_2, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ICH_MISR_EL2 */
#endif
