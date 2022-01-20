//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_CPTR_EL3
#define H_CPTR_EL3

union cptr_el3 {
   uint64 _;
   struct {
      uint64 res0_7_0 : 8;
      uint64 ez : 1;
      uint64 res0_9 : 1;
      uint64 tfp : 1;
      uint64 res0_19_11 : 9;
      uint64 tta : 1;
      uint64 res0_29_21 : 9;
      uint64 tam : 1;
      uint64 tcpac : 1;
      uint64 res0_63_32 : 32;
   };
};

static inline union cptr_el3 r_cptr_el3 ( void ) {
   union cptr_el3 tmp;
   __asm volatile(
      "MRS %0, s3_6_c1_c1_2"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_cptr_el3 ( union cptr_el3 x ) {
   __asm volatile(
      "MSR s3_6_c1_c1_2, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_CPTR_EL3 */
#endif
