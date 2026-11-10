/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02821dd8; name: FUN_02821dd8
 */


void FUN_02821dd8(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  FUN_0115a4bc();
  *(undefined4 *)(param_1 + 0x13) = param_2;
  *param_1 = &DAT_0426e5e0;
  param_1[9] = &PTR_LAB_0426e638;
  param_1[10] = &DAT_0426e680;
  *(undefined4 *)(param_1 + 0x12) = param_2;
  *(undefined4 *)((long)param_1 + 0x94) = param_3;
  *(undefined4 *)(param_1 + 0x1a) = 6;
  param_1[0x18] = param_4;
  param_1[0x19] = 0;
  uVar1 = FUN_02821e70(param_1);
  *(undefined4 *)((long)param_1 + 0x9c) = uVar1;
  FUN_0281e088(param_1[0x18],*(undefined4 *)(param_1 + 0x13),param_1 + 0x14);
  FUN_0281e088(param_1[0x18],*(undefined4 *)((long)param_1 + 0x9c),param_1 + 0x16);
  return;
}


