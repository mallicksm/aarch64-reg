//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_ID_AA64MMFR1_EL1
#define H_ID_AA64MMFR1_EL1

union id_aa64mmfr1_el1 {
   unsigned long _;
   struct {
      unsigned long hafdbs : 4;
      unsigned long vmidbits : 4;
      unsigned long vh : 4;
      unsigned long hpds : 4;
      unsigned long lo : 4;
      unsigned long pan : 4;
      unsigned long specsei : 4;
      unsigned long xnx : 4;
      unsigned long twed : 4;
      unsigned long ets : 4;
      unsigned long res0_63_40 : 24;
   };
};

static inline union id_aa64mmfr1_el1 r_id_aa64mmfr1_el1 ( void ) {
   union id_aa64mmfr1_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c0_c7_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_id_aa64mmfr1_el1 ( union id_aa64mmfr1_el1 x ) {
   __asm volatile(
      "MSR s3_0_c0_c7_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ID_AA64MMFR1_EL1 */
#endif
