//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_ICC_IGRPEN1_EL3
#define H_ICC_IGRPEN1_EL3

union icc_igrpen1_el3 {
   unsigned long _;
   struct {
      unsigned long enablegrp1ns : 1;
      unsigned long enablegrp1s : 1;
      unsigned long res0_63_2 : 62;
   };
};

static inline union icc_igrpen1_el3 r_icc_igrpen1_el3 ( void ) {
   union icc_igrpen1_el3 tmp;
   __asm volatile(
      "MRS %0, s3_6_c12_c12_7"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_icc_igrpen1_el3 ( union icc_igrpen1_el3 x ) {
   __asm volatile(
      "MSR s3_6_c12_c12_7, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ICC_IGRPEN1_EL3 */
#endif
