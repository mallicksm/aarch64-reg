//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_HFGITR_EL2
#define H_HFGITR_EL2

union hfgitr_el2 {
   uint64 _;
   struct {
      uint64 icialluis : 1;
      uint64 iciallu : 1;
      uint64 icivau : 1;
      uint64 dcivac : 1;
      uint64 dcisw : 1;
      uint64 dccsw : 1;
      uint64 dccisw : 1;
      uint64 dccvau : 1;
      uint64 dccvap : 1;
      uint64 dccvadp : 1;
      uint64 dccivac : 1;
      uint64 dczva : 1;
      uint64 ats1e1r : 1;
      uint64 ats1e1w : 1;
      uint64 ats1e0r : 1;
      uint64 ats1e0w : 1;
      uint64 ats1e1rp : 1;
      uint64 ats1e1wp : 1;
      uint64 tlbivmalle1os : 1;
      uint64 tlbivae1os : 1;
      uint64 tlbiaside1os : 1;
      uint64 tlbivaae1os : 1;
      uint64 tlbivale1os : 1;
      uint64 tlbivaale1os : 1;
      uint64 tlbirvae1os : 1;
      uint64 tlbirvaae1os : 1;
      uint64 tlbirvale1os : 1;
      uint64 tlbirvaale1os : 1;
      uint64 tlbivmalle1is : 1;
      uint64 tlbivae1is : 1;
      uint64 tlbiaside1is : 1;
      uint64 tlbivaae1is : 1;
      uint64 tlbivale1is : 1;
      uint64 tlbivaale1is : 1;
      uint64 tlbirvae1is : 1;
      uint64 tlbirvaae1is : 1;
      uint64 tlbirvale1is : 1;
      uint64 tlbirvaale1is : 1;
      uint64 tlbirvae1 : 1;
      uint64 tlbirvaae1 : 1;
      uint64 tlbirvale1 : 1;
      uint64 tlbirvaale1 : 1;
      uint64 tlbivmalle1 : 1;
      uint64 tlbivae1 : 1;
      uint64 tlbiaside1 : 1;
      uint64 tlbivaae1 : 1;
      uint64 tlbivale1 : 1;
      uint64 tlbivaale1 : 1;
      uint64 cfprctx : 1;
      uint64 dvprctx : 1;
      uint64 cpprctx : 1;
      uint64 eret : 1;
      uint64 svc_el0 : 1;
      uint64 svc_el1 : 1;
      uint64 dccvac : 1;
      uint64 res0_63_55 : 9;
   };
};

static inline union hfgitr_el2 r_hfgitr_el2 ( void ) {
   union hfgitr_el2 tmp;
   __asm volatile(
      "MRS %0, s3_4_c1_c1_6"
      : "=r" (tmp._)
   );
   return tmp;
}

static inline void w_hfgitr_el2 ( union hfgitr_el2 x ) {
   __asm volatile(
      "MSR s3_4_c1_c1_6, %0"
      : /* w */
      : "r" (x._)
   );
}

/* H_HFGITR_EL2 */
#endif
