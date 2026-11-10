/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021f6d8; name: FUN_0021f6d8
 */


void FUN_0021f6d8(long *param_1)

{
  undefined *puVar1;
  
  FUN_0021f4dc();
  *(undefined1 *)(param_1 + 6) = 0;
  puVar1 = PTR_DAT_043728d0;
  *(undefined2 *)((long)param_1 + 0x32) = 0;
  param_1[2] = 0;
  param_1[3] = 0x3200000028;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[4] = 0x2800000028;
  param_1[5] = 0x228280000000032;
  *(undefined4 *)((long)param_1 + 0x34) = 0x3f;
  return;
}


