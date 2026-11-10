/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020abf88; name: FUN_020abf88
 */


void FUN_020abf88(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined8 local_30;
  byte *pbStack_28;
  
  lVar1 = FUN_001511d0(param_1,0xfff0b9d6);
  local_30 = 0;
  lVar2 = FUN_020aa950(param_1,1,&local_30);
  pcVar4 = *(code **)(lVar1 + 0x180);
  if ((*(ulong *)(lVar1 + 0x188) & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(lVar2 + ((long)*(ulong *)(lVar1 + 0x188) >> 1)));
  }
  auVar5 = (*pcVar4)();
  FUN_0014ff10(param_1,0);
  pbStack_28 = (byte *)FUN_00e9ffa0();
  if ((*pbStack_28 & 1) == 0) {
    pbStack_28 = pbStack_28 + 1;
  }
  else {
    pbStack_28 = *(byte **)(pbStack_28 + 0x10);
  }
  local_30 = param_1;
  pauVar3 = (undefined1 (*) [16])FUN_00ea01f0(param_1);
  *pauVar3 = auVar5;
  FUN_00ea0408(&local_30);
  return;
}


