//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_SCTLR_EL1
#define H_SCTLR_EL1

union sctlr_el1 {
   uint64 _;
   struct {
      uint64 m : 1;
      uint64 a : 1;
      uint64 c : 1;
      uint64 sa : 1;
      uint64 sa0 : 1;
      uint64 cp15ben : 1;
      uint64 naa : 1;
      uint64 itd : 1;
      uint64 sed : 1;
      uint64 uma : 1;
      uint64 enrctx : 1;
      uint64 eos : 1;
      uint64 i : 1;
      uint64 endb : 1;
      uint64 dze : 1;
      uint64 uct : 1;
      uint64 ntwi : 1;
      uint64 res0_17 : 1;
      uint64 ntwe : 1;
      uint64 wxn : 1;
      uint64 tscxt : 1;
      uint64 iesb : 1;
      uint64 eis : 1;
      uint64 span : 1;
      uint64 e0e : 1;
      uint64 ee : 1;
      uint64 uci : 1;
      uint64 enda : 1;
      uint64 ntlsmd : 1;
      uint64 lsmaoe : 1;
      uint64 enib : 1;
      uint64 enia : 1;
      uint64 res0_34_32 : 3;
      uint64 bt0 : 1;
      uint64 bt1 : 1;
      uint64 itfsb : 1;
      uint64 tcf0 : 2;
      uint64 tcf : 2;
      uint64 ata0 : 1;
      uint64 ata : 1;
      uint64 dssbs : 1;
      uint64 tweden : 1;
      uint64 twedel : 4;
      uint64 res0_63_50 : 14;
   };
};

static inline union sctlr_el1 r_sctlr_el1 ( void ) {
   union sctlr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c1_c0_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_sctlr_el1 ( union sctlr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c1_c0_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_SCTLR_EL1 */
#endif
