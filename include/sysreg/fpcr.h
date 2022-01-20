//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_FPCR
#define H_FPCR

union fpcr {
   uint64 _;
   struct {
      uint64 res0_7_0 : 8;
      uint64 ioe : 1;
      uint64 dze : 1;
      uint64 ofe : 1;
      uint64 ufe : 1;
      uint64 ixe : 1;
      uint64 res0_14_13 : 2;
      uint64 ide : 1;
      uint64 len : 3;
      uint64 fz16 : 1;
      uint64 stride : 2;
      uint64 rmode : 2;
      uint64 fz : 1;
      uint64 dn : 1;
      uint64 ahp : 1;
      uint64 res0_63_27 : 37;
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
