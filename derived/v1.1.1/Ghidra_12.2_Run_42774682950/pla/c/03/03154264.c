/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03154264; name: FUN_03154264
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03154264(long param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 *param_5,
                 uint *param_6,uint *param_7,byte *param_8,int param_9)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  int *piVar25;
  undefined8 *puVar26;
  uint uVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  int iVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  float fVar39;
  float fVar40;
  uint local_124;
  uint local_fc;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  uint local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar8 = *(long *)(param_1 + 0x18);
  iVar13 = *(int *)(param_1 + 0x38);
  lVar11 = *(long *)(*(long *)(*(long *)(param_2 + 0x38) + (param_4 >> 0x16 & 0x3ff) * 0xf0) + 0x20)
  ;
  lVar14 = *(long *)(param_1 + 0x28);
  uVar1 = (uint)param_4 & 0x3fffff;
  uVar24 = (ulong)uVar1;
  uVar15 = uVar1 - *(int *)(lVar11 + 0x30);
  if ((int)uVar1 < *(int *)(lVar11 + 0x30)) {
    uVar15 = uVar1;
    if ((*(int *)(lVar11 + 0x78) == 0) ||
       (uVar15 = *(uint *)(*(long *)(lVar11 + 0x70) + uVar24 * 4), uVar15 != 0xffffffff)) {
      lVar11 = *(long *)(lVar11 + 0xc0);
      goto LAB_0315484c;
    }
    piVar25 = (int *)(*(long *)(lVar11 + 0x28) + uVar24 * 0x14);
  }
  else {
    lVar11 = *(long *)(lVar11 + 0xe0);
LAB_0315484c:
    piVar25 = (int *)(lVar11 + (long)(int)uVar15 * 0x14);
  }
  bVar2 = *(byte *)(piVar25 + 4);
  lVar23 = *(long *)(*(long *)(param_2 + 0x38) + (long)(int)*param_7 * 0xf0);
  lVar11 = *(long *)(lVar23 + 0x20);
  uVar15 = piVar25[2];
  if ((bVar2 >> 6 & 1) == 0) {
    uVar27 = *(uint *)(lVar11 + 0x17c);
    if (uVar15 != 0xffffffff) goto LAB_03154320;
LAB_031546a4:
    uVar27 = 0xffffffff;
    if ((bVar2 >> 6 & 1) == 0) goto LAB_031546b0;
LAB_03154328:
    local_fc = piVar25[3];
    local_124 = uVar15;
  }
  else {
    uVar27 = uVar15 >> 0x16;
    if (uVar15 == 0xffffffff) goto LAB_031546a4;
LAB_03154320:
    if ((bVar2 >> 6 & 1) != 0) goto LAB_03154328;
LAB_031546b0:
    local_124 = uVar15 & 0x3fffff;
    if (uVar15 == 0xffffffff) {
      local_124 = 0xffffffff;
    }
    if (piVar25[3] == 0xffffffff) {
      local_fc = 0xffffffff;
    }
    else {
      local_fc = piVar25[3] & 0x3fffffU | *(uint *)(lVar11 + 0x17c) << 0x16;
    }
  }
  plVar10 = (long *)(lVar11 + 0x38);
  iVar36 = *(int *)(lVar11 + 0x40);
  if (*piVar25 < iVar36) {
    iVar20 = 0;
    plVar19 = plVar10;
  }
  else {
    plVar19 = (long *)(lVar11 + 0xf0);
    iVar20 = iVar36;
  }
  lVar22 = (long)param_9;
  puVar26 = (undefined8 *)(*plVar19 + (long)(*piVar25 - iVar20) * 0x10);
  uStack_88 = puVar26[1];
  uVar29 = *puVar26;
  if (piVar25[1] < iVar36) {
    iVar36 = 0;
  }
  else {
    plVar10 = (long *)(lVar11 + 0xf0);
  }
  puVar26 = (undefined8 *)(*plVar10 + (long)(piVar25[1] - iVar36) * 0x10);
  uStack_78 = puVar26[1];
  uVar31 = *puVar26;
  iVar36 = *(int *)(lVar11 + 0x50);
  lVar12 = (long)iVar36;
  uVar17 = (ulong)*param_6 & 0x3fffff;
  iVar16 = (int)uVar17;
  iVar20 = iVar16 - *(int *)(lVar11 + 0x20);
  if (iVar16 < *(int *)(lVar11 + 0x20)) {
    if (*(int *)(lVar11 + 0x98) != 0) {
      uVar15 = *(uint *)(*(long *)(lVar11 + 0x90) + uVar17 * 4);
      if (uVar15 == 0xffffffff) {
        lVar9 = *(long *)(lVar11 + 0x48) + (long)(iVar36 * iVar16) * 4;
        lVar7 = lVar9 + lVar12 * 4;
        lVar12 = *(long *)(lVar11 + 0x18) + uVar17 * 0x10;
        goto LAB_031543d0;
      }
      uVar17 = (ulong)uVar15;
    }
    lVar9 = *(long *)(lVar11 + 0x120) + (long)((int)uVar17 * iVar36) * 4;
    lVar7 = lVar9 + lVar12 * 4;
    lVar12 = *(long *)(lVar11 + 0xb0) + (long)(int)uVar17 * 0x10;
  }
  else {
    lVar9 = *(long *)(lVar11 + 0x140) + (long)(iVar36 * iVar20) * 4;
    lVar7 = lVar9 + lVar12 * 4;
    lVar12 = *(long *)(lVar11 + 0xd0) + (long)iVar20 * 0x10;
  }
