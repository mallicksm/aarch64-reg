//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_MPIDR_EL1
#define H_MPIDR_EL1

union mpidr_el1 {
   uint64 _;
   struct {
      uint64 aff0 : 8;
      uint64 aff1 : 8;
      uint64 aff2 : 8;
      uint64 mt : 1;
      uint64 res0_29_25 : 5;
      uint64 u : 1;
      uint64 res1_31 : 1;
      uint64 aff3 : 8;
      uint64 res0_63_40 : 24;
   };
};

static inline union mpidr_el1 r_mpidr_el1 ( void ) {
   union mpidr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c0_c0_5"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_mpidr_el1 ( union mpidr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c0_c0_5, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_MPIDR_EL1 */
#endif
