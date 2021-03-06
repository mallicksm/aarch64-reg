//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_ERRSELR_EL1
#define H_ERRSELR_EL1

union errselr_el1 {
   uint64 _;
   struct {
      uint64 sel : 16;
      uint64 res0_63_16 : 48;
   };
};

static inline union errselr_el1 r_errselr_el1 ( void ) {
   union errselr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c5_c3_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_errselr_el1 ( union errselr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c5_c3_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ERRSELR_EL1 */
#endif
