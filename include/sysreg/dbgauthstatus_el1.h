//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_DBGAUTHSTATUS_EL1
#define H_DBGAUTHSTATUS_EL1

union dbgauthstatus_el1 {
   unsigned long _;
   struct {
      unsigned long nsid : 2;
      unsigned long nsnid : 2;
      unsigned long sid : 2;
      unsigned long snid : 2;
      unsigned long res0_63_8 : 56;
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
