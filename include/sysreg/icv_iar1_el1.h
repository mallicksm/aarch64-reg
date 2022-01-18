//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_ICV_IAR1_EL1
#define H_ICV_IAR1_EL1

union icv_iar1_el1 {
   unsigned long _;
   struct {
      unsigned long intid : 24;
      unsigned long res0_63_24 : 40;
   };
};

static inline union icv_iar1_el1 r_icv_iar1_el1 ( void ) {
   union icv_iar1_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c12_c12_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_icv_iar1_el1 ( union icv_iar1_el1 x ) {
   __asm volatile(
      "MSR s3_0_c12_c12_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ICV_IAR1_EL1 */
#endif
