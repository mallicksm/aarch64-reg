//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_PMSIDR_EL1
#define H_PMSIDR_EL1

union pmsidr_el1 {
   uint64 _;
   struct {
      uint64 fe : 1;
      uint64 ft : 1;
      uint64 fl : 1;
      uint64 archinst : 1;
      uint64 lds : 1;
      uint64 ernd : 1;
      uint64 res0_7_6 : 2;
      uint64 interval : 4;
      uint64 maxsize : 4;
      uint64 countsize : 4;
      uint64 res0_63_20 : 44;
   };
};

static inline union pmsidr_el1 r_pmsidr_el1 ( void ) {
   union pmsidr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c9_c9_7"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_pmsidr_el1 ( union pmsidr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c9_c9_7, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_PMSIDR_EL1 */
#endif
