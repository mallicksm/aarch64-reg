//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_FPEXC32_EL2
#define H_FPEXC32_EL2

union fpexc32_el2 {
   unsigned long _;
   struct {
      unsigned long iof : 1;
      unsigned long dzf : 1;
      unsigned long off : 1;
      unsigned long uff : 1;
      unsigned long ixf : 1;
      unsigned long res0_6_5 : 2;
      unsigned long idf : 1;
      unsigned long vecitr : 3;
      unsigned long res0_25_11 : 15;
      unsigned long tfv : 1;
      unsigned long vv : 1;
      unsigned long fp2v : 1;
      unsigned long dex : 1;
      unsigned long en : 1;
      unsigned long ex : 1;
      unsigned long res0_63_32 : 32;
   };
};

static inline union fpexc32_el2 r_fpexc32_el2 ( void ) {
   union fpexc32_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c5_c3_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_fpexc32_el2 ( union fpexc32_el2 x ) {
   __asm volatile(
      "MSR s3_4_c5_c3_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_FPEXC32_EL2 */
#endif
