//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_TPIDR_EL0
#define H_TPIDR_EL0

union tpidr_el0 {
   unsigned long _;
   struct {
      unsigned long Thread_ID : 64;
   };
};

static inline union tpidr_el0 r_tpidr_el0 ( void ) {
   union tpidr_el0 tmp;
   __asm volatile(
      "MRS %0, s3_3_c13_c0_2"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_tpidr_el0 ( union tpidr_el0 x ) {
   __asm volatile(
      "MSR s3_3_c13_c0_2, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_TPIDR_EL0 */
#endif
