/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0225a8b4; name: FUN_0225a8b4
 */


void FUN_0225a8b4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 local_30;
  byte *local_28;
  
  lVar1 = FUN_001511d0(param_1,0xfff0b9d6);
  local_28 = (byte *)0x0;
  lVar2 = FUN_0225a0f4(param_1,1,&local_28);
  pcVar5 = *(code **)(lVar1 + 0x90);
  if ((*(ulong *)(lVar1 + 0x98) & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)(lVar2 + ((long)*(ulong *)(lVar1 + 0x98) >> 1)));
  }
  lVar1 = (*pcVar5)();
  FUN_0014ff10(param_1,0);
  pbVar3 = (byte *)FUN_017a6974();
  local_28 = *(byte **)(pbVar3 + 0x10);
  if ((*pbVar3 & 1) == 0) {
    local_28 = pbVar3 + 1;
  }
  local_30 = param_1;
  if (lVar1 == 0) {
    FUN_00151490(param_1);
  }
  else {
    plVar4 = (long *)FUN_017a6b70();
    *plVar4 = lVar1;
    FUN_017a6cb8(&local_30);
  }
  return;
}


