//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_ZCR_EL2
#define H_ZCR_EL2

union zcr_el2 {
   uint64 _;
   struct {
      uint64 len : 4;
      uint64 res0_8_4 : 5;
      uint64 res0_63_9 : 55;
   };
};

static inline union zcr_el2 r_zcr_el2 ( void ) {
   union zcr_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c1_c2_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_zcr_el2 ( union zcr_el2 x ) {
   __asm volatile(
      "MSR s3_4_c1_c2_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ZCR_EL2 */
#endif
