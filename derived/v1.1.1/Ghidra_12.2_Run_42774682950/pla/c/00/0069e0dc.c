/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0069e0dc; name: FUN_0069e0dc
 */


void FUN_0069e0dc(long *param_1)

{
  long *plVar1;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  *param_1 = (long)(PTR_DAT_04375d70 + 0x10);
                    /* try { // try from 0069e0fc to 0069e0ff has its CatchHandler @ 0069e164 */
  FUN_00698788();
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


