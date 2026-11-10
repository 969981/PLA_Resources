/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01383ba8; name: FUN_01383ba8
 */


void FUN_01383ba8(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  FUN_00d37d1c(param_1,param_2,0,0);
  *param_1 = &PTR_LAB_04207fd0;
  param_1[9] = &PTR_LAB_042080d0;
  param_1[10] = &PTR_LAB_04208118;
  FUN_01383c14(param_1 + 0x9b);
  param_1[0xd2] = 0;
  param_1[0xd1] = 0;
  *(undefined4 *)((long)param_1 + 0x68c) = *param_3;
  *(undefined4 *)(param_1 + 0xd1) = param_3[1];
  param_1[0xd2] = *(undefined8 *)(param_3 + 2);
  return;
}


