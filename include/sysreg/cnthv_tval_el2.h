//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_CNTHV_TVAL_EL2
#define H_CNTHV_TVAL_EL2

union cnthv_tval_el2 {
   unsigned long _;
   struct {
      unsigned long timervalue : 32;
      unsigned long res0_63_32 : 32;
   };
};

static inline union cnthv_tval_el2 r_cnthv_tval_el2 ( void ) {
   union cnthv_tval_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c14_c3_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_cnthv_tval_el2 ( union cnthv_tval_el2 x ) {
   __asm volatile(
      "MSR s3_4_c14_c3_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_CNTHV_TVAL_EL2 */
#endif
