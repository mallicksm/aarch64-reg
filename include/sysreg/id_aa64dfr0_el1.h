//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_ID_AA64DFR0_EL1
#define H_ID_AA64DFR0_EL1

union id_aa64dfr0_el1 {
   unsigned long _;
   struct {
      unsigned long debugver : 4;
      unsigned long tracever : 4;
      unsigned long pmuver : 4;
      unsigned long brps : 4;
      unsigned long res0_19_16 : 4;
      unsigned long wrps : 4;
      unsigned long res0_27_24 : 4;
      unsigned long ctx_cmps : 4;
      unsigned long pmsver : 4;
      unsigned long doublelock : 4;
      unsigned long tracefilt : 4;
      unsigned long res0_47_44 : 4;
      unsigned long mtpmu : 4;
      unsigned long res0_63_52 : 12;
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
