//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_MPAMIDR_EL1
#define H_MPAMIDR_EL1

union mpamidr_el1 {
   unsigned long _;
   struct {
      unsigned long partid_max : 16;
      unsigned long res0_16 : 1;
      unsigned long has_hcr : 1;
      unsigned long vpmr_max : 3;
      unsigned long res0_31_21 : 11;
      unsigned long pmg_max : 8;
      unsigned long res0_57_40 : 18;
      unsigned long has_tidr : 1;
      unsigned long res0_59 : 1;
      unsigned long has_force_ns : 1;
      unsigned long has_sdeflt : 1;
      unsigned long res0_63_62 : 2;
   };
};

static inline union mpamidr_el1 r_mpamidr_el1 ( void ) {
   union mpamidr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c10_c4_4"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_mpamidr_el1 ( union mpamidr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c10_c4_4, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_MPAMIDR_EL1 */
#endif
