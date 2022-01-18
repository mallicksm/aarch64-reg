//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_MPAMVPM1_EL2
#define H_MPAMVPM1_EL2

union mpamvpm1_el2 {
   unsigned long _;
   struct {
      unsigned long phypartid4 : 16;
      unsigned long phypartid5 : 16;
      unsigned long phypartid6 : 16;
      unsigned long phypartid7 : 16;
   };
};

static inline union mpamvpm1_el2 r_mpamvpm1_el2 ( void ) {
   union mpamvpm1_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c10_c6_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_mpamvpm1_el2 ( union mpamvpm1_el2 x ) {
   __asm volatile(
      "MSR s3_4_c10_c6_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_MPAMVPM1_EL2 */
#endif
