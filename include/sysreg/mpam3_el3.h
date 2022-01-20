//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_MPAM3_EL3
#define H_MPAM3_EL3

union mpam3_el3 {
   uint64 _;
   struct {
      uint64 partid_i : 16;
      uint64 partid_d : 16;
      uint64 pmg_i : 8;
      uint64 pmg_d : 8;
      uint64 res0_59_48 : 12;
      uint64 force_ns : 1;
      uint64 sdeflt : 1;
      uint64 traplower : 1;
      uint64 mpamen : 1;
   };
};

static inline union mpam3_el3 r_mpam3_el3 ( void ) {
   union mpam3_el3 tmp;
   __asm volatile(
      "MRS %0, s3_6_c10_c5_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_mpam3_el3 ( union mpam3_el3 x ) {
   __asm volatile(
      "MSR s3_6_c10_c5_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_MPAM3_EL3 */
#endif
