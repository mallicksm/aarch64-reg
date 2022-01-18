//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_RVBAR_EL1
#define H_RVBAR_EL1

union rvbar_el1 {
   unsigned long _;
   struct {
      unsigned long Reset_Address : 64;
   };
};

static inline union rvbar_el1 r_rvbar_el1 ( void ) {
   union rvbar_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c12_c0_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_rvbar_el1 ( union rvbar_el1 x ) {
   __asm volatile(
      "MSR s3_0_c12_c0_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_RVBAR_EL1 */
#endif
