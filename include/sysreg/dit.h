//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_DIT
#define H_DIT

union dit {
   uint64 _;
   struct {
      uint64 res0_23_0 : 24;
      uint64 dit : 1;
      uint64 res0_63_25 : 39;
   };
};

static inline union dit r_dit ( void ) {
   union dit tmp;
   __asm volatile(
      "MRS %0, s3_3_c4_c2_5"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_dit ( union dit x ) {
   __asm volatile(
      "MSR s3_3_c4_c2_5, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_DIT */
#endif
