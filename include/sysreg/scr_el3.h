//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_SCR_EL3
#define H_SCR_EL3

union scr_el3 {
   uint64 _;
   struct {
      uint64 ns : 1;
      uint64 irq : 1;
      uint64 fiq : 1;
      uint64 ea : 1;
      uint64 res1_5_4 : 2;
      uint64 res0_6 : 1;
      uint64 smd : 1;
      uint64 hce : 1;
      uint64 sif : 1;
      uint64 rw : 1;
      uint64 st : 1;
      uint64 twi : 1;
      uint64 twe : 1;
      uint64 tlor : 1;
      uint64 terr : 1;
      uint64 apk : 1;
      uint64 api : 1;
      uint64 eel2 : 1;
      uint64 ease : 1;
      uint64 nmea : 1;
      uint64 fien : 1;
      uint64 res0_24_22 : 3;
      uint64 enscxt : 1;
      uint64 ata : 1;
      uint64 fgten : 1;
      uint64 ecven : 1;
      uint64 tweden : 1;
      uint64 twedel : 4;
      uint64 res0_34 : 1;
      uint64 amvoffen : 1;
      uint64 res0_63_36 : 28;
   };
};

static inline union scr_el3 r_scr_el3 ( void ) {
   union scr_el3 tmp;
   __asm volatile(
      "MRS %0, s3_6_c1_c1_0"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_scr_el3 ( union scr_el3 x ) {
   __asm volatile(
      "MSR s3_6_c1_c1_0, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_SCR_EL3 */
#endif
