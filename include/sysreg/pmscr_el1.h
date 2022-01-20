//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_PMSCR_EL1
#define H_PMSCR_EL1

union pmscr_el1 {
   uint64 _;
   struct {
      uint64 e0spe : 1;
      uint64 e1spe : 1;
      uint64 res0_2 : 1;
      uint64 cx : 1;
      uint64 pa : 1;
      uint64 ts : 1;
      uint64 pct : 2;
      uint64 res0_63_8 : 56;
   };
};

static inline union pmscr_el1 r_pmscr_el1 ( void ) {
   union pmscr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c9_c9_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_pmscr_el1 ( union pmscr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c9_c9_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_PMSCR_EL1 */
#endif
