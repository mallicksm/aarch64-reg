//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_LORN_EL1
#define H_LORN_EL1

union lorn_el1 {
   uint64 _;
   struct {
      uint64 num : 8;
      uint64 res0_63_8 : 56;
   };
};

static inline union lorn_el1 r_lorn_el1 ( void ) {
   union lorn_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c10_c4_2"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_lorn_el1 ( union lorn_el1 x ) {
   __asm volatile(
      "MSR s3_0_c10_c4_2, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_LORN_EL1 */
#endif
