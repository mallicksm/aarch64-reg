//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_CNTPS_TVAL_EL1
#define H_CNTPS_TVAL_EL1

union cntps_tval_el1 {
   unsigned long _;
   struct {
      unsigned long timervalue : 32;
      unsigned long res0_63_32 : 32;
   };
};

static inline union cntps_tval_el1 r_cntps_tval_el1 ( void ) {
   union cntps_tval_el1 tmp;
   __asm volatile(
      "MRS %0, s3_7_c14_c2_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_cntps_tval_el1 ( union cntps_tval_el1 x ) {
   __asm volatile(
      "MSR s3_7_c14_c2_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_CNTPS_TVAL_EL1 */
#endif
