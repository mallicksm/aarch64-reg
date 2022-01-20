//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_MPAMIDR_EL1
#define H_MPAMIDR_EL1

union mpamidr_el1 {
   uint64 _;
   struct {
      uint64 partid_max : 16;
      uint64 res0_16 : 1;
      uint64 has_hcr : 1;
      uint64 vpmr_max : 3;
      uint64 res0_31_21 : 11;
      uint64 pmg_max : 8;
      uint64 res0_57_40 : 18;
      uint64 has_tidr : 1;
      uint64 res0_59 : 1;
      uint64 has_force_ns : 1;
      uint64 has_sdeflt : 1;
      uint64 res0_63_62 : 2;
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
