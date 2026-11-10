/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d4074; name: FUN_031d4074
 */


void FUN_031d4074(undefined8 param_1,long param_2,long param_3,undefined4 *param_4,
                 undefined4 *param_5,long param_6,long param_7,undefined8 param_8,long param_9,
                 long param_10,long param_11)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined4 local_b8;
  int iStack_b4;
  undefined4 local_b0;
  int iStack_ac;
  undefined2 local_a8 [2];
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (param_6 == param_7) {
    return;
  }
  if (param_9 == param_10) {
    return;
  }
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar11 = *(long *)(param_2 + 0x20);
  }
  else {
    lVar11 = FUN_02898b44();
  }
  if (*(char *)(param_3 + 0x30) == '\x01') {
    lVar3 = *(long *)(param_3 + 0x20);
  }
  else {
    lVar3 = FUN_02898b44();
  }
  iStack_ac = param_4[1];
  iVar7 = iStack_ac - *(int *)(lVar11 + 0x30);
  if (iStack_ac < *(int *)(lVar11 + 0x30)) {
    lVar6 = *(long *)(lVar11 + 0x28);
    iVar7 = iStack_ac;
    if (*(int *)(lVar11 + 0x78) != 0) {
      iVar7 = *(int *)(*(long *)(lVar11 + 0x70) + (long)iStack_ac * 4);
    }
    if (iVar7 != -1) {
      plVar5 = (long *)(lVar11 + 0xc0);
      goto LAB_031d4134;
    }
    iVar7 = iStack_ac;
  }
  else {
    plVar5 = (long *)(lVar11 + 0xe0);
LAB_031d4134:
    lVar6 = *plVar5;
  }
  lVar11 = (long)iVar7;
  iStack_b4 = param_5[1];
  iVar7 = iStack_b4 - *(int *)(lVar3 + 0x30);
  if (iStack_b4 < *(int *)(lVar3 + 0x30)) {
    lVar8 = *(long *)(lVar3 + 0x28);
    iVar7 = iStack_b4;
    if (*(int *)(lVar3 + 0x78) != 0) {
      iVar7 = *(int *)(*(long *)(lVar3 + 0x70) + (long)iStack_b4 * 4);
    }
    if (iVar7 == -1) {
      iVar7 = iStack_b4;
      goto LAB_031d4184;
    }
    plVar5 = (long *)(lVar3 + 0xc0);
  }
  else {
    plVar5 = (long *)(lVar3 + 0xe0);
  }
  lVar8 = *plVar5;
LAB_031d4184:
  if ((*(byte *)(lVar6 + lVar11 * 0x14 + 0x10) >> 4 & 1) == 0) {
    local_b0 = *param_4;
    local_b8 = *param_5;
    FUN_031d4338(param_1,param_2,param_3,&local_b0,&local_b8,param_6,param_7,param_8,param_9,
                 param_10,param_11);
  }
  else {
    lVar3 = *(long *)(param_2 + 0x20);
    iVar9 = *(int *)(lVar3 + 0x40);
    iVar1 = *(int *)(lVar6 + lVar11 * 0x14);
    plVar5 = (long *)(lVar3 + 0x38);
    if (iVar1 < iVar9) {
      iVar10 = 0;
      plVar4 = plVar5;
    }
    else {
      plVar4 = (long *)(lVar3 + 0xf0);
      iVar10 = iVar9;
    }
    puVar2 = (undefined8 *)(*plVar4 + (long)(iVar1 - iVar10) * 0x10);
    uStack_78 = puVar2[1];
    local_80 = *puVar2;
    iVar1 = *(int *)(lVar6 + lVar11 * 0x14 + 4);
    if (iVar1 < iVar9) {
      iVar9 = 0;
    }
    else {
      plVar5 = (long *)(lVar3 + 0xf0);
    }
    puVar2 = (undefined8 *)(*plVar5 + (long)(iVar1 - iVar9) * 0x10);
    uStack_68 = puVar2[1];
    uStack_70 = *puVar2;
    lVar11 = *(long *)(param_3 + 0x20);
    iVar1 = *(int *)(lVar8 + (long)iVar7 * 0x14);
    iVar9 = *(int *)(lVar11 + 0x40);
    plVar5 = (long *)(lVar11 + 0x38);
    if (iVar1 < iVar9) {
      iVar10 = 0;
      plVar4 = plVar5;
    }
    else {
      plVar4 = (long *)(lVar11 + 0xf0);
      iVar10 = iVar9;
    }
    puVar2 = (undefined8 *)(*plVar4 + (long)(iVar1 - iVar10) * 0x10);
    uStack_98 = puVar2[1];
    local_a0 = *puVar2;
    iVar7 = *(int *)(lVar8 + (long)iVar7 * 0x14 + 4);
    if (iVar7 < iVar9) {
      iVar9 = 0;
    }
    else {
      plVar5 = (long *)(lVar11 + 0xf0);
    }
    puVar2 = (undefined8 *)(*plVar5 + (long)(iVar7 - iVar9) * 0x10);
    uStack_88 = puVar2[1];
    uStack_90 = *puVar2;
    local_a8[0] = 0;
    local_a4 = *(undefined4 *)(param_11 + 0x30);
    FUN_031df430(param_1,param_2,param_3,&local_80,&local_a0,param_6,param_7,param_8,param_9,
                 param_10,local_a8);
  }
  return;
}


