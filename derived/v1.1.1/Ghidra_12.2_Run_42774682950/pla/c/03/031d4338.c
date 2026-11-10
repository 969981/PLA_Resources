/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d4338; name: FUN_031d4338
 */


void FUN_031d4338(undefined8 param_1,long param_2,long param_3,undefined4 *param_4,
                 undefined4 *param_5,uint *param_6,long param_7,undefined8 param_8,uint *param_9,
                 long param_10,long param_11)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  ulong local_140;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  float local_120;
  float fStack_11c;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  float local_f0;
  float fStack_ec;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  undefined4 local_a8 [2];
  undefined4 local_a0 [2];
  uint local_98 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  uint local_68;
  uint local_64;
  
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar15 = *(long *)(param_2 + 0x20);
  }
  else {
    lVar15 = FUN_02898b44();
  }
  if (*(char *)(param_3 + 0x30) == '\x01') {
    lVar16 = *(long *)(param_3 + 0x20);
  }
  else {
    lVar16 = FUN_02898b44();
  }
  local_90 = *(undefined8 *)(param_11 + 0x10);
  uStack_88 = *(undefined8 *)(param_11 + 0x18);
  if (((*(byte *)(*(long *)(lVar15 + 0x68) + 0x80) & 1) != 0) ||
     ((*(byte *)(*(long *)(lVar16 + 0x68) + 0x80) & 1) != 0)) {
    local_90 = 0;
    uStack_88 = 0;
  }
  if (((int)((ulong)(param_7 - (long)param_6) >> 3) == 1) &&
     ((int)((ulong)(param_10 - (long)param_9) >> 3) == 1)) {
    local_64 = *param_6;
    uVar2 = param_6[1];
    uVar1 = *param_9;
    uVar3 = param_9[1];
    fVar18 = *(float *)(param_11 + 4);
    local_98[0] = uVar3;
    local_68 = uVar2;
    fVar17 = (float)FUN_031e2360(param_2,param_3,&local_90,&local_68,local_98);
    if (fVar17 < fVar18) {
      iVar8 = *(int *)(lVar15 + 0x17c);
      iVar12 = *(int *)(lVar16 + 0x17c);
      FUN_0319133c(lVar15,lVar16);
      lVar10 = *(long *)(lVar15 + 0xe0) + (long)(int)(uVar2 - *(int *)(lVar15 + 0x30)) * 0x14;
      iVar4 = *(int *)(lVar16 + 0x30);
      lVar13 = *(long *)(lVar16 + 0xe0);
      *(byte *)(lVar10 + 0x10) = *(byte *)(lVar10 + 0x10) | 0x40;
      uVar5 = iVar12 << 0x16;
      lVar13 = lVar13 + (long)(int)(uVar3 - iVar4) * 0x14;
      *(uint *)(lVar10 + 8) = uVar5 | uVar3;
      *(uint *)(lVar10 + 0xc) = uVar5 | uVar1;
      uVar1 = iVar8 << 0x16;
      *(uint *)(lVar13 + 8) = uVar1 | uVar2;
      *(uint *)(lVar13 + 0xc) = uVar1 | local_64;
      *(byte *)(lVar13 + 0x10) = *(byte *)(lVar13 + 0x10) | 0x40;
      FUN_0319136c(lVar15,lVar16);
      return;
    }
  }
  local_a0[0] = param_4[1];
  fVar18 = *(float *)(param_11 + 4);
  local_a8[0] = param_5[1];
  fVar17 = (float)FUN_031e2360(param_2,param_3,&local_90,local_a0,local_a8);
  if (fVar17 < fVar18) {
    lVar15 = *(long *)(param_2 + 0x20);
    iVar8 = param_4[1];
    if (iVar8 < *(int *)(lVar15 + 0x30)) {
      lVar16 = *(long *)(lVar15 + 0x28);
      iVar12 = iVar8;
      if (*(int *)(lVar15 + 0x78) != 0) {
        iVar12 = *(int *)(*(long *)(lVar15 + 0x70) + (long)iVar8 * 4);
      }
      if (iVar12 != -1) {
        plVar11 = (long *)(lVar15 + 0xc0);
        iVar8 = iVar12;
        goto LAB_031d458c;
      }
    }
    else {
      plVar11 = (long *)(lVar15 + 0xe0);
      iVar8 = iVar8 - *(int *)(lVar15 + 0x30);
LAB_031d458c:
      lVar16 = *plVar11;
    }
    iVar12 = *(int *)(lVar15 + 0x40);
    iVar4 = *(int *)(lVar16 + (long)iVar8 * 0x14);
    plVar11 = (long *)(lVar15 + 0x38);
    if (iVar4 < iVar12) {
      iVar9 = 0;
      plVar14 = plVar11;
    }
    else {
      plVar14 = (long *)(lVar15 + 0xf0);
      iVar9 = iVar12;
    }
    puVar6 = (undefined8 *)(*plVar14 + (long)(iVar4 - iVar9) * 0x10);
    uStack_d8 = puVar6[1];
    local_e0 = *puVar6;
    iVar8 = *(int *)(lVar16 + (long)iVar8 * 0x14 + 4);
    if (iVar8 < iVar12) {
      iVar12 = 0;
    }
    else {
      plVar11 = (long *)(lVar15 + 0xf0);
    }
    puVar6 = (undefined8 *)(*plVar11 + (long)(iVar8 - iVar12) * 0x10);
    uStack_c8 = puVar6[1];
    uStack_d0 = *puVar6;
    lVar15 = *(long *)(param_3 + 0x20);
    iVar8 = param_5[1];
    if (iVar8 < *(int *)(lVar15 + 0x30)) {
      lVar16 = *(long *)(lVar15 + 0x28);
      iVar12 = iVar8;
      if (*(int *)(lVar15 + 0x78) != 0) {
        iVar12 = *(int *)(*(long *)(lVar15 + 0x70) + (long)iVar8 * 4);
      }
      if (iVar12 == -1) goto LAB_031d4640;
      plVar11 = (long *)(lVar15 + 0xc0);
      iVar8 = iVar12;
    }
    else {
      plVar11 = (long *)(lVar15 + 0xe0);
      iVar8 = iVar8 - *(int *)(lVar15 + 0x30);
    }
    lVar16 = *plVar11;
LAB_031d4640:
    iVar12 = *(int *)(lVar15 + 0x40);
    iVar4 = *(int *)(lVar16 + (long)iVar8 * 0x14);
    plVar11 = (long *)(lVar15 + 0x38);
    if (iVar4 < iVar12) {
      iVar9 = 0;
      plVar14 = plVar11;
    }
    else {
      plVar14 = (long *)(lVar15 + 0xf0);
      iVar9 = iVar12;
    }
    puVar6 = (undefined8 *)(*plVar14 + (long)(iVar4 - iVar9) * 0x10);
    uStack_108 = puVar6[1];
    local_110 = *puVar6;
    iVar8 = *(int *)(lVar16 + (long)iVar8 * 0x14 + 4);
    if (iVar8 < iVar12) {
      iVar12 = 0;
    }
    else {
      plVar11 = (long *)(lVar15 + 0xf0);
    }
    puVar6 = (undefined8 *)(*plVar11 + (long)(iVar8 - iVar12) * 0x10);
    uStack_f8 = puVar6[1];
    uStack_100 = *puVar6;
    local_140 = CONCAT44(*(undefined4 *)(param_11 + 0x30),(undefined4)local_140) &
                0xffffffffffff0000;
    FUN_031df430(param_1,param_2,param_3,&local_e0,&local_110,param_6,param_7);
    return;
  }
  iVar8 = FUN_03267c8c(*(undefined8 *)(param_11 + 0x20),(undefined8 *)(param_11 + 0x10),param_2,
                       param_3,param_4[1],param_5[1],*param_4,*param_5,&local_e0);
  if (iVar8 != -1) {
    return;
  }
  lVar15 = *(long *)(param_2 + 0x20);
  iVar8 = param_4[1];
  if (iVar8 < *(int *)(lVar15 + 0x30)) {
    lVar16 = *(long *)(lVar15 + 0x28);
    iVar12 = iVar8;
    if (*(int *)(lVar15 + 0x78) != 0) {
      iVar12 = *(int *)(*(long *)(lVar15 + 0x70) + (long)iVar8 * 4);
    }
    if (iVar12 != -1) {
      plVar11 = (long *)(lVar15 + 0xc0);
      iVar8 = iVar12;
      goto LAB_031d4784;
    }
  }
  else {
    plVar11 = (long *)(lVar15 + 0xe0);
    iVar8 = iVar8 - *(int *)(lVar15 + 0x30);
LAB_031d4784:
    lVar16 = *plVar11;
  }
  iVar12 = *(int *)(lVar15 + 0x40);
  iVar4 = *(int *)(lVar16 + (long)iVar8 * 0x14);
  plVar11 = (long *)(lVar15 + 0x38);
  if (iVar4 < iVar12) {
    iVar9 = 0;
    plVar14 = plVar11;
  }
  else {
    plVar14 = (long *)(lVar15 + 0xf0);
    iVar9 = iVar12;
  }
  puVar6 = (undefined8 *)(*plVar14 + (long)(iVar4 - iVar9) * 0x10);
  uStack_108 = puVar6[1];
  local_110 = *puVar6;
  iVar8 = *(int *)(lVar16 + (long)iVar8 * 0x14 + 4);
  if (iVar8 < iVar12) {
    iVar12 = 0;
  }
  else {
    plVar11 = (long *)(lVar15 + 0xf0);
  }
  puVar6 = (undefined8 *)(*plVar11 + (long)(iVar8 - iVar12) * 0x10);
  uStack_f8 = puVar6[1];
  uStack_100 = *puVar6;
  local_f0 = 1.0 / (fStack_bc - local_c0);
  fStack_ec = -(local_c0 * local_f0);
  lVar15 = *(long *)(param_3 + 0x20);
  iVar8 = param_5[1];
  if (iVar8 < *(int *)(lVar15 + 0x30)) {
    lVar16 = *(long *)(lVar15 + 0x28);
    iVar12 = iVar8;
    if (*(int *)(lVar15 + 0x78) != 0) {
      iVar12 = *(int *)(*(long *)(lVar15 + 0x70) + (long)iVar8 * 4);
    }
    if (iVar12 == -1) goto LAB_031d4850;
    plVar11 = (long *)(lVar15 + 0xc0);
    iVar8 = iVar12;
  }
  else {
    plVar11 = (long *)(lVar15 + 0xe0);
    iVar8 = iVar8 - *(int *)(lVar15 + 0x30);
  }
  lVar16 = *plVar11;