LAB_031543d0:
  iVar36 = *(int *)(lVar11 + 0x60);
  uVar15 = uVar1 - *(int *)(lVar11 + 0x30);
  if ((int)uVar1 < *(int *)(lVar11 + 0x30)) {
    uVar15 = uVar1;
    if ((*(int *)(lVar11 + 0x78) != 0) &&
       (uVar15 = *(uint *)(*(long *)(lVar11 + 0x70) + uVar24 * 4), uVar15 == 0xffffffff)) {
      lVar18 = *(long *)(lVar11 + 0x58) + (long)(int)(iVar36 * uVar1) * 4;
      lVar11 = *(long *)(lVar11 + 0x28) + uVar24 * 0x14;
      lVar21 = lVar18 + (long)iVar36 * 4;
      goto LAB_03154420;
    }
    lVar18 = *(long *)(lVar11 + 0x130) + (long)(int)(uVar15 * iVar36) * 4;
    lVar11 = *(long *)(lVar11 + 0xc0);
  }
  else {
    lVar18 = *(long *)(lVar11 + 0x150) + (long)(int)(iVar36 * uVar15) * 4;
    lVar11 = *(long *)(lVar11 + 0xe0);
  }
  lVar21 = lVar18 + (long)iVar36 * 4;
  lVar11 = lVar11 + (long)(int)uVar15 * 0x14;
