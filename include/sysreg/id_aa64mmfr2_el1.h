//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_ID_AA64MMFR2_EL1
#define H_ID_AA64MMFR2_EL1

union id_aa64mmfr2_el1 {
   unsigned long _;
   struct {
      unsigned long cnp : 4;
      unsigned long uao : 4;
      unsigned long lsm : 4;
      unsigned long iesb : 4;
      unsigned long varange : 4;
      unsigned long ccidx : 4;
      unsigned long nv : 4;
      unsigned long st : 4;
      unsigned long at : 4;
      unsigned long ids : 4;
      unsigned long fwb : 4;
      unsigned long res0_47_44 : 4;
      unsigned long ttl : 4;
      unsigned long bbm : 4;
      unsigned long evt : 4;
      unsigned long e0pd : 4;
   };
};

static inline union id_aa64mmfr2_el1 r_id_aa64mmfr2_el1 ( void ) {
   union id_aa64mmfr2_el1 tmp;
   __asm volatile(
      "MRS %0, s3_0_c0_c7_2"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_id_aa64mmfr2_el1 ( union id_aa64mmfr2_el1 x ) {
   __asm volatile(
      "MSR s3_0_c0_c7_2, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_ID_AA64MMFR2_EL1 */
#endif
