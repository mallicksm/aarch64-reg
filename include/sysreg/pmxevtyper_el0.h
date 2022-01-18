//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_PMXEVTYPER_EL0
#define H_PMXEVTYPER_EL0

union pmxevtyper_el0 {
   unsigned long _;
   struct {
      unsigned long Event_type_register_or_PMCCFILTR_EL0 : 32;
      unsigned long res0_63_32 : 32;
   };
};

static inline union pmxevtyper_el0 r_pmxevtyper_el0 ( void ) {
   union pmxevtyper_el0 tmp;
   __asm volatile(
      "MRS %0, s3_3_c9_c13_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_pmxevtyper_el0 ( union pmxevtyper_el0 x ) {
   __asm volatile(
      "MSR s3_3_c9_c13_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_PMXEVTYPER_EL0 */
#endif
