//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_DAIF
#define H_DAIF

union daif {
   uint64 _;
   struct {
      uint64 res0_5_0 : 6;
      uint64 f : 1;
      uint64 i : 1;
      uint64 a : 1;
      uint64 d : 1;
      uint64 res0_63_10 : 54;
   };
};

static inline union daif r_daif ( void ) {
   union daif tmp;
   __asm volatile(
      "MRS %0, s3_3_c4_c2_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_daif ( union daif x ) {
   __asm volatile(
      "MSR s3_3_c4_c2_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_DAIF */
#endif
