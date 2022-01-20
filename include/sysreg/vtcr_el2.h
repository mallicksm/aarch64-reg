//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_VTCR_EL2
#define H_VTCR_EL2

union vtcr_el2 {
   uint64 _;
   struct {
      uint64 t0sz : 6;
      uint64 sl0 : 2;
      uint64 irgn0 : 2;
      uint64 orgn0 : 2;
      uint64 sh0 : 2;
      uint64 tg0 : 2;
      uint64 ps : 3;
      uint64 vs : 1;
      uint64 res0_20 : 1;
      uint64 ha : 1;
      uint64 hd : 1;
      uint64 res0_24_23 : 2;
      uint64 hwu59 : 1;
      uint64 hwu60 : 1;
      uint64 hwu61 : 1;
      uint64 hwu62 : 1;
      uint64 nsw : 1;
      uint64 nsa : 1;
      uint64 res1_31 : 1;
      uint64 res0_63_32 : 32;
   };
};

static inline union vtcr_el2 r_vtcr_el2 ( void ) {
   union vtcr_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c2_c1_2"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_vtcr_el2 ( union vtcr_el2 x ) {
   __asm volatile(
      "MSR s3_4_c2_c1_2, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_VTCR_EL2 */
#endif
