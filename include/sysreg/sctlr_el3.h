//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_SCTLR_EL3
#define H_SCTLR_EL3

union sctlr_el3 {
   unsigned long _;
   struct {
      unsigned long m : 1;
      unsigned long a : 1;
      unsigned long c : 1;
      unsigned long sa : 1;
      unsigned long res1_5_4 : 2;
      unsigned long naa : 1;
      unsigned long res0_10_7 : 4;
      unsigned long eos : 1;
      unsigned long i : 1;
      unsigned long endb : 1;
      unsigned long res0_15_14 : 2;
      unsigned long res1_16 : 1;
      unsigned long res0_17 : 1;
      unsigned long res1_18 : 1;
      unsigned long wxn : 1;
      unsigned long res0_20 : 1;
      unsigned long iesb : 1;
      unsigned long eis : 1;
      unsigned long res1_23 : 1;
      unsigned long res0_24 : 1;
      unsigned long ee : 1;
      unsigned long res0_26 : 1;
      unsigned long enda : 1;
      unsigned long res1_29_28 : 2;
      unsigned long enib : 1;
      unsigned long enia : 1;
      unsigned long res0_35_32 : 4;
      unsigned long bt : 1;
      unsigned long itfsb : 1;
      unsigned long res0_39_38 : 2;
      unsigned long tcf : 2;
      unsigned long res0_42 : 1;
      unsigned long ata : 1;
      unsigned long dssbs : 1;
      unsigned long res0_63_45 : 19;
   };
};

static inline union sctlr_el3 r_sctlr_el3 ( void ) {
   union sctlr_el3 tmp;
   __asm volatile(
      "MRS %0, s3_6_c1_c0_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_sctlr_el3 ( union sctlr_el3 x ) {
   __asm volatile(
      "MSR s3_6_c1_c0_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_SCTLR_EL3 */
#endif
