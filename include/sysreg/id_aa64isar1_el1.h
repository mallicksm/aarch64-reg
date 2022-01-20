//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_ID_AA64ISAR1_EL1
#define H_ID_AA64ISAR1_EL1

union id_aa64isar1_el1 {
   uint64 _;
   struct {
      uint64 dpb : 4;
      uint64 apa : 4;
      uint64 api : 4;
      uint64 jscvt : 4;
      uint64 fcma : 4;
      uint64 lrcpc : 4;
      uint64 gpa : 4;
      uint64 gpi : 4;
      uint64 frintts : 4;
      uint64 sb : 4;
      uint64 specres : 4;
      uint64 bf16 : 4;
      uint64 dgh : 4;
      uint64 i8mm : 4;
      uint64 res0_63_56 : 8;
   };
};

static inline union id_aa64isar1_el1 r_id_aa64isar1_el1 ( void ) {
   union id_aa64isar1_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c0_c6_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_id_aa64isar1_el1 ( union id_aa64isar1_el1 x ) {
   __asm volatile(
      "MSR s3_0_c0_c6_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ID_AA64ISAR1_EL1 */
#endif
