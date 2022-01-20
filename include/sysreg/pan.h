//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_PAN
#define H_PAN

union pan {
   uint64 _;
   struct {
      uint64 res0_21_0 : 22;
      uint64 pan : 1;
      uint64 res0_63_23 : 41;
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
