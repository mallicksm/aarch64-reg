//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_SPSR_UND
#define H_SPSR_UND

union spsr_und {
   uint64 _;
   struct {
      uint64 m_4_0_ : 5;
      uint64 t : 1;
      uint64 f : 1;
      uint64 i : 1;
      uint64 a : 1;
      uint64 e : 1;
      uint64 it_7_2_ : 6;
      uint64 ge : 4;
      uint64 il : 1;
      uint64 dit : 1;
      uint64 pan : 1;
      uint64 ssbs : 1;
      uint64 j : 1;
      uint64 it_1_0_ : 2;
      uint64 q : 1;
      uint64 v : 1;
      uint64 c : 1;
      uint64 z : 1;
      uint64 n : 1;
      uint64 res0_63_32 : 32;
   };
};

static inline union spsr_und r_spsr_und ( void ) {
   union spsr_und tmp;
   __asm volatile(
      "MRS %0, s3_4_c4_c3_2"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_spsr_und ( union spsr_und x ) {
   __asm volatile(
      "MSR s3_4_c4_c3_2, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_SPSR_UND */
#endif
