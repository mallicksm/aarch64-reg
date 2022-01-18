//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_DBGDTRRX_EL0
#define H_DBGDTRRX_EL0

union dbgdtrrx_el0 {
   unsigned long _;
   struct {
      unsigned long Update_DTRRX : 32;
      unsigned long res0_63_32 : 32;
   };
};

static inline union dbgdtrrx_el0 r_dbgdtrrx_el0 ( void ) {
   union dbgdtrrx_el0 tmp;
   __asm volatile(
      "MRS %0, s2_3_c0_c5_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_dbgdtrrx_el0 ( union dbgdtrrx_el0 x ) {
   __asm volatile(
      "MSR s2_3_c0_c5_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_DBGDTRRX_EL0 */
#endif
