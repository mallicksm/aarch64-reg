//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_CNTVCTSS_EL0
#define H_CNTVCTSS_EL0

union cntvctss_el0 {
   unsigned long _;
   struct {
      unsigned long Self_synchronized_virtual_count_value : 64;
   };
};

static inline union cntvctss_el0 r_cntvctss_el0 ( void ) {
   union cntvctss_el0 tmp;
   __asm volatile(
      "MRS %0, s3_3_c14_c0_6"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_cntvctss_el0 ( union cntvctss_el0 x ) {
   __asm volatile(
      "MSR s3_3_c14_c0_6, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_CNTVCTSS_EL0 */
#endif
