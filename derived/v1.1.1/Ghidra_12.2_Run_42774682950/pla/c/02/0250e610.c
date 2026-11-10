/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0250e610; name: FUN_0250e610
 */


void FUN_0250e610(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  long *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 local_40;
  byte *pbStack_38;
  
  lVar2 = FUN_001511d0(param_1,1);
  uVar3 = *(undefined8 *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_04387840 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar6 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar7 = FUN_0250de88();
    uVar3 = (*pcVar6)(uVar3,uVar7);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  lVar2 = (*(code *)*param_2)(uVar3);
  FUN_0014ff10(param_1,0);
  pbVar4 = (byte *)FUN_017c5a4c();
  pbStack_38 = *(byte **)(pbVar4 + 0x10);
  if ((*pbVar4 & 1) == 0) {
    pbStack_38 = pbVar4 + 1;
  }
  local_40 = param_1;
  if (lVar2 == 0) {
    FUN_00151490(param_1);
  }
  else {
    plVar5 = (long *)FUN_017c5c40();
    *plVar5 = lVar2;
    FUN_017c5d88(&local_40);
  }
  return;
}


