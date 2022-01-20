//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_AMAIR_EL3
#define H_AMAIR_EL3

union amair_el3 {
   uint64 _;
   struct {
      uint64 impdef_63_0 : 64;
   };
};

static inline union amair_el3 r_amair_el3 ( void ) {
   union amair_el3 tmp;
   __asm volatile(
      "MRS %0, s3_6_c10_c3_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_amair_el3 ( union amair_el3 x ) {
   __asm volatile(
      "MSR s3_6_c10_c3_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_AMAIR_EL3 */
#endif
