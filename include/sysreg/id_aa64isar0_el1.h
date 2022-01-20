//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_ID_AA64ISAR0_EL1
#define H_ID_AA64ISAR0_EL1

union id_aa64isar0_el1 {
   uint64 _;
   struct {
      uint64 res0_3_0 : 4;
      uint64 aes : 4;
      uint64 sha1 : 4;
      uint64 sha2 : 4;
      uint64 crc32 : 4;
      uint64 atomic : 4;
      uint64 res0_27_24 : 4;
      uint64 rdm : 4;
      uint64 sha3 : 4;
      uint64 sm3 : 4;
      uint64 sm4 : 4;
      uint64 dp : 4;
      uint64 fhm : 4;
      uint64 ts : 4;
      uint64 tlb : 4;
      uint64 rndr : 4;
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
