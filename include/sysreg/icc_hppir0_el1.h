//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_ICC_HPPIR0_EL1
#define H_ICC_HPPIR0_EL1

union icc_hppir0_el1 {
   uint64 _;
   struct {
      uint64 intid : 24;
      uint64 res0_63_24 : 40;
   };
};

static inline union icc_hppir0_el1 r_icc_hppir0_el1 ( void ) {
   union icc_hppir0_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c12_c8_2"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_icc_hppir0_el1 ( union icc_hppir0_el1 x ) {
   __asm volatile(
      "MSR s3_0_c12_c8_2, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ICC_HPPIR0_EL1 */
#endif
