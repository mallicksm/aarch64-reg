//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_CNTVCT_EL0
#define H_CNTVCT_EL0

union cntvct_el0 {
   unsigned long _;
   struct {
      unsigned long Virtual_count_value : 64;
   };
};

static inline union cntvct_el0 r_cntvct_el0 ( void ) {
   union cntvct_el0 tmp;
   __asm volatile(
      "MRS %0, s3_3_c14_c0_2"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_cntvct_el0 ( union cntvct_el0 x ) {
   __asm volatile(
      "MSR s3_3_c14_c0_2, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_CNTVCT_EL0 */
#endif
