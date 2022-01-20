//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_HCR_EL2
#define H_HCR_EL2

union hcr_el2 {
   uint64 _;
   struct {
      uint64 vm : 1;
      uint64 swio : 1;
      uint64 ptw : 1;
      uint64 fmo : 1;
      uint64 imo : 1;
      uint64 amo : 1;
      uint64 vf : 1;
      uint64 vi : 1;
      uint64 vse : 1;
      uint64 fb : 1;
      uint64 bsu : 2;
      uint64 dc : 1;
      uint64 twi : 1;
      uint64 twe : 1;
      uint64 tid0 : 1;
      uint64 tid1 : 1;
      uint64 tid2 : 1;
      uint64 tid3 : 1;
      uint64 tsc : 1;
      uint64 tidcp : 1;
      uint64 tacr : 1;
      uint64 tsw : 1;
      uint64 tpcp : 1;
      uint64 tpu : 1;
      uint64 ttlb : 1;
      uint64 tvm : 1;
      uint64 tge : 1;
      uint64 tdz : 1;
      uint64 hcd : 1;
      uint64 trvm : 1;
      uint64 rw : 1;
      uint64 cd : 1;
      uint64 id : 1;
      uint64 e2h : 1;
      uint64 tlor : 1;
      uint64 terr : 1;
      uint64 tea : 1;
      uint64 miocnce : 1;
      uint64 res0_39 : 1;
      uint64 apk : 1;
      uint64 api : 1;
      uint64 nv : 1;
      uint64 nv1 : 1;
      uint64 at : 1;
      uint64 nv2 : 1;
      uint64 fwb : 1;
      uint64 fien : 1;
      uint64 res0_48 : 1;
      uint64 tid4 : 1;
      uint64 ticab : 1;
      uint64 amvoffen : 1;
      uint64 tocu : 1;
      uint64 enscxt : 1;
      uint64 ttlbis : 1;
      uint64 ttlbos : 1;
      uint64 ata : 1;
      uint64 dct : 1;
      uint64 tid5 : 1;
      uint64 tweden : 1;
      uint64 twedel : 4;
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
