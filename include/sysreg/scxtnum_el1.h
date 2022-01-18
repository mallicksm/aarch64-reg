//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_SCXTNUM_EL1
#define H_SCXTNUM_EL1

union scxtnum_el1 {
   unsigned long _;
   struct {
      unsigned long Software_Context_Number : 64;
   };
};

static inline union scxtnum_el1 r_scxtnum_el1 ( void ) {
   union scxtnum_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c13_c0_7"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_scxtnum_el1 ( union scxtnum_el1 x ) {
   __asm volatile(
      "MSR s3_0_c13_c0_7, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_SCXTNUM_EL1 */
#endif
