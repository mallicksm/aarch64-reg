//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_HDFGRTR_EL2
#define H_HDFGRTR_EL2

union hdfgrtr_el2 {
   unsigned long _;
   struct {
      unsigned long dbgbcrn_el1 : 1;
      unsigned long dbgbvrn_el1 : 1;
      unsigned long dbgwcrn_el1 : 1;
      unsigned long dbgwvrn_el1 : 1;
      unsigned long mdscr_el1 : 1;
      unsigned long dbgclaim : 1;
      unsigned long dbgauthstatus_el1 : 1;
      unsigned long dbgprcr_el1 : 1;
      unsigned long res0_8 : 1;
      unsigned long oslsr_el1 : 1;
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
      unsigned long res0_21_20 : 2;
      unsigned long pmmir_el1 : 1;
      unsigned long pmblimitr_el1 : 1;
      unsigned long pmbptr_el1 : 1;
      unsigned long pmbsr_el1 : 1;
      unsigned long pmscr_el1 : 1;
      unsigned long pmsevfr_el1 : 1;
      unsigned long pmsfcr_el1 : 1;
      unsigned long pmsicr_el1 : 1;
      unsigned long pmsidr_el1 : 1;
      unsigned long pmsirr_el1 : 1;
      unsigned long pmslatfr_el1 : 1;
      unsigned long trc : 1;
      unsigned long trcauthstatus : 1;
      unsigned long trcauxctlr : 1;
      unsigned long trcclaim : 1;
      unsigned long trccntvrn : 1;
      unsigned long res0_39_38 : 2;
      unsigned long trcid : 1;
      unsigned long trcimspecn : 1;
      unsigned long res0_42 : 1;
      unsigned long trcoslsr : 1;
      unsigned long trcprgctlr : 1;
      unsigned long trcseqstr : 1;
      unsigned long trcsscsrn : 1;
      unsigned long trcstatr : 1;
      unsigned long trcvictlr : 1;
      unsigned long res0_56_49 : 8;
      unsigned long pmuserenr_el0 : 1;
      unsigned long pmceidn_el0 : 1;
      unsigned long res0_63_59 : 5;
   };
};

static inline union hdfgrtr_el2 r_hdfgrtr_el2 ( void ) {
   union hdfgrtr_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c3_c1_4"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_hdfgrtr_el2 ( union hdfgrtr_el2 x ) {
   __asm volatile(
      "MSR s3_4_c3_c1_4, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_HDFGRTR_EL2 */
#endif
