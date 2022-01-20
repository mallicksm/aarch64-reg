//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_PMBIDR_EL1
#define H_PMBIDR_EL1

union pmbidr_el1 {
   uint64 _;
   struct {
      uint64 align : 4;
      uint64 p : 1;
      uint64 f : 1;
      uint64 res0_63_6 : 58;
   };
};

static inline union pmbidr_el1 r_pmbidr_el1 ( void ) {
   union pmbidr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c9_c10_7"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_pmbidr_el1 ( union pmbidr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c9_c10_7, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_PMBIDR_EL1 */
#endif
