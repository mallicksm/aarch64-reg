//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_PMBLIMITR_EL1
#define H_PMBLIMITR_EL1

union pmblimitr_el1 {
   unsigned long _;
   struct {
      unsigned long e : 1;
      unsigned long fm : 2;
      unsigned long res0_11_3 : 9;
      unsigned long limit : 52;
   };
};

static inline union pmblimitr_el1 r_pmblimitr_el1 ( void ) {
   union pmblimitr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c9_c10_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_pmblimitr_el1 ( union pmblimitr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c9_c10_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_PMBLIMITR_EL1 */
#endif
