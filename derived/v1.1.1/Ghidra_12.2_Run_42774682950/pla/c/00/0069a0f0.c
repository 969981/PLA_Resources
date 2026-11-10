/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0069a0f0; name: FUN_0069a0f0
 */


void FUN_0069a0f0(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)(PTR_DAT_04375cb8 + 0x10);
                    /* try { // try from 0069a108 to 0069a10b has its CatchHandler @ 0069a15c */
  FUN_0069a160();
  if (((param_1[1] & 1U) == 0) ||
     (plVar1 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar1 != 0 || plVar1 == (long *)0x0)) {
    return;
  }
  if ((*(byte *)(plVar1 + 1) & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,plVar1[3]);
  }
  FUN_002e2ea0(PTR_LAB_04373088,plVar1);
  return;
}


