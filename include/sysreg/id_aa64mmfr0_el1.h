//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_ID_AA64MMFR0_EL1
#define H_ID_AA64MMFR0_EL1

union id_aa64mmfr0_el1 {
   unsigned long _;
   struct {
      unsigned long parange : 4;
      unsigned long asidbits : 4;
      unsigned long bigend : 4;
      unsigned long snsmem : 4;
      unsigned long bigendel0 : 4;
      unsigned long tgran16 : 4;
      unsigned long tgran64 : 4;
      unsigned long tgran4 : 4;
      unsigned long tgran16_2 : 4;
      unsigned long tgran64_2 : 4;
      unsigned long tgran4_2 : 4;
      unsigned long exs : 4;
      unsigned long res0_55_48 : 8;
      unsigned long fgt : 4;
      unsigned long ecv : 4;
   };
};

static inline union id_aa64mmfr0_el1 r_id_aa64mmfr0_el1 ( void ) {
   union id_aa64mmfr0_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c0_c7_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_id_aa64mmfr0_el1 ( union id_aa64mmfr0_el1 x ) {
   __asm volatile(
      "MSR s3_0_c0_c7_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ID_AA64MMFR0_EL1 */
#endif
