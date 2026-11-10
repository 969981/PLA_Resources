/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01777a10; name: FUN_01777a10
 */


void FUN_01777a10(undefined8 param_1,undefined8 *param_2)

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
  undefined8 *puVar11;
  ulong uVar12;
  undefined1 auStack_240 [512];
  undefined4 local_34;
  
  lVar2 = FUN_001511d0(param_1,1);
  uVar10 = *(undefined8 *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_0437fc80 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar6 = FUN_015bacbc();
    uVar10 = (*pcVar5)(uVar10,uVar6);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  lVar2 = (*(code *)*param_2)(uVar10);
  FUN_0014ff10(param_1,0);
  pbVar3 = (byte *)FUN_0176e490();
  pbVar9 = *(byte **)(pbVar3 + 0x10);
  if ((*pbVar3 & 1) == 0) {
    pbVar9 = pbVar3 + 1;
  }
  if (lVar2 == 0) {
    FUN_00151490(param_1);
    return;
  }
  puVar11 = &DAT_043cf000;
  if ((DAT_043cf6f8 & 1) == 0) goto LAB_01777cb8;
  while( true ) {
    if (((DAT_043cf708 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043cf708), iVar1 != 0)) {
      DAT_043cf700 = (undefined8 *)0xf;
      __cxa_guard_release(&DAT_043cf708);
    }
    uVar12 = puVar11[0xde];
    lVar4 = FUN_00153520(param_1,uVar12);
    if ((((ulong)(uint)-(int)lVar4 & 7 | 8) <= uVar12) &&
       (plVar8 = (long *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7)), plVar8 != (long *)0x0)) break;
    FUN_0014ff10(param_1,0xfffffffe);
    puVar11 = DAT_043cf700;
    lVar4 = FUN_00153520(param_1,DAT_043cf700);
    if (((undefined8 *)((ulong)(uint)-(int)lVar4 & 7 | 8) <= puVar11) &&
       (plVar8 = (long *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7)), plVar8 != (long *)0x0)) break;
    FUN_0014ff10(param_1,0xfffffffe);
    pbVar7 = (byte *)FUN_0176f2e0();
    pbVar3 = *(byte **)(pbVar7 + 0x10);
    if ((*pbVar7 & 1) == 0) {
      pbVar3 = pbVar7 + 1;
    }
    FUN_00154110(param_1,"cannot properly align memory for \'%s\'",pbVar3);
LAB_01777cb8:
    iVar1 = __cxa_guard_acquire(&DAT_043cf6f8);
    if (iVar1 != 0) {
      puVar11[0xde] = 8;
      __cxa_guard_release(&DAT_043cf6f8);
    }
  }
  *plVar8 = lVar2;
  iVar1 = FUN_00154450(param_1,pbVar9);
  if (iVar1 == 1) {
    memset(auStack_240,0,0x200);
    local_34 = 0;
    FUN_01777d60(auStack_240,&local_34);
    FUN_00155a20(param_1,auStack_240,0);
    FUN_00151fe0(param_1,0,2);
    pbVar3 = (byte *)FUN_0176f2e0();
    uVar12 = *(ulong *)(pbVar3 + 8);
    pbVar9 = *(byte **)(pbVar3 + 0x10);
    if ((*pbVar3 & 1) == 0) {
      pbVar9 = pbVar3 + 1;
      uVar12 = (ulong)(*pbVar3 >> 1);
    }
    FUN_001514f0(param_1,pbVar9,uVar12);
    FUN_00152550(param_1,0xfffffffe,&DAT_038f8fce);
    FUN_001516f0(param_1,&LAB_01777d10,0);
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


