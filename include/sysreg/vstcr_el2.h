//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_VSTCR_EL2
#define H_VSTCR_EL2

union vstcr_el2 {
   uint64 _;
   struct {
      uint64 t0sz : 6;
      uint64 sl0 : 2;
      uint64 res0_13_8 : 6;
      uint64 tg0 : 2;
      uint64 res0_28_16 : 13;
      uint64 sw : 1;
      uint64 sa : 1;
      uint64 res1_31 : 1;
      uint64 res0_63_32 : 32;
   };
};

static inline union vstcr_el2 r_vstcr_el2 ( void ) {
   union vstcr_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c2_c6_2"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_vstcr_el2 ( union vstcr_el2 x ) {
   __asm volatile(
      "MSR s3_4_c2_c6_2, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_VSTCR_EL2 */
#endif
