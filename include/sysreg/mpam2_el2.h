//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_MPAM2_EL2
#define H_MPAM2_EL2

union mpam2_el2 {
   unsigned long _;
   struct {
      unsigned long partid_i : 16;
      unsigned long partid_d : 16;
      unsigned long pmg_i : 8;
      unsigned long pmg_d : 8;
      unsigned long trapmpam1el1 : 1;
      unsigned long trapmpam0el1 : 1;
      unsigned long res0_57_50 : 8;
      unsigned long tidr : 1;
      unsigned long res0_62_59 : 4;
      unsigned long mpamen : 1;
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
