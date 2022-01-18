//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_HDFGWTR_EL2
#define H_HDFGWTR_EL2

union hdfgwtr_el2 {
   unsigned long _;
   struct {
      unsigned long dbgbcrn_el1 : 1;
      unsigned long dbgbvrn_el1 : 1;
      unsigned long dbgwcrn_el1 : 1;
      unsigned long dbgwvrn_el1 : 1;
      unsigned long mdscr_el1 : 1;
      unsigned long dbgclaim : 1;
      unsigned long res0_6 : 1;
      unsigned long dbgprcr_el1 : 1;
      unsigned long oslar_el1 : 1;
      unsigned long res0_9 : 1;
      unsigned long oseccr_el1 : 1;
      unsigned long osdlr_el1 : 1;
      unsigned long pmevcntrn_el0 : 1;
      unsigned long pmevtypern_el0 : 1;
      unsigned long pmccfiltr_el0 : 1;
      unsigned long pmccntr_el0 : 1;
      unsigned long pmcnten : 1;
      unsigned long pminten : 1;
      unsigned long pmovs : 1;
      unsigned long pmselr_el0 : 1;
      unsigned long pmswinc_el0 : 1;
      unsigned long pmcr_el0 : 1;
      unsigned long res0_22 : 1;
      unsigned long pmblimitr_el1 : 1;
      unsigned long pmbptr_el1 : 1;
      unsigned long pmbsr_el1 : 1;
      unsigned long pmscr_el1 : 1;
      unsigned long pmsevfr_el1 : 1;
      unsigned long pmsfcr_el1 : 1;
      unsigned long pmsicr_el1 : 1;
      unsigned long res0_30 : 1;
      unsigned long pmsirr_el1 : 1;
      unsigned long pmslatfr_el1 : 1;
      unsigned long trc : 1;
      unsigned long res0_34 : 1;
      unsigned long trcauxctlr : 1;
      unsigned long trcclaim : 1;
      unsigned long trccntvrn : 1;
      unsigned long res0_40_38 : 3;
      unsigned long trcimspecn : 1;
      unsigned long trcoslar : 1;
      unsigned long res0_43 : 1;
      unsigned long trcprgctlr : 1;
      unsigned long trcseqstr : 1;
      unsigned long trcsscsrn : 1;
      unsigned long res0_47 : 1;
      unsigned long trcvictlr : 1;
      unsigned long trfcr_el1 : 1;
      unsigned long res0_56_50 : 7;
      unsigned long pmuserenr_el0 : 1;
      unsigned long res0_63_58 : 6;
   };
};

static inline union hdfgwtr_el2 r_hdfgwtr_el2 ( void ) {
   union hdfgwtr_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c3_c1_5"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_hdfgwtr_el2 ( union hdfgwtr_el2 x ) {
   __asm volatile(
      "MSR s3_4_c3_c1_5, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_HDFGWTR_EL2 */
#endif
