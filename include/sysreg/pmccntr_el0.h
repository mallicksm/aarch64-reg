//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_PMCCNTR_EL0
#define H_PMCCNTR_EL0

union pmccntr_el0 {
   unsigned long _;
   struct {
      unsigned long ccnt : 64;
   };
};

static inline union pmccntr_el0 r_pmccntr_el0 ( void ) {
   union pmccntr_el0 tmp;
   __asm volatile(
      "MRS %0, s3_3_c9_c13_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_pmccntr_el0 ( union pmccntr_el0 x ) {
   __asm volatile(
      "MSR s3_3_c9_c13_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_PMCCNTR_EL0 */
#endif
