//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_RMR_EL3
#define H_RMR_EL3

union rmr_el3 {
   uint64 _;
   struct {
      uint64 aa64 : 1;
      uint64 rr : 1;
      uint64 res0_63_2 : 62;
   };
};

static inline union rmr_el3 r_rmr_el3 ( void ) {
   union rmr_el3 tmp;
   __asm volatile(
      "MRS %0, s3_6_c12_c0_2"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_rmr_el3 ( union rmr_el3 x ) {
   __asm volatile(
      "MSR s3_6_c12_c0_2, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_RMR_EL3 */
#endif
