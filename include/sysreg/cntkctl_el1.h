//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_CNTKCTL_EL1
#define H_CNTKCTL_EL1

union cntkctl_el1 {
   unsigned long _;
   struct {
      unsigned long el0pcten : 1;
      unsigned long el0vcten : 1;
      unsigned long evnten : 1;
      unsigned long evntdir : 1;
      unsigned long evnti : 4;
      unsigned long el0vten : 1;
      unsigned long el0pten : 1;
      unsigned long res0_16_10 : 7;
      unsigned long evntis : 1;
      unsigned long res0_63_18 : 46;
   };
};

static inline union cntkctl_el1 r_cntkctl_el1 ( void ) {
   union cntkctl_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c14_c1_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_cntkctl_el1 ( union cntkctl_el1 x ) {
   __asm volatile(
      "MSR s3_0_c14_c1_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_CNTKCTL_EL1 */
#endif
