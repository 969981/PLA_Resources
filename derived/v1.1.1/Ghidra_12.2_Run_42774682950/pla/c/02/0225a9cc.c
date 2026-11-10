/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0225a9cc; name: FUN_0225a9cc
 */


void FUN_0225a9cc(undefined8 param_1)

{
  byte *pbVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uStack_30;
  byte *local_28;
  
  lVar3 = FUN_001511d0(param_1,0xfff0b9d6);
  local_28 = (byte *)0x0;
  lVar4 = FUN_0225a0f4(param_1,1,&local_28);
  pcVar5 = *(code **)(lVar3 + 0x90);
  if ((*(ulong *)(lVar3 + 0x98) & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)(lVar4 + ((long)*(ulong *)(lVar3 + 0x98) >> 1)));
  }
  lVar3 = (*pcVar5)();
  FUN_0014ff10(param_1,0);
  pbVar1 = (byte *)FUN_017a6974();
  local_28 = *(byte **)(pbVar1 + 0x10);
  if ((*pbVar1 & 1) == 0) {
    local_28 = pbVar1 + 1;
  }
  uStack_30 = param_1;
  if (lVar3 == 0) {
    FUN_00151490(param_1);
  }
  else {
    plVar2 = (long *)FUN_017a6b70();
    *plVar2 = lVar3;
    FUN_017a6cb8(&uStack_30);
  }
  return;
}


