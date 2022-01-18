//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_ICC_HPPIR0_EL1
#define H_ICC_HPPIR0_EL1

union icc_hppir0_el1 {
   unsigned long _;
   struct {
      unsigned long intid : 24;
      unsigned long res0_63_24 : 40;
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
