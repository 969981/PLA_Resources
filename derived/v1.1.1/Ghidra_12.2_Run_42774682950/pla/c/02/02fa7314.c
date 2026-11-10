/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fa7314; name: FUN_02fa7314
 */


void FUN_02fa7314(undefined8 *param_1,long param_2,float *param_3,float *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ushort *puVar12;
  bool bVar13;
  float *pfVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 local_20 [16];
  float local_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  lVar15 = *(long *)(param_2 + 0x50);
  if (lVar15 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = lVar15 + param_2 + 0x50;
  }
  param_1[0x121] = lVar15;
  param_1[0x126] = *(undefined8 *)(param_2 + 0x48);
  iVar5 = *(int *)(param_2 + 0x58);
  iVar6 = *(int *)(param_2 + 0x5c);
  fVar24 = (float)(iVar5 + -1);
  *(int *)(param_1 + 300) = iVar5;
  *(int *)((long)param_1 + 0x964) = iVar6;
  fVar18 = *param_3;
  fVar26 = fVar24;
  if (fVar18 <= fVar24) {
    fVar26 = fVar18;
  }
  fVar25 = 0.0;
  if (0.0 <= fVar18) {
    fVar25 = fVar26;
  }
  fVar20 = param_3[2];
  fVar23 = *param_4;
  fVar26 = (float)(iVar6 + -1);
  fVar18 = fVar26;
  if (fVar20 <= fVar26) {
    fVar18 = fVar20;
  }
  fVar21 = 0.0;
  if (0.0 <= fVar20) {
    fVar21 = fVar18;
  }
  fVar18 = param_4[2];
  if (fVar23 <= fVar24) {
    fVar24 = fVar23;
  }
  fVar20 = 0.0;
  if (0.0 <= fVar23) {
    fVar20 = fVar24;
  }
  if (fVar18 <= fVar26) {
    fVar26 = fVar18;
  }
  fVar24 = 0.0;
  if (0.0 <= fVar18) {
    fVar24 = fVar26;
  }
  uVar3 = (int)fVar20 ^ (int)fVar25;
  uVar3 = uVar3 | uVar3 >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar4 = (int)fVar24 ^ (int)fVar21;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x55555555);
  uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
  uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
  uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
  uVar3 = 0x20 - ((uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
  uVar4 = 0x20 - ((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
  if (uVar4 <= uVar3) {
    uVar3 = uVar4;
  }
  uVar10 = -uVar3;
  uVar3 = 0x20 - uVar3;
  uVar4 = (int)fVar25 >> (uVar10 & 0x1f);
  uVar1 = (int)fVar21 >> (uVar10 & 0x1f);
  iVar9 = 1 << (ulong)(uVar10 & 0x1f);
  if (iVar9 < iVar5 || iVar9 < iVar6) {
    uVar7 = *(uint *)(lVar15 + 0x50);
    uVar11 = uVar7 - uVar3;
    bVar13 = uVar11 != 0;
    uVar10 = uVar3;
    if (bVar13 && (int)uVar3 <= (int)uVar7) {
      uVar10 = uVar7;
    }
    iVar5 = uVar10 - uVar7;
    plVar16 = (long *)(lVar15 + 0x20);
    lVar17 = *plVar16;
    uVar10 = uVar4;
    if (bVar13 && (int)uVar3 <= (int)uVar7) {
      uVar10 = (int)uVar4 >> (uVar11 & 0x1f);
    }
    uVar2 = uVar1;
    if (bVar13 && (int)uVar3 <= (int)uVar7) {
      uVar2 = (int)uVar1 >> (uVar11 & 0x1f);
    }
    uVar7 = uVar10;
    if ((int)uVar10 < 0) {
      uVar7 = uVar10 + 1;
    }
    uVar11 = uVar2;
    if ((int)uVar2 < 0) {
      uVar11 = uVar2 + 1;
    }
    if ((int)uVar7 >> 1 < (int)(uint)*(ushort *)((long)plVar16 + (long)iVar5 * 0x18 + lVar17 + 0x10)
       ) {
      uVar8 = *(ushort *)((long)plVar16 + (long)iVar5 * 0x18 + lVar17 + 0x12);
      if ((int)uVar11 >> 1 < (int)(uint)uVar8) {
        plVar16 = (long *)((long)plVar16 + (long)iVar5 * 0x18 + lVar17);
        uVar7 = ((int)uVar11 >> 1) + ((int)uVar7 >> 1) * (uint)uVar8;
        puVar12 = (ushort *)
                  ((long)plVar16 +
                  (-(ulong)((uVar7 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                  (ulong)(uVar7 * 4) << 2) + *plVar16);
        auVar22._2_2_ = 0;
        auVar22._0_2_ = *puVar12;
        auVar22._4_2_ = puVar12[1];
        auVar22._6_2_ = 0;
        auVar22._8_2_ = puVar12[2];
        auVar22._10_2_ = 0;
        auVar22._12_2_ = puVar12[3];
        auVar22._14_2_ = 0;
        auVar19._2_2_ = 0;
        auVar19._0_2_ = puVar12[4];
        auVar19._4_2_ = puVar12[5];
        auVar19._6_2_ = 0;
        auVar19._8_2_ = puVar12[6];
        auVar19._10_2_ = 0;
        auVar19._12_2_ = puVar12[7];
        auVar19._14_2_ = 0;
        fVar24 = *(float *)(lVar15 + 0x40);
        auVar22 = NEON_ucvtf(auVar22,4);
        NEON_ucvtf(auVar19,4);
        fStack_8 = (float)*(undefined8 *)(lVar15 + 0x38) + auVar22._8_4_ * fVar24;
        fStack_4 = (float)((ulong)*(undefined8 *)(lVar15 + 0x38) >> 0x20) + auVar22._12_4_ * fVar24;
        local_10 = (float)*(undefined8 *)(lVar15 + 0x30) + auVar22._0_4_ * fVar24;
        fStack_c = (float)((ulong)*(undefined8 *)(lVar15 + 0x30) >> 0x20) + auVar22._4_4_ * fVar24;
      }
    }
    uVar7 = uVar10 & 1;
    if ((uVar2 & 1) != 0) {
      uVar7 = uVar10 & 1 ^ 3;
    }
    if (uVar7 == 0) {
      lVar15 = 0;
      pfVar14 = &local_10;
    }
    else if (uVar7 == 1) {
      pfVar14 = (float *)((ulong)&local_10 | 4);
      lVar15 = 1;
    }
    else if (uVar7 == 2) {
      pfVar14 = (float *)((ulong)&local_10 | 8);
      lVar15 = 2;
    }
    else {
      pfVar14 = (float *)((ulong)&local_10 | 0xc);
      lVar15 = 3;
    }
    fVar24 = *(float *)((ulong)local_20 | lVar15 << 2);
    fVar26 = *pfVar14;
  }
  else {
    fVar26 = *(float *)(param_2 + 0x94) * *(float *)(param_2 + 0x74);
    fVar24 = *(float *)(param_2 + 0x74) * *(float *)(param_2 + 0xa4);
  }
  *(uint *)(param_1 + 4) = uVar3;
  *(uint *)((long)param_1 + 0x24) = uVar4;
  *(uint *)(param_1 + 5) = uVar1;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 1;
  *(float *)(param_1 + 1) = (float)(int)(uVar1 << (ulong)(uVar3 & 0x1f));
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *param_1 = CONCAT44(fVar26,(float)(int)(uVar4 << (ulong)(uVar3 & 0x1f)));
  param_1[3] = (ulong)(uint)(float)(int)(uVar1 + 1 << (ulong)(uVar3 & 0x1f));
  param_1[2] = CONCAT44(fVar24,(float)(int)(uVar4 + 1 << (ulong)(uVar3 & 0x1f)));
  return;
}


