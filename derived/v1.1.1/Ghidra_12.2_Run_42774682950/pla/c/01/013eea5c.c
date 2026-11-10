/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013eea5c; name: FUN_013eea5c
 */


void FUN_013eea5c(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  FUN_00d37d1c(param_1,param_2,param_3 & 1,0);
  *param_1 = &PTR_LAB_0420c1b8;
  param_1[9] = &PTR_LAB_0420c2b8;
  param_1[10] = &PTR_LAB_0420c300;
  FUN_013eeac4(param_1 + 0x9b);
  param_1[0xd8] = 0;
  param_1[0xd7] = 0;
  param_1[0xd6] = 0;
  param_1[0xd5] = 0;
  param_1[0xd4] = 0;
  param_1[0xd3] = 0;
  param_1[0xd2] = 0;
  param_1[0xd1] = 0;
  return;
}


