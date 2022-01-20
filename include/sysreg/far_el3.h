//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_FAR_EL3
#define H_FAR_EL3

union far_el3 {
   uint64 _;
   struct {
      uint64 Faulting_Virtual_Address_for_synchronous_exceptions_taken_to_EL3 : 64;
   };
};

static inline union far_el3 r_far_el3 ( void ) {
   union far_el3 tmp;
   __asm volatile(
      "MRS %0, s3_6_c6_c0_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_far_el3 ( union far_el3 x ) {
   __asm volatile(
      "MSR s3_6_c6_c0_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_FAR_EL3 */
#endif
