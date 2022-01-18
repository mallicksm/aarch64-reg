//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_VBAR_EL3
#define H_VBAR_EL3

union vbar_el3 {
   unsigned long _;
   struct {
      unsigned long res0_10_0 : 11;
      unsigned long Vector_Base_Address : 53;
   };
};

static inline union vbar_el3 r_vbar_el3 ( void ) {
   union vbar_el3 tmp;
   __asm volatile(
      "MRS %0, s3_6_c12_c0_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_vbar_el3 ( union vbar_el3 x ) {
   __asm volatile(
      "MSR s3_6_c12_c0_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_VBAR_EL3 */
#endif
