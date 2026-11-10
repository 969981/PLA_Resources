/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02375530; name: FUN_02375530
 */


undefined8 FUN_02375530(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  byte *pbVar10;
  undefined8 uVar11;
  undefined *local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined1 *local_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [512];
  undefined4 local_34;
  
  lVar3 = FUN_001511d0(param_1,1);
  uVar11 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_04382aa0 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar6 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar7 = FUN_01e18dfc();
    uVar11 = (*pcVar6)(uVar11,uVar7);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  lVar3 = (*(code *)*param_2)(uVar11);
  FUN_0014ff10(param_1,0);
  pbVar4 = (byte *)FUN_022a895c();
  pbVar10 = *(byte **)(pbVar4 + 0x10);
  if ((*pbVar4 & 1) == 0) {
    pbVar10 = pbVar4 + 1;
  }
  if (lVar3 == 0) {
    uVar11 = FUN_00151490(param_1);
    return uVar11;
  }
  if (((DAT_043e2788 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043e2788), iVar1 != 0)) {
    DAT_043e2780 = 8;
    __cxa_guard_release(&DAT_043e2788);
  }
  if (((DAT_043e2798 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043e2798), iVar1 != 0)) {
    DAT_043e2790 = 0xf;
    __cxa_guard_release(&DAT_043e2798);
  }
  uVar8 = DAT_043e2780;
  lVar5 = FUN_00153520(param_1,DAT_043e2780);
  if ((uVar8 < ((ulong)(uint)-(int)lVar5 & 7 | 8)) ||
     (plVar9 = (long *)(lVar5 + ((ulong)(uint)-(int)lVar5 & 7)), plVar9 == (long *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar8 = DAT_043e2790;
    lVar5 = FUN_00153520(param_1,DAT_043e2790);
    if ((uVar8 < ((ulong)(uint)-(int)lVar5 & 7 | 8)) ||
       (plVar9 = (long *)(lVar5 + ((ulong)(uint)-(int)lVar5 & 7)), plVar9 == (long *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      pbVar10 = (byte *)FUN_022a97a0();
      if ((*pbVar10 & 1) == 0) {
        pbVar10 = pbVar10 + 1;
      }
      else {
        pbVar10 = *(byte **)(pbVar10 + 0x10);
      }
      uVar11 = FUN_00154110(param_1,"cannot properly align memory for \'%s\'",pbVar10);
      uStack_248 = 0x2375830;
      local_258 = 0;
      local_268 = PTR_LAB_04379768;
      local_260 = param_1;
      local_250 = auStack_240 + 0x230;
      uVar2 = FUN_02375920(uVar11,&local_268,&local_258);
      FUN_001517e0(uVar11,uVar2 & 1);
      return 1;
    }
  }
  *plVar9 = lVar3;
  iVar1 = FUN_00154450(param_1,pbVar10);
  if (iVar1 == 1) {
    memset(auStack_240,0,0x200);
    local_34 = 0;
    FUN_02375880(auStack_240,&local_34);
    FUN_00155a20(param_1,auStack_240,0);
    FUN_00151fe0(param_1,0,2);
    pbVar10 = (byte *)FUN_022a97a0();
    if ((*pbVar10 & 1) == 0) {
      pbVar4 = pbVar10 + 1;
      uVar8 = (ulong)(*pbVar10 >> 1);
    }
    else {
      uVar8 = *(ulong *)(pbVar10 + 8);
      pbVar4 = *(byte **)(pbVar10 + 0x10);
    }
    FUN_001514f0(param_1,pbVar4,uVar8);
    FUN_00152550(param_1,0xfffffffe,&DAT_038f8fce);
    FUN_001516f0(param_1,0x2375830,0);
    FUN_00152550(param_1,0xfffffffe,&DAT_0397bfcb);
    lVar3 = FUN_008cca50();
    if ((*(byte *)(lVar3 + 0x2d0) & 1) == 0) {
      lVar3 = lVar3 + 0x2d1;
    }
    else {
      lVar3 = *(long *)(lVar3 + 0x2e0);
    }
    FUN_00152550(param_1,0xfffffffe,lVar3);
  }
  uVar11 = FUN_00152ae0(param_1,0xfffffffe);
  return uVar11;
}


