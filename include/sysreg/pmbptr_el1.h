//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_PMBPTR_EL1
#define H_PMBPTR_EL1

union pmbptr_el1 {
   unsigned long _;
   struct {
      unsigned long ptr : 64;
   };
};

static inline union pmbptr_el1 r_pmbptr_el1 ( void ) {
   union pmbptr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c9_c10_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_pmbptr_el1 ( union pmbptr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c9_c10_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_PMBPTR_EL1 */
#endif
