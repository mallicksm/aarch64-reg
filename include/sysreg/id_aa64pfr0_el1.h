//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_ID_AA64PFR0_EL1
#define H_ID_AA64PFR0_EL1

union id_aa64pfr0_el1 {
   uint64 _;
   struct {
      uint64 el0 : 4;
      uint64 el1 : 4;
      uint64 el2 : 4;
      uint64 el3 : 4;
      uint64 fp : 4;
      uint64 advsimd : 4;
      uint64 gic : 4;
      uint64 ras : 4;
      uint64 sve : 4;
      uint64 sel2 : 4;
      uint64 mpam : 4;
      uint64 amu : 4;
      uint64 dit : 4;
      uint64 res0_55_52 : 4;
      uint64 csv2 : 4;
      uint64 csv3 : 4;
   };
};

static inline union id_aa64pfr0_el1 r_id_aa64pfr0_el1 ( void ) {
   union id_aa64pfr0_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c0_c4_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_id_aa64pfr0_el1 ( union id_aa64pfr0_el1 x ) {
   __asm volatile(
      "MSR s3_0_c0_c4_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ID_AA64PFR0_EL1 */
#endif
