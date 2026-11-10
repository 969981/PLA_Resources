/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02044404; name: FUN_02044404
 */


void FUN_02044404(undefined8 param_1)

{
  byte *pbVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_30;
  byte *local_28;
  
  lVar3 = FUN_001511d0(param_1,0xfff0b9d6);
  local_28 = (byte *)0x0;
  lVar4 = FUN_0203c280(param_1,1,&local_28);
  pcVar5 = *(code **)(lVar3 + 0xe8);
  if ((*(ulong *)(lVar3 + 0xf0) & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)(lVar4 + ((long)*(ulong *)(lVar3 + 0xf0) >> 1)));
  }
  auVar6 = (*pcVar5)();
  FUN_0014ff10(param_1,0);
  pbVar1 = (byte *)FUN_00fae7c8();
  local_28 = *(byte **)(pbVar1 + 0x10);
  if ((*pbVar1 & 1) == 0) {
    local_28 = pbVar1 + 1;
  }
  uStack_30 = param_1;
  pauVar2 = (undefined1 (*) [16])FUN_00faea20(param_1);
  *pauVar2 = auVar6;
  FUN_00faec34(&uStack_30);
  return;
}


