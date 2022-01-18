//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_NZCV
#define H_NZCV

union nzcv {
   unsigned long _;
   struct {
      unsigned long res0_27_0 : 28;
      unsigned long v : 1;
      unsigned long c : 1;
      unsigned long z : 1;
      unsigned long n : 1;
      unsigned long res0_63_32 : 32;
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
