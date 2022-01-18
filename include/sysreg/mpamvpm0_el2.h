//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_MPAMVPM0_EL2
#define H_MPAMVPM0_EL2

union mpamvpm0_el2 {
   unsigned long _;
   struct {
      unsigned long phypartid0 : 16;
      unsigned long phypartid1 : 16;
      unsigned long phypartid2 : 16;
      unsigned long phypartid3 : 16;
   };
};

static inline union mpamvpm0_el2 r_mpamvpm0_el2 ( void ) {
   union mpamvpm0_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c10_c6_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_mpamvpm0_el2 ( union mpamvpm0_el2 x ) {
   __asm volatile(
      "MSR s3_4_c10_c6_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_MPAMVPM0_EL2 */
#endif
