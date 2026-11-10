/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01029730; name: FUN_01029730
 */


void FUN_01029730(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined1 (*pauVar5) [16];
  code *pcVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 local_40;
  byte *pbStack_38;
  
  lVar2 = FUN_001511d0(param_1,1);
  uVar3 = *(undefined8 *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_0437da68 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar6 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar7 = FUN_00fadcb8();
    uVar3 = (*pcVar6)(uVar3,uVar7);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  auVar8 = (*(code *)*param_2)(uVar3);
  FUN_0014ff10(param_1,0);
  pbVar4 = (byte *)FUN_00e9ffa0();
  pbStack_38 = *(byte **)(pbVar4 + 0x10);
  if ((*pbVar4 & 1) == 0) {
    pbStack_38 = pbVar4 + 1;
  }
  local_40 = param_1;
  pauVar5 = (undefined1 (*) [16])FUN_00ea01f0(param_1);
  *pauVar5 = auVar8;
  FUN_00ea0408(&local_40);
  return;
}


