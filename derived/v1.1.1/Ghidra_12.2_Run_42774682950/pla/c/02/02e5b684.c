/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5b684; name: FUN_02e5b684
 */


void FUN_02e5b684(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  float *pfVar18;
  long *plVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 *puVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  
  lVar26 = *(long *)(*(long *)(*(long *)(param_1 + 0x78) + 8) + 0x48);
  uVar14 = *(uint *)(*(long *)(param_1 + 8) + 0x40);
  if (uVar14 == 0) {
    lVar24 = 0;
    lVar27 = 0;
  }
  else {
    plVar19 = *(long **)(*(long *)(param_1 + 8) + 0x38);
    lVar24 = *plVar19;
    if (uVar14 < 6) {
      lVar27 = 0;
    }
    else {
      lVar27 = plVar19[5];
    }
  }
  uVar14 = *(uint *)(DAT_0440a140 + 0x38);
  if (uVar14 == 0) {
    return;
  }
  uVar9 = 0;
  if (uVar14 != 0) {
    uVar9 = (uint)lVar26 / uVar14;
  }
  plVar19 = *(long **)(*(long *)(DAT_0440a140 + 0x30) + (ulong)((uint)lVar26 - uVar9 * uVar14) * 8);
  while( true ) {
    if (plVar19 == (long *)0x0) {
      return;
    }
    if (plVar19[1] == lVar26) break;
    plVar19 = (long *)*plVar19;
  }
  lVar12 = FUN_02e42e10(plVar19[2]);
  if (lVar24 == 0) {
    return;
  }
  if (lVar27 == 0) {
    return;
  }
  if (lVar12 == 0) {
    return;
  }
  puVar15 = *(undefined8 **)(lVar24 + 0x20);
  uVar20 = *puVar15;
  uVar4 = puVar15[1];
  uVar22 = puVar15[2];
  uVar23 = puVar15[3];
  uVar5 = *(undefined4 *)(puVar15 + 4);
  uVar6 = *(undefined4 *)((long)puVar15 + 0x24);
  plVar16 = *(long **)(lVar24 + 0x28);
  uVar14 = *(uint *)(lVar24 + 0x30);
  plVar19 = plVar16;
  if ((uVar14 != 0) && (*plVar16 != lVar26)) {
    lVar21 = (ulong)uVar14 * 0x18;
    fVar31 = 0.0;
    do {
      lVar21 = lVar21 + -0x18;
      if (lVar21 == 0) {
        fVar29 = 0.0;
        fVar30 = 0.0;
        fVar34 = 0.0;
        goto LAB_02e5b77c;
      }
      plVar1 = plVar19 + 3;
      plVar19 = plVar19 + 3;
    } while (*plVar1 != lVar26);
  }
  fVar31 = 0.0;
  if ((plVar19 == plVar16 + (ulong)uVar14 * 3) || ((int)plVar19[2] == 0)) {
    fVar29 = 0.0;
    fVar30 = 0.0;
    fVar34 = 0.0;
  }
  else {
    pfVar18 = (float *)plVar19[1];
    fVar34 = *pfVar18;
    fVar30 = pfVar18[2];
    fVar29 = pfVar18[3];
    fVar31 = pfVar18[1] * 100.0;
  }
LAB_02e5b77c:
  uVar35 = *(undefined4 *)(lVar24 + 0x50);
  *(undefined4 *)(lVar27 + 0x58) = 0;
  if (*(char *)(param_1 + 100) == '\0') {
    lVar24 = *(long *)(lVar27 + 0xa8);
    lVar21 = *(long *)(lVar27 + 0xc0);
    fVar32 = *(float *)(lVar27 + 0xcc);
    uVar7 = *(uint *)(lVar27 + 0x38);
    bVar10 = *(int *)(lVar27 + 0xb0) != 0;
    bVar11 = *(int *)(lVar27 + 200) == 0;
    uVar9 = (uint)(bVar10 && 0.0 < *(float *)(lVar27 + 0xb4));
    uVar14 = 1;
    if (bVar10 && 0.0 < *(float *)(lVar27 + 0xb4)) {
      uVar14 = 2;
    }
    if (bVar11 || fVar32 <= 0.0) {
      uVar14 = uVar9;
    }
    if (*(int *)(lVar27 + 0x5c) == 0) {
      lVar13 = (*DAT_0442d148)(0,*(undefined8 *)(lVar27 + 0x50),0x68);
      if (lVar13 == 0) {
        return;
      }
      *(long *)(lVar27 + 0x50) = lVar13;
      *(undefined4 *)(lVar27 + 0x5c) = 1;
    }
    else {
      lVar13 = *(long *)(lVar27 + 0x50);
    }
    if (lVar13 != 0) {
      *(undefined8 *)(lVar13 + 0x34) = 0x3f8000003f800000;
      *(undefined8 *)(lVar13 + 0x2c) = 0x3f80000000000000;
      *(undefined8 *)(lVar13 + 0x24) = 0;
      *(undefined8 *)(lVar13 + 0x3c) = 0;
      *(undefined8 *)(lVar13 + 0x44) = 0;
      *(undefined4 *)(lVar13 + 0x4c) = 0xffffffff;
      *(undefined8 *)(lVar13 + 0x60) = 0;
      *(undefined8 *)(lVar13 + 0x50) = 0;
      *(undefined8 *)(lVar13 + 0x58) = 0x3f8000003f800000;
    }
    uVar8 = *(uint *)(lVar27 + 0x38);
    uVar28 = (ulong)uVar8;
    uVar14 = uVar14 + uVar7;
    *(undefined4 *)(lVar27 + 0x58) = 1;
    if (uVar8 <= uVar14) {
      if (*(uint *)(lVar27 + 0x3c) < uVar14) {
        uVar2 = *(uint *)(lVar27 + 0x3c) + (uVar14 - uVar8);
        lVar13 = (*DAT_0442d148)(0,*(undefined8 *)(lVar27 + 0x30),(ulong)uVar2 * 0x68);
        if (lVar13 == 0) {
          return;
        }
        *(long *)(lVar27 + 0x30) = lVar13;
        *(uint *)(lVar27 + 0x3c) = uVar2;
      }
      if (uVar8 < uVar14) {
        if (*(long *)(lVar27 + 0x30) + uVar28 * 0x68 != 0) {
          lVar13 = *(long *)(lVar27 + 0x30) + uVar28 * 0x68;
          *(undefined8 *)(lVar13 + 0x2c) = 0x3f80000000000000;
          *(undefined8 *)(lVar13 + 0x24) = 0;
          *(undefined8 *)(lVar13 + 0x3c) = 0;
          *(undefined8 *)(lVar13 + 0x44) = 0;
          *(undefined4 *)(lVar13 + 0x4c) = 0xffffffff;
          *(undefined8 *)(lVar13 + 0x50) = 0;
          *(undefined8 *)(lVar13 + 0x58) = 0x3f8000003f800000;
          *(undefined8 *)(lVar13 + 0x34) = 0x3f8000003f800000;
          *(undefined8 *)(lVar13 + 0x60) = 0;
        }
        if (uVar28 + 1 != (ulong)uVar14) {
          lVar17 = ~uVar28 + (ulong)uVar14;
          lVar13 = uVar28 * 0x68 + 0xcc;
          do {
            lVar3 = *(long *)(lVar27 + 0x30) + lVar13;
            if (lVar3 != 100) {
              *(undefined8 *)(lVar3 + -0x40) = 0;
              *(undefined8 *)(lVar3 + -0x38) = 0x3f80000000000000;
              *(undefined8 *)(lVar3 + -0x20) = 0;
              *(undefined4 *)(lVar3 + -0x18) = 0xffffffff;
              *(undefined8 *)(lVar3 + -0x14) = 0;
              *(undefined8 *)(lVar3 + -0xc) = 0x3f8000003f800000;
              *(undefined8 *)(lVar3 + -4) = 0;
              *(undefined8 *)(lVar3 + -0x30) = 0x3f8000003f800000;
              *(undefined8 *)(lVar3 + -0x28) = 0;
            }
            lVar17 = lVar17 + -1;
            lVar13 = lVar13 + 0x68;
          } while (lVar17 != 0);
        }
      }
    }
    *(uint *)(lVar27 + 0x38) = uVar14;
    lVar13 = *(long *)(lVar27 + 0x30);
    puVar15 = (undefined8 *)(lVar13 + (ulong)uVar7 * 0x68);
    if (fVar34 <= *(float *)(param_1 + 0x60)) {
      fVar34 = *(float *)(param_1 + 0x60);
    }
    puVar25 = *(undefined8 **)(lVar27 + 0x50);
    lVar17 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x78) + 8) + 0x38) + 0x28);
    if (*(long *)(lVar27 + 0xa8) != *(long *)(lVar17 + 0xa8)) {
      fVar33 = *(float *)(lVar27 + 0xd8) * *(float *)(lVar27 + 0xb8) +
               (1.0 - *(float *)(lVar27 + 0xd8)) * *(float *)(lVar27 + 0xd0);
      fVar36 = *(float *)(lVar17 + 0xd8) * *(float *)(lVar17 + 0xb8) +
               (1.0 - *(float *)(lVar17 + 0xd8)) * *(float *)(lVar17 + 0xd0);
      if (fVar33 <= fVar36) {
        fVar33 = fVar36;
      }
      if (fVar34 <= fVar33) {
        fVar34 = fVar33;
      }
    }
    *puVar25 = uVar20;
    puVar25[1] = uVar4;
    *(undefined4 *)(puVar25 + 4) = uVar5;
    *(float *)((long)puVar25 + 0x3c) = fVar34 * 100.0;
    puVar25[2] = uVar22;
    puVar25[3] = uVar23;
    *(float *)((long)puVar25 + 0x44) = fVar30;
    *(float *)(puVar25 + 9) = fVar29;
    *(undefined4 *)((long)puVar25 + 0x4c) = uVar6;
    *(float *)(puVar25 + 8) = fVar31;
    puVar25[10] = lVar26;
    FUN_02e743d8(uVar35,lVar12,puVar25);
    if (uVar9 != 0) {
      uVar4 = *puVar25;
      uVar22 = puVar25[2];
      puVar15[1] = puVar25[1];
      puVar15[2] = uVar22;
      *puVar15 = uVar4;
      uVar22 = puVar25[6];
      uVar4 = puVar25[3];
      uVar20 = puVar25[4];
      puVar15[5] = puVar25[5];
      puVar15[6] = uVar22;
      puVar15[3] = uVar4;
      puVar15[4] = uVar20;
      uVar4 = puVar25[8];
      lVar26 = -4;
      if (lVar24 != -1) {
        lVar26 = lVar24;
      }
      uVar22 = puVar25[9];
      uVar20 = puVar25[10];
      puVar15[7] = puVar25[7];
      puVar15[8] = uVar4;
      puVar15[9] = uVar22;
      puVar15[10] = uVar20;
      puVar15 = puVar15 + 0xd;
      *(long *)(lVar13 + (ulong)uVar7 * 0x68 + 0x50) = lVar26;
    }
    if (!bVar11 && 0.0 < fVar32) {
      uVar4 = puVar25[1];
      *puVar15 = *puVar25;
      puVar15[1] = uVar4;
      uVar4 = puVar25[2];
      uVar22 = puVar25[3];
      uVar20 = puVar25[5];
      puVar15[4] = puVar25[4];
      puVar15[5] = uVar20;
      puVar15[2] = uVar4;
      puVar15[3] = uVar22;
      uVar22 = puVar25[9];
      uVar4 = puVar25[6];
      uVar20 = puVar25[7];
      puVar15[8] = puVar25[8];
      puVar15[9] = uVar22;
      puVar15[6] = uVar4;
      puVar15[7] = uVar20;
      lVar26 = -4;
      if (lVar21 != -1) {
        lVar26 = lVar21;
      }
      puVar15[10] = lVar26;
    }
  }
  return;
}


