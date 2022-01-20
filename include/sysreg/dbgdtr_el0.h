//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_DBGDTR_EL0
#define H_DBGDTR_EL0

union dbgdtr_el0 {
   uint64 _;
   struct {
      uint64 lowword : 32;
      uint64 highword : 32;
   };
};

static inline union dbgdtr_el0 r_dbgdtr_el0 ( void ) {
   union dbgdtr_el0 tmp;
   __asm volatile(
      "MRS %0, s2_3_c0_c4_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_dbgdtr_el0 ( union dbgdtr_el0 x ) {
   __asm volatile(
      "MSR s2_3_c0_c4_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_DBGDTR_EL0 */
#endif
