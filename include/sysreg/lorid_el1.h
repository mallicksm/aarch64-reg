//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_LORID_EL1
#define H_LORID_EL1

union lorid_el1 {
   uint64 _;
   struct {
      uint64 lr : 8;
      uint64 res0_15_8 : 8;
      uint64 ld : 8;
      uint64 res0_63_24 : 40;
   };
};

static inline union lorid_el1 r_lorid_el1 ( void ) {
   union lorid_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c10_c4_7"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_lorid_el1 ( union lorid_el1 x ) {
   __asm volatile(
      "MSR s3_0_c10_c4_7, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_LORID_EL1 */
#endif
