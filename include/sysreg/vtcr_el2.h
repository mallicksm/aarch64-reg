//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_VTCR_EL2
#define H_VTCR_EL2

union vtcr_el2 {
   unsigned long _;
   struct {
      unsigned long t0sz : 6;
      unsigned long sl0 : 2;
      unsigned long irgn0 : 2;
      unsigned long orgn0 : 2;
      unsigned long sh0 : 2;
      unsigned long tg0 : 2;
      unsigned long ps : 3;
      unsigned long vs : 1;
      unsigned long res0_20 : 1;
      unsigned long ha : 1;
      unsigned long hd : 1;
      unsigned long res0_24_23 : 2;
      unsigned long hwu59 : 1;
      unsigned long hwu60 : 1;
      unsigned long hwu61 : 1;
      unsigned long hwu62 : 1;
      unsigned long nsw : 1;
      unsigned long nsa : 1;
      unsigned long res1_31 : 1;
      unsigned long res0_63_32 : 32;
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
