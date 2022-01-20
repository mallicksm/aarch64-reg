//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_AFSR1_EL1
#define H_AFSR1_EL1

union afsr1_el1 {
   uint64 _;
   struct {
      uint64 impdef_63_0 : 64;
   };
};

static inline union afsr1_el1 r_afsr1_el1 ( void ) {
   union afsr1_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c5_c1_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_afsr1_el1 ( union afsr1_el1 x ) {
   __asm volatile(
      "MSR s3_0_c5_c1_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_AFSR1_EL1 */
#endif
