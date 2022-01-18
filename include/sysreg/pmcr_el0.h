//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_PMCR_EL0
#define H_PMCR_EL0

union pmcr_el0 {
   unsigned long _;
   struct {
      unsigned long e : 1;
      unsigned long p : 1;
      unsigned long c : 1;
      unsigned long d : 1;
      unsigned long x : 1;
      unsigned long dp : 1;
      unsigned long lc : 1;
      unsigned long lp : 1;
      unsigned long res0_10_8 : 3;
      unsigned long n : 5;
      unsigned long idcode : 8;
      unsigned long imp : 8;
      unsigned long res0_63_32 : 32;
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
