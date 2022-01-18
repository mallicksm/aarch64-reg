//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_APIBKEYHI_EL1
#define H_APIBKEYHI_EL1

union apibkeyhi_el1 {
   unsigned long _;
   struct {
      unsigned long bits_127_64_of_the_128_bit_pointer_authentication_key_value : 64;
   };
};

static inline union apibkeyhi_el1 r_apibkeyhi_el1 ( void ) {
   union apibkeyhi_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c2_c1_3"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_apibkeyhi_el1 ( union apibkeyhi_el1 x ) {
   __asm volatile(
      "MSR s3_0_c2_c1_3, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_APIBKEYHI_EL1 */
#endif