//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_HDFGRTR_EL2
#define H_HDFGRTR_EL2

union hdfgrtr_el2 {
   uint64 _;
   struct {
      uint64 dbgbcrn_el1 : 1;
      uint64 dbgbvrn_el1 : 1;
      uint64 dbgwcrn_el1 : 1;
      uint64 dbgwvrn_el1 : 1;
      uint64 mdscr_el1 : 1;
      uint64 dbgclaim : 1;
      uint64 dbgauthstatus_el1 : 1;
      uint64 dbgprcr_el1 : 1;
      uint64 res0_8 : 1;
      uint64 oslsr_el1 : 1;
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
      uint64 res0_21_20 : 2;
      uint64 pmmir_el1 : 1;
      uint64 pmblimitr_el1 : 1;
      uint64 pmbptr_el1 : 1;
      uint64 pmbsr_el1 : 1;
      uint64 pmscr_el1 : 1;
      uint64 pmsevfr_el1 : 1;
      uint64 pmsfcr_el1 : 1;
      uint64 pmsicr_el1 : 1;
      uint64 pmsidr_el1 : 1;
      uint64 pmsirr_el1 : 1;
      uint64 pmslatfr_el1 : 1;
      uint64 trc : 1;
      uint64 trcauthstatus : 1;
      uint64 trcauxctlr : 1;
      uint64 trcclaim : 1;
      uint64 trccntvrn : 1;
      uint64 res0_39_38 : 2;
      uint64 trcid : 1;
      uint64 trcimspecn : 1;
      uint64 res0_42 : 1;
      uint64 trcoslsr : 1;
      uint64 trcprgctlr : 1;
      uint64 trcseqstr : 1;
      uint64 trcsscsrn : 1;
      uint64 trcstatr : 1;
      uint64 trcvictlr : 1;
      uint64 res0_56_49 : 8;
      uint64 pmuserenr_el0 : 1;
      uint64 pmceidn_el0 : 1;
      uint64 res0_63_59 : 5;
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
