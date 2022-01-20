//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_ISR_EL1
#define H_ISR_EL1

union isr_el1 {
   uint64 _;
   struct {
      uint64 res0_5_0 : 6;
      uint64 f : 1;
      uint64 i : 1;
      uint64 a : 1;
      uint64 res0_63_9 : 55;
   };
};

static inline union isr_el1 r_isr_el1 ( void ) {
   union isr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c12_c1_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_isr_el1 ( union isr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c12_c1_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ISR_EL1 */
#endif
