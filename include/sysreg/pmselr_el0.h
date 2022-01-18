//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_PMSELR_EL0
#define H_PMSELR_EL0

union pmselr_el0 {
   unsigned long _;
   struct {
      unsigned long sel : 5;
      unsigned long res0_63_5 : 59;
   };
};

static inline union pmselr_el0 r_pmselr_el0 ( void ) {
   union pmselr_el0 tmp;
   __asm volatile(
      "MRS %0, s3_3_c9_c12_5"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_pmselr_el0 ( union pmselr_el0 x ) {
   __asm volatile(
      "MSR s3_3_c9_c12_5, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_PMSELR_EL0 */
#endif
