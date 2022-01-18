//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_CNTP_TVAL_EL0
#define H_CNTP_TVAL_EL0

union cntp_tval_el0 {
   unsigned long _;
   struct {
      unsigned long timervalue : 32;
      unsigned long res0_63_32 : 32;
   };
};

static inline union cntp_tval_el0 r_cntp_tval_el0 ( void ) {
   union cntp_tval_el0 tmp;
   __asm volatile(
      "MRS %0, s3_3_c14_c2_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_cntp_tval_el0 ( union cntp_tval_el0 x ) {
   __asm volatile(
      "MSR s3_3_c14_c2_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_CNTP_TVAL_EL0 */
#endif
