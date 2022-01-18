//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_HACR_EL2
#define H_HACR_EL2

union hacr_el2 {
   unsigned long _;
   struct {
      unsigned long impdef_63_0 : 64;
   };
};

static inline union hacr_el2 r_hacr_el2 ( void ) {
   union hacr_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c1_c1_7"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_hacr_el2 ( union hacr_el2 x ) {
   __asm volatile(
      "MSR s3_4_c1_c1_7, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_HACR_EL2 */
#endif
