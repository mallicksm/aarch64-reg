//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_ID_AA64AFR0_EL1
#define H_ID_AA64AFR0_EL1

union id_aa64afr0_el1 {
   unsigned long _;
   struct {
      unsigned long impdef_3_0 : 4;
      unsigned long impdef_7_4 : 4;
      unsigned long impdef_11_8 : 4;
      unsigned long impdef_15_12 : 4;
      unsigned long impdef_19_16 : 4;
      unsigned long impdef_23_20 : 4;
      unsigned long impdef_27_24 : 4;
      unsigned long impdef_31_28 : 4;
      unsigned long res0_63_32 : 32;
   };
};

static inline union id_aa64afr0_el1 r_id_aa64afr0_el1 ( void ) {
   union id_aa64afr0_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c0_c5_4"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_id_aa64afr0_el1 ( union id_aa64afr0_el1 x ) {
   __asm volatile(
      "MSR s3_0_c0_c5_4, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ID_AA64AFR0_EL1 */
#endif
