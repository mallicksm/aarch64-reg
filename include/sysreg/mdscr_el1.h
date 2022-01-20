//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_MDSCR_EL1
#define H_MDSCR_EL1

union mdscr_el1 {
   uint64 _;
   struct {
      uint64 ss : 1;
      uint64 res0_5_1 : 5;
      uint64 err : 1;
      uint64 res0_11_7 : 5;
      uint64 tdcc : 1;
      uint64 kde : 1;
      uint64 hde : 1;
      uint64 mde : 1;
      uint64 res0_18_16 : 3;
      uint64 sc2 : 1;
      uint64 res0_20 : 1;
      uint64 tda : 1;
      uint64 intdis : 2;
      uint64 res0_25_24 : 2;
      uint64 txu : 1;
      uint64 rxo : 1;
      uint64 res0_28 : 1;
      uint64 txfull : 1;
      uint64 rxfull : 1;
      uint64 tfo : 1;
      uint64 res0_63_32 : 32;
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
