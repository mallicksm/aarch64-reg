//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_FPSR
#define H_FPSR

union fpsr {
   uint64 _;
   struct {
      uint64 ioc : 1;
      uint64 dzc : 1;
      uint64 ofc : 1;
      uint64 ufc : 1;
      uint64 ixc : 1;
      uint64 res0_6_5 : 2;
      uint64 idc : 1;
      uint64 res0_26_8 : 19;
      uint64 qc : 1;
      uint64 v : 1;
      uint64 c : 1;
      uint64 z : 1;
      uint64 n : 1;
      uint64 res0_63_32 : 32;
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
