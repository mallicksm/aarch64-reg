//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_MPAM2_EL2
#define H_MPAM2_EL2

union mpam2_el2 {
   uint64 _;
   struct {
      uint64 partid_i : 16;
      uint64 partid_d : 16;
      uint64 pmg_i : 8;
      uint64 pmg_d : 8;
      uint64 trapmpam1el1 : 1;
      uint64 trapmpam0el1 : 1;
      uint64 res0_57_50 : 8;
      uint64 tidr : 1;
      uint64 res0_62_59 : 4;
      uint64 mpamen : 1;
   };
};

static inline union mpam2_el2 r_mpam2_el2 ( void ) {
   union mpam2_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c10_c5_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_mpam2_el2 ( union mpam2_el2 x ) {
   __asm volatile(
      "MSR s3_4_c10_c5_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_MPAM2_EL2 */
#endif
