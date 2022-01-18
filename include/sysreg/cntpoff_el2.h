//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_CNTPOFF_EL2
#define H_CNTPOFF_EL2

union cntpoff_el2 {
   unsigned long _;
   struct {
      unsigned long Physical_offset : 64;
   };
};

static inline union cntpoff_el2 r_cntpoff_el2 ( void ) {
   union cntpoff_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c14_c0_6"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_cntpoff_el2 ( union cntpoff_el2 x ) {
   __asm volatile(
      "MSR s3_4_c14_c0_6, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_CNTPOFF_EL2 */
#endif
