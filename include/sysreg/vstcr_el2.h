//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_VSTCR_EL2
#define H_VSTCR_EL2

union vstcr_el2 {
   unsigned long _;
   struct {
      unsigned long t0sz : 6;
      unsigned long sl0 : 2;
      unsigned long res0_13_8 : 6;
      unsigned long tg0 : 2;
      unsigned long res0_28_16 : 13;
      unsigned long sw : 1;
      unsigned long sa : 1;
      unsigned long res1_31 : 1;
      unsigned long res0_63_32 : 32;
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
