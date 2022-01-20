//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_RNDRRS
#define H_RNDRRS

union rndrrs {
   uint64 _;
   struct {
      uint64 rndrrs : 64;
   };
};

static inline union rndrrs r_rndrrs ( void ) {
   union rndrrs tmp;
   __asm volatile(
      "MRS %0, s3_3_c2_c4_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_rndrrs ( union rndrrs x ) {
   __asm volatile(
      "MSR s3_3_c2_c4_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_RNDRRS */
#endif
