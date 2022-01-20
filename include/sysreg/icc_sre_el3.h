//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_ICC_SRE_EL3
#define H_ICC_SRE_EL3

union icc_sre_el3 {
   uint64 _;
   struct {
      uint64 sre : 1;
      uint64 dfb : 1;
      uint64 dib : 1;
      uint64 enable : 1;
      uint64 res0_63_4 : 60;
   };
};

static inline union icc_sre_el3 r_icc_sre_el3 ( void ) {
   union icc_sre_el3 tmp;
   __asm volatile(
      "MRS %0, s3_6_c12_c12_5"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_icc_sre_el3 ( union icc_sre_el3 x ) {
   __asm volatile(
      "MSR s3_6_c12_c12_5, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ICC_SRE_EL3 */
#endif
