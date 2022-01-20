//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_SCXTNUM_EL2
#define H_SCXTNUM_EL2

union scxtnum_el2 {
   uint64 _;
   struct {
      uint64 Software_Context_Number : 64;
   };
};

static inline union scxtnum_el2 r_scxtnum_el2 ( void ) {
   union scxtnum_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c13_c0_7"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_scxtnum_el2 ( union scxtnum_el2 x ) {
   __asm volatile(
      "MSR s3_4_c13_c0_7, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_SCXTNUM_EL2 */
#endif
