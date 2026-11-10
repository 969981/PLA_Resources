/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ff0678; name: FUN_01ff0678
 */


void FUN_01ff0678(undefined8 param_1,byte *param_2)

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
  long lVar10;
  undefined4 local_244;
  undefined1 auStack_240 [512];
  
  lVar3 = FUN_001511d0(param_1,1);
  lVar3 = *(long *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if (*PTR_DAT_043836e0 != '\0') goto LAB_01ff08ac;
  while( true ) {
    lVar10 = *(long *)param_2;
    FUN_0014ff10(param_1,0);
    pbVar4 = (byte *)FUN_01756d54();
    param_2 = *(byte **)(pbVar4 + 0x10);
    if ((*pbVar4 & 1) == 0) {
      param_2 = pbVar4 + 1;
    }
    if (((DAT_043d5e38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_043d5e38), iVar2 != 0)) {
      DAT_043d5e30 = 8;
      __cxa_guard_release(&DAT_043d5e38);
    }
    if (((DAT_043d5e48 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_043d5e48), iVar2 != 0)) {
      DAT_043d5e40 = 0xf;
      __cxa_guard_release(&DAT_043d5e48);
    }
    uVar1 = DAT_043d5e30;
    lVar5 = FUN_00153520(param_1,DAT_043d5e30);
    if ((((ulong)(uint)-(int)lVar5 & 7 | 8) <= uVar1) &&
       (plVar9 = (long *)(lVar5 + ((ulong)(uint)-(int)lVar5 & 7)), plVar9 != (long *)0x0)) break;
    FUN_0014ff10(param_1,0xfffffffe);
    uVar1 = DAT_043d5e40;
    lVar5 = FUN_00153520(param_1,DAT_043d5e40);
    if ((((ulong)(uint)-(int)lVar5 & 7 | 8) <= uVar1) &&
       (plVar9 = (long *)(lVar5 + ((ulong)(uint)-(int)lVar5 & 7)), plVar9 != (long *)0x0)) break;
    FUN_0014ff10(param_1,0xfffffffe);
    pbVar6 = (byte *)FUN_01756f40();
    pbVar4 = *(byte **)(pbVar6 + 0x10);
    if ((*pbVar6 & 1) == 0) {
      pbVar4 = pbVar6 + 1;
    }
    FUN_00154110(param_1,"cannot properly align memory for \'%s\'",pbVar4);
LAB_01ff08ac:
    iVar2 = FUN_00155630(param_1,1,"class_cast");
    if (iVar2 != 0) {
      pcVar7 = (code *)FUN_001511d0(param_1,0xffffffff);
      uVar8 = FUN_01fdf8e0();
      lVar3 = (*pcVar7)(lVar3,uVar8);
      FUN_0014ff10(param_1,0xfffffffe);
    }
  }
  *plVar9 = lVar3 + lVar10;
  iVar2 = FUN_00154450(param_1,param_2);
  if (iVar2 == 1) {
    memset(auStack_240,0,0x200);
    local_244 = 0;
    FUN_01ff09a0(auStack_240,&local_244);
    FUN_00155a20(param_1,auStack_240,0);
    FUN_00151fe0(param_1,0,2);
    pbVar6 = (byte *)FUN_01756f40();
    uVar1 = *(ulong *)(pbVar6 + 8);
    pbVar4 = *(byte **)(pbVar6 + 0x10);
    if ((*pbVar6 & 1) == 0) {
      pbVar4 = pbVar6 + 1;
      uVar1 = (ulong)(*pbVar6 >> 1);
    }
    FUN_001514f0(param_1,pbVar4,uVar1);
    FUN_00152550(param_1,0xfffffffe,&DAT_038f8fce);
    FUN_001516f0(param_1,&LAB_01ff0950,0);
    FUN_00152550(param_1,0xfffffffe,&DAT_0397bfcb);
    lVar10 = FUN_008cca50();
    lVar3 = lVar10 + 0x2d1;
    if ((*(byte *)(lVar10 + 0x2d0) & 1) != 0) {
      lVar3 = *(long *)(lVar10 + 0x2e0);
    }
    FUN_00152550(param_1,0xfffffffe,lVar3);
  }
  FUN_00152ae0(param_1,0xfffffffe);
  return;
}


