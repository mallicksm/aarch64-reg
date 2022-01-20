//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_ELR_EL1
#define H_ELR_EL1

union elr_el1 {
   uint64 _;
   struct {
      uint64 Return_address : 64;
   };
};

static inline union elr_el1 r_elr_el1 ( void ) {
   union elr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c4_c0_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_elr_el1 ( union elr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c4_c0_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ELR_EL1 */
#endif
