//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_MPAMVPM7_EL2
#define H_MPAMVPM7_EL2

union mpamvpm7_el2 {
   uint64 _;
   struct {
      uint64 phypartid28 : 16;
      uint64 phypartid29 : 16;
      uint64 phypartid30 : 16;
      uint64 phypartid31 : 16;
   };
};

static inline union mpamvpm7_el2 r_mpamvpm7_el2 ( void ) {
   union mpamvpm7_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c10_c6_7"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_mpamvpm7_el2 ( union mpamvpm7_el2 x ) {
   __asm volatile(
      "MSR s3_4_c10_c6_7, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_MPAMVPM7_EL2 */
#endif
