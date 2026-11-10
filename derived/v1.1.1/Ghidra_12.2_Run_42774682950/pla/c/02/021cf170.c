/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021cf170; name: FUN_021cf170
 */


void FUN_021cf170(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined8 local_40;
  byte *pbStack_38;
  
  lVar2 = FUN_001511d0(param_1,1);
  lVar2 = *(long *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_0437d4b8 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_00f0973c();
    lVar2 = (*pcVar5)(lVar2,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar5 = (code *)*param_2;
  if ((param_2[1] & 1U) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)(lVar2 + (param_2[1] >> 1)));
  }
  auVar6 = (*pcVar5)();
  FUN_0014ff10(param_1,0);
  pbStack_38 = (byte *)FUN_00e9ffa0();
  if ((*pbStack_38 & 1) == 0) {
    pbStack_38 = pbStack_38 + 1;
  }
  else {
    pbStack_38 = *(byte **)(pbStack_38 + 0x10);
  }
  local_40 = param_1;
  pauVar3 = (undefined1 (*) [16])FUN_00ea01f0(param_1);
  *pauVar3 = auVar6;
  FUN_00ea0408(&local_40);
  return;
}


