//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_ICV_CTLR_EL1
#define H_ICV_CTLR_EL1

union icv_ctlr_el1 {
   uint64 _;
   struct {
      uint64 cbpr : 1;
      uint64 eoimode : 1;
      uint64 res0_7_2 : 6;
      uint64 pribits : 3;
      uint64 idbits : 3;
      uint64 seis : 1;
      uint64 a3v : 1;
      uint64 res0_17_16 : 2;
      uint64 rss : 1;
      uint64 extrange : 1;
      uint64 res0_63_20 : 44;
   };
};

static inline union icv_ctlr_el1 r_icv_ctlr_el1 ( void ) {
   union icv_ctlr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c12_c12_4"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_icv_ctlr_el1 ( union icv_ctlr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c12_c12_4, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ICV_CTLR_EL1 */
#endif
