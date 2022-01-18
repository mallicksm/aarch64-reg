//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_CPTR_EL3
#define H_CPTR_EL3

union cptr_el3 {
   unsigned long _;
   struct {
      unsigned long res0_7_0 : 8;
      unsigned long ez : 1;
      unsigned long res0_9 : 1;
      unsigned long tfp : 1;
      unsigned long res0_19_11 : 9;
      unsigned long tta : 1;
      unsigned long res0_29_21 : 9;
      unsigned long tam : 1;
      unsigned long tcpac : 1;
      unsigned long res0_63_32 : 32;
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
