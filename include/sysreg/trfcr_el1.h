//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_TRFCR_EL1
#define H_TRFCR_EL1

union trfcr_el1 {
   uint64 _;
   struct {
      uint64 e0tre : 1;
      uint64 e1tre : 1;
      uint64 res0_4_2 : 3;
      uint64 ts : 2;
      uint64 res0_63_7 : 57;
   };
};

static inline union trfcr_el1 r_trfcr_el1 ( void ) {
   union trfcr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c1_c2_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_trfcr_el1 ( union trfcr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c1_c2_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_TRFCR_EL1 */
#endif
