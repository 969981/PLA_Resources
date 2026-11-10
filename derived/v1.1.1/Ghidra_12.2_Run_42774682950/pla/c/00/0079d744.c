/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0079d744; name: FUN_0079d744
 */


void FUN_0079d744(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)(PTR_DAT_04376f30 + 0x10);
                    /* try { // try from 0079d760 to 0079d763 has its CatchHandler @ 0079d7c0 */
  FUN_0079d7dc();
  if (((param_1[1] & 1U) != 0) &&
     (plVar1 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar1 == 0 && plVar1 != (long *)0x0)) {
    if ((*(byte *)(plVar1 + 1) & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,plVar1[3]);
    }
    FUN_002e2ea0(PTR_LAB_04373088,plVar1);
  }
  FUN_007a0178(param_1 + 5);
  FUN_00326c10(param_1 + 2);
  return;
}


