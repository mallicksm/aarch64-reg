//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_RGSR_EL1
#define H_RGSR_EL1

union rgsr_el1 {
   uint64 _;
   struct {
      uint64 tag : 4;
      uint64 res0_7_4 : 4;
      uint64 seed : 16;
      uint64 res0_63_24 : 40;
   };
};

static inline union rgsr_el1 r_rgsr_el1 ( void ) {
   union rgsr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c1_c0_5"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_rgsr_el1 ( union rgsr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c1_c0_5, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_RGSR_EL1 */
#endif
