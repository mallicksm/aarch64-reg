//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_ICC_SRE_EL1
#define H_ICC_SRE_EL1

union icc_sre_el1 {
   unsigned long _;
   struct {
      unsigned long sre : 1;
      unsigned long dfb : 1;
      unsigned long dib : 1;
      unsigned long res0_63_3 : 61;
   };
};

static inline union icc_sre_el1 r_icc_sre_el1 ( void ) {
   union icc_sre_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c12_c12_5"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_icc_sre_el1 ( union icc_sre_el1 x ) {
   __asm volatile(
      "MSR s3_0_c12_c12_5, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ICC_SRE_EL1 */
#endif
