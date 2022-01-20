//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_CNTFRQ_EL0
#define H_CNTFRQ_EL0

union cntfrq_el0 {
   uint64 _;
   struct {
      uint64 Clock_frequency : 32;
      uint64 res0_63_32 : 32;
   };
};

static inline union cntfrq_el0 r_cntfrq_el0 ( void ) {
   union cntfrq_el0 tmp;
   __asm volatile(
      "MRS %0, s3_3_c14_c0_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_cntfrq_el0 ( union cntfrq_el0 x ) {
   __asm volatile(
      "MSR s3_3_c14_c0_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_CNTFRQ_EL0 */
#endif
