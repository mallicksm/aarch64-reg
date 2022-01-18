//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_LORC_EL1
#define H_LORC_EL1

union lorc_el1 {
   unsigned long _;
   struct {
      unsigned long en : 1;
      unsigned long res0_1 : 1;
      unsigned long ds : 8;
      unsigned long res0_63_10 : 54;
   };
};

static inline union lorc_el1 r_lorc_el1 ( void ) {
   union lorc_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c10_c4_3"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_lorc_el1 ( union lorc_el1 x ) {
   __asm volatile(
      "MSR s3_0_c10_c4_3, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_LORC_EL1 */
#endif
