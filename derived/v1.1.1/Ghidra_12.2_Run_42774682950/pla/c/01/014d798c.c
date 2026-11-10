/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014d798c; name: FUN_014d798c
 */


void FUN_014d798c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  
  FUN_00d40044(param_1,param_3,param_4 & 1);
  *param_1 = &PTR_LAB_042162b0;
  param_1[9] = &PTR_LAB_042163b8;
  param_1[10] = &PTR_LAB_04216400;
  FUN_014d79e8(param_1 + 0xae);
  param_1[0xe4] = param_2;
  uVar1 = FUN_00d73f40();
  param_1[0xe5] = uVar1;
  return;
}


