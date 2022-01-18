//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_SDER32_EL2
#define H_SDER32_EL2

union sder32_el2 {
   unsigned long _;
   struct {
      unsigned long suiden : 1;
      unsigned long suniden : 1;
      unsigned long res0_63_2 : 62;
   };
};

static inline union sder32_el2 r_sder32_el2 ( void ) {
   union sder32_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c1_c3_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_sder32_el2 ( union sder32_el2 x ) {
   __asm volatile(
      "MSR s3_4_c1_c3_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_SDER32_EL2 */
#endif
