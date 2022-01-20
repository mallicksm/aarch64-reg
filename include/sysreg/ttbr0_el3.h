//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_TTBR0_EL3
#define H_TTBR0_EL3

union ttbr0_el3 {
   uint64 _;
   struct {
      uint64 cnp : 1;
      uint64 baddr : 47;
      uint64 res0_63_48 : 16;
   };
};

static inline union ttbr0_el3 r_ttbr0_el3 ( void ) {
   union ttbr0_el3 tmp;
   __asm volatile(
      "MRS %0, s3_6_c2_c0_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_ttbr0_el3 ( union ttbr0_el3 x ) {
   __asm volatile(
      "MSR s3_6_c2_c0_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_TTBR0_EL3 */
#endif
