//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_SCXTNUM_EL3
#define H_SCXTNUM_EL3

union scxtnum_el3 {
   uint64 _;
   struct {
      uint64 Software_Context_Number : 64;
   };
};

static inline union scxtnum_el3 r_scxtnum_el3 ( void ) {
   union scxtnum_el3 tmp;
   __asm volatile(
      "MRS %0, s3_6_c13_c0_7"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_scxtnum_el3 ( union scxtnum_el3 x ) {
   __asm volatile(
      "MSR s3_6_c13_c0_7, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_SCXTNUM_EL3 */
#endif
