//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_SPSR_FIQ
#define H_SPSR_FIQ

union spsr_fiq {
   unsigned long _;
   struct {
      unsigned long m_4_0_ : 5;
      unsigned long t : 1;
      unsigned long f : 1;
      unsigned long i : 1;
      unsigned long a : 1;
      unsigned long e : 1;
      unsigned long it_7_2_ : 6;
      unsigned long ge : 4;
      unsigned long il : 1;
      unsigned long dit : 1;
      unsigned long pan : 1;
      unsigned long ssbs : 1;
      unsigned long j : 1;
      unsigned long it_1_0_ : 2;
      unsigned long q : 1;
      unsigned long v : 1;
      unsigned long c : 1;
      unsigned long z : 1;
      unsigned long n : 1;
      unsigned long res0_63_32 : 32;
   };
};

static inline union spsr_fiq r_spsr_fiq ( void ) {
   union spsr_fiq tmp;
   __asm volatile(
      "MRS %0, s3_4_c4_c3_3"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_spsr_fiq ( union spsr_fiq x ) {
   __asm volatile(
      "MSR s3_4_c4_c3_3, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_SPSR_FIQ */
#endif
