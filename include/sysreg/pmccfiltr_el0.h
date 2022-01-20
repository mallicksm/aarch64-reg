//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_PMCCFILTR_EL0
#define H_PMCCFILTR_EL0

union pmccfiltr_el0 {
   uint64 _;
   struct {
      uint64 res0_23_0 : 24;
      uint64 sh : 1;
      uint64 res0_25 : 1;
      uint64 m : 1;
      uint64 nsh : 1;
      uint64 nsu : 1;
      uint64 nsk : 1;
      uint64 u : 1;
      uint64 p : 1;
      uint64 res0_63_32 : 32;
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
