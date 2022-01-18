//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_MDRAR_EL1
#define H_MDRAR_EL1

union mdrar_el1 {
   unsigned long _;
   struct {
      unsigned long valid : 2;
      unsigned long res0_11_2 : 10;
      unsigned long romaddr_47_12_ : 36;
      unsigned long romaddr_51_48_ : 4;
      unsigned long res0_63_52 : 12;
   };
};

static inline union mdrar_el1 r_mdrar_el1 ( void ) {
   union mdrar_el1 tmp;
   __asm volatile(
      "MRS %0, s2_0_c1_c0_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_mdrar_el1 ( union mdrar_el1 x ) {
   __asm volatile(
      "MSR s2_0_c1_c0_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_MDRAR_EL1 */
#endif
