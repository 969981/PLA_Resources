/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021c17e0; name: FUN_021c17e0
 */


void FUN_021c17e0(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 local_40;
  byte *pbStack_38;
  
  lVar2 = FUN_001511d0(param_1,2);
  uVar5 = *(undefined8 *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_0437acb0 != '\0') && (iVar1 = FUN_00155630(param_1,2,"class_cast"), iVar1 != 0)) {
    pcVar6 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_00b4fc10();
    uVar5 = (*pcVar6)(uVar5,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar6 = (code *)*param_2;
  plVar3 = (long *)(param_3 + (param_2[1] >> 1));
  if ((param_2[1] & 1U) != 0) {
    pcVar6 = *(code **)(pcVar6 + *plVar3);
  }
  lVar2 = (*pcVar6)(plVar3,uVar5);
  FUN_0014ff10(param_1,0);
  pbStack_38 = (byte *)FUN_017a9274();
  if ((*pbStack_38 & 1) == 0) {
    pbStack_38 = pbStack_38 + 1;
  }
  else {
    pbStack_38 = *(byte **)(pbStack_38 + 0x10);
  }
  local_40 = param_1;
  if (lVar2 == 0) {
    FUN_00151490(param_1);
  }
  else {
    plVar3 = (long *)FUN_017a9470();
    *plVar3 = lVar2;
    FUN_017a95b8(&local_40);
  }
  return;
}


