//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_ICH_HCR_EL2
#define H_ICH_HCR_EL2

union ich_hcr_el2 {
   uint64 _;
   struct {
      uint64 en : 1;
      uint64 uie : 1;
      uint64 lrenpie : 1;
      uint64 npie : 1;
      uint64 vgrp0eie : 1;
      uint64 vgrp0die : 1;
      uint64 vgrp1eie : 1;
      uint64 vgrp1die : 1;
      uint64 vsgieoicount : 1;
      uint64 res0_9 : 1;
      uint64 tc : 1;
      uint64 tall0 : 1;
      uint64 tall1 : 1;
      uint64 tsei : 1;
      uint64 tdir : 1;
      uint64 dvim : 1;
      uint64 res0_26_16 : 11;
      uint64 eoicount : 5;
      uint64 res0_63_32 : 32;
   };
};

static inline union ich_hcr_el2 r_ich_hcr_el2 ( void ) {
   union ich_hcr_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c12_c11_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_ich_hcr_el2 ( union ich_hcr_el2 x ) {
   __asm volatile(
      "MSR s3_4_c12_c11_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ICH_HCR_EL2 */
#endif
