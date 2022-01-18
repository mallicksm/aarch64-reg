//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_ICV_IGRPEN1_EL1
#define H_ICV_IGRPEN1_EL1

union icv_igrpen1_el1 {
   unsigned long _;
   struct {
      unsigned long enable : 1;
      unsigned long res0_63_1 : 63;
   };
};

static inline union icv_igrpen1_el1 r_icv_igrpen1_el1 ( void ) {
   union icv_igrpen1_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c12_c12_7"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_icv_igrpen1_el1 ( union icv_igrpen1_el1 x ) {
   __asm volatile(
      "MSR s3_0_c12_c12_7, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ICV_IGRPEN1_EL1 */
#endif
