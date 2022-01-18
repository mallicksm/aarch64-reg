//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_SCR_EL3
#define H_SCR_EL3

union scr_el3 {
   unsigned long _;
   struct {
      unsigned long ns : 1;
      unsigned long irq : 1;
      unsigned long fiq : 1;
      unsigned long ea : 1;
      unsigned long res1_5_4 : 2;
      unsigned long res0_6 : 1;
      unsigned long smd : 1;
      unsigned long hce : 1;
      unsigned long sif : 1;
      unsigned long rw : 1;
      unsigned long st : 1;
      unsigned long twi : 1;
      unsigned long twe : 1;
      unsigned long tlor : 1;
      unsigned long terr : 1;
      unsigned long apk : 1;
      unsigned long api : 1;
      unsigned long eel2 : 1;
      unsigned long ease : 1;
      unsigned long nmea : 1;
      unsigned long fien : 1;
      unsigned long res0_24_22 : 3;
      unsigned long enscxt : 1;
      unsigned long ata : 1;
      unsigned long fgten : 1;
      unsigned long ecven : 1;
      unsigned long tweden : 1;
      unsigned long twedel : 4;
      unsigned long res0_34 : 1;
      unsigned long amvoffen : 1;
      unsigned long res0_63_36 : 28;
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
