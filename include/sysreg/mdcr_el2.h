//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_MDCR_EL2
#define H_MDCR_EL2

union mdcr_el2 {
   unsigned long _;
   struct {
      unsigned long hpmn : 5;
      unsigned long tpmcr : 1;
      unsigned long tpm : 1;
      unsigned long hpme : 1;
      unsigned long tde : 1;
      unsigned long tda : 1;
      unsigned long tdosa : 1;
      unsigned long tdra : 1;
      unsigned long e2pb : 2;
      unsigned long tpms : 1;
      unsigned long res0_16_15 : 2;
      unsigned long hpmd : 1;
      unsigned long res0_18 : 1;
      unsigned long ttrf : 1;
      unsigned long res0_22_20 : 3;
      unsigned long hccd : 1;
      unsigned long res0_25_24 : 2;
      unsigned long hlp : 1;
      unsigned long tdcc : 1;
      unsigned long mtpme : 1;
      unsigned long res0_63_29 : 35;
   };
};

static inline union mdcr_el2 r_mdcr_el2 ( void ) {
   union mdcr_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c1_c1_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_mdcr_el2 ( union mdcr_el2 x ) {
   __asm volatile(
      "MSR s3_4_c1_c1_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_MDCR_EL2 */
#endif
