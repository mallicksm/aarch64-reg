//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_CNTHP_TVAL_EL2
#define H_CNTHP_TVAL_EL2

union cnthp_tval_el2 {
   uint64 _;
   struct {
      uint64 timervalue : 32;
      uint64 res0_63_32 : 32;
   };
};

static inline union cnthp_tval_el2 r_cnthp_tval_el2 ( void ) {
   union cnthp_tval_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c14_c2_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_cnthp_tval_el2 ( union cnthp_tval_el2 x ) {
   __asm volatile(
      "MSR s3_4_c14_c2_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_CNTHP_TVAL_EL2 */
#endif
