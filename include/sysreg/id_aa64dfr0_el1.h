//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_ID_AA64DFR0_EL1
#define H_ID_AA64DFR0_EL1

union id_aa64dfr0_el1 {
   uint64 _;
   struct {
      uint64 debugver : 4;
      uint64 tracever : 4;
      uint64 pmuver : 4;
      uint64 brps : 4;
      uint64 res0_19_16 : 4;
      uint64 wrps : 4;
      uint64 res0_27_24 : 4;
      uint64 ctx_cmps : 4;
      uint64 pmsver : 4;
      uint64 doublelock : 4;
      uint64 tracefilt : 4;
      uint64 res0_47_44 : 4;
      uint64 mtpmu : 4;
      uint64 res0_63_52 : 12;
   };
};

static inline union id_aa64dfr0_el1 r_id_aa64dfr0_el1 ( void ) {
   union id_aa64dfr0_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c0_c5_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_id_aa64dfr0_el1 ( union id_aa64dfr0_el1 x ) {
   __asm volatile(
      "MSR s3_0_c0_c5_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ID_AA64DFR0_EL1 */
#endif
