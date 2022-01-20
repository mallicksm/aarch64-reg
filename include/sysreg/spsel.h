//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_SPSEL
#define H_SPSEL

union spsel {
   uint64 _;
   struct {
      uint64 sp : 1;
      uint64 res0_63_1 : 63;
   };
};

static inline union spsel r_spsel ( void ) {
   union spsel tmp;
   __asm volatile(
      "MRS %0, s3_0_c4_c2_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_spsel ( union spsel x ) {
   __asm volatile(
      "MSR s3_0_c4_c2_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_SPSEL */
#endif
