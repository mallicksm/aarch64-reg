//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_DAIF
#define H_DAIF

union daif {
   unsigned long _;
   struct {
      unsigned long res0_5_0 : 6;
      unsigned long f : 1;
      unsigned long i : 1;
      unsigned long a : 1;
      unsigned long d : 1;
      unsigned long res0_63_10 : 54;
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
