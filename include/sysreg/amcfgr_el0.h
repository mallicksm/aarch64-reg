//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_AMCFGR_EL0
#define H_AMCFGR_EL0

union amcfgr_el0 {
   uint64 _;
   struct {
      uint64 n : 8;
      uint64 size : 6;
      uint64 res0_23_14 : 10;
      uint64 hdbg : 1;
      uint64 res0_27_25 : 3;
      uint64 ncg : 4;
      uint64 res0_63_32 : 32;
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
