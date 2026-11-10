/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e504d4; name: FUN_02e504d4
 */


void FUN_02e504d4(undefined4 *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 10);
  FUN_02e437f0(param_1 + 6);
  *(undefined8 *)(param_1 + 6) = uVar1;
  FUN_02e43834(param_1 + 6);
  param_1[0x18] = param_2[6];
  param_1[0x19] = param_2[7];
  param_1[0x1b] = param_2[8];
  *param_1 = param_2[3];
  param_1[1] = param_2[4];
  param_1[2] = param_2[5];
  param_1[3] = *param_2;
  param_1[4] = param_2[1];
  param_1[5] = param_2[2];
  param_1[0x1d] = param_2[0xe];
  FUN_02e502d8(param_1,*(undefined1 *)(param_2 + 0xf),param_3);
  return;
}


