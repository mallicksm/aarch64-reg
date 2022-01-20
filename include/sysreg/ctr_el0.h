//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_CTR_EL0
#define H_CTR_EL0

union ctr_el0 {
   uint64 _;
   struct {
      uint64 iminline : 4;
      uint64 res0_13_4 : 10;
      uint64 l1ip : 2;
      uint64 dminline : 4;
      uint64 erg : 4;
      uint64 cwg : 4;
      uint64 idc : 1;
      uint64 dic : 1;
      uint64 res0_30 : 1;
      uint64 res1_31 : 1;
      uint64 tminline : 6;
      uint64 res0_63_38 : 26;
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
