//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_CTR_EL0
#define H_CTR_EL0

union ctr_el0 {
   unsigned long _;
   struct {
      unsigned long iminline : 4;
      unsigned long res0_13_4 : 10;
      unsigned long l1ip : 2;
      unsigned long dminline : 4;
      unsigned long erg : 4;
      unsigned long cwg : 4;
      unsigned long idc : 1;
      unsigned long dic : 1;
      unsigned long res0_30 : 1;
      unsigned long res1_31 : 1;
      unsigned long tminline : 6;
      unsigned long res0_63_38 : 26;
   };
};

static inline union ctr_el0 r_ctr_el0 ( void ) {
   union ctr_el0 tmp;
   __asm volatile(
      "MRS %0, s3_3_c0_c0_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_ctr_el0 ( union ctr_el0 x ) {
   __asm volatile(
      "MSR s3_3_c0_c0_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_CTR_EL0 */
#endif
