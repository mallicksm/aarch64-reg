//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_DBGCLAIMCLR_EL1
#define H_DBGCLAIMCLR_EL1

union dbgclaimclr_el1 {
   unsigned long _;
   struct {
      unsigned long claim : 8;
      unsigned long res0_31_8 : 24;
      unsigned long res0_63_32 : 32;
   };
};

static inline union dbgclaimclr_el1 r_dbgclaimclr_el1 ( void ) {
   union dbgclaimclr_el1 tmp;
   __asm volatile(
      "MRS %0, s2_0_c7_c9_6"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_dbgclaimclr_el1 ( union dbgclaimclr_el1 x ) {
   __asm volatile(
      "MSR s2_0_c7_c9_6, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_DBGCLAIMCLR_EL1 */
#endif
