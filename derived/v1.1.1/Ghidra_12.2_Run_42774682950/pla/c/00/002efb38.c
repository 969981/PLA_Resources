/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002efb38; name: FUN_002efb38
 */


void FUN_002efb38(void)

{
  long lVar1;
  
  if ((*PTR_DAT_043737d0 & 1) != 0) {
    lVar1 = *(long *)PTR_DAT_04373860;
    if (lVar1 != 0) {
                    /* try { // try from 002efb60 to 002efb6b has its CatchHandler @ 002efbbc */
      FUN_002ef710(lVar1 + 8);
      FUN_002ef860(lVar1 + 0x28);
      FUN_002e2ea0(PTR_LAB_04373088,lVar1);
    }
    lVar1 = *(long *)PTR_DAT_04373868;
    if (lVar1 != 0) {
                    /* try { // try from 002efb90 to 002efb9b has its CatchHandler @ 002efbb8 */
      FUN_002ef710(lVar1 + 8);
      FUN_002ef860(lVar1 + 0x28);
      FUN_002e2ea0(PTR_LAB_04373088,lVar1);
      return;
    }
  }
  return;
}


