/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013e151c; name: FUN_013e151c
 */


void FUN_013e151c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  param_1[4] = 0;
  *param_1 = &PTR_LAB_0420bd08;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_013e15b0(&local_40,param_2);
  uVar1 = local_40;
  local_40 = 0;
  lVar2 = param_1[1];
  param_1[1] = uVar1;
  if (lVar2 != 0) {
    FUN_013e1834(param_1 + 2);
  }
  param_1[3] = uStack_30;
  param_1[4] = local_28;
  param_1[2] = local_38;
  return;
}


