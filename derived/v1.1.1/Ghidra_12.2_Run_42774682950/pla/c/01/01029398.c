/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01029398; name: FUN_01029398
 */


void FUN_01029398(undefined8 param_1)

{
  long lVar1;
  byte *pbVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  undefined8 local_30;
  byte *pbStack_28;
  
  lVar1 = FUN_001511d0(param_1,0xfff0b9d6);
  local_30 = 0;
  auVar4 = FUN_01029210(param_1,&local_30,lVar1 + 0x180);
  FUN_0014ff10(param_1,0);
  pbVar2 = (byte *)FUN_00fae7c8();
  pbStack_28 = *(byte **)(pbVar2 + 0x10);
  if ((*pbVar2 & 1) == 0) {
    pbStack_28 = pbVar2 + 1;
  }
  local_30 = param_1;
  pauVar3 = (undefined1 (*) [16])FUN_00faea20(param_1);
  *pauVar3 = auVar4;
  FUN_00faec34(&local_30);
  return;
}


