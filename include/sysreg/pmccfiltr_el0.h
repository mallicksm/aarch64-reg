//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_PMCCFILTR_EL0
#define H_PMCCFILTR_EL0

union pmccfiltr_el0 {
   unsigned long _;
   struct {
      unsigned long res0_23_0 : 24;
      unsigned long sh : 1;
      unsigned long res0_25 : 1;
      unsigned long m : 1;
      unsigned long nsh : 1;
      unsigned long nsu : 1;
      unsigned long nsk : 1;
      unsigned long u : 1;
      unsigned long p : 1;
      unsigned long res0_63_32 : 32;
   };
};

static inline union pmccfiltr_el0 r_pmccfiltr_el0 ( void ) {
   union pmccfiltr_el0 tmp;
   __asm volatile(
      "MRS %0, s3_3_c14_c15_7"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_pmccfiltr_el0 ( union pmccfiltr_el0 x ) {
   __asm volatile(
      "MSR s3_3_c14_c15_7, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_PMCCFILTR_EL0 */
#endif
