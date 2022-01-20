//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_LOREA_EL1
#define H_LOREA_EL1

union lorea_el1 {
   uint64 _;
   struct {
      uint64 res0_15_0 : 16;
      uint64 ea_47_16_ : 32;
      uint64 ea_51_48_ : 4;
      uint64 res0_63_52 : 12;
   };
};

static inline union lorea_el1 r_lorea_el1 ( void ) {
   union lorea_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c10_c4_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_lorea_el1 ( union lorea_el1 x ) {
   __asm volatile(
      "MSR s3_0_c10_c4_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_LOREA_EL1 */
#endif
