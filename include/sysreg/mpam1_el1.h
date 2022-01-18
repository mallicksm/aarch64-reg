//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_MPAM1_EL1
#define H_MPAM1_EL1

union mpam1_el1 {
   unsigned long _;
   struct {
      unsigned long partid_i : 16;
      unsigned long partid_d : 16;
      unsigned long pmg_i : 8;
      unsigned long pmg_d : 8;
      unsigned long res0_59_48 : 12;
      unsigned long forced_ns : 1;
      unsigned long res0_62_61 : 2;
      unsigned long mpamen : 1;
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
