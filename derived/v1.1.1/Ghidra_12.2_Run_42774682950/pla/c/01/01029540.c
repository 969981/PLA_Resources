/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01029540; name: FUN_01029540
 */


undefined8 FUN_01029540(undefined8 param_1)

{
  long lVar1;
  byte *pbVar2;
  undefined1 (*pauVar3) [16];
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined8 local_40;
  byte *pbStack_38;
  
  lVar1 = FUN_001511d0(param_1,0xfff0b9d6);
  dVar4 = (double)FUN_00150a90(param_1,1,0);
  dVar5 = (double)FUN_00150a90(param_1,2,0);
  dVar6 = (double)FUN_00150a90(param_1,3,0);
  auVar7 = (**(code **)(lVar1 + 0x1a0))((float)dVar4,(float)dVar5,(float)dVar6);
  FUN_0014ff10(param_1,0);
  pbVar2 = (byte *)FUN_00fae7c8();
  pbStack_38 = *(byte **)(pbVar2 + 0x10);
  if ((*pbVar2 & 1) == 0) {
    pbStack_38 = pbVar2 + 1;
  }
  local_40 = param_1;
  pauVar3 = (undefined1 (*) [16])FUN_00faea20(param_1);
  *pauVar3 = auVar7;
  FUN_00faec34(&local_40);
  return 1;
}


