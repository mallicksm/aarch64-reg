//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_MPAM1_EL1
#define H_MPAM1_EL1

union mpam1_el1 {
   uint64 _;
   struct {
      uint64 partid_i : 16;
      uint64 partid_d : 16;
      uint64 pmg_i : 8;
      uint64 pmg_d : 8;
      uint64 res0_59_48 : 12;
      uint64 forced_ns : 1;
      uint64 res0_62_61 : 2;
      uint64 mpamen : 1;
   };
};

static inline union mpam1_el1 r_mpam1_el1 ( void ) {
   union mpam1_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c10_c5_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_mpam1_el1 ( union mpam1_el1 x ) {
   __asm volatile(
      "MSR s3_0_c10_c5_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_MPAM1_EL1 */
#endif
