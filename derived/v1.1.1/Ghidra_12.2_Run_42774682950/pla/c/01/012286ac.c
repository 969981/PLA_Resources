/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012286ac; name: FUN_012286ac
 */


void FUN_012286ac(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  
  FUN_00d40044(param_1,param_2,param_3 & 1);
  *param_1 = &PTR_LAB_041fc8b8;
  plVar1 = param_1 + 0xae;
  param_1[9] = &PTR_LAB_041fc9c0;
  param_1[10] = &PTR_LAB_041fca08;
  *plVar1 = (long)(PTR_DAT_0437a028 + 0x10);
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  FUN_00d16160(param_1 + 0xb1);
  FUN_00d37808(plVar1,0);
  *plVar1 = (long)&PTR_LAB_041fca30;
  FUN_0122a714(param_1 + 0xb3);
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
  param_1[0xd5] = 0;
  FUN_00d16160(param_1 + 0xd6);
  param_1[0xd9] = 0;
  FUN_00d16160(param_1 + 0xda);
  param_1[0xdd] = 0;
  FUN_00d16160(param_1 + 0xde);
  param_1[0xe1] = 0;
  FUN_00d16160(param_1 + 0xe2);
  return;
}


