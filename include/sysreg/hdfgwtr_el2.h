//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_HDFGWTR_EL2
#define H_HDFGWTR_EL2

union hdfgwtr_el2 {
   uint64 _;
   struct {
      uint64 dbgbcrn_el1 : 1;
      uint64 dbgbvrn_el1 : 1;
      uint64 dbgwcrn_el1 : 1;
      uint64 dbgwvrn_el1 : 1;
      uint64 mdscr_el1 : 1;
      uint64 dbgclaim : 1;
      uint64 res0_6 : 1;
      uint64 dbgprcr_el1 : 1;
      uint64 oslar_el1 : 1;
      uint64 res0_9 : 1;
      uint64 oseccr_el1 : 1;
      uint64 osdlr_el1 : 1;
      uint64 pmevcntrn_el0 : 1;
      uint64 pmevtypern_el0 : 1;
      uint64 pmccfiltr_el0 : 1;
      uint64 pmccntr_el0 : 1;
      uint64 pmcnten : 1;
      uint64 pminten : 1;
      uint64 pmovs : 1;
      uint64 pmselr_el0 : 1;
      uint64 pmswinc_el0 : 1;
      uint64 pmcr_el0 : 1;
      uint64 res0_22 : 1;
      uint64 pmblimitr_el1 : 1;
      uint64 pmbptr_el1 : 1;
      uint64 pmbsr_el1 : 1;
      uint64 pmscr_el1 : 1;
      uint64 pmsevfr_el1 : 1;
      uint64 pmsfcr_el1 : 1;
      uint64 pmsicr_el1 : 1;
      uint64 res0_30 : 1;
      uint64 pmsirr_el1 : 1;
      uint64 pmslatfr_el1 : 1;
      uint64 trc : 1;
      uint64 res0_34 : 1;
      uint64 trcauxctlr : 1;
      uint64 trcclaim : 1;
      uint64 trccntvrn : 1;
      uint64 res0_40_38 : 3;
      uint64 trcimspecn : 1;
      uint64 trcoslar : 1;
      uint64 res0_43 : 1;
      uint64 trcprgctlr : 1;
      uint64 trcseqstr : 1;
      uint64 trcsscsrn : 1;
      uint64 res0_47 : 1;
      uint64 trcvictlr : 1;
      uint64 trfcr_el1 : 1;
      uint64 res0_56_50 : 7;
      uint64 pmuserenr_el0 : 1;
      uint64 res0_63_58 : 6;
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
