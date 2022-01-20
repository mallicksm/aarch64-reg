//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_MDCR_EL2
#define H_MDCR_EL2

union mdcr_el2 {
   uint64 _;
   struct {
      uint64 hpmn : 5;
      uint64 tpmcr : 1;
      uint64 tpm : 1;
      uint64 hpme : 1;
      uint64 tde : 1;
      uint64 tda : 1;
      uint64 tdosa : 1;
      uint64 tdra : 1;
      uint64 e2pb : 2;
      uint64 tpms : 1;
      uint64 res0_16_15 : 2;
      uint64 hpmd : 1;
      uint64 res0_18 : 1;
      uint64 ttrf : 1;
      uint64 res0_22_20 : 3;
      uint64 hccd : 1;
      uint64 res0_25_24 : 2;
      uint64 hlp : 1;
      uint64 tdcc : 1;
      uint64 mtpme : 1;
      uint64 res0_63_29 : 35;
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
