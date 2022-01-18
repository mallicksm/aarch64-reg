//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_PMUSERENR_EL0
#define H_PMUSERENR_EL0

union pmuserenr_el0 {
   unsigned long _;
   struct {
      unsigned long en : 1;
      unsigned long sw : 1;
      unsigned long cr : 1;
      unsigned long er : 1;
      unsigned long res0_63_4 : 60;
   };
};

static inline union pmuserenr_el0 r_pmuserenr_el0 ( void ) {
   union pmuserenr_el0 tmp;
   __asm volatile(
      "MRS %0, s3_3_c9_c14_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_pmuserenr_el0 ( union pmuserenr_el0 x ) {
   __asm volatile(
      "MSR s3_3_c9_c14_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_PMUSERENR_EL0 */
#endif
