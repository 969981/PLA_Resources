/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02493f90; name: FUN_02493f90
 */


void FUN_02493f90(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  long lVar5;
  byte *pbVar6;
  code *pcVar7;
  undefined8 uVar8;
  long *plVar9;
  byte *pbVar10;
  undefined1 auStack_240 [512];
  undefined4 local_34;
  
  lVar3 = FUN_001511d0(param_1,1);
  pbVar10 = *(byte **)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if (*PTR_DAT_04387670 != '\0') goto LAB_024941ec;
  while( true ) {
    param_2 = (undefined8 *)(*(code *)*param_2)(pbVar10);
    FUN_0014ff10(param_1,0);
    pbVar4 = (byte *)FUN_0246c12c();
    pbVar10 = *(byte **)(pbVar4 + 0x10);
    if ((*pbVar4 & 1) == 0) {
      pbVar10 = pbVar4 + 1;
    }
    if (param_2 == (undefined8 *)0x0) {
      FUN_00151490(param_1);
      return;
    }
    if (((DAT_043e6b08 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_043e6b08), iVar2 != 0)) {
      DAT_043e6b00 = 8;
      __cxa_guard_release(&DAT_043e6b08);
    }
    if (((DAT_043e6b18 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_043e6b18), iVar2 != 0)) {
      DAT_043e6b10 = 0xf;
      __cxa_guard_release(&DAT_043e6b18);
    }
    uVar1 = DAT_043e6b00;
    lVar3 = FUN_00153520(param_1,DAT_043e6b00);
    if ((((ulong)(uint)-(int)lVar3 & 7 | 8) <= uVar1) &&
       (plVar9 = (long *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7)), plVar9 != (long *)0x0)) break;
    FUN_0014ff10(param_1,0xfffffffe);
    uVar1 = DAT_043e6b10;
    lVar3 = FUN_00153520(param_1,DAT_043e6b10);
    if ((((ulong)(uint)-(int)lVar3 & 7 | 8) <= uVar1) &&
       (plVar9 = (long *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7)), plVar9 != (long *)0x0)) break;
    FUN_0014ff10(param_1,0xfffffffe);
    pbVar6 = (byte *)FUN_0246cf80();
    pbVar4 = *(byte **)(pbVar6 + 0x10);
    if ((*pbVar6 & 1) == 0) {
      pbVar4 = pbVar6 + 1;
    }
    FUN_00154110(param_1,"cannot properly align memory for \'%s\'",pbVar4);
LAB_024941ec:
    iVar2 = FUN_00155630(param_1,1,"class_cast");
    if (iVar2 != 0) {
      pcVar7 = (code *)FUN_001511d0(param_1,0xffffffff);
      uVar8 = FUN_024935e8();
      pbVar10 = (byte *)(*pcVar7)(pbVar10,uVar8);
      FUN_0014ff10(param_1,0xfffffffe);
    }
  }
  *plVar9 = (long)param_2;
  iVar2 = FUN_00154450(param_1,pbVar10);
  if (iVar2 == 1) {
    memset(auStack_240,0,0x200);
    local_34 = 0;
    FUN_024942e0(auStack_240,&local_34);
    FUN_00155a20(param_1,auStack_240,0);
    FUN_00151fe0(param_1,0,2);
    pbVar4 = (byte *)FUN_0246cf80();
    uVar1 = *(ulong *)(pbVar4 + 8);
    pbVar10 = *(byte **)(pbVar4 + 0x10);
    if ((*pbVar4 & 1) == 0) {
      pbVar10 = pbVar4 + 1;
      uVar1 = (ulong)(*pbVar4 >> 1);
    }
    FUN_001514f0(param_1,pbVar10,uVar1);
    FUN_00152550(param_1,0xfffffffe,&DAT_038f8fce);
    FUN_001516f0(param_1,&LAB_02494290,0);
    FUN_00152550(param_1,0xfffffffe,&DAT_0397bfcb);
    lVar5 = FUN_008cca50();
    lVar3 = lVar5 + 0x2d1;
    if ((*(byte *)(lVar5 + 0x2d0) & 1) != 0) {
      lVar3 = *(long *)(lVar5 + 0x2e0);
    }
    FUN_00152550(param_1,0xfffffffe,lVar3);
  }
  FUN_00152ae0(param_1,0xfffffffe);
  return;
}


