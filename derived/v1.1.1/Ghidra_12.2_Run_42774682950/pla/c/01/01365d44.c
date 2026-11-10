/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01365d44; name: FUN_01365d44
 */


void FUN_01365d44(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  
  FUN_00d37d1c(param_1,param_2,param_3 & 1,0);
  *param_1 = &PTR_LAB_04206f20;
  plVar1 = param_1 + 0x9b;
  param_1[9] = &PTR_LAB_04207020;
  param_1[10] = &PTR_LAB_04207068;
  *plVar1 = (long)(PTR_DAT_0437a028 + 0x10);
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  FUN_00d16160(param_1 + 0x9e);
  FUN_00d37808(plVar1,0);
  *plVar1 = (long)&PTR_LAB_04207090;
  FUN_013685b4(param_1 + 0xa0);
  param_1[0xa6] = 0;
  FUN_00d16160(param_1 + 0xa7);
  param_1[0xaa] = 0;
  FUN_00d16160(param_1 + 0xab);
  param_1[0xae] = 0;
  FUN_00d16160(param_1 + 0xaf);
  param_1[0xb2] = 0;
  FUN_00d16160(param_1 + 0xb3);
  param_1[0xb6] = 0;
  FUN_00d16160(param_1 + 0xb7);
  param_1[0xba] = 0;
  FUN_00d16160(param_1 + 0xbb);
  param_1[0xbe] = 0;
  FUN_00d16160(param_1 + 0xbf);
  param_1[0xc2] = 0;
  FUN_00d16160(param_1 + 0xc3);
  param_1[0xc6] = 0;
  FUN_00d16160(param_1 + 199);
  param_1[0xca] = 0;
  FUN_00d16160(param_1 + 0xcb);
  param_1[0xce] = 0;
  FUN_00d16160(param_1 + 0xcf);
  return;
}


