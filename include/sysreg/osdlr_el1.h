//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_OSDLR_EL1
#define H_OSDLR_EL1

union osdlr_el1 {
   uint64 _;
   struct {
      uint64 dlk : 1;
      uint64 res0_63_1 : 63;
   };
};

static inline union osdlr_el1 r_osdlr_el1 ( void ) {
   union osdlr_el1 tmp;
   __asm volatile(
      "MRS %0, s2_0_c1_c3_4"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_osdlr_el1 ( union osdlr_el1 x ) {
   __asm volatile(
      "MSR s2_0_c1_c3_4, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_OSDLR_EL1 */
#endif
