//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_ICC_CTLR_EL3
#define H_ICC_CTLR_EL3

union icc_ctlr_el3 {
   unsigned long _;
   struct {
      unsigned long cbpr_el1s : 1;
      unsigned long cbpr_el1ns : 1;
      unsigned long eoimode_el3 : 1;
      unsigned long eoimode_el1s : 1;
      unsigned long eoimode_el1ns : 1;
      unsigned long rm : 1;
      unsigned long pmhe : 1;
      unsigned long res0_7 : 1;
      unsigned long pribits : 3;
      unsigned long idbits : 3;
      unsigned long seis : 1;
      unsigned long a3v : 1;
      unsigned long res0_16 : 1;
      unsigned long nds : 1;
      unsigned long rss : 1;
      unsigned long extrange : 1;
      unsigned long res0_63_20 : 44;
   };
};

static inline union icc_ctlr_el3 r_icc_ctlr_el3 ( void ) {
   union icc_ctlr_el3 tmp;
   __asm volatile(
      "MRS %0, s3_6_c12_c12_4"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_icc_ctlr_el3 ( union icc_ctlr_el3 x ) {
   __asm volatile(
      "MSR s3_6_c12_c12_4, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ICC_CTLR_EL3 */
#endif
