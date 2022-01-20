//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_CNTVOFF_EL2
#define H_CNTVOFF_EL2

union cntvoff_el2 {
   uint64 _;
   struct {
      uint64 Virtual_offset : 64;
   };
};

static inline union cntvoff_el2 r_cntvoff_el2 ( void ) {
   union cntvoff_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c14_c0_3"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_cntvoff_el2 ( union cntvoff_el2 x ) {
   __asm volatile(
      "MSR s3_4_c14_c0_3, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_CNTVOFF_EL2 */
#endif
