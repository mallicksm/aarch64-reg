//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_TFSR_EL3
#define H_TFSR_EL3

union tfsr_el3 {
   unsigned long _;
   struct {
      unsigned long tf0 : 1;
      unsigned long res0_63_1 : 63;
   };
};

static inline union tfsr_el3 r_tfsr_el3 ( void ) {
   union tfsr_el3 tmp;
   __asm volatile(
      "MRS %0, s3_6_c5_c6_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_tfsr_el3 ( union tfsr_el3 x ) {
   __asm volatile(
      "MSR s3_6_c5_c6_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_TFSR_EL3 */
#endif
