//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_PMSIDR_EL1
#define H_PMSIDR_EL1

union pmsidr_el1 {
   unsigned long _;
   struct {
      unsigned long fe : 1;
      unsigned long ft : 1;
      unsigned long fl : 1;
      unsigned long archinst : 1;
      unsigned long lds : 1;
      unsigned long ernd : 1;
      unsigned long res0_7_6 : 2;
      unsigned long interval : 4;
      unsigned long maxsize : 4;
      unsigned long countsize : 4;
      unsigned long res0_63_20 : 44;
   };
};

static inline union pmsidr_el1 r_pmsidr_el1 ( void ) {
   union pmsidr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c9_c9_7"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_pmsidr_el1 ( union pmsidr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c9_c9_7, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_PMSIDR_EL1 */
#endif
