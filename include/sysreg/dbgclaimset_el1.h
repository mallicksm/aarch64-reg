//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_DBGCLAIMSET_EL1
#define H_DBGCLAIMSET_EL1

union dbgclaimset_el1 {
   uint64 _;
   struct {
      uint64 claim : 8;
      uint64 res0_31_8 : 24;
      uint64 res0_63_32 : 32;
   };
};

static inline union dbgclaimset_el1 r_dbgclaimset_el1 ( void ) {
   union dbgclaimset_el1 tmp;
   __asm volatile(
      "MRS %0, s2_0_c7_c8_6"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_dbgclaimset_el1 ( union dbgclaimset_el1 x ) {
   __asm volatile(
      "MSR s2_0_c7_c8_6, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_DBGCLAIMSET_EL1 */
#endif
