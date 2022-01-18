//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_CNTHV_CTL_EL2
#define H_CNTHV_CTL_EL2

union cnthv_ctl_el2 {
   unsigned long _;
   struct {
      unsigned long enable : 1;
      unsigned long imask : 1;
      unsigned long istatus : 1;
      unsigned long res0_63_3 : 61;
   };
};

static inline union cnthv_ctl_el2 r_cnthv_ctl_el2 ( void ) {
   union cnthv_ctl_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c14_c3_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_cnthv_ctl_el2 ( union cnthv_ctl_el2 x ) {
   __asm volatile(
      "MSR s3_4_c14_c3_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_CNTHV_CTL_EL2 */
#endif
