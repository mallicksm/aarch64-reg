//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_ID_AA64ISAR1_EL1
#define H_ID_AA64ISAR1_EL1

union id_aa64isar1_el1 {
   unsigned long _;
   struct {
      unsigned long dpb : 4;
      unsigned long apa : 4;
      unsigned long api : 4;
      unsigned long jscvt : 4;
      unsigned long fcma : 4;
      unsigned long lrcpc : 4;
      unsigned long gpa : 4;
      unsigned long gpi : 4;
      unsigned long frintts : 4;
      unsigned long sb : 4;
      unsigned long specres : 4;
      unsigned long bf16 : 4;
      unsigned long dgh : 4;
      unsigned long i8mm : 4;
      unsigned long res0_63_56 : 8;
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
