//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_AIDR_EL1
#define H_AIDR_EL1

union aidr_el1 {
   uint64 _;
   struct {
      uint64 impdef_63_0 : 64;
   };
};

static inline union aidr_el1 r_aidr_el1 ( void ) {
   union aidr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_1_c0_c0_7"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_aidr_el1 ( union aidr_el1 x ) {
   __asm volatile(
      "MSR s3_1_c0_c0_7, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_AIDR_EL1 */
#endif
