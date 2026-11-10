/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020442f0; name: FUN_020442f0
 */


void FUN_020442f0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  undefined1 (*pauVar4) [16];
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined8 local_30;
  byte *local_28;
  
  lVar1 = FUN_001511d0(param_1,0xfff0b9d6);
  local_28 = (byte *)0x0;
  lVar2 = FUN_0203c280(param_1,1,&local_28);
  pcVar5 = *(code **)(lVar1 + 0xe8);
  if ((*(ulong *)(lVar1 + 0xf0) & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)(lVar2 + ((long)*(ulong *)(lVar1 + 0xf0) >> 1)));
  }
  auVar6 = (*pcVar5)();
  FUN_0014ff10(param_1,0);
  pbVar3 = (byte *)FUN_00fae7c8();
  local_28 = *(byte **)(pbVar3 + 0x10);
  if ((*pbVar3 & 1) == 0) {
    local_28 = pbVar3 + 1;
  }
  local_30 = param_1;
  pauVar4 = (undefined1 (*) [16])FUN_00faea20(param_1);
  *pauVar4 = auVar6;
  FUN_00faec34(&local_30);
  return;
}


