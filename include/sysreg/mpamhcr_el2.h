//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_MPAMHCR_EL2
#define H_MPAMHCR_EL2

union mpamhcr_el2 {
   uint64 _;
   struct {
      uint64 el0_vpmen : 1;
      uint64 el1_vpmen : 1;
      uint64 res0_7_2 : 6;
      uint64 gstapp_plk : 1;
      uint64 res0_30_9 : 22;
      uint64 trap_mpamidr_el1 : 1;
      uint64 res0_63_32 : 32;
   };
};

static inline union mpamhcr_el2 r_mpamhcr_el2 ( void ) {
   union mpamhcr_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c10_c4_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_mpamhcr_el2 ( union mpamhcr_el2 x ) {
   __asm volatile(
      "MSR s3_4_c10_c4_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_MPAMHCR_EL2 */
#endif
