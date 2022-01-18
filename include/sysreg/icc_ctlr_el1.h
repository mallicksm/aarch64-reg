//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_ICC_CTLR_EL1
#define H_ICC_CTLR_EL1

union icc_ctlr_el1 {
   unsigned long _;
   struct {
      unsigned long cbpr : 1;
      unsigned long eoimode : 1;
      unsigned long res0_5_2 : 4;
      unsigned long pmhe : 1;
      unsigned long res0_7 : 1;
      unsigned long pribits : 3;
      unsigned long idbits : 3;
      unsigned long seis : 1;
      unsigned long a3v : 1;
      unsigned long res0_17_16 : 2;
      unsigned long rss : 1;
      unsigned long extrange : 1;
      unsigned long res0_63_20 : 44;
   };
};

static inline union icc_ctlr_el1 r_icc_ctlr_el1 ( void ) {
   union icc_ctlr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c12_c12_4"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_icc_ctlr_el1 ( union icc_ctlr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c12_c12_4, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ICC_CTLR_EL1 */
#endif
