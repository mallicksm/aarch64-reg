//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_PMSCR_EL1
#define H_PMSCR_EL1

union pmscr_el1 {
   unsigned long _;
   struct {
      unsigned long e0spe : 1;
      unsigned long e1spe : 1;
      unsigned long res0_2 : 1;
      unsigned long cx : 1;
      unsigned long pa : 1;
      unsigned long ts : 1;
      unsigned long pct : 2;
      unsigned long res0_63_8 : 56;
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
