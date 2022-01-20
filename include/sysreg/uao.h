//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_UAO
#define H_UAO

union uao {
   uint64 _;
   struct {
      uint64 res0_22_0 : 23;
      uint64 uao : 1;
      uint64 res0_63_24 : 40;
   };
};

static inline union uao r_uao ( void ) {
   union uao tmp;
   __asm volatile(
      "MRS %0, s3_0_c4_c2_4"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_uao ( union uao x ) {
   __asm volatile(
      "MSR s3_0_c4_c2_4, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_UAO */
#endif
