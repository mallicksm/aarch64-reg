//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_ID_AA64ZFR0_EL1
#define H_ID_AA64ZFR0_EL1

union id_aa64zfr0_el1 {
   unsigned long _;
   struct {
      unsigned long svever : 4;
      unsigned long res0_19_4 : 16;
      unsigned long bf16 : 4;
      unsigned long res0_43_24 : 20;
      unsigned long i8mm : 4;
      unsigned long res0_51_48 : 4;
      unsigned long f32mm : 4;
      unsigned long f64mm : 4;
      unsigned long res0_63_60 : 4;
   };
};

static inline union id_aa64zfr0_el1 r_id_aa64zfr0_el1 ( void ) {
   union id_aa64zfr0_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c0_c4_4"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_id_aa64zfr0_el1 ( union id_aa64zfr0_el1 x ) {
   __asm volatile(
      "MSR s3_0_c0_c4_4, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ID_AA64ZFR0_EL1 */
#endif
