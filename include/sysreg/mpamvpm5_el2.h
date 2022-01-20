//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_MPAMVPM5_EL2
#define H_MPAMVPM5_EL2

union mpamvpm5_el2 {
   uint64 _;
   struct {
      uint64 phypartid20 : 16;
      uint64 phypartid21 : 16;
      uint64 phypartid22 : 16;
      uint64 phypartid23 : 16;
   };
};

static inline union mpamvpm5_el2 r_mpamvpm5_el2 ( void ) {
   union mpamvpm5_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c10_c6_5"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_mpamvpm5_el2 ( union mpamvpm5_el2 x ) {
   __asm volatile(
      "MSR s3_4_c10_c6_5, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_MPAMVPM5_EL2 */
#endif
