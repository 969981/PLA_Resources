/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fb15cc; name: FUN_00fb15cc
 */


void FUN_00fb15cc(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  byte *pbVar6;
  undefined1 (*pauVar7) [16];
  undefined1 auVar8 [16];
  undefined8 local_40;
  byte *pbStack_38;
  
  lVar2 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar3 = FUN_001511d0(param_1,1);
  lVar3 = *(long *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_0437da50 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar4 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_00fad1e8();
    lVar3 = (*pcVar4)(lVar3,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar4 = *(code **)(lVar2 + 0xe0);
  if ((*(ulong *)(lVar2 + 0xe8) & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(lVar3 + ((long)*(ulong *)(lVar2 + 0xe8) >> 1)));
  }
  auVar8 = (*pcVar4)();
  FUN_0014ff10(param_1,0);
  pbVar6 = (byte *)FUN_00fae7c8();
  pbStack_38 = *(byte **)(pbVar6 + 0x10);
  if ((*pbVar6 & 1) == 0) {
    pbStack_38 = pbVar6 + 1;
  }
  local_40 = param_1;
  pauVar7 = (undefined1 (*) [16])FUN_00faea20(param_1);
  *pauVar7 = auVar8;
  FUN_00faec34(&local_40);
  return;
}


