//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_DBGPRCR_EL1
#define H_DBGPRCR_EL1

union dbgprcr_el1 {
   unsigned long _;
   struct {
      unsigned long corenpdrq : 1;
      unsigned long res0_63_1 : 63;
   };
};

static inline union dbgprcr_el1 r_dbgprcr_el1 ( void ) {
   union dbgprcr_el1 tmp;
   __asm volatile(
      "MRS %0, s2_0_c1_c4_4"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_dbgprcr_el1 ( union dbgprcr_el1 x ) {
   __asm volatile(
      "MSR s2_0_c1_c4_4, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_DBGPRCR_EL1 */
#endif
