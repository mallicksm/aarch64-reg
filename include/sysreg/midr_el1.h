//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_MIDR_EL1
#define H_MIDR_EL1

union midr_el1 {
   uint64 _;
   struct {
      uint64 revision : 4;
      uint64 partnum : 12;
      uint64 architecture : 4;
      uint64 variant : 4;
      uint64 implementer : 8;
      uint64 res0_63_32 : 32;
   };
};

static inline union midr_el1 r_midr_el1 ( void ) {
   union midr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c0_c0_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_midr_el1 ( union midr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c0_c0_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_MIDR_EL1 */
#endif
