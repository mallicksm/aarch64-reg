//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_ICH_HCR_EL2
#define H_ICH_HCR_EL2

union ich_hcr_el2 {
   unsigned long _;
   struct {
      unsigned long en : 1;
      unsigned long uie : 1;
      unsigned long lrenpie : 1;
      unsigned long npie : 1;
      unsigned long vgrp0eie : 1;
      unsigned long vgrp0die : 1;
      unsigned long vgrp1eie : 1;
      unsigned long vgrp1die : 1;
      unsigned long vsgieoicount : 1;
      unsigned long res0_9 : 1;
      unsigned long tc : 1;
      unsigned long tall0 : 1;
      unsigned long tall1 : 1;
      unsigned long tsei : 1;
      unsigned long tdir : 1;
      unsigned long dvim : 1;
      unsigned long res0_26_16 : 11;
      unsigned long eoicount : 5;
      unsigned long res0_63_32 : 32;
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
