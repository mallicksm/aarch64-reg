//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_TPIDR_EL2
#define H_TPIDR_EL2

union tpidr_el2 {
   uint64 _;
   struct {
      uint64 Thread_ID : 64;
   };
};

static inline union tpidr_el2 r_tpidr_el2 ( void ) {
   union tpidr_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c13_c0_2"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_tpidr_el2 ( union tpidr_el2 x ) {
   __asm volatile(
      "MSR s3_4_c13_c0_2, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_TPIDR_EL2 */
#endif
