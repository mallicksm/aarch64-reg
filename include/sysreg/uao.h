//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_UAO
#define H_UAO

union uao {
   unsigned long _;
   struct {
      unsigned long res0_22_0 : 23;
      unsigned long uao : 1;
      unsigned long res0_63_24 : 40;
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
