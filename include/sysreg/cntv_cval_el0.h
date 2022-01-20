//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_CNTV_CVAL_EL0
#define H_CNTV_CVAL_EL0

union cntv_cval_el0 {
   uint64 _;
   struct {
      uint64 comparevalue : 64;
   };
};

static inline union cntv_cval_el0 r_cntv_cval_el0 ( void ) {
   union cntv_cval_el0 tmp;
   __asm volatile(
      "MRS %0, s3_3_c14_c3_2"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_cntv_cval_el0 ( union cntv_cval_el0 x ) {
   __asm volatile(
      "MSR s3_3_c14_c3_2, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_CNTV_CVAL_EL0 */
#endif
