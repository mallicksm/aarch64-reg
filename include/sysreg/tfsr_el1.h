//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_TFSR_EL1
#define H_TFSR_EL1

union tfsr_el1 {
   uint64 _;
   struct {
      uint64 tf0 : 1;
      uint64 tf1 : 1;
      uint64 res0_63_2 : 62;
   };
};

static inline union tfsr_el1 r_tfsr_el1 ( void ) {
   union tfsr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c5_c6_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_tfsr_el1 ( union tfsr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c5_c6_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_TFSR_EL1 */
#endif
