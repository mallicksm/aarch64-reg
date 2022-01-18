//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_PMSEVFR_EL1
#define H_PMSEVFR_EL1

union pmsevfr_el1 {
   unsigned long _;
   struct {
      unsigned long res0_0 : 1;
      unsigned long e_1_ : 1;
      unsigned long res0_2 : 1;
      unsigned long e_3_ : 1;
      unsigned long res0_4 : 1;
      unsigned long e_5_ : 1;
      unsigned long res0_6 : 1;
      unsigned long e_7_ : 1;
      unsigned long res0_10_8 : 3;
      unsigned long e_11_ : 1;
      unsigned long e_12_ : 1;
      unsigned long e_13_ : 1;
      unsigned long e_14_ : 1;
      unsigned long e_15_ : 1;
      unsigned long res0_16 : 1;
      unsigned long e_17_ : 1;
      unsigned long e_18_ : 1;
      unsigned long res0_23_19 : 5;
      unsigned long e_24_ : 1;
      unsigned long e_25_ : 1;
      unsigned long e_26_ : 1;
      unsigned long e_27_ : 1;
      unsigned long e_28_ : 1;
      unsigned long e_29_ : 1;
      unsigned long e_30_ : 1;
      unsigned long e_31_ : 1;
      unsigned long res0_47_32 : 16;
      unsigned long e_48_ : 1;
      unsigned long e_49_ : 1;
      unsigned long e_50_ : 1;
      unsigned long e_51_ : 1;
      unsigned long e_52_ : 1;
      unsigned long e_53_ : 1;
      unsigned long e_54_ : 1;
      unsigned long e_55_ : 1;
      unsigned long e_56_ : 1;
      unsigned long e_57_ : 1;
      unsigned long e_58_ : 1;
      unsigned long e_59_ : 1;
      unsigned long e_60_ : 1;
      unsigned long e_61_ : 1;
      unsigned long e_62_ : 1;
      unsigned long e_63_ : 1;
   };
};

static inline union pmsevfr_el1 r_pmsevfr_el1 ( void ) {
   union pmsevfr_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c9_c9_5"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_pmsevfr_el1 ( union pmsevfr_el1 x ) {
   __asm volatile(
      "MSR s3_0_c9_c9_5, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_PMSEVFR_EL1 */
#endif
