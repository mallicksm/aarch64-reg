//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_VBAR_EL1
#define H_VBAR_EL1

union vbar_el1 {
   uint64 _;
   struct {
      uint64 res0_10_0 : 11;
      uint64 Vector_Base_Address : 53;
   };
};

static inline union vbar_el1 r_vbar_el1 ( void ) {
   union vbar_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c12_c0_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_vbar_el1 ( union vbar_el1 x ) {
   __asm volatile(
      "MSR s3_0_c12_c0_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_VBAR_EL1 */
#endif
