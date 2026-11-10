/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083b7c4; name: FUN_0083b7c4
 */


void FUN_0083b7c4(long *param_1,long param_2)

{
  undefined *puVar1;
  
  FUN_007ec3f0();
  puVar1 = PTR_DAT_04377e78;
  *(undefined2 *)(param_1 + 0xd) = 0;
  param_1[0xb] = param_2;
  param_1[0xc] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  param_1[0xe] = 0;
  return;
}


