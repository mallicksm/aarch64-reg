//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_ID_AA64PFR0_EL1
#define H_ID_AA64PFR0_EL1

union id_aa64pfr0_el1 {
   unsigned long _;
   struct {
      unsigned long el0 : 4;
      unsigned long el1 : 4;
      unsigned long el2 : 4;
      unsigned long el3 : 4;
      unsigned long fp : 4;
      unsigned long advsimd : 4;
      unsigned long gic : 4;
      unsigned long ras : 4;
      unsigned long sve : 4;
      unsigned long sel2 : 4;
      unsigned long mpam : 4;
      unsigned long amu : 4;
      unsigned long dit : 4;
      unsigned long res0_55_52 : 4;
      unsigned long csv2 : 4;
      unsigned long csv3 : 4;
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
