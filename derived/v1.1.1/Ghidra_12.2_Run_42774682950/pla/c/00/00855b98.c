/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00855b98; name: FUN_00855b98
 */


void FUN_00855b98(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_007e8f94();
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_007e8f94();
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_007e60f4(param_1 + 0xb,param_3);
  FUN_00821b80(param_1 + 0xf);
  FUN_007f065c(param_1 + 0x11);
  param_1[0xdb] = 0;
  FUN_007f0744(param_1 + 0x11);
  FUN_0085584c(param_1 + 0xdc);
  FUN_00855ad0(param_1,param_2);
  return;
}


