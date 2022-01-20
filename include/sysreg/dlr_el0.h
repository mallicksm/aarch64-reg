//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_DLR_EL0
#define H_DLR_EL0

union dlr_el0 {
   uint64 _;
   struct {
      uint64 Restart_address : 64;
   };
};

static inline union dlr_el0 r_dlr_el0 ( void ) {
   union dlr_el0 tmp;
   __asm volatile(
      "MRS %0, s3_3_c4_c5_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_dlr_el0 ( union dlr_el0 x ) {
   __asm volatile(
      "MSR s3_3_c4_c5_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_DLR_EL0 */
#endif
