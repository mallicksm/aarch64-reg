//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_MDSCR_EL1
#define H_MDSCR_EL1

union mdscr_el1 {
   unsigned long _;
   struct {
      unsigned long ss : 1;
      unsigned long res0_5_1 : 5;
      unsigned long err : 1;
      unsigned long res0_11_7 : 5;
      unsigned long tdcc : 1;
      unsigned long kde : 1;
      unsigned long hde : 1;
      unsigned long mde : 1;
      unsigned long res0_18_16 : 3;
      unsigned long sc2 : 1;
      unsigned long res0_20 : 1;
      unsigned long tda : 1;
      unsigned long intdis : 2;
      unsigned long res0_25_24 : 2;
      unsigned long txu : 1;
      unsigned long rxo : 1;
      unsigned long res0_28 : 1;
      unsigned long txfull : 1;
      unsigned long rxfull : 1;
      unsigned long tfo : 1;
      unsigned long res0_63_32 : 32;
   };
};

static inline union mdscr_el1 r_mdscr_el1 ( void ) {
   union mdscr_el1 tmp;
   __asm volatile(
      "MRS %0, s2_0_c0_c2_2"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_mdscr_el1 ( union mdscr_el1 x ) {
   __asm volatile(
      "MSR s2_0_c0_c2_2, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_MDSCR_EL1 */
#endif
