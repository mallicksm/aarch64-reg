//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_CNTKCTL_EL1
#define H_CNTKCTL_EL1

union cntkctl_el1 {
   uint64 _;
   struct {
      uint64 el0pcten : 1;
      uint64 el0vcten : 1;
      uint64 evnten : 1;
      uint64 evntdir : 1;
      uint64 evnti : 4;
      uint64 el0vten : 1;
      uint64 el0pten : 1;
      uint64 res0_16_10 : 7;
      uint64 evntis : 1;
      uint64 res0_63_18 : 46;
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
