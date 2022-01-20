//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_ID_AA64MMFR2_EL1
#define H_ID_AA64MMFR2_EL1

union id_aa64mmfr2_el1 {
   uint64 _;
   struct {
      uint64 cnp : 4;
      uint64 uao : 4;
      uint64 lsm : 4;
      uint64 iesb : 4;
      uint64 varange : 4;
      uint64 ccidx : 4;
      uint64 nv : 4;
      uint64 st : 4;
      uint64 at : 4;
      uint64 ids : 4;
      uint64 fwb : 4;
      uint64 res0_47_44 : 4;
      uint64 ttl : 4;
      uint64 bbm : 4;
      uint64 evt : 4;
      uint64 e0pd : 4;
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
