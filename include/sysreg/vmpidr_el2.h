//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_VMPIDR_EL2
#define H_VMPIDR_EL2

union vmpidr_el2 {
   unsigned long _;
   struct {
      unsigned long aff0 : 8;
      unsigned long aff1 : 8;
      unsigned long aff2 : 8;
      unsigned long mt : 1;
      unsigned long res0_29_25 : 5;
      unsigned long u : 1;
      unsigned long res1_31 : 1;
      unsigned long aff3 : 8;
      unsigned long res0_63_40 : 24;
   };
};

static inline union vmpidr_el2 r_vmpidr_el2 ( void ) {
   union vmpidr_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c0_c0_5"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_vmpidr_el2 ( union vmpidr_el2 x ) {
   __asm volatile(
      "MSR s3_4_c0_c0_5, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_VMPIDR_EL2 */
#endif
