//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_RMR_EL2
#define H_RMR_EL2

union rmr_el2 {
   unsigned long _;
   struct {
      unsigned long aa64 : 1;
      unsigned long rr : 1;
      unsigned long res0_63_2 : 62;
   };
};

static inline union rmr_el2 r_rmr_el2 ( void ) {
   union rmr_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c12_c0_2"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_rmr_el2 ( union rmr_el2 x ) {
   __asm volatile(
      "MSR s3_4_c12_c0_2, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_RMR_EL2 */
#endif
