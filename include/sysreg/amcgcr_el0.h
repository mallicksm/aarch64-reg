//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_AMCGCR_EL0
#define H_AMCGCR_EL0

union amcgcr_el0 {
   unsigned long _;
   struct {
      unsigned long cg0nc : 8;
      unsigned long cg1nc : 8;
      unsigned long res0_63_16 : 48;
   };
};

static inline union amcgcr_el0 r_amcgcr_el0 ( void ) {
   union amcgcr_el0 tmp;
   __asm volatile(
      "MRS %0, s3_3_c13_c2_2"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_amcgcr_el0 ( union amcgcr_el0 x ) {
   __asm volatile(
      "MSR s3_3_c13_c2_2, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_AMCGCR_EL0 */
#endif
