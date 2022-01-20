//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_TCR_EL1
#define H_TCR_EL1

union tcr_el1 {
   uint64 _;
   struct {
      uint64 t0sz : 6;
      uint64 res0_6 : 1;
      uint64 epd0 : 1;
      uint64 irgn0 : 2;
      uint64 orgn0 : 2;
      uint64 sh0 : 2;
      uint64 tg0 : 2;
      uint64 t1sz : 6;
      uint64 a1 : 1;
      uint64 epd1 : 1;
      uint64 irgn1 : 2;
      uint64 orgn1 : 2;
      uint64 sh1 : 2;
      uint64 tg1 : 2;
      uint64 ips : 3;
      uint64 res0_35 : 1;
      uint64 as : 1;
      uint64 tbi0 : 1;
      uint64 tbi1 : 1;
      uint64 ha : 1;
      uint64 hd : 1;
      uint64 hpd0 : 1;
      uint64 hpd1 : 1;
      uint64 hwu059 : 1;
      uint64 hwu060 : 1;
      uint64 hwu061 : 1;
      uint64 hwu062 : 1;
      uint64 hwu159 : 1;
      uint64 hwu160 : 1;
      uint64 hwu161 : 1;
      uint64 hwu162 : 1;
      uint64 tbid0 : 1;
      uint64 tbid1 : 1;
      uint64 nfd0 : 1;
      uint64 nfd1 : 1;
      uint64 e0pd0 : 1;
      uint64 e0pd1 : 1;
      uint64 tcma0 : 1;
      uint64 tcma1 : 1;
      uint64 res0_63_59 : 5;
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
