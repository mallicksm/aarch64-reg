//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_OSECCR_EL1
#define H_OSECCR_EL1

union oseccr_el1 {
   unsigned long _;
   struct {
      unsigned long edeccr : 32;
      unsigned long res0_63_32 : 32;
   };
};

static inline union oseccr_el1 r_oseccr_el1 ( void ) {
   union oseccr_el1 tmp;
   __asm volatile(
      "MRS %0, s2_0_c0_c6_2"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_oseccr_el1 ( union oseccr_el1 x ) {
   __asm volatile(
      "MSR s2_0_c0_c6_2, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_OSECCR_EL1 */
#endif
