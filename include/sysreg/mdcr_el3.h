//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_MDCR_EL3
#define H_MDCR_EL3

union mdcr_el3 {
   uint64 _;
   struct {
      uint64 res0_5_0 : 6;
      uint64 tpm : 1;
      uint64 res0_8_7 : 2;
      uint64 tda : 1;
      uint64 tdosa : 1;
      uint64 res0_11 : 1;
      uint64 nspb : 2;
      uint64 spd32 : 2;
      uint64 sdd : 1;
      uint64 spme : 1;
      uint64 ste : 1;
      uint64 ttrf : 1;
      uint64 edad : 1;
      uint64 epmad : 1;
      uint64 res0_22 : 1;
      uint64 sccd : 1;
      uint64 res0_26_24 : 3;
      uint64 tdcc : 1;
      uint64 mtpme : 1;
      uint64 res0_63_29 : 35;
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
