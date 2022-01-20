//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_TFSRE0_EL1
#define H_TFSRE0_EL1

union tfsre0_el1 {
   uint64 _;
   struct {
      uint64 tf0 : 1;
      uint64 tf1 : 1;
      uint64 res0_63_2 : 62;
   };
};

static inline union tfsre0_el1 r_tfsre0_el1 ( void ) {
   union tfsre0_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c5_c6_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_tfsre0_el1 ( union tfsre0_el1 x ) {
   __asm volatile(
      "MSR s3_0_c5_c6_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_TFSRE0_EL1 */
#endif
