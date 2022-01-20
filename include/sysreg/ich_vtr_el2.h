//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_ICH_VTR_EL2
#define H_ICH_VTR_EL2

union ich_vtr_el2 {
   uint64 _;
   struct {
      uint64 listregs : 5;
      uint64 res0_17_5 : 13;
      uint64 dvim : 1;
      uint64 tds : 1;
      uint64 nv4 : 1;
      uint64 a3v : 1;
      uint64 seis : 1;
      uint64 idbits : 3;
      uint64 prebits : 3;
      uint64 pribits : 3;
      uint64 res0_63_32 : 32;
   };
};

static inline union ich_vtr_el2 r_ich_vtr_el2 ( void ) {
   union ich_vtr_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c12_c11_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_ich_vtr_el2 ( union ich_vtr_el2 x ) {
   __asm volatile(
      "MSR s3_4_c12_c11_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ICH_VTR_EL2 */
#endif
