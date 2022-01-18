//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_FAR_EL1
#define H_FAR_EL1

union far_el1 {
   unsigned long _;
   struct {
      unsigned long Faulting_Virtual_Address_for_synchronous_exceptions_taken_to_EL1 : 64;
   };
};

static inline union far_el1 r_far_el1 ( void ) {
   union far_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c6_c0_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_far_el1 ( union far_el1 x ) {
   __asm volatile(
      "MSR s3_0_c6_c0_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_FAR_EL1 */
#endif
