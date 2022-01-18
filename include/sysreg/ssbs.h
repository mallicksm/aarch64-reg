//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_SSBS
#define H_SSBS

union ssbs {
   unsigned long _;
   struct {
      unsigned long res0_11_0 : 12;
      unsigned long ssbs : 1;
      unsigned long res0_63_13 : 51;
   };
};

static inline union ssbs r_ssbs ( void ) {
   union ssbs tmp;
   __asm volatile(
      "MRS %0, s3_3_c4_c2_6"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_ssbs ( union ssbs x ) {
   __asm volatile(
      "MSR s3_3_c4_c2_6, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_SSBS */
#endif
