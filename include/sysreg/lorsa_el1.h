//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_LORSA_EL1
#define H_LORSA_EL1

union lorsa_el1 {
   unsigned long _;
   struct {
      unsigned long valid : 1;
      unsigned long res0_15_1 : 15;
      unsigned long sa_47_16_ : 32;
      unsigned long sa_51_48_ : 4;
      unsigned long res0_63_52 : 12;
   };
};

static inline union lorsa_el1 r_lorsa_el1 ( void ) {
   union lorsa_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c10_c4_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_lorsa_el1 ( union lorsa_el1 x ) {
   __asm volatile(
      "MSR s3_0_c10_c4_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_LORSA_EL1 */
#endif
