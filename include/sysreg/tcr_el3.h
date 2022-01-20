//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_TCR_EL3
#define H_TCR_EL3

union tcr_el3 {
   uint64 _;
   struct {
      uint64 t0sz : 6;
      uint64 res0_7_6 : 2;
      uint64 irgn0 : 2;
      uint64 orgn0 : 2;
      uint64 sh0 : 2;
      uint64 tg0 : 2;
      uint64 ps : 3;
      uint64 res0_19 : 1;
      uint64 tbi : 1;
      uint64 ha : 1;
      uint64 hd : 1;
      uint64 res1_23 : 1;
      uint64 hpd : 1;
      uint64 hwu59 : 1;
      uint64 hwu60 : 1;
      uint64 hwu61 : 1;
      uint64 hwu62 : 1;
      uint64 tbid : 1;
      uint64 tcma : 1;
      uint64 res1_31 : 1;
      uint64 res0_63_32 : 32;
   };
};

static inline union tcr_el3 r_tcr_el3 ( void ) {
   union tcr_el3 tmp;
   __asm volatile(
      "MRS %0, s3_6_c2_c0_2"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_tcr_el3 ( union tcr_el3 x ) {
   __asm volatile(
      "MSR s3_6_c2_c0_2, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_TCR_EL3 */
#endif
