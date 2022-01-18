//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_PAN
#define H_PAN

union pan {
   unsigned long _;
   struct {
      unsigned long res0_21_0 : 22;
      unsigned long pan : 1;
      unsigned long res0_63_23 : 41;
   };
};

static inline union pan r_pan ( void ) {
   union pan tmp;
   __asm volatile(
      "MRS %0, s3_0_c4_c2_3"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_pan ( union pan x ) {
   __asm volatile(
      "MSR s3_0_c4_c2_3, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_PAN */
#endif
