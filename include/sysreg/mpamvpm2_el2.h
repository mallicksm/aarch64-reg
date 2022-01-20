//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_MPAMVPM2_EL2
#define H_MPAMVPM2_EL2

union mpamvpm2_el2 {
   uint64 _;
   struct {
      uint64 phypartid8 : 16;
      uint64 phypartid9 : 16;
      uint64 phypartid10 : 16;
      uint64 phypartid11 : 16;
   };
};

static inline union mpamvpm2_el2 r_mpamvpm2_el2 ( void ) {
   union mpamvpm2_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c10_c6_2"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_mpamvpm2_el2 ( union mpamvpm2_el2 x ) {
   __asm volatile(
      "MSR s3_4_c10_c6_2, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_MPAMVPM2_EL2 */
#endif
