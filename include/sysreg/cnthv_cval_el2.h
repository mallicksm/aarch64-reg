//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_CNTHV_CVAL_EL2
#define H_CNTHV_CVAL_EL2

union cnthv_cval_el2 {
   uint64 _;
   struct {
      uint64 comparevalue : 64;
   };
};

static inline union cnthv_cval_el2 r_cnthv_cval_el2 ( void ) {
   union cnthv_cval_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c14_c3_2"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_cnthv_cval_el2 ( union cnthv_cval_el2 x ) {
   __asm volatile(
      "MSR s3_4_c14_c3_2, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_CNTHV_CVAL_EL2 */
#endif
