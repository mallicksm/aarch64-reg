//------------------------------------------------------------------------------
// Automatically generated header file from SysReg_xml_v86A-2020-06
// Author: Soummya Mallick
// Date: 1/18/2022
// 
//------------------------------------------------------------------------------

#ifndef H_ICC_SGI1R_EL1
#define H_ICC_SGI1R_EL1

union icc_sgi1r_el1 {
   uint64 _;
   struct {
      uint64 targetlist : 16;
      uint64 aff1 : 8;
      uint64 intid : 4;
      uint64 res0_31_28 : 4;
      uint64 aff2 : 8;
      uint64 irm : 1;
      uint64 res0_43_41 : 3;
      uint64 rs : 4;
      uint64 aff3 : 8;
      uint64 res0_63_56 : 8;
   };
};



/* H_ICC_SGI1R_EL1 */
#endif
