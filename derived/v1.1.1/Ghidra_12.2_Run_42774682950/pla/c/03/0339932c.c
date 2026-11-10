/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339932c; name: FUN_0339932c
 */


void FUN_0339932c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_LAB_0436f1f8;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  FUN_0334a980(param_1 + 3);
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  param_1[8] = 0;
  param_1[9] = 0x8000000000000000;
  FUN_03399e24(param_1 + 10,param_2);
  param_1[0x17] = 0;
  param_1[0x18] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x19) = 6;
  return;
}


