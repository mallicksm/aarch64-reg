//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_VBAR_EL2
#define H_VBAR_EL2

union vbar_el2 {
   uint64 _;
   struct {
      uint64 res0_10_0 : 11;
      uint64 Vector_Base_Address : 53;
   };
};

static inline union vbar_el2 r_vbar_el2 ( void ) {
   union vbar_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c12_c0_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_vbar_el2 ( union vbar_el2 x ) {
   __asm volatile(
      "MSR s3_4_c12_c0_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_VBAR_EL2 */
#endif
