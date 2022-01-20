//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_PMCR_EL0
#define H_PMCR_EL0

union pmcr_el0 {
   uint64 _;
   struct {
      uint64 e : 1;
      uint64 p : 1;
      uint64 c : 1;
      uint64 d : 1;
      uint64 x : 1;
      uint64 dp : 1;
      uint64 lc : 1;
      uint64 lp : 1;
      uint64 res0_10_8 : 3;
      uint64 n : 5;
      uint64 idcode : 8;
      uint64 imp : 8;
      uint64 res0_63_32 : 32;
   };
};

static inline union pmcr_el0 r_pmcr_el0 ( void ) {
   union pmcr_el0 tmp;
   __asm volatile(
      "MRS %0, s3_3_c9_c12_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_pmcr_el0 ( union pmcr_el0 x ) {
   __asm volatile(
      "MSR s3_3_c9_c12_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_PMCR_EL0 */
#endif
