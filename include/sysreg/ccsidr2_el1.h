//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_CCSIDR2_EL1
#define H_CCSIDR2_EL1

union ccsidr2_el1 {
   unsigned long _;
   struct {
      unsigned long numsets : 24;
      unsigned long res0_63_24 : 40;
   };
};

static inline union ccsidr2_el1 r_ccsidr2_el1 ( void ) {
   union ccsidr2_el1 tmp;
   __asm volatile(
      "MRS %0, s3_1_c0_c0_2"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_ccsidr2_el1 ( union ccsidr2_el1 x ) {
   __asm volatile(
      "MSR s3_1_c0_c0_2, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_CCSIDR2_EL1 */
#endif
