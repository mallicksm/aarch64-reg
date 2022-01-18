//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_ID_AA64AFR1_EL1
#define H_ID_AA64AFR1_EL1

union id_aa64afr1_el1 {
   unsigned long _;
   struct {
      unsigned long res0_63_0 : 64;
   };
};

static inline union id_aa64afr1_el1 r_id_aa64afr1_el1 ( void ) {
   union id_aa64afr1_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c0_c5_5"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_id_aa64afr1_el1 ( union id_aa64afr1_el1 x ) {
   __asm volatile(
      "MSR s3_0_c0_c5_5, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ID_AA64AFR1_EL1 */
#endif
