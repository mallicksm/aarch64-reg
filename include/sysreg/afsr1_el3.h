//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_AFSR1_EL3
#define H_AFSR1_EL3

union afsr1_el3 {
   uint64 _;
   struct {
      uint64 impdef_63_0 : 64;
   };
};

static inline union afsr1_el3 r_afsr1_el3 ( void ) {
   union afsr1_el3 tmp;
   __asm volatile(
      "MRS %0, s3_6_c5_c1_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_afsr1_el3 ( union afsr1_el3 x ) {
   __asm volatile(
      "MSR s3_6_c5_c1_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_AFSR1_EL3 */
#endif
