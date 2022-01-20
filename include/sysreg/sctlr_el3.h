//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_SCTLR_EL3
#define H_SCTLR_EL3

union sctlr_el3 {
   uint64 _;
   struct {
      uint64 m : 1;
      uint64 a : 1;
      uint64 c : 1;
      uint64 sa : 1;
      uint64 res1_5_4 : 2;
      uint64 naa : 1;
      uint64 res0_10_7 : 4;
      uint64 eos : 1;
      uint64 i : 1;
      uint64 endb : 1;
      uint64 res0_15_14 : 2;
      uint64 res1_16 : 1;
      uint64 res0_17 : 1;
      uint64 res1_18 : 1;
      uint64 wxn : 1;
      uint64 res0_20 : 1;
      uint64 iesb : 1;
      uint64 eis : 1;
      uint64 res1_23 : 1;
      uint64 res0_24 : 1;
      uint64 ee : 1;
      uint64 res0_26 : 1;
      uint64 enda : 1;
      uint64 res1_29_28 : 2;
      uint64 enib : 1;
      uint64 enia : 1;
      uint64 res0_35_32 : 4;
      uint64 bt : 1;
      uint64 itfsb : 1;
      uint64 res0_39_38 : 2;
      uint64 tcf : 2;
      uint64 res0_42 : 1;
      uint64 ata : 1;
      uint64 dssbs : 1;
      uint64 res0_63_45 : 19;
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
