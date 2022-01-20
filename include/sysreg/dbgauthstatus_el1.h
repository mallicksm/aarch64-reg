//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_DBGAUTHSTATUS_EL1
#define H_DBGAUTHSTATUS_EL1

union dbgauthstatus_el1 {
   uint64 _;
   struct {
      uint64 nsid : 2;
      uint64 nsnid : 2;
      uint64 sid : 2;
      uint64 snid : 2;
      uint64 res0_63_8 : 56;
   };
};

static inline union dbgauthstatus_el1 r_dbgauthstatus_el1 ( void ) {
   union dbgauthstatus_el1 tmp;
   __asm volatile(
      "MRS %0, s2_0_c7_c14_6"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_dbgauthstatus_el1 ( union dbgauthstatus_el1 x ) {
   __asm volatile(
      "MSR s2_0_c7_c14_6, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_DBGAUTHSTATUS_EL1 */
#endif
