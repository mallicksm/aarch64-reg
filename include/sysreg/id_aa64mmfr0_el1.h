//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_ID_AA64MMFR0_EL1
#define H_ID_AA64MMFR0_EL1

union id_aa64mmfr0_el1 {
   uint64 _;
   struct {
      uint64 parange : 4;
      uint64 asidbits : 4;
      uint64 bigend : 4;
      uint64 snsmem : 4;
      uint64 bigendel0 : 4;
      uint64 tgran16 : 4;
      uint64 tgran64 : 4;
      uint64 tgran4 : 4;
      uint64 tgran16_2 : 4;
      uint64 tgran64_2 : 4;
      uint64 tgran4_2 : 4;
      uint64 exs : 4;
      uint64 res0_55_48 : 8;
      uint64 fgt : 4;
      uint64 ecv : 4;
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
