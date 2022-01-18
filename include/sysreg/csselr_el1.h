//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_CSSELR_EL1
#define H_CSSELR_EL1

union csselr_el1 {
   unsigned long _;
   struct {
      unsigned long ind : 1;
      unsigned long level : 3;
      unsigned long tnd : 1;
      unsigned long res0_63_5 : 59;
   };
};

static inline union csselr_el1 r_csselr_el1 ( void ) {
   union csselr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_2_c0_c0_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_csselr_el1 ( union csselr_el1 x ) {
   __asm volatile(
      "MSR s3_2_c0_c0_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_CSSELR_EL1 */
#endif
