//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_REVIDR_EL1
#define H_REVIDR_EL1

union revidr_el1 {
   unsigned long _;
   struct {
      unsigned long impdef_63_0 : 64;
   };
};

static inline union revidr_el1 r_revidr_el1 ( void ) {
   union revidr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c0_c0_6"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_revidr_el1 ( union revidr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c0_c0_6, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_REVIDR_EL1 */
#endif
