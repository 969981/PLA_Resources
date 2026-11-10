/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e890ec; name: FUN_02e890ec
 */


void FUN_02e890ec(undefined8 *param_1,undefined2 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined4 *)((long)param_1 + 0x14) = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)((long)param_1 + 0x36) = 4;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined2 *)((long)param_1 + 0x34) = param_2;
  *param_1 = &PTR_FUN_042a74f0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}


