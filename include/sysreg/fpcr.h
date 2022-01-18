//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_FPCR
#define H_FPCR

union fpcr {
   unsigned long _;
   struct {
      unsigned long res0_7_0 : 8;
      unsigned long ioe : 1;
      unsigned long dze : 1;
      unsigned long ofe : 1;
      unsigned long ufe : 1;
      unsigned long ixe : 1;
      unsigned long res0_14_13 : 2;
      unsigned long ide : 1;
      unsigned long len : 3;
      unsigned long fz16 : 1;
      unsigned long stride : 2;
      unsigned long rmode : 2;
      unsigned long fz : 1;
      unsigned long dn : 1;
      unsigned long ahp : 1;
      unsigned long res0_63_27 : 37;
   };
};

static inline union fpcr r_fpcr ( void ) {
   union fpcr tmp;
   __asm volatile(
      "MRS %0, s3_3_c4_c4_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_fpcr ( union fpcr x ) {
   __asm volatile(
      "MSR s3_3_c4_c4_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_FPCR */
#endif
