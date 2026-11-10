/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eca1b8; name: FUN_02eca1b8
 */


undefined8 FUN_02eca1b8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = *param_1;
  local_38 = param_1[1];
  if ((*(int *)((long)param_1 + 4) == 0) || ((int)local_40 == 0)) {
    FUN_02ec9f10(&local_40,(ulong)&local_40 | 4);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  uVar1 = FUN_02e78670((int)local_40,local_40._4_4_);
  lVar2 = FUN_02eca254();
  if (lVar2 == 0) {
    uVar3 = FUN_02ec94a8(uVar1,&local_40,param_2,0,0,uVar3);
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


