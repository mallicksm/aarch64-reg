//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_CPACR_EL1
#define H_CPACR_EL1

union cpacr_el1 {
   uint64 _;
   struct {
      uint64 res0_15_0 : 16;
      uint64 zen : 2;
      uint64 res0_19_18 : 2;
      uint64 fpen : 2;
      uint64 res0_27_22 : 6;
      uint64 tta : 1;
      uint64 res0_63_29 : 35;
   };
};

static inline union cpacr_el1 r_cpacr_el1 ( void ) {
   union cpacr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c1_c0_2"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_cpacr_el1 ( union cpacr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c1_c0_2, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_CPACR_EL1 */
#endif
