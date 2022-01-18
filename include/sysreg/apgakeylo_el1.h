//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_APGAKEYLO_EL1
#define H_APGAKEYLO_EL1

union apgakeylo_el1 {
   unsigned long _;
   struct {
      unsigned long bits_63_0_of_the_128_bit_pointer_authentication_key_value : 64;
   };
};

static inline union apgakeylo_el1 r_apgakeylo_el1 ( void ) {
   union apgakeylo_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c2_c3_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_apgakeylo_el1 ( union apgakeylo_el1 x ) {
   __asm volatile(
      "MSR s3_0_c2_c3_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_APGAKEYLO_EL1 */
#endif
