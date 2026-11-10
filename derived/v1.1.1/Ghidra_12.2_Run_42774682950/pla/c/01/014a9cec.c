/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014a9cec; name: FUN_014a9cec
 */


void FUN_014a9cec(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,byte param_4)

{
  FUN_00d37d1c(param_1,param_2,0,0);
  *param_1 = &PTR_LAB_04213e80;
  param_1[9] = &PTR_LAB_04213f80;
  param_1[10] = &PTR_LAB_04213fc8;
  FUN_014a9d58(param_1 + 0x9b);
  param_1[0xd1] = 0;
  *(undefined1 *)(param_1 + 0xd2) = 0;
  param_1[0xd1] = *param_3;
  *(byte *)(param_1 + 0xd2) = param_4 & 1;
  return;
}


