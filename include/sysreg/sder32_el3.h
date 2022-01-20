//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_SDER32_EL3
#define H_SDER32_EL3

union sder32_el3 {
   uint64 _;
   struct {
      uint64 suiden : 1;
      uint64 suniden : 1;
      uint64 res0_63_2 : 62;
   };
};

static inline union sder32_el3 r_sder32_el3 ( void ) {
   union sder32_el3 tmp;
   __asm volatile(
      "MRS %0, s3_6_c1_c1_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_sder32_el3 ( union sder32_el3 x ) {
   __asm volatile(
      "MSR s3_6_c1_c1_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_SDER32_EL3 */
#endif
