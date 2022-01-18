//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_RNDR
#define H_RNDR

union rndr {
   unsigned long _;
   struct {
      unsigned long rndr : 64;
   };
};

static inline union rndr r_rndr ( void ) {
   union rndr tmp;
   __asm volatile(
      "MRS %0, s3_3_c2_c4_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_rndr ( union rndr x ) {
   __asm volatile(
      "MSR s3_3_c2_c4_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_RNDR */
#endif
