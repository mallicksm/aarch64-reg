//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_ACTLR_EL1
#define H_ACTLR_EL1

union actlr_el1 {
   unsigned long _;
   struct {
      unsigned long impdef_63_0 : 64;
   };
};

static inline union actlr_el1 r_actlr_el1 ( void ) {
   union actlr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c1_c0_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_actlr_el1 ( union actlr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c1_c0_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ACTLR_EL1 */
#endif
