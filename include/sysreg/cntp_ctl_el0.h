//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_CNTP_CTL_EL0
#define H_CNTP_CTL_EL0

union cntp_ctl_el0 {
   uint64 _;
   struct {
      uint64 enable : 1;
      uint64 imask : 1;
      uint64 istatus : 1;
      uint64 res0_63_3 : 61;
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
