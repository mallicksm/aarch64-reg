//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_ICH_VTR_EL2
#define H_ICH_VTR_EL2

union ich_vtr_el2 {
   unsigned long _;
   struct {
      unsigned long listregs : 5;
      unsigned long res0_17_5 : 13;
      unsigned long dvim : 1;
      unsigned long tds : 1;
      unsigned long nv4 : 1;
      unsigned long a3v : 1;
      unsigned long seis : 1;
      unsigned long idbits : 3;
      unsigned long prebits : 3;
      unsigned long pribits : 3;
      unsigned long res0_63_32 : 32;
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
