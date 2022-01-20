//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_SP_EL1
#define H_SP_EL1

union sp_el1 {
   uint64 _;
   struct {
      uint64 Stack_pointer : 64;
   };
};

static inline union sp_el1 r_sp_el1 ( void ) {
   union sp_el1 tmp;
   __asm volatile(
      "MRS %0, s3_4_c4_c1_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_sp_el1 ( union sp_el1 x ) {
   __asm volatile(
      "MSR s3_4_c4_c1_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_SP_EL1 */
#endif
