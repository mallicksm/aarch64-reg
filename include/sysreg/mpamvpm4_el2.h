//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_MPAMVPM4_EL2
#define H_MPAMVPM4_EL2

union mpamvpm4_el2 {
   unsigned long _;
   struct {
      unsigned long phypartid16 : 16;
      unsigned long phypartid17 : 16;
      unsigned long phypartid18 : 16;
      unsigned long phypartid19 : 16;
   };
};

static inline union mpamvpm4_el2 r_mpamvpm4_el2 ( void ) {
   union mpamvpm4_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c10_c6_4"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_mpamvpm4_el2 ( union mpamvpm4_el2 x ) {
   __asm volatile(
      "MSR s3_4_c10_c6_4, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_MPAMVPM4_EL2 */
#endif
