/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021aabc0; name: FUN_021aabc0
 */


void FUN_021aabc0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  long *plVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 local_40;
  byte *pbStack_38;
  
  lVar2 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar3 = FUN_001511d0(param_1,1);
  lVar3 = *(long *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_04385680 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar7 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar6 = FUN_021aa8dc();
    lVar3 = (*pcVar7)(lVar3,uVar6);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar7 = *(code **)(lVar2 + 0x78);
  if ((*(ulong *)(lVar2 + 0x80) & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)(lVar3 + ((long)*(ulong *)(lVar2 + 0x80) >> 1)));
  }
  lVar2 = (*pcVar7)();
  FUN_0014ff10(param_1,0);
  pbVar4 = (byte *)FUN_02040c48();
  pbStack_38 = *(byte **)(pbVar4 + 0x10);
  if ((*pbVar4 & 1) == 0) {
    pbStack_38 = pbVar4 + 1;
  }
  local_40 = param_1;
  if (lVar2 == 0) {
    FUN_00151490(param_1);
  }
  else {
    plVar5 = (long *)FUN_02040e40();
    *plVar5 = lVar2;
    FUN_02040f8c(&local_40);
  }
  return;
}


