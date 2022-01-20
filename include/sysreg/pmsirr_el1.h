//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_PMSIRR_EL1
#define H_PMSIRR_EL1

union pmsirr_el1 {
   uint64 _;
   struct {
      uint64 rnd : 1;
      uint64 res0_7_1 : 7;
      uint64 interval : 24;
      uint64 res0_63_32 : 32;
   };
};

static inline union pmsirr_el1 r_pmsirr_el1 ( void ) {
   union pmsirr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c9_c9_3"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_pmsirr_el1 ( union pmsirr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c9_c9_3, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_PMSIRR_EL1 */
#endif
