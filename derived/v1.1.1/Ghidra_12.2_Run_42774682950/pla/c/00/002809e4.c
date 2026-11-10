/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002809e4; name: FUN_002809e4
 */


void FUN_002809e4(float param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 int *param_6)

{
  uint uVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  int iVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  float *pfVar16;
  int iVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float local_18 [4];
  float local_8;
  float fStack_4;
  
  uVar1 = *(uint *)(param_4 + 0x70);
  uVar10 = (ulong)uVar1;
  if ((int)uVar1 < 2) {
    *(undefined4 *)(param_4 + 0x78) = 0;
    return;
  }
  iVar17 = param_6[0x16];
  puVar11 = *(undefined8 **)(*(long *)(param_4 + 0x58) + 0x58);
  if (iVar17 == 1) {
    fVar19 = 0.0;
    iVar12 = uVar1 - 1;
    puVar15 = puVar11;
    do {
      puVar15 = (undefined8 *)puVar15[0xb];
      iVar12 = iVar12 + -1;
      pfVar16 = (float *)puVar15[0xc];
      fVar20 = (float)*puVar15 - *pfVar16;
      fVar21 = (float)((ulong)*puVar15 >> 0x20) - pfVar16[1];
      fVar22 = (float)puVar15[1] - pfVar16[2];
      fVar23 = (float)((ulong)puVar15[1] >> 0x20) - pfVar16[3];
      fVar20 = fVar20 * fVar20;
      fVar21 = fVar21 * fVar21;
      fVar22 = fVar22 * fVar22;
      fVar23 = fVar23 * fVar23;
      auVar24._4_4_ = fVar21;
      auVar24._0_4_ = fVar20;
      auVar24._8_4_ = fVar22;
      auVar24._12_4_ = fVar23;
      auVar3._4_4_ = fVar21;
      auVar3._0_4_ = fVar20;
      auVar3._8_4_ = fVar22;
      auVar3._12_4_ = fVar23;
      auVar24 = NEON_ext(auVar24,auVar3,8,1);
      fVar19 = fVar19 + SQRT(auVar24._0_4_ + fVar20 + auVar24._4_4_ + fVar21);
    } while (iVar12 != 0);
    fVar19 = 1.0 / fVar19;
    lVar13 = *(long *)(*(long *)(param_5 + 0x238) + 0x10);
    cVar2 = *(char *)(lVar13 + 0x75c);
  }
  else {
    fVar19 = 0.0;
    lVar13 = *(long *)(*(long *)(param_5 + 0x238) + 0x10);
    cVar2 = *(char *)(lVar13 + 0x75c);
  }
  if (cVar2 == '\0') {
    fVar20 = 1.0;
    cVar2 = *(char *)(lVar13 + 0x756);
  }
  else {
    fVar20 = *(float *)(param_5 + 0x74);
    cVar2 = *(char *)(lVar13 + 0x756);
  }
  if (cVar2 != '\0') {
    fVar20 = fVar20 * *(float *)(param_5 + 0x70);
  }
  if ((int)uVar1 < 1) {
    *(undefined4 *)(param_4 + 0x78) = 0;
    iVar17 = *param_6;
joined_r0x00280d2c:
    if (((iVar17 != 0) && (iVar17 != 3)) && (0 < (int)uVar1)) {
      lVar13 = *(long *)(param_4 + 0x58);
      puVar14 = (undefined4 *)(param_3 + 0x98);
      do {
        lVar13 = *(long *)(lVar13 + 0x58);
        uVar10 = uVar10 - 1;
        uVar18 = *(undefined8 *)(lVar13 + 0x48);
        *(undefined8 *)(puVar14 + -0x16) = *(undefined8 *)(lVar13 + 0x40);
        puVar14[-0x14] = (int)uVar18;
        uVar18 = *(undefined8 *)(lVar13 + 0x48);
        *(undefined8 *)(puVar14 + -2) = *(undefined8 *)(lVar13 + 0x40);
        *puVar14 = (int)uVar18;
        puVar14 = puVar14 + 0x28;
      } while (uVar10 != 0);
    }
    return;
  }
  fVar21 = *(float *)(param_4 + 0x80);
  iVar12 = 0;
  lVar13 = 0;
  puVar14 = (undefined4 *)(param_3 + 0x50);
  if (iVar17 == 1) goto LAB_00280b1c;
  do {
    fVar22 = 0.0;
    fVar23 = 0.0;
    fVar25 = 0.0;
    if (iVar17 != 0) goto LAB_00280be4;
    local_18[0] = (float)(int)lVar13 / (float)(int)(uVar1 - 1);
    local_18[1] = local_18[0];
    local_18[3] = ((fVar21 - (float)(int)fVar21) + param_1 + (float)(int)lVar13) /
                  (float)((int)(float)param_6[6] + -1);
    if (1.0 < local_18[3]) {
      local_18[3] = 1.0;
    }
    local_18[2] = local_18[0];
    local_8 = local_18[3];
    fStack_4 = local_18[3];
    while( true ) {
      fVar23 = local_18[(long)param_6[3] * 3];
      fVar25 = local_18[(long)param_6[4] * 3 + 1];
      fVar22 = local_18[(long)param_6[5] * 3 + 2];
LAB_00280be4:
      uVar18 = puVar11[1];
      fVar26 = *(float *)(puVar11 + 10);
      *(undefined8 *)(puVar14 + -0x14) = *puVar11;
      puVar14[-0x12] = (int)uVar18;
      uVar6 = *(undefined4 *)((long)puVar11 + 4);
      uVar7 = *(undefined4 *)(puVar11 + 1);
      *puVar14 = *(undefined4 *)puVar11;
      puVar14[1] = uVar6;
      puVar14[2] = uVar7;
      puVar14[-0x11] = fVar20 * fVar26;
      puVar14[3] = -(fVar20 * fVar26);
      uVar18 = puVar11[5];
      *(undefined8 *)(puVar14 + -0x10) = puVar11[4];
      puVar14[-0xe] = (int)uVar18;
      uVar18 = puVar11[5];
      *(undefined8 *)(puVar14 + 4) = puVar11[4];
      puVar14[6] = (int)uVar18;
      uVar18 = puVar11[7];
      *(undefined8 *)(puVar14 + -0xc) = puVar11[6];
      puVar14[-10] = (int)uVar18;
      uVar18 = puVar11[7];
      *(undefined8 *)(puVar14 + 8) = puVar11[6];
      puVar14[10] = (int)uVar18;
      *(ulong *)(puVar14 + -8) = CONCAT44(fVar25,fVar23);
      puVar14[-6] = fVar22;
      *(ulong *)(puVar14 + 0xc) = CONCAT44(fVar25,fVar23);
      puVar14[0xe] = fVar22;
      puVar14[-0xd] = (float)(int)lVar13;
      puVar14[7] = (float)(int)lVar13;
      if (uVar10 - 1 == lVar13) {
        *(uint *)(param_4 + 0x78) = uVar1 << 1;
        iVar17 = *param_6;
        goto joined_r0x00280d2c;
      }
      puVar11 = (undefined8 *)puVar11[0xb];
      lVar13 = lVar13 + 1;
      iVar12 = iVar12 + 2;
      iVar17 = param_6[0x16];
      puVar14 = puVar14 + 0x28;
      if (iVar17 != 1) break;
LAB_00280b1c:
      pfVar16 = (float *)puVar11[0xc];
      fStack_4 = *(float *)(param_4 + 0x8c) * 0.1;
      iVar17 = iVar12;
      if (iVar12 < 3) {
        iVar17 = 2;
      }
      lVar9 = param_3 + (ulong)(iVar17 - 2) * 0x50;
      fVar22 = *pfVar16 - (float)*puVar11;
      fVar23 = pfVar16[1] - (float)((ulong)*puVar11 >> 0x20);
      fVar25 = pfVar16[2] - (float)puVar11[1];
      fVar26 = pfVar16[3] - (float)((ulong)puVar11[1] >> 0x20);
      fVar22 = fVar22 * fVar22;
      fVar23 = fVar23 * fVar23;
      fVar25 = fVar25 * fVar25;
      fVar26 = fVar26 * fVar26;
      auVar4._4_4_ = fVar23;
      auVar4._0_4_ = fVar22;
      auVar4._8_4_ = fVar25;
      auVar4._12_4_ = fVar26;
      auVar5._4_4_ = fVar23;
      auVar5._0_4_ = fVar22;
      auVar5._8_4_ = fVar25;
      auVar5._12_4_ = fVar26;
      auVar24 = NEON_ext(auVar4,auVar5,8,1);
      bVar8 = lVar13 != 0;
      fVar22 = SQRT(auVar24._0_4_ + fVar22 + auVar24._4_4_ + fVar23);
      fVar23 = fVar19 * fVar22;
      fVar22 = fVar22 * 0.1;
      local_18[0] = 0.0;
      if (bVar8) {
        local_18[0] = *(float *)(lVar9 + 0x30) + fVar23;
      }
      local_18[1] = 0.0;
      if (bVar8) {
        local_18[1] = fVar23 + *(float *)(lVar9 + 0x34);
      }
      local_8 = fStack_4;
      local_18[3] = fStack_4;
      if (bVar8) {
        local_8 = *(float *)(lVar9 + 0x34) - fVar22;
        local_18[3] = *(float *)(lVar9 + 0x30) - fVar22;
      }
      local_18[2] = 0.0;
      if (bVar8) {
        fStack_4 = *(float *)(lVar9 + 0x38) - fVar22;
        local_18[2] = fVar23 + *(float *)(lVar9 + 0x38);
      }
    }
  } while( true );
}


