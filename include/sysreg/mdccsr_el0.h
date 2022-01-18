//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_MDCCSR_EL0
#define H_MDCCSR_EL0

union mdccsr_el0 {
   unsigned long _;
   struct {
      unsigned long res0_1_0 : 2;
      unsigned long res0_5_2 : 4;
      unsigned long res0_11_6 : 6;
      unsigned long res0_12 : 1;
      unsigned long res0_14_13 : 2;
      unsigned long res0_18_15 : 4;
      unsigned long res0_28_19 : 10;
      unsigned long txfull : 1;
      unsigned long rxfull : 1;
      unsigned long res0_63_31 : 33;
   };
};

static inline union mdccsr_el0 r_mdccsr_el0 ( void ) {
   union mdccsr_el0 tmp;
   __asm volatile(
      "MRS %0, s2_3_c0_c1_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_mdccsr_el0 ( union mdccsr_el0 x ) {
   __asm volatile(
      "MSR s2_3_c0_c1_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_MDCCSR_EL0 */
#endif
