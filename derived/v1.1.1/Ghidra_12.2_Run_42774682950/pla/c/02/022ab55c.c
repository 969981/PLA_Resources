/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 022ab55c; name: FUN_022ab55c
 */


void FUN_022ab55c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  undefined1 (*pauVar5) [16];
  undefined8 uVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined8 local_40;
  byte *pbStack_38;
  
  lVar2 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar3 = FUN_001511d0(param_1,1);
  lVar3 = *(long *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_04386560 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar7 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar6 = FUN_022aa864();
    lVar3 = (*pcVar7)(lVar3,uVar6);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar7 = *(code **)(lVar2 + 0x128);
  if ((*(ulong *)(lVar2 + 0x130) & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)(lVar3 + ((long)*(ulong *)(lVar2 + 0x130) >> 1)));
  }
  auVar8 = (*pcVar7)();
  FUN_0014ff10(param_1,0);
  pbVar4 = (byte *)FUN_0229e0ac();
  pbStack_38 = *(byte **)(pbVar4 + 0x10);
  if ((*pbVar4 & 1) == 0) {
    pbStack_38 = pbVar4 + 1;
  }
  local_40 = param_1;
  pauVar5 = (undefined1 (*) [16])FUN_022a05b0(param_1);
  *pauVar5 = auVar8;
  FUN_022a07c4(&local_40);
  return;
}


