//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_HFGWTR_EL2
#define H_HFGWTR_EL2

union hfgwtr_el2 {
   uint64 _;
   struct {
      uint64 afsr0_el1 : 1;
      uint64 afsr1_el1 : 1;
      uint64 res0_2 : 1;
      uint64 amair_el1 : 1;
      uint64 apdakey : 1;
      uint64 apdbkey : 1;
      uint64 apgakey : 1;
      uint64 apiakey : 1;
      uint64 apibkey : 1;
      uint64 res0_10_9 : 2;
      uint64 contextidr_el1 : 1;
      uint64 cpacr_el1 : 1;
      uint64 csselr_el1 : 1;
      uint64 res0_15_14 : 2;
      uint64 esr_el1 : 1;
      uint64 far_el1 : 1;
      uint64 res0_18 : 1;
      uint64 lorc_el1 : 1;
      uint64 lorea_el1 : 1;
      uint64 res0_21 : 1;
      uint64 lorn_el1 : 1;
      uint64 lorsa_el1 : 1;
      uint64 mair_el1 : 1;
      uint64 res0_26_25 : 2;
      uint64 par_el1 : 1;
      uint64 res0_28 : 1;
      uint64 sctlr_el1 : 1;
      uint64 scxtnum_el1 : 1;
      uint64 scxtnum_el0 : 1;
      uint64 tcr_el1 : 1;
      uint64 tpidr_el1 : 1;
      uint64 tpidrro_el0 : 1;
      uint64 tpidr_el0 : 1;
      uint64 ttbr0_el1 : 1;
      uint64 ttbr1_el1 : 1;
      uint64 vbar_el1 : 1;
      uint64 icc_igrpenn_el1 : 1;
      uint64 res0_40 : 1;
      uint64 errselr_el1 : 1;
      uint64 res0_42 : 1;
      uint64 erxctlr_el1 : 1;
      uint64 erxstatus_el1 : 1;
      uint64 erxmiscn_el1 : 1;
      uint64 res0_46 : 1;
      uint64 erxpfgctl_el1 : 1;
      uint64 erxpfgcdn_el1 : 1;
      uint64 erxaddr_el1 : 1;
      uint64 res0_63_50 : 14;
   };
};

static inline union hfgwtr_el2 r_hfgwtr_el2 ( void ) {
   union hfgwtr_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c1_c1_5"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_hfgwtr_el2 ( union hfgwtr_el2 x ) {
   __asm volatile(
      "MSR s3_4_c1_c1_5, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_HFGWTR_EL2 */
#endif
