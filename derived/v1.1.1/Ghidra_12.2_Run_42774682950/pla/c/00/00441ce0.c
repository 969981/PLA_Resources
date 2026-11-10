/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00441ce0; name: FUN_00441ce0
 */


undefined8 FUN_00441ce0(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_30;
  long local_28;
  
  local_28 = 0;
  iVar2 = FUN_00441d50(param_3,&local_28);
  lVar1 = local_28;
  if (iVar2 < 0) {
    uVar3 = 0;
  }
  else {
    local_30 = *(undefined8 *)(local_28 + 8);
    uVar3 = (*param_2)(param_4,&local_30,(long)iVar2);
  }
  FUN_00417470(lVar1);
  return uVar3;
}


