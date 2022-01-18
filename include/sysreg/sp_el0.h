//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_SP_EL0
#define H_SP_EL0

union sp_el0 {
   unsigned long _;
   struct {
      unsigned long Stack_pointer : 64;
   };
};

static inline union sp_el0 r_sp_el0 ( void ) {
   union sp_el0 tmp;
   __asm volatile(
      "MRS %0, s3_0_c4_c1_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_sp_el0 ( union sp_el0 x ) {
   __asm volatile(
      "MSR s3_0_c4_c1_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_SP_EL0 */
#endif
