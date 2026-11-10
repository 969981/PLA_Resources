/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002b0a28; name: FUN_002b0a28
 */


void FUN_002b0a28(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[1] = param_2;
  puVar1 = PTR_DAT_04373430;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (*(int *)PTR_DAT_04373438 != 0) {
    FUN_0032d2b0(PTR_DAT_04373438);
  }
  puVar1 = PTR_DAT_043730c0;
  param_1[3] = (long)PTR_DAT_043730c0;
  param_1[2] = (long)puVar1;
  return;
}


