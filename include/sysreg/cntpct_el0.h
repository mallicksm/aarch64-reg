//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_CNTPCT_EL0
#define H_CNTPCT_EL0

union cntpct_el0 {
   unsigned long _;
   struct {
      unsigned long Physical_count_value : 64;
   };
};

static inline union cntpct_el0 r_cntpct_el0 ( void ) {
   union cntpct_el0 tmp;
   __asm volatile(
      "MRS %0, s3_3_c14_c0_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_cntpct_el0 ( union cntpct_el0 x ) {
   __asm volatile(
      "MSR s3_3_c14_c0_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_CNTPCT_EL0 */
#endif
