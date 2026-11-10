/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02186320; name: FUN_02186320
 */


void FUN_02186320(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  long *plVar8;
  byte *pbVar9;
  undefined8 uVar10;
  undefined1 auStack_240 [512];
  undefined4 local_34;
  
  lVar3 = FUN_001511d0(param_1,1);
  uVar10 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_0437d0e8 != '\0') && (iVar2 = FUN_00155630(param_1,1,"class_cast"), iVar2 != 0)) {
    pcVar6 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar7 = FUN_00efadec();
    uVar10 = (*pcVar6)(uVar10,uVar7);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  lVar3 = (*(code *)*param_2)(uVar10);
  FUN_0014ff10(param_1,0);
  pbVar4 = (byte *)FUN_02179db0();
  pbVar9 = *(byte **)(pbVar4 + 0x10);
  if ((*pbVar4 & 1) == 0) {
    pbVar9 = pbVar4 + 1;
  }
  if (lVar3 == 0) {
    FUN_00151490(param_1);
    return;
  }
  if (((DAT_043dc018 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_043dc018), iVar2 != 0)) {
    DAT_043dc010 = 8;
    __cxa_guard_release(&DAT_043dc018);
  }
  if (((DAT_043dc028 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_043dc028), iVar2 != 0)) {
    DAT_043dc020 = 0xf;
    __cxa_guard_release(&DAT_043dc028);
  }
  uVar1 = DAT_043dc010;
  lVar5 = FUN_00153520(param_1,DAT_043dc010);
  if ((uVar1 < ((ulong)(uint)-(int)lVar5 & 7 | 8)) ||
     (plVar8 = (long *)(lVar5 + ((ulong)(uint)-(int)lVar5 & 7)), plVar8 == (long *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar1 = DAT_043dc020;
    lVar5 = FUN_00153520(param_1,DAT_043dc020);
    if ((((ulong)(uint)-(int)lVar5 & 7 | 8) <= uVar1) &&
       (plVar8 = (long *)(lVar5 + ((ulong)(uint)-(int)lVar5 & 7)), plVar8 != (long *)0x0))
    goto LAB_021863ec;
    FUN_0014ff10(param_1,0xfffffffe);
    pbVar4 = (byte *)FUN_0217ac00();
    pbVar9 = *(byte **)(pbVar4 + 0x10);
    if ((*pbVar4 & 1) == 0) {
      pbVar9 = pbVar4 + 1;
    }
    FUN_00154110(param_1,"cannot properly align memory for \'%s\'",pbVar9);
  }
  else {
LAB_021863ec:
    *plVar8 = lVar3;
    iVar2 = FUN_00154450(param_1,pbVar9);
    if (iVar2 != 1) goto LAB_02186404;
  }
  memset(auStack_240,0,0x200);
  local_34 = 0;
  FUN_02186670(auStack_240,&local_34);
  FUN_00155a20(param_1,auStack_240,0);
  FUN_00151fe0(param_1,0,2);
  pbVar4 = (byte *)FUN_0217ac00();
  uVar1 = *(ulong *)(pbVar4 + 8);
  pbVar9 = *(byte **)(pbVar4 + 0x10);
  if ((*pbVar4 & 1) == 0) {
    pbVar9 = pbVar4 + 1;
    uVar1 = (ulong)(*pbVar4 >> 1);
  }
  FUN_001514f0(param_1,pbVar9,uVar1);
  FUN_00152550(param_1,0xfffffffe,&DAT_038f8fce);
  FUN_001516f0(param_1,&LAB_02186620,0);
  FUN_00152550(param_1,0xfffffffe,&DAT_0397bfcb);
  lVar5 = FUN_008cca50();
  lVar3 = lVar5 + 0x2d1;
  if ((*(byte *)(lVar5 + 0x2d0) & 1) != 0) {
    lVar3 = *(long *)(lVar5 + 0x2e0);
  }
  FUN_00152550(param_1,0xfffffffe,lVar3);
LAB_02186404:
  FUN_00152ae0(param_1,0xfffffffe);
  return;
}


