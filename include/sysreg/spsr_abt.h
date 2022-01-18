//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_SPSR_ABT
#define H_SPSR_ABT

union spsr_abt {
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

static inline union spsr_abt r_spsr_abt ( void ) {
   union spsr_abt tmp;
   __asm volatile(
      "MRS %0, s3_4_c4_c3_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_spsr_abt ( union spsr_abt x ) {
   __asm volatile(
      "MSR s3_4_c4_c3_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_SPSR_ABT */
#endif
