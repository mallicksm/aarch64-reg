//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_GCR_EL1
#define H_GCR_EL1

union gcr_el1 {
   unsigned long _;
   struct {
      unsigned long exclude : 16;
      unsigned long rrnd : 1;
      unsigned long res0_63_17 : 47;
   };
};

static inline union gcr_el1 r_gcr_el1 ( void ) {
   union gcr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c1_c0_6"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_gcr_el1 ( union gcr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c1_c0_6, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_GCR_EL1 */
#endif
