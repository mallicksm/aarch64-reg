//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_MDCCSR_EL0
#define H_MDCCSR_EL0

union mdccsr_el0 {
   uint64 _;
   struct {
      uint64 res0_1_0 : 2;
      uint64 res0_5_2 : 4;
      uint64 res0_11_6 : 6;
      uint64 res0_12 : 1;
      uint64 res0_14_13 : 2;
      uint64 res0_18_15 : 4;
      uint64 res0_28_19 : 10;
      uint64 txfull : 1;
      uint64 rxfull : 1;
      uint64 res0_63_31 : 33;
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