LAB_031d4850:
  iVar12 = *(int *)(lVar15 + 0x40);
  iVar4 = *(int *)(lVar16 + (long)iVar8 * 0x14);
  plVar11 = (long *)(lVar15 + 0x38);
  if (iVar4 < iVar12) {
    iVar9 = 0;
    plVar14 = plVar11;
  }
  else {
    plVar14 = (long *)(lVar15 + 0xf0);
    iVar9 = iVar12;
  }
  puVar7 = (ulong *)(*plVar14 + (long)(iVar4 - iVar9) * 0x10);
  uStack_138 = puVar7[1];
  local_140 = *puVar7;
  iVar8 = *(int *)(lVar16 + (long)iVar8 * 0x14 + 4);
  if (iVar8 < iVar12) {
    iVar12 = 0;
  }
  else {
    plVar11 = (long *)(lVar15 + 0xf0);
  }
  puVar6 = (undefined8 *)(*plVar11 + (long)(iVar8 - iVar12) * 0x10);
  uStack_128 = puVar6[1];
  uStack_130 = *puVar6;
  local_120 = 1.0 / (fStack_b4 - local_b8);
  fStack_11c = -(local_b8 * local_120);
  FUN_031dfa50(param_1,param_2,param_3,&local_110,&local_140,param_6,param_7);
  return;
}


