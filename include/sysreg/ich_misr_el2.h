//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_ICH_MISR_EL2
#define H_ICH_MISR_EL2

union ich_misr_el2 {
   uint64 _;
   struct {
      uint64 eoi : 1;
      uint64 u : 1;
      uint64 lrenp : 1;
      uint64 np : 1;
      uint64 vgrp0e : 1;
      uint64 vgrp0d : 1;
      uint64 vgrp1e : 1;
      uint64 vgrp1d : 1;
      uint64 res0_63_8 : 56;
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
