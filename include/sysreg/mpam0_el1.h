//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_MPAM0_EL1
#define H_MPAM0_EL1

union mpam0_el1 {
   uint64 _;
   struct {
      uint64 partid_i : 16;
      uint64 partid_d : 16;
      uint64 pmg_i : 8;
      uint64 pmg_d : 8;
      uint64 res0_63_48 : 16;
   };
};

static inline union mpam0_el1 r_mpam0_el1 ( void ) {
   union mpam0_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c10_c5_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_mpam0_el1 ( union mpam0_el1 x ) {
   __asm volatile(
      "MSR s3_0_c10_c5_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_MPAM0_EL1 */
#endif
