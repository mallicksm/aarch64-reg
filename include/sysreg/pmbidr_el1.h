//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_PMBIDR_EL1
#define H_PMBIDR_EL1

union pmbidr_el1 {
   unsigned long _;
   struct {
      unsigned long align : 4;
      unsigned long p : 1;
      unsigned long f : 1;
      unsigned long res0_63_6 : 58;
   };
};

static inline union pmbidr_el1 r_pmbidr_el1 ( void ) {
   union pmbidr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c9_c10_7"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_pmbidr_el1 ( union pmbidr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c9_c10_7, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_PMBIDR_EL1 */
#endif
