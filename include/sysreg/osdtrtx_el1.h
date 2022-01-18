//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_OSDTRTX_EL1
#define H_OSDTRTX_EL1

union osdtrtx_el1 {
   unsigned long _;
   struct {
      unsigned long Return_DTRTX_without_side_effect : 32;
      unsigned long res0_63_32 : 32;
   };
};

static inline union osdtrtx_el1 r_osdtrtx_el1 ( void ) {
   union osdtrtx_el1 tmp;
   __asm volatile(
      "MRS %0, s2_0_c0_c3_2"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_osdtrtx_el1 ( union osdtrtx_el1 x ) {
   __asm volatile(
      "MSR s2_0_c0_c3_2, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_OSDTRTX_EL1 */
#endif
