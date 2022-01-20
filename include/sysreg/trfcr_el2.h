//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_TRFCR_EL2
#define H_TRFCR_EL2

union trfcr_el2 {
   uint64 _;
   struct {
      uint64 e0htre : 1;
      uint64 e2tre : 1;
      uint64 res0_2 : 1;
      uint64 cx : 1;
      uint64 res0_4 : 1;
      uint64 ts : 2;
      uint64 res0_63_7 : 57;
   };
};

static inline union trfcr_el2 r_trfcr_el2 ( void ) {
   union trfcr_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c1_c2_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_trfcr_el2 ( union trfcr_el2 x ) {
   __asm volatile(
      "MSR s3_4_c1_c2_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_TRFCR_EL2 */
#endif
