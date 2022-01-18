//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_ID_AA64ISAR0_EL1
#define H_ID_AA64ISAR0_EL1

union id_aa64isar0_el1 {
   unsigned long _;
   struct {
      unsigned long res0_3_0 : 4;
      unsigned long aes : 4;
      unsigned long sha1 : 4;
      unsigned long sha2 : 4;
      unsigned long crc32 : 4;
      unsigned long atomic : 4;
      unsigned long res0_27_24 : 4;
      unsigned long rdm : 4;
      unsigned long sha3 : 4;
      unsigned long sm3 : 4;
      unsigned long sm4 : 4;
      unsigned long dp : 4;
      unsigned long fhm : 4;
      unsigned long ts : 4;
      unsigned long tlb : 4;
      unsigned long rndr : 4;
   };
};

static inline union id_aa64isar0_el1 r_id_aa64isar0_el1 ( void ) {
   union id_aa64isar0_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c0_c6_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_id_aa64isar0_el1 ( union id_aa64isar0_el1 x ) {
   __asm volatile(
      "MSR s3_0_c0_c6_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ID_AA64ISAR0_EL1 */
#endif
