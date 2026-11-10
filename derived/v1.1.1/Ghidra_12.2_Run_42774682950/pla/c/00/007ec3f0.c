/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ec3f0; name: FUN_007ec3f0
 */


void FUN_007ec3f0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_007e5db0();
  puVar2 = PTR_DAT_043774e0;
  puVar1 = PTR_DAT_043774d8;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[5] = (long)(puVar2 + 0x10);
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0;
  return;
}


