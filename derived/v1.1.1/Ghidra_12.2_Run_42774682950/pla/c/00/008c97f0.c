/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008c97f0; name: FUN_008c97f0
 */


void FUN_008c97f0(undefined8 param_1,long *param_2,undefined8 param_3)

{
  byte *pbVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_40;
  byte *pbStack_38;
  
  lVar3 = *param_2;
  pbVar1 = (byte *)FUN_008c986c();
  pbStack_38 = *(byte **)(pbVar1 + 0x10);
  if ((*pbVar1 & 1) == 0) {
    pbStack_38 = pbVar1 + 1;
  }
  local_40 = param_1;
  if (lVar3 == 0) {
    FUN_00151490(param_1);
  }
  else {
    plVar2 = (long *)FUN_008c9a50();
    *plVar2 = lVar3;
    FUN_008c9b98(&local_40);
  }
  local_40 = param_3;
  FUN_008cf508(param_1,&local_40);
  return;
}


