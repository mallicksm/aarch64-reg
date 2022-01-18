//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_RMR_EL1
#define H_RMR_EL1

union rmr_el1 {
   unsigned long _;
   struct {
      unsigned long aa64 : 1;
      unsigned long rr : 1;
      unsigned long res0_63_2 : 62;
   };
};

static inline union rmr_el1 r_rmr_el1 ( void ) {
   union rmr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c12_c0_2"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_rmr_el1 ( union rmr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c12_c0_2, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_RMR_EL1 */
#endif
