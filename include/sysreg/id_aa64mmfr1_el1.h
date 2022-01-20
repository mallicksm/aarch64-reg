//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_ID_AA64MMFR1_EL1
#define H_ID_AA64MMFR1_EL1

union id_aa64mmfr1_el1 {
   uint64 _;
   struct {
      uint64 hafdbs : 4;
      uint64 vmidbits : 4;
      uint64 vh : 4;
      uint64 hpds : 4;
      uint64 lo : 4;
      uint64 pan : 4;
      uint64 specsei : 4;
      uint64 xnx : 4;
      uint64 twed : 4;
      uint64 ets : 4;
      uint64 res0_63_40 : 24;
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
