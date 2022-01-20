//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_ICV_PMR_EL1
#define H_ICV_PMR_EL1

union icv_pmr_el1 {
   uint64 _;
   struct {
      uint64 priority : 8;
      uint64 res0_63_8 : 56;
   };
};

static inline union icv_pmr_el1 r_icv_pmr_el1 ( void ) {
   union icv_pmr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c4_c6_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_icv_pmr_el1 ( union icv_pmr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c4_c6_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ICV_PMR_EL1 */
#endif
