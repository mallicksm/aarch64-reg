//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_AFSR0_EL3
#define H_AFSR0_EL3

union afsr0_el3 {
   unsigned long _;
   struct {
      unsigned long impdef_63_0 : 64;
   };
};

static inline union afsr0_el3 r_afsr0_el3 ( void ) {
   union afsr0_el3 tmp;
   __asm volatile(
      "MRS %0, s3_6_c5_c1_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_afsr0_el3 ( union afsr0_el3 x ) {
   __asm volatile(
      "MSR s3_6_c5_c1_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_AFSR0_EL3 */
#endif
