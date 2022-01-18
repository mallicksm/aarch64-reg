//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_PMMIR_EL1
#define H_PMMIR_EL1

union pmmir_el1 {
   unsigned long _;
   struct {
      unsigned long slots : 8;
      unsigned long res0_63_8 : 56;
   };
};

static inline union pmmir_el1 r_pmmir_el1 ( void ) {
   union pmmir_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c9_c14_6"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_pmmir_el1 ( union pmmir_el1 x ) {
   __asm volatile(
      "MSR s3_0_c9_c14_6, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_PMMIR_EL1 */
#endif
