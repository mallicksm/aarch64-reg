//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_ICV_BPR0_EL1
#define H_ICV_BPR0_EL1

union icv_bpr0_el1 {
   unsigned long _;
   struct {
      unsigned long binarypoint : 3;
      unsigned long res0_63_3 : 61;
   };
};

static inline union icv_bpr0_el1 r_icv_bpr0_el1 ( void ) {
   union icv_bpr0_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c12_c8_3"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_icv_bpr0_el1 ( union icv_bpr0_el1 x ) {
   __asm volatile(
      "MSR s3_0_c12_c8_3, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ICV_BPR0_EL1 */
#endif
