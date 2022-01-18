//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_TCR_EL1
#define H_TCR_EL1

union tcr_el1 {
   unsigned long _;
   struct {
      unsigned long t0sz : 6;
      unsigned long res0_6 : 1;
      unsigned long epd0 : 1;
      unsigned long irgn0 : 2;
      unsigned long orgn0 : 2;
      unsigned long sh0 : 2;
      unsigned long tg0 : 2;
      unsigned long t1sz : 6;
      unsigned long a1 : 1;
      unsigned long epd1 : 1;
      unsigned long irgn1 : 2;
      unsigned long orgn1 : 2;
      unsigned long sh1 : 2;
      unsigned long tg1 : 2;
      unsigned long ips : 3;
      unsigned long res0_35 : 1;
      unsigned long as : 1;
      unsigned long tbi0 : 1;
      unsigned long tbi1 : 1;
      unsigned long ha : 1;
      unsigned long hd : 1;
      unsigned long hpd0 : 1;
      unsigned long hpd1 : 1;
      unsigned long hwu059 : 1;
      unsigned long hwu060 : 1;
      unsigned long hwu061 : 1;
      unsigned long hwu062 : 1;
      unsigned long hwu159 : 1;
      unsigned long hwu160 : 1;
      unsigned long hwu161 : 1;
      unsigned long hwu162 : 1;
      unsigned long tbid0 : 1;
      unsigned long tbid1 : 1;
      unsigned long nfd0 : 1;
      unsigned long nfd1 : 1;
      unsigned long e0pd0 : 1;
      unsigned long e0pd1 : 1;
      unsigned long tcma0 : 1;
      unsigned long tcma1 : 1;
      unsigned long res0_63_59 : 5;
   };
};

static inline union tcr_el1 r_tcr_el1 ( void ) {
   union tcr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c2_c0_2"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_tcr_el1 ( union tcr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c2_c0_2, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_TCR_EL1 */
#endif
