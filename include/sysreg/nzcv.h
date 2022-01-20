//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_NZCV
#define H_NZCV

union nzcv {
   uint64 _;
   struct {
      uint64 res0_27_0 : 28;
      uint64 v : 1;
      uint64 c : 1;
      uint64 z : 1;
      uint64 n : 1;
      uint64 res0_63_32 : 32;
   };
};

static inline union nzcv r_nzcv ( void ) {
   union nzcv tmp;
   __asm volatile(
      "MRS %0, s3_3_c4_c2_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_nzcv ( union nzcv x ) {
   __asm volatile(
      "MSR s3_3_c4_c2_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_NZCV */
#endif
