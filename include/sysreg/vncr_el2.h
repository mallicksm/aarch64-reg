//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_VNCR_EL2
#define H_VNCR_EL2

union vncr_el2 {
   unsigned long _;
   struct {
      unsigned long res0_11_0 : 12;
      unsigned long baddr : 41;
      unsigned long ress : 11;
   };
};

static inline union vncr_el2 r_vncr_el2 ( void ) {
   union vncr_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c2_c2_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_vncr_el2 ( union vncr_el2 x ) {
   __asm volatile(
      "MSR s3_4_c2_c2_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_VNCR_EL2 */
#endif
