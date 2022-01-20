//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_CNTHVS_TVAL_EL2
#define H_CNTHVS_TVAL_EL2

union cnthvs_tval_el2 {
   uint64 _;
   struct {
      uint64 timervalue : 32;
      uint64 res0_63_32 : 32;
   };
};

static inline union cnthvs_tval_el2 r_cnthvs_tval_el2 ( void ) {
   union cnthvs_tval_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c14_c4_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_cnthvs_tval_el2 ( union cnthvs_tval_el2 x ) {
   __asm volatile(
      "MSR s3_4_c14_c4_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_CNTHVS_TVAL_EL2 */
#endif
