//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_PMSLATFR_EL1
#define H_PMSLATFR_EL1

union pmslatfr_el1 {
   uint64 _;
   struct {
      uint64 minlat : 12;
      uint64 res0_63_12 : 52;
   };
};

static inline union pmslatfr_el1 r_pmslatfr_el1 ( void ) {
   union pmslatfr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c9_c9_6"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_pmslatfr_el1 ( union pmslatfr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c9_c9_6, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_PMSLATFR_EL1 */
#endif
