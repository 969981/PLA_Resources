/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00db858c; name: FUN_00db858c
 */


void FUN_00db858c(undefined8 *param_1)

{
  FUN_00db85d4();
  *param_1 = &PTR_LAB_041ee298;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[9] = &PTR_LAB_041ee2c8;
  param_1[10] = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0xa00000000;
  *(undefined4 *)((long)param_1 + 100) = 0;
  param_1[0xd] = 0;
  return;
}


