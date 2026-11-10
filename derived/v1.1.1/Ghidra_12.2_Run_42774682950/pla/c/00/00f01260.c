/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f01260; name: FUN_00f01260
 */


undefined8 FUN_00f01260(undefined8 param_1)

{
  long lVar1;
  byte *pbVar2;
  long *plVar3;
  undefined8 local_30;
  byte *pbStack_28;
  
  lVar1 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar1 = (**(code **)(lVar1 + 0x128))();
  FUN_0014ff10(param_1,0);
  pbVar2 = (byte *)FUN_00e679ec();
  pbStack_28 = *(byte **)(pbVar2 + 0x10);
  if ((*pbVar2 & 1) == 0) {
    pbStack_28 = pbVar2 + 1;
  }
  local_30 = param_1;
  if (lVar1 == 0) {
    FUN_00151490(param_1);
  }
  else {
    plVar3 = (long *)FUN_00f00ea0();
    *plVar3 = lVar1;
    FUN_00f00fe0(&local_30);
  }
  return 1;
}


