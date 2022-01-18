//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_HCR_EL2
#define H_HCR_EL2

union hcr_el2 {
   unsigned long _;
   struct {
      unsigned long vm : 1;
      unsigned long swio : 1;
      unsigned long ptw : 1;
      unsigned long fmo : 1;
      unsigned long imo : 1;
      unsigned long amo : 1;
      unsigned long vf : 1;
      unsigned long vi : 1;
      unsigned long vse : 1;
      unsigned long fb : 1;
      unsigned long bsu : 2;
      unsigned long dc : 1;
      unsigned long twi : 1;
      unsigned long twe : 1;
      unsigned long tid0 : 1;
      unsigned long tid1 : 1;
      unsigned long tid2 : 1;
      unsigned long tid3 : 1;
      unsigned long tsc : 1;
      unsigned long tidcp : 1;
      unsigned long tacr : 1;
      unsigned long tsw : 1;
      unsigned long tpcp : 1;
      unsigned long tpu : 1;
      unsigned long ttlb : 1;
      unsigned long tvm : 1;
      unsigned long tge : 1;
      unsigned long tdz : 1;
      unsigned long hcd : 1;
      unsigned long trvm : 1;
      unsigned long rw : 1;
      unsigned long cd : 1;
      unsigned long id : 1;
      unsigned long e2h : 1;
      unsigned long tlor : 1;
      unsigned long terr : 1;
      unsigned long tea : 1;
      unsigned long miocnce : 1;
      unsigned long res0_39 : 1;
      unsigned long apk : 1;
      unsigned long api : 1;
      unsigned long nv : 1;
      unsigned long nv1 : 1;
      unsigned long at : 1;
      unsigned long nv2 : 1;
      unsigned long fwb : 1;
      unsigned long fien : 1;
      unsigned long res0_48 : 1;
      unsigned long tid4 : 1;
      unsigned long ticab : 1;
      unsigned long amvoffen : 1;
      unsigned long tocu : 1;
      unsigned long enscxt : 1;
      unsigned long ttlbis : 1;
      unsigned long ttlbos : 1;
      unsigned long ata : 1;
      unsigned long dct : 1;
      unsigned long tid5 : 1;
      unsigned long tweden : 1;
      unsigned long twedel : 4;
   };
};

static inline union hcr_el2 r_hcr_el2 ( void ) {
   union hcr_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c1_c1_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_hcr_el2 ( union hcr_el2 x ) {
   __asm volatile(
      "MSR s3_4_c1_c1_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_HCR_EL2 */
#endif
