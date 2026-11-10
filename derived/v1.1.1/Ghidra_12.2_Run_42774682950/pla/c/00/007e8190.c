/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e8190; name: FUN_007e8190
 */


void FUN_007e8190(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_04377498;
  puVar1 = PTR_DAT_04377490;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = (long)(puVar2 + 0x10);
  param_1[5] = (long)(puVar2 + 0x68);
  param_1[2] = (long)(param_1 + 6);
  param_1[3] = 0x50;
  FUN_02cbbc50(param_1 + 1);
  return;
}


