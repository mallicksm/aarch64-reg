//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_OSDTRTX_EL1
#define H_OSDTRTX_EL1

union osdtrtx_el1 {
   uint64 _;
   struct {
      uint64 Return_DTRTX_without_side_effect : 32;
      uint64 res0_63_32 : 32;
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
