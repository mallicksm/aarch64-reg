//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_ID_AA64PFR1_EL1
#define H_ID_AA64PFR1_EL1

union id_aa64pfr1_el1 {
   uint64 _;
   struct {
      uint64 bt : 4;
      uint64 ssbs : 4;
      uint64 mte : 4;
      uint64 ras_frac : 4;
      uint64 mpam_frac : 4;
      uint64 res0_63_20 : 44;
   };
};

static inline union id_aa64pfr1_el1 r_id_aa64pfr1_el1 ( void ) {
   union id_aa64pfr1_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c0_c4_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_id_aa64pfr1_el1 ( union id_aa64pfr1_el1 x ) {
   __asm volatile(
      "MSR s3_0_c0_c4_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ID_AA64PFR1_EL1 */
#endif
