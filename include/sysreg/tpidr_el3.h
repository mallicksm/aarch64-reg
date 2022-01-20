//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_TPIDR_EL3
#define H_TPIDR_EL3

union tpidr_el3 {
   uint64 _;
   struct {
      uint64 Thread_ID : 64;
   };
};

static inline union tpidr_el3 r_tpidr_el3 ( void ) {
   union tpidr_el3 tmp;
   __asm volatile(
      "MRS %0, s3_6_c13_c0_2"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_tpidr_el3 ( union tpidr_el3 x ) {
   __asm volatile(
      "MSR s3_6_c13_c0_2, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_TPIDR_EL3 */
#endif
