//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_CONTEXTIDR_EL1
#define H_CONTEXTIDR_EL1

union contextidr_el1 {
   unsigned long _;
   struct {
      unsigned long procid : 32;
      unsigned long res0_63_32 : 32;
   };
};

static inline union contextidr_el1 r_contextidr_el1 ( void ) {
   union contextidr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c13_c0_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_contextidr_el1 ( union contextidr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c13_c0_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_CONTEXTIDR_EL1 */
#endif
