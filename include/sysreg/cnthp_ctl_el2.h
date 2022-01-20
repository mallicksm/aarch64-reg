//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_CNTHP_CTL_EL2
#define H_CNTHP_CTL_EL2

union cnthp_ctl_el2 {
   uint64 _;
   struct {
      uint64 enable : 1;
      uint64 imask : 1;
      uint64 istatus : 1;
      uint64 res0_63_3 : 61;
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
