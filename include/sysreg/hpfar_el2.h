//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_HPFAR_EL2
#define H_HPFAR_EL2

union hpfar_el2 {
   uint64 _;
   struct {
      uint64 res0_3_0 : 4;
      uint64 fipa_47_12_ : 36;
      uint64 fipa_51_48_ : 4;
      uint64 res0_62_44 : 19;
      uint64 ns : 1;
   };
};

static inline union hpfar_el2 r_hpfar_el2 ( void ) {
   union hpfar_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c6_c0_4"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_hpfar_el2 ( union hpfar_el2 x ) {
   __asm volatile(
      "MSR s3_4_c6_c0_4, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_HPFAR_EL2 */
#endif
