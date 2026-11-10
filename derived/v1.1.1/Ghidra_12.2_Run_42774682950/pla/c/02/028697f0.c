/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028697f0; name: FUN_028697f0
 */


void FUN_028697f0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  
  local_28 = param_2;
  FUN_028698a0();
  param_1[0xd] = 0;
  *param_1 = &PTR_LAB_04270b00;
  param_1[9] = &PTR_LAB_04270b30;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_58 = param_1;
  FUN_028699e0(&local_50,param_2,&local_58,&local_28);
  uVar1 = local_50;
  local_50 = 0;
  lVar2 = param_1[10];
  param_1[10] = uVar1;
  if (lVar2 != 0) {
    FUN_028766a8(param_1 + 0xb);
  }
  param_1[0xc] = uStack_40;
  param_1[0xd] = local_38;
  param_1[0xb] = local_48;
  return;
}


