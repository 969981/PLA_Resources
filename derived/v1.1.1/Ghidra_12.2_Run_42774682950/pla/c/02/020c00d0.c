/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020c00d0; name: FUN_020c00d0
 */


void FUN_020c00d0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  byte *pbVar7;
  long *plVar8;
  byte *pbVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 auStack_240 [512];
  undefined4 local_34;
  
  lVar2 = FUN_001511d0(param_1,1);
  uVar10 = *(undefined8 *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_043847e0 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar6 = FUN_020bd79c();
    uVar10 = (*pcVar5)(uVar10,uVar6);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  lVar2 = (*(code *)*param_2)(uVar10);
  FUN_0014ff10(param_1,0);
  pbVar3 = (byte *)FUN_00f7f738();
  pbVar9 = *(byte **)(pbVar3 + 0x10);
  if ((*pbVar3 & 1) == 0) {
    pbVar9 = pbVar3 + 1;
  }
  if (lVar2 == 0) {
    FUN_00151490(param_1);
    return;
  }
  uVar11 = 0x43d9000;
  if ((DAT_043d9668 & 1) == 0) goto LAB_020c0378;
  while( true ) {
    if (((DAT_043d9678 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043d9678), iVar1 != 0)) {
      DAT_043d9670 = 0xf;
      __cxa_guard_release(&DAT_043d9678);
    }
    uVar11 = *(ulong *)(uVar11 + 0x660);
    lVar4 = FUN_00153520(param_1,uVar11);
    if ((((ulong)(uint)-(int)lVar4 & 7 | 8) <= uVar11) &&
       (plVar8 = (long *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7)), plVar8 != (long *)0x0)) break;
    FUN_0014ff10(param_1,0xfffffffe);
    uVar11 = DAT_043d9670;
    lVar4 = FUN_00153520(param_1,DAT_043d9670);
    if ((((ulong)(uint)-(int)lVar4 & 7 | 8) <= uVar11) &&
       (plVar8 = (long *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7)), plVar8 != (long *)0x0)) break;
    FUN_0014ff10(param_1,0xfffffffe);
    pbVar7 = (byte *)FUN_00f80040();
    pbVar3 = *(byte **)(pbVar7 + 0x10);
    if ((*pbVar7 & 1) == 0) {
      pbVar3 = pbVar7 + 1;
    }
    FUN_00154110(param_1,"cannot properly align memory for \'%s\'",pbVar3);
LAB_020c0378:
    iVar1 = __cxa_guard_acquire(&DAT_043d9668);
    if (iVar1 != 0) {
      *(undefined8 *)(uVar11 + 0x660) = 8;
      __cxa_guard_release(&DAT_043d9668);
    }
  }
  *plVar8 = lVar2;
  iVar1 = FUN_00154450(param_1,pbVar9);
  if (iVar1 == 1) {
    memset(auStack_240,0,0x200);
    local_34 = 0;
    FUN_020c0420(auStack_240,&local_34);
    FUN_00155a20(param_1,auStack_240,0);
    FUN_00151fe0(param_1,0,2);
    pbVar3 = (byte *)FUN_00f80040();
    uVar11 = *(ulong *)(pbVar3 + 8);
    pbVar9 = *(byte **)(pbVar3 + 0x10);
    if ((*pbVar3 & 1) == 0) {
      pbVar9 = pbVar3 + 1;
      uVar11 = (ulong)(*pbVar3 >> 1);
    }
    FUN_001514f0(param_1,pbVar9,uVar11);
    FUN_00152550(param_1,0xfffffffe,&DAT_038f8fce);
    FUN_001516f0(param_1,&LAB_020c03d0,0);
    FUN_00152550(param_1,0xfffffffe,&DAT_0397bfcb);
    lVar4 = FUN_008cca50();
    lVar2 = lVar4 + 0x2d1;
    if ((*(byte *)(lVar4 + 0x2d0) & 1) != 0) {
      lVar2 = *(long *)(lVar4 + 0x2e0);
    }
    FUN_00152550(param_1,0xfffffffe,lVar2);
  }
  FUN_00152ae0(param_1,0xfffffffe);
  return;
}


