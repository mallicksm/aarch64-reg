//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_FAR_EL2
#define H_FAR_EL2

union far_el2 {
   unsigned long _;
   struct {
      unsigned long Faulting_Virtual_Address_for_synchronous_exceptions_taken_to_EL2 : 64;
   };
};

static inline union far_el2 r_far_el2 ( void ) {
   union far_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c6_c0_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_far_el2 ( union far_el2 x ) {
   __asm volatile(
      "MSR s3_4_c6_c0_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_FAR_EL2 */
#endif
