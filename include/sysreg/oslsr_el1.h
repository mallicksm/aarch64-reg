//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_OSLSR_EL1
#define H_OSLSR_EL1

union oslsr_el1 {
   uint64 _;
   struct {
      uint64 oslm_0_ : 1;
      uint64 oslk : 1;
      uint64 ntt : 1;
      uint64 oslm_1_ : 1;
      uint64 res0_63_4 : 60;
   };
};

static inline union oslsr_el1 r_oslsr_el1 ( void ) {
   union oslsr_el1 tmp;
   __asm volatile(
      "MRS %0, s2_0_c1_c1_4"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_oslsr_el1 ( union oslsr_el1 x ) {
   __asm volatile(
      "MSR s2_0_c1_c1_4, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_OSLSR_EL1 */
#endif
