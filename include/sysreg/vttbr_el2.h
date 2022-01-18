//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_VTTBR_EL2
#define H_VTTBR_EL2

union vttbr_el2 {
   unsigned long _;
   struct {
      unsigned long cnp : 1;
      unsigned long baddr : 47;
      unsigned long vmid_7_0_ : 8;
      unsigned long vmid_15_8_ : 8;
   };
};

static inline union vttbr_el2 r_vttbr_el2 ( void ) {
   union vttbr_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c2_c1_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_vttbr_el2 ( union vttbr_el2 x ) {
   __asm volatile(
      "MSR s3_4_c2_c1_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_VTTBR_EL2 */
#endif
