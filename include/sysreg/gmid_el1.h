//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_GMID_EL1
#define H_GMID_EL1

union gmid_el1 {
   uint64 _;
   struct {
      uint64 bs : 4;
      uint64 res0_63_4 : 60;
   };
};

static inline union gmid_el1 r_gmid_el1 ( void ) {
   union gmid_el1 tmp;
   __asm volatile(
      "MRS %0, s3_1_c0_c0_4"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_gmid_el1 ( union gmid_el1 x ) {
   __asm volatile(
      "MSR s3_1_c0_c0_4, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_GMID_EL1 */
#endif
