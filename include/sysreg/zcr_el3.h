//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_ZCR_EL3
#define H_ZCR_EL3

union zcr_el3 {
   unsigned long _;
   struct {
      unsigned long len : 4;
      unsigned long res0_8_4 : 5;
      unsigned long res0_63_9 : 55;
   };
};

static inline union zcr_el3 r_zcr_el3 ( void ) {
   union zcr_el3 tmp;
   __asm volatile(
      "MRS %0, s3_6_c1_c2_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_zcr_el3 ( union zcr_el3 x ) {
   __asm volatile(
      "MSR s3_6_c1_c2_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ZCR_EL3 */
#endif
