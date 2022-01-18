//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_CNTHP_CVAL_EL2
#define H_CNTHP_CVAL_EL2

union cnthp_cval_el2 {
   unsigned long _;
   struct {
      unsigned long comparevalue : 64;
   };
};

static inline union cnthp_cval_el2 r_cnthp_cval_el2 ( void ) {
   union cnthp_cval_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c14_c2_2"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_cnthp_cval_el2 ( union cnthp_cval_el2 x ) {
   __asm volatile(
      "MSR s3_4_c14_c2_2, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_CNTHP_CVAL_EL2 */
#endif
