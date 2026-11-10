/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02874e2c; name: FUN_02874e2c
 */


void FUN_02874e2c(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  
  *param_1 = &PTR_LAB_04270f10;
  param_1[9] = &PTR_LAB_04271010;
  param_1[10] = &PTR_LAB_04271058;
  plVar1 = param_1 + 0x9e;
  FUN_00d37d1c(param_1,param_2,param_3 & 1,0);
  *(undefined4 *)(param_1 + 0x9c) = 0;
  param_1[0x9b] = plVar1;
  param_1[0x9d] = 0;
  *param_1 = &PTR_LAB_04270f10;
  param_1[9] = &PTR_LAB_04271010;
  param_1[10] = &PTR_LAB_04271058;
  *plVar1 = (long)(PTR_DAT_0437a028 + 0x10);
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  FUN_00d16160(param_1 + 0xa1);
  FUN_00d37808(plVar1,0);
  *plVar1 = (long)&PTR_LAB_04271080;
  FUN_02875040(param_1 + 0xa3);
  param_1[0xa9] = 0;
  FUN_00d16160(param_1 + 0xaa);
  param_1[0xad] = 0;
  FUN_00d16160(param_1 + 0xae);
  param_1[0xb1] = 0;
  FUN_00d16160(param_1 + 0xb2);
  param_1[0xb5] = 0;
  FUN_00d16160(param_1 + 0xb6);
  param_1[0xb9] = 0;
  FUN_00d16160(param_1 + 0xba);
  param_1[0xbd] = 0;
  FUN_00d16160(param_1 + 0xbe);
  param_1[0xc1] = 0;
  FUN_00d16160(param_1 + 0xc2);
  param_1[0xc5] = 0;
  FUN_00d16160(param_1 + 0xc6);
  param_1[0xc9] = 0;
  FUN_00d16160(param_1 + 0xca);
  param_1[0xcd] = 0;
  FUN_00d16160(param_1 + 0xce);
  param_1[0xd1] = 0;
  FUN_00d16160(param_1 + 0xd2);
  return;
}


