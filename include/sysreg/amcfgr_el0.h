//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_AMCFGR_EL0
#define H_AMCFGR_EL0

union amcfgr_el0 {
   unsigned long _;
   struct {
      unsigned long n : 8;
      unsigned long size : 6;
      unsigned long res0_23_14 : 10;
      unsigned long hdbg : 1;
      unsigned long res0_27_25 : 3;
      unsigned long ncg : 4;
      unsigned long res0_63_32 : 32;
   };
};

static inline union amcfgr_el0 r_amcfgr_el0 ( void ) {
   union amcfgr_el0 tmp;
   __asm volatile(
      "MRS %0, s3_3_c13_c2_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_amcfgr_el0 ( union amcfgr_el0 x ) {
   __asm volatile(
      "MSR s3_3_c13_c2_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_AMCFGR_EL0 */
#endif
