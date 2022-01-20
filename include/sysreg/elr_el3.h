//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_ELR_EL3
#define H_ELR_EL3

union elr_el3 {
   uint64 _;
   struct {
      uint64 Return_address : 64;
   };
};

static inline union elr_el3 r_elr_el3 ( void ) {
   union elr_el3 tmp;
   __asm volatile(
      "MRS %0, s3_6_c4_c0_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_elr_el3 ( union elr_el3 x ) {
   __asm volatile(
      "MSR s3_6_c4_c0_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ELR_EL3 */
#endif
