//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_HFGITR_EL2
#define H_HFGITR_EL2

union hfgitr_el2 {
   unsigned long _;
   struct {
      unsigned long icialluis : 1;
      unsigned long iciallu : 1;
      unsigned long icivau : 1;
      unsigned long dcivac : 1;
      unsigned long dcisw : 1;
      unsigned long dccsw : 1;
      unsigned long dccisw : 1;
      unsigned long dccvau : 1;
      unsigned long dccvap : 1;
      unsigned long dccvadp : 1;
      unsigned long dccivac : 1;
      unsigned long dczva : 1;
      unsigned long ats1e1r : 1;
      unsigned long ats1e1w : 1;
      unsigned long ats1e0r : 1;
      unsigned long ats1e0w : 1;
      unsigned long ats1e1rp : 1;
      unsigned long ats1e1wp : 1;
      unsigned long tlbivmalle1os : 1;
      unsigned long tlbivae1os : 1;
      unsigned long tlbiaside1os : 1;
      unsigned long tlbivaae1os : 1;
      unsigned long tlbivale1os : 1;
      unsigned long tlbivaale1os : 1;
      unsigned long tlbirvae1os : 1;
      unsigned long tlbirvaae1os : 1;
      unsigned long tlbirvale1os : 1;
      unsigned long tlbirvaale1os : 1;
      unsigned long tlbivmalle1is : 1;
      unsigned long tlbivae1is : 1;
      unsigned long tlbiaside1is : 1;
      unsigned long tlbivaae1is : 1;
      unsigned long tlbivale1is : 1;
      unsigned long tlbivaale1is : 1;
      unsigned long tlbirvae1is : 1;
      unsigned long tlbirvaae1is : 1;
      unsigned long tlbirvale1is : 1;
      unsigned long tlbirvaale1is : 1;
      unsigned long tlbirvae1 : 1;
      unsigned long tlbirvaae1 : 1;
      unsigned long tlbirvale1 : 1;
      unsigned long tlbirvaale1 : 1;
      unsigned long tlbivmalle1 : 1;
      unsigned long tlbivae1 : 1;
      unsigned long tlbiaside1 : 1;
      unsigned long tlbivaae1 : 1;
      unsigned long tlbivale1 : 1;
      unsigned long tlbivaale1 : 1;
      unsigned long cfprctx : 1;
      unsigned long dvprctx : 1;
      unsigned long cpprctx : 1;
      unsigned long eret : 1;
      unsigned long svc_el0 : 1;
      unsigned long svc_el1 : 1;
      unsigned long dccvac : 1;
      unsigned long res0_63_55 : 9;
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
