//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_MPAM3_EL3
#define H_MPAM3_EL3

union mpam3_el3 {
   unsigned long _;
   struct {
      unsigned long partid_i : 16;
      unsigned long partid_d : 16;
      unsigned long pmg_i : 8;
      unsigned long pmg_d : 8;
      unsigned long res0_59_48 : 12;
      unsigned long force_ns : 1;
      unsigned long sdeflt : 1;
      unsigned long traplower : 1;
      unsigned long mpamen : 1;
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
