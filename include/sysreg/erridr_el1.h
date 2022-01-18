//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_ERRIDR_EL1
#define H_ERRIDR_EL1

union erridr_el1 {
   unsigned long _;
   struct {
      unsigned long num : 16;
      unsigned long res0_63_16 : 48;
   };
};

static inline union erridr_el1 r_erridr_el1 ( void ) {
   union erridr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c5_c3_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_erridr_el1 ( union erridr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c5_c3_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ERRIDR_EL1 */
#endif
