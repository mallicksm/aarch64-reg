//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_TFSRE0_EL1
#define H_TFSRE0_EL1

union tfsre0_el1 {
   unsigned long _;
   struct {
      unsigned long tf0 : 1;
      unsigned long tf1 : 1;
      unsigned long res0_63_2 : 62;
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
