//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_CNTPS_CVAL_EL1
#define H_CNTPS_CVAL_EL1

union cntps_cval_el1 {
   uint64 _;
   struct {
      uint64 comparevalue : 64;
   };
};

static inline union cntps_cval_el1 r_cntps_cval_el1 ( void ) {
   union cntps_cval_el1 tmp;
   __asm volatile(
      "MRS %0, s3_7_c14_c2_2"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_cntps_cval_el1 ( union cntps_cval_el1 x ) {
   __asm volatile(
      "MSR s3_7_c14_c2_2, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_CNTPS_CVAL_EL1 */
#endif
