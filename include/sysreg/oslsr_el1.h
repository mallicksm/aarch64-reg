//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_OSLSR_EL1
#define H_OSLSR_EL1

union oslsr_el1 {
   unsigned long _;
   struct {
      unsigned long oslm_0_ : 1;
      unsigned long oslk : 1;
      unsigned long ntt : 1;
      unsigned long oslm_1_ : 1;
      unsigned long res0_63_4 : 60;
   };
};

static inline union oslsr_el1 r_oslsr_el1 ( void ) {
   union oslsr_el1 tmp;
   __asm volatile(
      "MRS %0, s2_0_c1_c1_4"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_oslsr_el1 ( union oslsr_el1 x ) {
   __asm volatile(
      "MSR s2_0_c1_c1_4, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_OSLSR_EL1 */
#endif
