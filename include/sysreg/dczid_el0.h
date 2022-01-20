//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_DCZID_EL0
#define H_DCZID_EL0

union dczid_el0 {
   uint64 _;
   struct {
      uint64 bs : 4;
      uint64 dzp : 1;
      uint64 res0_63_5 : 59;
   };
};

static inline union dczid_el0 r_dczid_el0 ( void ) {
   union dczid_el0 tmp;
   __asm volatile(
      "MRS %0, s3_3_c0_c0_7"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_dczid_el0 ( union dczid_el0 x ) {
   __asm volatile(
      "MSR s3_3_c0_c0_7, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_DCZID_EL0 */
#endif
