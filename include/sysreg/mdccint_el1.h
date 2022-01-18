//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_MDCCINT_EL1
#define H_MDCCINT_EL1

union mdccint_el1 {
   unsigned long _;
   struct {
      unsigned long res0_28_0 : 29;
      unsigned long tx : 1;
      unsigned long rx : 1;
      unsigned long res0_63_31 : 33;
   };
};

static inline union mdccint_el1 r_mdccint_el1 ( void ) {
   union mdccint_el1 tmp;
   __asm volatile(
      "MRS %0, s2_0_c0_c2_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_mdccint_el1 ( union mdccint_el1 x ) {
   __asm volatile(
      "MSR s2_0_c0_c2_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_MDCCINT_EL1 */
#endif
