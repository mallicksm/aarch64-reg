//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_PMSFCR_EL1
#define H_PMSFCR_EL1

union pmsfcr_el1 {
   uint64 _;
   struct {
      uint64 fe : 1;
      uint64 ft : 1;
      uint64 fl : 1;
      uint64 res0_15_3 : 13;
      uint64 b : 1;
      uint64 ld : 1;
      uint64 st : 1;
      uint64 res0_63_19 : 45;
   };
};

static inline union pmsfcr_el1 r_pmsfcr_el1 ( void ) {
   union pmsfcr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c9_c9_4"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_pmsfcr_el1 ( union pmsfcr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c9_c9_4, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_PMSFCR_EL1 */
#endif
