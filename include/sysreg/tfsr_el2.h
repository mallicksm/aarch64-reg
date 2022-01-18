//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_TFSR_EL2
#define H_TFSR_EL2

union tfsr_el2 {
   unsigned long _;
   struct {
      unsigned long tf0 : 1;
      unsigned long tf1 : 1;
      unsigned long res0_63_2 : 62;
   };
};

static inline union tfsr_el2 r_tfsr_el2 ( void ) {
   union tfsr_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c5_c6_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_tfsr_el2 ( union tfsr_el2 x ) {
   __asm volatile(
      "MSR s3_4_c5_c6_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_TFSR_EL2 */
#endif
