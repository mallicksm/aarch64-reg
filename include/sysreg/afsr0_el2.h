//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_AFSR0_EL2
#define H_AFSR0_EL2

union afsr0_el2 {
   uint64 _;
   struct {
      uint64 impdef_63_0 : 64;
   };
};

static inline union afsr0_el2 r_afsr0_el2 ( void ) {
   union afsr0_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c5_c1_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_afsr0_el2 ( union afsr0_el2 x ) {
   __asm volatile(
      "MSR s3_4_c5_c1_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_AFSR0_EL2 */
#endif
