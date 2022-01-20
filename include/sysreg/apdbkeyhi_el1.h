//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_APDBKEYHI_EL1
#define H_APDBKEYHI_EL1

union apdbkeyhi_el1 {
   uint64 _;
   struct {
      uint64 bits_127_64_of_the_128_bit_pointer_authentication_key_value : 64;
   };
};

static inline union apdbkeyhi_el1 r_apdbkeyhi_el1 ( void ) {
   union apdbkeyhi_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c2_c2_3"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_apdbkeyhi_el1 ( union apdbkeyhi_el1 x ) {
   __asm volatile(
      "MSR s3_0_c2_c2_3, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_APDBKEYHI_EL1 */
#endif
