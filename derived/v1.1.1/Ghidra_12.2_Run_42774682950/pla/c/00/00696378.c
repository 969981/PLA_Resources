/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00696378; name: FUN_00696378
 */


void FUN_00696378(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[1] = param_2;
  puVar1 = PTR_DAT_04375ce8;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (*(int *)PTR_DAT_04375cf0 != 0) {
    FUN_0032d2b0(PTR_DAT_04375cf0);
  }
  param_1[2] = (long)PTR_DAT_043730c0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  return;
}