LAB_03154420:
  fVar39 = (float)uStack_88;
  fVar40 = (float)uStack_78;
  local_90 = uVar29;
  uStack_80 = uVar31;
  if ((bVar2 >> 4 & 1) == 0) {
    fVar32 = *(float *)(param_1 + 0x3c);
    if (*(float *)(param_1 + 0x3c) <= *(float *)(param_1 + 0x40)) {
      fVar32 = *(float *)(param_1 + 0x40);
    }
    FUN_03161978(fVar32,param_3,(ulong)*param_6,lVar12,lVar9,lVar7,param_4 & 0xffffffff,lVar11,
                 param_8,lVar18,lVar21,&local_c0,&local_a0);
    fVar32 = (float)uVar31 - (float)uVar29;
    fVar34 = (float)((ulong)uVar31 >> 0x20) - (float)((ulong)uVar29 >> 0x20);
    fVar35 = fVar40 - fVar39;
    fVar30 = *(float *)(param_1 + 0x44);
    fVar32 = fVar32 * fVar32;
    fVar34 = fVar34 * fVar34;
    fVar35 = fVar35 * fVar35;
    fVar33 = fVar35 + fVar32 + fVar34;
    uVar38 = CONCAT44(fVar35 + fVar32 + fVar34,fVar33);
    uVar37 = NEON_frsqrte(uVar38,4);
    fVar32 = (float)uVar37;
    fVar34 = (float)((ulong)uVar37 >> 0x20);
    uVar37 = NEON_frsqrts(uVar38,CONCAT44(fVar34 * fVar34,fVar32 * fVar32),4);
    fVar32 = fVar32 * (float)uVar37;
    fVar34 = fVar34 * (float)((ulong)uVar37 >> 0x20);
    uVar38 = NEON_frsqrts(uVar38,CONCAT44(fVar34 * fVar34,fVar32 * fVar32),4);
    fVar34 = fVar30 - (float)local_a0;
    fVar35 = fVar30 - (float)local_c0;
    if (fVar34 <= 0.0) {
      fVar34 = 0.0;
    }
    if (fVar35 <= 0.0) {
      fVar35 = 0.0;
    }
    iVar36 = -(uint)(fVar33 <= 0.0);
    fVar33 = fVar33 * (float)uVar38 * fVar32;
    fVar28 = (float)CONCAT13((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                             CONCAT12((byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                                      CONCAT11((byte)((uint)fVar33 >> 8) &
                                               ~(byte)((uint)iVar36 >> 8),
                                               SUB41(fVar33,0) & ~(byte)iVar36)));
    if (fVar28 < fVar34 + fVar35) {
      if ((float)local_a0 == (float)local_c0) {
        fVar33 = fVar28 * 0.5;
        fVar32 = fVar33;
      }
      else {
        fVar28 = fVar28 / ((float)local_a0 + (float)local_c0);
        fVar33 = (float)local_a0 * fVar28;
        fVar32 = (float)local_c0 * fVar28;
      }
    }
    else {
      fVar32 = *(float *)(param_1 + 0x3c) - (float)local_a0;
      if (fVar32 <= 0.0) {
        fVar32 = 0.0;
      }
      fVar33 = *(float *)(param_1 + 0x40) - (float)local_c0;
      if (fVar33 <= 0.0) {
        fVar33 = 0.0;
      }
      if (fVar28 < fVar32 + fVar33) {
        fVar32 = *(float *)(param_1 + 0x3c) - fVar30;
        fVar30 = *(float *)(param_1 + 0x40) - fVar30;
        fVar33 = (fVar28 - (fVar34 + fVar35)) / (fVar32 + fVar30);
        fVar32 = fVar34 + fVar32 * fVar33;
        fVar33 = fVar35 + fVar30 * fVar33;
      }
    }
  }
  else {
    fVar33 = 0.0;
    fVar32 = fVar33;
  }
  puVar26 = (undefined8 *)(lVar8 + lVar22 * 0x90);
  puVar26[1] = CONCAT44(-fVar32,fVar40);
  *puVar26 = uVar31;
  puVar26[3] = CONCAT44(fVar33,fVar39);
  puVar26[2] = uVar29;
  uVar29 = *param_5;
  puVar26[5] = param_5[1];
  puVar26[4] = uVar29;
  FUN_03174e1c(puVar26 + 0xe,param_2,param_4 & 0xffffffff,*param_6);
  *(char *)(puVar26 + 0x10) = (char)piVar25[4];
  *(undefined4 *)((long)puVar26 + 0x7c) = 0;
  lVar11 = *(long *)(lVar23 + 0x20);
  iVar36 = *(int *)(lVar11 + 0x60);
  if ((int)uVar1 < *(int *)(lVar11 + 0x30)) {
    uVar15 = uVar1;
    if ((*(int *)(lVar11 + 0x78) == 0) ||
       (uVar15 = *(uint *)(*(long *)(lVar11 + 0x70) + uVar24 * 4), uVar15 != 0xffffffff)) {
      lVar23 = *(long *)(lVar11 + 0x130);
      iVar36 = uVar15 * iVar36;
    }
    else {
      lVar23 = *(long *)(lVar11 + 0x58);
      iVar36 = iVar36 * uVar1;
    }
  }
  else {
    lVar23 = *(long *)(lVar11 + 0x150);
    iVar36 = (uVar1 - *(int *)(lVar11 + 0x30)) * iVar36;
  }
  memcpy((void *)(lVar14 + (long)(iVar13 * param_9) * 4),(void *)(lVar23 + (long)iVar36 * 4),
         (long)iVar13 << 2);
  uVar1 = *param_7;
  lVar11 = *(long *)(*(long *)(param_2 + 0x38) + (long)(int)uVar27 * 0xf0);
  bVar2 = *(byte *)(*(long *)(*(long *)(lVar11 + 0x20) + 0x68) + 0x80) & 1;
  bVar3 = *param_8;
  bVar4 = *(byte *)(piVar25 + 4);
  if (bVar3 == 0 && bVar2 == 0) {
    uStack_98 = param_5[1];
    local_a0 = *param_5;
    uVar29 = _DAT_03888d10;
    uVar31 = _UNK_03888d18;
    uVar38 = _DAT_03889a80;
    uVar37 = DAT_0388a140;
    uVar5 = DAT_0388a148;
  }
  else {
    local_a8[0] = local_fc & 0x3fffff;
    FUN_031934ec(lVar11,local_a8,&local_a0);
    uVar29 = _DAT_03888d10;
    uVar31 = _UNK_03888d18;
    uVar38 = _DAT_03889a80;
    uVar37 = DAT_0388a140;
    uVar5 = DAT_0388a148;
  }
  _DAT_03888d10 = uVar29;
  _UNK_03888d18 = uVar31;
  _DAT_03889a80 = uVar38;
  DAT_0388a140 = uVar37;
  DAT_0388a148 = uVar5;
  if ((uVar27 == uVar1) && ((bVar4 >> 4 & 1) == 0)) {
    lVar11 = lVar8 + lVar22 * 0x90;
    if (bVar3 == 0 && bVar2 == 0) {
      lVar8 = lVar8 + lVar22 * 0x90;
      *(undefined8 *)(lVar11 + 0x38) = _UNK_03889a88;
      *(undefined8 *)(lVar11 + 0x30) = uVar38;
      uVar6 = _UNK_0388a138;
      uVar38 = _DAT_0388a130;
      *(undefined8 *)(lVar8 + 0x48) = uVar5;
      *(undefined8 *)(lVar8 + 0x40) = uVar37;
      *(undefined8 *)(lVar8 + 0x58) = uVar31;
      *(undefined8 *)(lVar8 + 0x50) = uVar29;
      *(undefined8 *)(lVar8 + 0x68) = uVar6;
      *(undefined8 *)(lVar8 + 0x60) = uVar38;
    }
    else {
      FUN_03154f28(&uStack_80,param_5,&local_a0);
    }
  }
  else {
    local_124 = local_124 & 0x3fffff;
    uVar24 = (ulong)local_124;
    lVar11 = *(long *)(lVar11 + 0x20);
    if ((int)local_124 < *(int *)(lVar11 + 0x30)) {
      if ((*(int *)(lVar11 + 0x78) == 0) ||
         (local_124 = *(uint *)(*(long *)(lVar11 + 0x70) + uVar24 * 4), local_124 != 0xffffffff)) {
        piVar25 = (int *)(*(long *)(lVar11 + 0xc0) + (long)(int)local_124 * 0x14);
      }
      else {
        piVar25 = (int *)(*(long *)(lVar11 + 0x28) + uVar24 * 0x14);
      }
    }
    else {
      piVar25 = (int *)(*(long *)(lVar11 + 0xe0) +
                       (long)(int)(local_124 - *(int *)(lVar11 + 0x30)) * 0x14);
    }
    iVar13 = *(int *)(lVar11 + 0x40);
    plVar10 = (long *)(lVar11 + 0x38);
    if (*piVar25 < iVar13) {
      iVar36 = 0;
      plVar19 = plVar10;
    }
    else {
      plVar19 = (long *)(lVar11 + 0xf0);
      iVar36 = iVar13;
    }
    puVar26 = (undefined8 *)(*plVar19 + (long)(*piVar25 - iVar36) * 0x10);
    uStack_b8 = puVar26[1];
    local_c0 = *puVar26;
    if (piVar25[1] < iVar13) {
      iVar13 = 0;
    }
    else {
      plVar10 = (long *)(lVar11 + 0xf0);
    }
    puVar26 = (undefined8 *)(*plVar10 + (long)(piVar25[1] - iVar13) * 0x10);
    uStack_c8 = puVar26[1];
    local_d0 = *puVar26;
    FUN_0315507c(&uStack_80,&local_90,param_5,&local_c0,&local_d0,&local_a0,
                 lVar8 + lVar22 * 0x90 + 0x30);
  }
  *param_7 = uVar27;
  *param_6 = local_fc;
  *param_8 = bVar2;
  param_5[1] = uStack_98;
  *param_5 = local_a0;
  return;
}


