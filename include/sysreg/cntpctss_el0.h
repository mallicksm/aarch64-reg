//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_CNTPCTSS_EL0
#define H_CNTPCTSS_EL0

union cntpctss_el0 {
   uint64 _;
   struct {
      uint64 Self_synchronized_physical_count_value : 64;
   };
};

static inline union cntpctss_el0 r_cntpctss_el0 ( void ) {
   union cntpctss_el0 tmp;
   __asm volatile(
      "MRS %0, s3_3_c14_c0_5"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_cntpctss_el0 ( union cntpctss_el0 x ) {
   __asm volatile(
      "MSR s3_3_c14_c0_5, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_CNTPCTSS_EL0 */
#endif
