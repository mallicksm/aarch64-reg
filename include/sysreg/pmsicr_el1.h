//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_PMSICR_EL1
#define H_PMSICR_EL1

union pmsicr_el1 {
   uint64 _;
   struct {
      uint64 count : 32;
      uint64 res0_55_32 : 24;
      uint64 ecount : 8;
   };
};

static inline union pmsicr_el1 r_pmsicr_el1 ( void ) {
   union pmsicr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c9_c9_2"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_pmsicr_el1 ( union pmsicr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c9_c9_2, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_PMSICR_EL1 */
#endif
