//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_FPSR
#define H_FPSR

union fpsr {
   unsigned long _;
   struct {
      unsigned long ioc : 1;
      unsigned long dzc : 1;
      unsigned long ofc : 1;
      unsigned long ufc : 1;
      unsigned long ixc : 1;
      unsigned long res0_6_5 : 2;
      unsigned long idc : 1;
      unsigned long res0_26_8 : 19;
      unsigned long qc : 1;
      unsigned long v : 1;
      unsigned long c : 1;
      unsigned long z : 1;
      unsigned long n : 1;
      unsigned long res0_63_32 : 32;
   };
};

static inline union fpsr r_fpsr ( void ) {
   union fpsr tmp;
   __asm volatile(
      "MRS %0, s3_3_c4_c4_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_fpsr ( union fpsr x ) {
   __asm volatile(
      "MSR s3_3_c4_c4_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_FPSR */
#endif
