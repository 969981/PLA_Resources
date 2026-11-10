/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00825e3c; name: FUN_00825e3c
 */


void FUN_00825e3c(long *param_1)

{
  undefined *puVar1;
  
  FUN_00850c64();
  *param_1 = (long)(PTR_DAT_04377cc8 + 0x10);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN_007e8f94();
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_007e8f94(param_1 + 0x18);
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((long)param_1 + 0xd4) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  puVar1 = PTR_DAT_04377cd0;
  param_1[0x23] = 0;
  *(undefined2 *)(param_1 + 0x24) = *(undefined2 *)puVar1;
  return;
}


