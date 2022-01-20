//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_ICH_VMCR_EL2
#define H_ICH_VMCR_EL2

union ich_vmcr_el2 {
   uint64 _;
   struct {
      uint64 veng0 : 1;
      uint64 veng1 : 1;
      uint64 vackctl : 1;
      uint64 vfiqen : 1;
      uint64 vcbpr : 1;
      uint64 res0_8_5 : 4;
      uint64 veoim : 1;
      uint64 res0_17_10 : 8;
      uint64 vbpr1 : 3;
      uint64 vbpr0 : 3;
      uint64 vpmr : 8;
      uint64 res0_63_32 : 32;
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
