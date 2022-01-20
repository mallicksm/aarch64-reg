//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_PMSCR_EL2
#define H_PMSCR_EL2

union pmscr_el2 {
   uint64 _;
   struct {
      uint64 e0hspe : 1;
      uint64 e2spe : 1;
      uint64 res0_2 : 1;
      uint64 cx : 1;
      uint64 pa : 1;
      uint64 ts : 1;
      uint64 pct : 2;
      uint64 res0_63_8 : 56;
   };
};

static inline union pmscr_el2 r_pmscr_el2 ( void ) {
   union pmscr_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c9_c9_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_pmscr_el2 ( union pmscr_el2 x ) {
   __asm volatile(
      "MSR s3_4_c9_c9_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_PMSCR_EL2 */
#endif
