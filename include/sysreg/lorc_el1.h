//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_LORC_EL1
#define H_LORC_EL1

union lorc_el1 {
   uint64 _;
   struct {
      uint64 en : 1;
      uint64 res0_1 : 1;
      uint64 ds : 8;
      uint64 res0_63_10 : 54;
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
