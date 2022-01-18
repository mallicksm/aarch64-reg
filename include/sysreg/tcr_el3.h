//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_TCR_EL3
#define H_TCR_EL3

union tcr_el3 {
   unsigned long _;
   struct {
      unsigned long t0sz : 6;
      unsigned long res0_7_6 : 2;
      unsigned long irgn0 : 2;
      unsigned long orgn0 : 2;
      unsigned long sh0 : 2;
      unsigned long tg0 : 2;
      unsigned long ps : 3;
      unsigned long res0_19 : 1;
      unsigned long tbi : 1;
      unsigned long ha : 1;
      unsigned long hd : 1;
      unsigned long res1_23 : 1;
      unsigned long hpd : 1;
      unsigned long hwu59 : 1;
      unsigned long hwu60 : 1;
      unsigned long hwu61 : 1;
      unsigned long hwu62 : 1;
      unsigned long tbid : 1;
      unsigned long tcma : 1;
      unsigned long res1_31 : 1;
      unsigned long res0_63_32 : 32;
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
