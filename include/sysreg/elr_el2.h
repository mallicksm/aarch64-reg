//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_ELR_EL2
#define H_ELR_EL2

union elr_el2 {
   uint64 _;
   struct {
      uint64 Return_address : 64;
   };
};

static inline union elr_el2 r_elr_el2 ( void ) {
   union elr_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c4_c0_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_elr_el2 ( union elr_el2 x ) {
   __asm volatile(
      "MSR s3_4_c4_c0_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ELR_EL2 */
#endif
