//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// 
//------------------------------------------------------------------------------

#ifndef H_ICC_ASGI1R_EL1
#define H_ICC_ASGI1R_EL1

union icc_asgi1r_el1 {
   unsigned long _;
   struct {
      unsigned long targetlist : 16;
      unsigned long aff1 : 8;
      unsigned long intid : 4;
      unsigned long res0_31_28 : 4;
      unsigned long aff2 : 8;
      unsigned long irm : 1;
      unsigned long res0_43_41 : 3;
      unsigned long rs : 4;
      unsigned long aff3 : 8;
      unsigned long res0_63_56 : 8;
   };
};



/* H_ICC_ASGI1R_EL1 */
#endif
