//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_FPEXC32_EL2
#define H_FPEXC32_EL2

union fpexc32_el2 {
   uint64 _;
   struct {
      uint64 iof : 1;
      uint64 dzf : 1;
      uint64 off : 1;
      uint64 uff : 1;
      uint64 ixf : 1;
      uint64 res0_6_5 : 2;
      uint64 idf : 1;
      uint64 vecitr : 3;
      uint64 res0_25_11 : 15;
      uint64 tfv : 1;
      uint64 vv : 1;
      uint64 fp2v : 1;
      uint64 dex : 1;
      uint64 en : 1;
      uint64 ex : 1;
      uint64 res0_63_32 : 32;
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
