/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021c2710; name: FUN_021c2710
 */


void FUN_021c2710(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  ulong uVar7;
  code *pcVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined4 local_244;
  undefined1 auStack_240 [512];
  
  lVar2 = FUN_001511d0(param_1,2);
  uVar10 = *(undefined8 *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_0437acb0 != '\0') && (iVar1 = FUN_00155630(param_1,2,"class_cast"), iVar1 != 0)) {
    pcVar8 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_00b4fc10();
    uVar10 = (*pcVar8)(uVar10,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar8 = (code *)*param_2;
  plVar9 = (long *)(param_3 + (param_2[1] >> 1));
  if ((param_2[1] & 1U) != 0) {
    pcVar8 = *(code **)(pcVar8 + *plVar9);
  }
  lVar2 = (*pcVar8)(plVar9,uVar10);
  FUN_0014ff10(param_1,0);
  pbVar3 = (byte *)FUN_02127208();
  if ((*pbVar3 & 1) == 0) {
    pbVar3 = pbVar3 + 1;
  }
  else {
    pbVar3 = *(byte **)(pbVar3 + 0x10);
  }
  if (lVar2 == 0) {
    FUN_00151490(param_1);
    return;
  }
  if (((DAT_043dcf50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043dcf50), iVar1 != 0)) {
    DAT_043dcf48 = 8;
    __cxa_guard_release(&DAT_043dcf50);
  }
  if (((DAT_043dcf60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043dcf60), iVar1 != 0)) {
    DAT_043dcf58 = 0xf;
    __cxa_guard_release(&DAT_043dcf60);
  }
  uVar7 = DAT_043dcf48;
  lVar4 = FUN_00153520(param_1,DAT_043dcf48);
  if ((uVar7 < ((ulong)(uint)-(int)lVar4 & 7 | 8)) ||
     (plVar9 = (long *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7)), plVar9 == (long *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar7 = DAT_043dcf58;
    lVar4 = FUN_00153520(param_1,DAT_043dcf58);
    if ((uVar7 < ((ulong)(uint)-(int)lVar4 & 7 | 8)) ||
       (plVar9 = (long *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7)), plVar9 == (long *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      pbVar3 = (byte *)FUN_021280a0();
      if ((*pbVar3 & 1) == 0) {
        pbVar3 = pbVar3 + 1;
      }
      else {
        pbVar3 = *(byte **)(pbVar3 + 0x10);
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",pbVar3);
                    /* WARNING: Does not return */
      pcVar8 = (code *)UndefinedInstructionException(0,0x21c2a28);
      (*pcVar8)();
    }
  }
  *plVar9 = lVar2;
  iVar1 = FUN_00154450(param_1,pbVar3);
  if (iVar1 == 1) {
    memset(auStack_240,0,0x200);
    local_244 = 0;
    FUN_021c2a80(auStack_240,&local_244);
    FUN_00155a20(param_1,auStack_240,0);
    FUN_00151fe0(param_1,0,2);
    pbVar3 = (byte *)FUN_021280a0();
    if ((*pbVar3 & 1) == 0) {
      pbVar6 = pbVar3 + 1;
      uVar7 = (ulong)(*pbVar3 >> 1);
    }
    else {
      uVar7 = *(ulong *)(pbVar3 + 8);
      pbVar6 = *(byte **)(pbVar3 + 0x10);
    }
    FUN_001514f0(param_1,pbVar6,uVar7);
    FUN_00152550(param_1,0xfffffffe,&DAT_038f8fce);
    FUN_001516f0(param_1,&LAB_021c2a30,0);
    FUN_00152550(param_1,0xfffffffe,&DAT_0397bfcb);
    lVar2 = FUN_008cca50();
    if ((*(byte *)(lVar2 + 0x2d0) & 1) == 0) {
      lVar2 = lVar2 + 0x2d1;
    }
    else {
      lVar2 = *(long *)(lVar2 + 0x2e0);
    }
    FUN_00152550(param_1,0xfffffffe,lVar2);
  }
  FUN_00152ae0(param_1,0xfffffffe);
  return;
}


