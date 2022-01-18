//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_TPIDRRO_EL0
#define H_TPIDRRO_EL0

union tpidrro_el0 {
   unsigned long _;
   struct {
      unsigned long Thread_ID : 64;
   };
};

static inline union tpidrro_el0 r_tpidrro_el0 ( void ) {
   union tpidrro_el0 tmp;
   __asm volatile(
      "MRS %0, s3_3_c13_c0_3"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_tpidrro_el0 ( union tpidrro_el0 x ) {
   __asm volatile(
      "MSR s3_3_c13_c0_3, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_TPIDRRO_EL0 */
#endif
