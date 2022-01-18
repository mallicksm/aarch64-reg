//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_MPAMVPM6_EL2
#define H_MPAMVPM6_EL2

union mpamvpm6_el2 {
   unsigned long _;
   struct {
      unsigned long phypartid24 : 16;
      unsigned long phypartid25 : 16;
      unsigned long phypartid26 : 16;
      unsigned long phypartid27 : 16;
   };
};

static inline union mpamvpm6_el2 r_mpamvpm6_el2 ( void ) {
   union mpamvpm6_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c10_c6_6"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_mpamvpm6_el2 ( union mpamvpm6_el2 x ) {
   __asm volatile(
      "MSR s3_4_c10_c6_6, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_MPAMVPM6_EL2 */
#endif
