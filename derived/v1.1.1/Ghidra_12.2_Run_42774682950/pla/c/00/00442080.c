/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00442080; name: FUN_00442080
 */


undefined8 FUN_00442080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_30;
  long local_28;
  
  local_28 = 0;
  iVar2 = FUN_00441d50(param_2,&local_28);
  lVar1 = local_28;
  if (iVar2 < 0) {
    uVar3 = 0;
  }
  else {
    local_30 = *(undefined8 *)(local_28 + 8);
    uVar3 = FUN_0041d030(param_3,&local_30,(long)iVar2,param_1);
  }
  FUN_00417470(lVar1);
  return uVar3;
}


