//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_HFGRTR_EL2
#define H_HFGRTR_EL2

union hfgrtr_el2 {
   unsigned long _;
   struct {
      unsigned long afsr0_el1 : 1;
      unsigned long afsr1_el1 : 1;
      unsigned long aidr_el1 : 1;
      unsigned long amair_el1 : 1;
      unsigned long apdakey : 1;
      unsigned long apdbkey : 1;
      unsigned long apgakey : 1;
      unsigned long apiakey : 1;
      unsigned long apibkey : 1;
      unsigned long ccsidr_el1 : 1;
      unsigned long clidr_el1 : 1;
      unsigned long contextidr_el1 : 1;
      unsigned long cpacr_el1 : 1;
      unsigned long csselr_el1 : 1;
      unsigned long ctr_el0 : 1;
      unsigned long dczid_el0 : 1;
      unsigned long esr_el1 : 1;
      unsigned long far_el1 : 1;
      unsigned long isr_el1 : 1;
      unsigned long lorc_el1 : 1;
      unsigned long lorea_el1 : 1;
      unsigned long lorid_el1 : 1;
      unsigned long lorn_el1 : 1;
      unsigned long lorsa_el1 : 1;
      unsigned long mair_el1 : 1;
      unsigned long midr_el1 : 1;
      unsigned long mpidr_el1 : 1;
      unsigned long par_el1 : 1;
      unsigned long revidr_el1 : 1;
      unsigned long sctlr_el1 : 1;
      unsigned long scxtnum_el1 : 1;
      unsigned long scxtnum_el0 : 1;
      unsigned long tcr_el1 : 1;
      unsigned long tpidr_el1 : 1;
      unsigned long tpidrro_el0 : 1;
      unsigned long tpidr_el0 : 1;
      unsigned long ttbr0_el1 : 1;
      unsigned long ttbr1_el1 : 1;
      unsigned long vbar_el1 : 1;
      unsigned long icc_igrpenn_el1 : 1;
      unsigned long erridr_el1 : 1;
      unsigned long errselr_el1 : 1;
      unsigned long erxfr_el1 : 1;
      unsigned long erxctlr_el1 : 1;
      unsigned long erxstatus_el1 : 1;
      unsigned long erxmiscn_el1 : 1;
      unsigned long erxpfgf_el1 : 1;
      unsigned long erxpfgctl_el1 : 1;
      unsigned long erxpfgcdn_el1 : 1;
      unsigned long erxaddr_el1 : 1;
      unsigned long res0_63_50 : 14;
   };
};

static inline union hfgrtr_el2 r_hfgrtr_el2 ( void ) {
   union hfgrtr_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c1_c1_4"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_hfgrtr_el2 ( union hfgrtr_el2 x ) {
   __asm volatile(
      "MSR s3_4_c1_c1_4, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_HFGRTR_EL2 */
#endif