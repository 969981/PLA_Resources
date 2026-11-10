/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00695ae0; name: FUN_00695ae0
 */


void FUN_00695ae0(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)(PTR_DAT_04375d10 + 0x10);
                    /* try { // try from 00695af8 to 00695afb has its CatchHandler @ 00695b4c */
  FUN_00695b50();
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


