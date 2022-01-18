//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_ICH_VMCR_EL2
#define H_ICH_VMCR_EL2

union ich_vmcr_el2 {
   unsigned long _;
   struct {
      unsigned long veng0 : 1;
      unsigned long veng1 : 1;
      unsigned long vackctl : 1;
      unsigned long vfiqen : 1;
      unsigned long vcbpr : 1;
      unsigned long res0_8_5 : 4;
      unsigned long veoim : 1;
      unsigned long res0_17_10 : 8;
      unsigned long vbpr1 : 3;
      unsigned long vbpr0 : 3;
      unsigned long vpmr : 8;
      unsigned long res0_63_32 : 32;
   };
};

static inline union ich_vmcr_el2 r_ich_vmcr_el2 ( void ) {
   union ich_vmcr_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c12_c11_7"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_ich_vmcr_el2 ( union ich_vmcr_el2 x ) {
   __asm volatile(
      "MSR s3_4_c12_c11_7, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ICH_VMCR_EL2 */
#endif
