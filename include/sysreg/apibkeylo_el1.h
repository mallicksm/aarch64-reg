//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_APIBKEYLO_EL1
#define H_APIBKEYLO_EL1

union apibkeylo_el1 {
   uint64 _;
   struct {
      uint64 bits_63_0_of_the_128_bit_pointer_authentication_key_value : 64;
   };
};

static inline union apibkeylo_el1 r_apibkeylo_el1 ( void ) {
   union apibkeylo_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c2_c1_2"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_apibkeylo_el1 ( union apibkeylo_el1 x ) {
   __asm volatile(
      "MSR s3_0_c2_c1_2, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_APIBKEYLO_EL1 */
#endif
