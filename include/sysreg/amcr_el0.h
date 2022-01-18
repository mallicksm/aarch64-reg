//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_AMCR_EL0
#define H_AMCR_EL0

union amcr_el0 {
   unsigned long _;
   struct {
      unsigned long res0_9_0 : 10;
      unsigned long hdbg : 1;
      unsigned long res0_16_11 : 6;
      unsigned long cg1rz : 1;
      unsigned long res0_63_18 : 46;
   };
};

static inline union amcr_el0 r_amcr_el0 ( void ) {
   union amcr_el0 tmp;
   __asm volatile(
      "MRS %0, s3_3_c13_c2_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_amcr_el0 ( union amcr_el0 x ) {
   __asm volatile(
      "MSR s3_3_c13_c2_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_AMCR_EL0 */
#endif
