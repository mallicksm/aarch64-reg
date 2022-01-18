//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_SCTLR_EL1
#define H_SCTLR_EL1

union sctlr_el1 {
   unsigned long _;
   struct {
      unsigned long m : 1;
      unsigned long a : 1;
      unsigned long c : 1;
      unsigned long sa : 1;
      unsigned long sa0 : 1;
      unsigned long cp15ben : 1;
      unsigned long naa : 1;
      unsigned long itd : 1;
      unsigned long sed : 1;
      unsigned long uma : 1;
      unsigned long enrctx : 1;
      unsigned long eos : 1;
      unsigned long i : 1;
      unsigned long endb : 1;
      unsigned long dze : 1;
      unsigned long uct : 1;
      unsigned long ntwi : 1;
      unsigned long res0_17 : 1;
      unsigned long ntwe : 1;
      unsigned long wxn : 1;
      unsigned long tscxt : 1;
      unsigned long iesb : 1;
      unsigned long eis : 1;
      unsigned long span : 1;
      unsigned long e0e : 1;
      unsigned long ee : 1;
      unsigned long uci : 1;
      unsigned long enda : 1;
      unsigned long ntlsmd : 1;
      unsigned long lsmaoe : 1;
      unsigned long enib : 1;
      unsigned long enia : 1;
      unsigned long res0_34_32 : 3;
      unsigned long bt0 : 1;
      unsigned long bt1 : 1;
      unsigned long itfsb : 1;
      unsigned long tcf0 : 2;
      unsigned long tcf : 2;
      unsigned long ata0 : 1;
      unsigned long ata : 1;
      unsigned long dssbs : 1;
      unsigned long tweden : 1;
      unsigned long twedel : 4;
      unsigned long res0_63_50 : 14;
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
