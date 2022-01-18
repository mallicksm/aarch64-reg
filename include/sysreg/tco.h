//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_TCO
#define H_TCO

union tco {
   unsigned long _;
   struct {
      unsigned long res0_24_0 : 25;
      unsigned long tco : 1;
      unsigned long res0_63_26 : 38;
   };
};

static inline union tco r_tco ( void ) {
   union tco tmp;
   __asm volatile(
      "MRS %0, s3_3_c4_c2_7"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_tco ( union tco x ) {
   __asm volatile(
      "MSR s3_3_c4_c2_7, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_TCO */
#endif
