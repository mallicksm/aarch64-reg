//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_TTBR1_EL1
#define H_TTBR1_EL1

union ttbr1_el1 {
   uint64 _;
   struct {
      uint64 cnp : 1;
      uint64 baddr : 47;
      uint64 asid : 16;
   };
};

static inline union ttbr1_el1 r_ttbr1_el1 ( void ) {
   union ttbr1_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c2_c0_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_ttbr1_el1 ( union ttbr1_el1 x ) {
   __asm volatile(
      "MSR s3_0_c2_c0_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_TTBR1_EL1 */
#endif
