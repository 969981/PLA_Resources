/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007264b8; name: FUN_007264b8
 */


void FUN_007264b8(long *param_1)

{
  long *plVar1;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  *param_1 = (long)(PTR_DAT_04376670 + 0x10);
                    /* try { // try from 007264d8 to 007264db has its CatchHandler @ 00726540 */
  FUN_0071cca4();
  if ((((param_1[1] & 1U) != 0) &&
      (plVar1 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar1 == 0)) && (plVar1 != (long *)0x0)
     ) {
    if ((*(byte *)(plVar1 + 1) & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,plVar1[3]);
    }
    FUN_002e2ea0(PTR_LAB_04373088,plVar1);
  }
  FUN_002e2ea0(PTR_LAB_04373088,param_1);
  return;
}


