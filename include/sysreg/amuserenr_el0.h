//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_AMUSERENR_EL0
#define H_AMUSERENR_EL0

union amuserenr_el0 {
   uint64 _;
   struct {
      uint64 en : 1;
      uint64 res0_63_1 : 63;
   };
};

static inline union amuserenr_el0 r_amuserenr_el0 ( void ) {
   union amuserenr_el0 tmp;
   __asm volatile(
      "MRS %0, s3_3_c13_c2_3"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_amuserenr_el0 ( union amuserenr_el0 x ) {
   __asm volatile(
      "MSR s3_3_c13_c2_3, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_AMUSERENR_EL0 */
#endif
