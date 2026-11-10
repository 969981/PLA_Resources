/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013954c0; name: FUN_013954c0
 */


void FUN_013954c0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[4] = param_2;
  param_1[5] = 0x5c0b81702e05c0;
  *(undefined4 *)(param_1 + 0x62) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)((long)param_1 + 0x314) = 2;
  FUN_0139550c(param_1 + 1,param_3);
  return;
}


