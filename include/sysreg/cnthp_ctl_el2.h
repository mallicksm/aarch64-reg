//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_CNTHP_CTL_EL2
#define H_CNTHP_CTL_EL2

union cnthp_ctl_el2 {
   unsigned long _;
   struct {
      unsigned long enable : 1;
      unsigned long imask : 1;
      unsigned long istatus : 1;
      unsigned long res0_63_3 : 61;
   };
};

static inline union cnthp_ctl_el2 r_cnthp_ctl_el2 ( void ) {
   union cnthp_ctl_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c14_c2_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_cnthp_ctl_el2 ( union cnthp_ctl_el2 x ) {
   __asm volatile(
      "MSR s3_4_c14_c2_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_CNTHP_CTL_EL2 */
#endif
