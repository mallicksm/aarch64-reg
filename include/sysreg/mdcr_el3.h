//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_MDCR_EL3
#define H_MDCR_EL3

union mdcr_el3 {
   unsigned long _;
   struct {
      unsigned long res0_5_0 : 6;
      unsigned long tpm : 1;
      unsigned long res0_8_7 : 2;
      unsigned long tda : 1;
      unsigned long tdosa : 1;
      unsigned long res0_11 : 1;
      unsigned long nspb : 2;
      unsigned long spd32 : 2;
      unsigned long sdd : 1;
      unsigned long spme : 1;
      unsigned long ste : 1;
      unsigned long ttrf : 1;
      unsigned long edad : 1;
      unsigned long epmad : 1;
      unsigned long res0_22 : 1;
      unsigned long sccd : 1;
      unsigned long res0_26_24 : 3;
      unsigned long tdcc : 1;
      unsigned long mtpme : 1;
      unsigned long res0_63_29 : 35;
   };
};

static inline union mdcr_el3 r_mdcr_el3 ( void ) {
   union mdcr_el3 tmp;
   __asm volatile(
      "MRS %0, s3_6_c1_c3_1"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_mdcr_el3 ( union mdcr_el3 x ) {
   __asm volatile(
      "MSR s3_6_c1_c3_1, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_MDCR_EL3 */
#endif
