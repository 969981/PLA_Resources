/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014b89d4; name: FUN_014b89d4
 */


void FUN_014b89d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  FUN_00d37d1c(param_1,param_2,param_4 & 1,0);
  *param_1 = &PTR_LAB_04214f98;
  param_1[9] = &PTR_LAB_04215098;
  param_1[10] = &PTR_LAB_042150e0;
  FUN_014b8a24(param_1 + 0x9b);
  param_1[0xd1] = param_3;
  return;
}


