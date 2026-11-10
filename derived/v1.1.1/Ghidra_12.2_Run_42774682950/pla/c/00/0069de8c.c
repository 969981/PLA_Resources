/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0069de8c; name: FUN_0069de8c
 */


void FUN_0069de8c(long *param_1)

{
  long *plVar1;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  *param_1 = (long)(PTR_DAT_04375ca8 + 0x10);
                    /* try { // try from 0069deac to 0069deaf has its CatchHandler @ 0069df14 */
  FUN_0068d5a8();
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


