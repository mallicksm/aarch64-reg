//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_CNTP_CTL_EL0
#define H_CNTP_CTL_EL0

union cntp_ctl_el0 {
   unsigned long _;
   struct {
      unsigned long enable : 1;
      unsigned long imask : 1;
      unsigned long istatus : 1;
      unsigned long res0_63_3 : 61;
   };
};

static inline union cntp_ctl_el0 r_cntp_ctl_el0 ( void ) {
   union cntp_ctl_el0 tmp;
   __asm volatile(
      "MRS %0, s3_3_c14_c2_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_cntp_ctl_el0 ( union cntp_ctl_el0 x ) {
   __asm volatile(
      "MSR s3_3_c14_c2_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_CNTP_CTL_EL0 */
#endif
