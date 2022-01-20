//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_CURRENTEL
#define H_CURRENTEL

union currentel {
   uint64 _;
   struct {
      uint64 res0_1_0 : 2;
      uint64 el : 2;
      uint64 res0_63_4 : 60;
   };
};

static inline union currentel r_currentel ( void ) {
   union currentel tmp;
   __asm volatile(
      "MRS %0, s3_0_c4_c2_2"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_currentel ( union currentel x ) {
   __asm volatile(
      "MSR s3_0_c4_c2_2, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_CURRENTEL */
#endif
