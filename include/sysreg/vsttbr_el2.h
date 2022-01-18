//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_VSTTBR_EL2
#define H_VSTTBR_EL2

union vsttbr_el2 {
   unsigned long _;
   struct {
      unsigned long cnp : 1;
      unsigned long baddr : 47;
      unsigned long res0_63_48 : 16;
   };
};

static inline union vsttbr_el2 r_vsttbr_el2 ( void ) {
   union vsttbr_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c2_c6_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_vsttbr_el2 ( union vsttbr_el2 x ) {
   __asm volatile(
      "MSR s3_4_c2_c6_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_VSTTBR_EL2 */
#endif
