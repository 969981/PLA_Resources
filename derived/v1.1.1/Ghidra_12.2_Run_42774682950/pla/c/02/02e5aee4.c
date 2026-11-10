/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5aee4; name: FUN_02e5aee4
 */


void FUN_02e5aee4(long param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 uVar10;
  bool bVar11;
  bool bVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  float *pfVar16;
  undefined8 *puVar17;
  uint uVar18;
  long *plVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  undefined8 *puVar28;
  long lVar29;
  long lVar30;
  float fVar31;
  float fVar32;
  long lVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  float fVar39;
  undefined8 *local_e0;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  
  lVar29 = *(long *)(*(long *)(*(long *)(param_1 + 0x78) + 8) + 0x48);
  uVar9 = *(uint *)(*(long *)(param_1 + 8) + 0x40);
  if (uVar9 == 0) {
    lVar30 = 0;
    lVar33 = 0;
  }
  else {
    plVar19 = *(long **)(*(long *)(param_1 + 8) + 0x38);
    lVar30 = *plVar19;
    if (uVar9 < 6) {
      lVar33 = 0;
    }
    else {
      lVar33 = plVar19[5];
    }
  }
  uVar9 = *(uint *)(DAT_0440a140 + 0x38);
  if (uVar9 == 0) {
    return;
  }
  uVar18 = 0;
  if (uVar9 != 0) {
    uVar18 = (uint)lVar29 / uVar9;
  }
  plVar19 = *(long **)(*(long *)(DAT_0440a140 + 0x30) + (ulong)((uint)lVar29 - uVar18 * uVar9) * 8);
  while( true ) {
    if (plVar19 == (long *)0x0) {
      return;
    }
    if (plVar19[1] == lVar29) break;
    plVar19 = (long *)*plVar19;
  }
  lVar13 = FUN_02e42e10(plVar19[2]);
  if (lVar30 == 0) {
    return;
  }
  if (lVar33 == 0) {
    return;
  }
  if (lVar13 == 0) {
    return;
  }
  plVar6 = *(long **)(lVar30 + 0x28);
  uVar10 = *(undefined4 *)(*(long *)(lVar30 + 0x20) + 0x24);
  uVar9 = *(uint *)(lVar30 + 0x30);
  plVar19 = plVar6;
  if ((uVar9 != 0) && (*plVar6 != lVar29)) {
    lVar24 = (ulong)uVar9 * 0x18;
    fVar35 = 0.0;
    plVar23 = plVar6;
    do {
      lVar24 = lVar24 + -0x18;
      if (lVar24 == 0) {
        fVar31 = 0.0;
        fVar32 = 0.0;
        fVar36 = 0.0;
        goto LAB_02e5afd0;
      }
      plVar19 = plVar23 + 3;
      plVar3 = plVar23 + 3;
      plVar23 = plVar19;
    } while (*plVar3 != lVar29);
  }
  fVar35 = 0.0;
  if ((plVar19 == plVar6 + (ulong)uVar9 * 3) || ((int)plVar19[2] == 0)) {
    fVar31 = 0.0;
    fVar32 = 0.0;
    fVar36 = 0.0;
  }
  else {
    pfVar16 = (float *)plVar19[1];
    fVar35 = pfVar16[1];
    fVar32 = pfVar16[2];
    fVar31 = pfVar16[3];
    fVar36 = *pfVar16 * 100.0;
  }
LAB_02e5afd0:
  *(undefined4 *)(lVar33 + 0x28) = 0;
  *(undefined4 *)(lVar33 + 0x38) = 0;
  bVar11 = *(int *)(lVar33 + 0xb0) != 0;
  uVar9 = *(uint *)(param_1 + 0x70);
  lVar24 = *(long *)(lVar33 + 0xa8);
  lVar25 = *(long *)(lVar33 + 0xc0);
  bVar1 = 0.0 < *(float *)(lVar33 + 0xb4);
  uVar18 = uVar9;
  if (!bVar11 || !bVar1) {
    uVar18 = 0;
  }
  bVar12 = *(int *)(lVar33 + 200) != 0;
  bVar2 = 0.0 < *(float *)(lVar33 + 0xcc);
  uVar5 = uVar9;
  if (!bVar12 || !bVar2) {
    uVar5 = 0;
  }
  uVar5 = uVar5 + uVar18;
  if (*(uint *)(lVar33 + 0x2c) < uVar9) {
    uVar18 = *(uint *)(lVar33 + 0x2c) + uVar9;
    lVar22 = (*DAT_0442d148)(0,*(undefined8 *)(lVar33 + 0x20),(ulong)uVar18 * 0x68);
    if (lVar22 == 0) {
      return;
    }
    *(long *)(lVar33 + 0x20) = lVar22;
    *(uint *)(lVar33 + 0x2c) = uVar18;
LAB_02e5b2c8:
    lVar22 = *(long *)(lVar33 + 0x20);
    if (lVar22 != 0) {
      *(undefined8 *)(lVar22 + 0x34) = 0x3f8000003f800000;
      *(undefined8 *)(lVar22 + 0x2c) = 0x3f80000000000000;
      *(undefined8 *)(lVar22 + 0x24) = 0;
      *(undefined8 *)(lVar22 + 0x3c) = 0;
      *(undefined8 *)(lVar22 + 0x44) = 0;
      *(undefined4 *)(lVar22 + 0x4c) = 0xffffffff;
      *(undefined8 *)(lVar22 + 0x60) = 0;
      *(undefined8 *)(lVar22 + 0x50) = 0;
      *(undefined8 *)(lVar22 + 0x58) = 0x3f8000003f800000;
    }
    if (uVar9 != 1) {
      lVar15 = (ulong)uVar9 - 1;
      lVar22 = 0xcc;
      do {
        lVar4 = *(long *)(lVar33 + 0x20) + lVar22;
        lVar15 = lVar15 + -1;
        lVar22 = lVar22 + 0x68;
        *(undefined8 *)(lVar4 + -0x40) = 0;
        *(undefined8 *)(lVar4 + -0x38) = 0x3f80000000000000;
        *(undefined8 *)(lVar4 + -0x30) = 0x3f8000003f800000;
        *(undefined8 *)(lVar4 + -0x28) = 0;
        *(undefined8 *)(lVar4 + -0x20) = 0;
        *(undefined4 *)(lVar4 + -0x18) = 0xffffffff;
        *(undefined8 *)(lVar4 + -0x14) = 0;
        *(undefined8 *)(lVar4 + -0xc) = 0x3f8000003f800000;
        *(undefined8 *)(lVar4 + -4) = 0;
      } while (lVar15 != 0);
    }
    uVar18 = *(uint *)(lVar33 + 0x38);
    *(uint *)(lVar33 + 0x28) = uVar9;
    if (uVar5 < uVar18) goto LAB_02e5b05c;
  }
  else {
    if (uVar9 != 0) goto LAB_02e5b2c8;
    uVar18 = 0;
    *(undefined4 *)(lVar33 + 0x28) = 0;
  }
  if (*(uint *)(lVar33 + 0x3c) < uVar5) {
    uVar9 = *(uint *)(lVar33 + 0x3c) + (uVar5 - uVar18);
    lVar22 = (*DAT_0442d148)(0,*(undefined8 *)(lVar33 + 0x30),(ulong)uVar9 * 0x68);
    if (lVar22 == 0) {
      return;
    }
    *(long *)(lVar33 + 0x30) = lVar22;
    *(uint *)(lVar33 + 0x3c) = uVar9;
  }
  if (uVar18 < uVar5) {
    uVar20 = (ulong)uVar18;
    if (*(long *)(lVar33 + 0x30) + (ulong)uVar18 * 0x68 != 0) {
      lVar22 = *(long *)(lVar33 + 0x30) + uVar20 * 0x68;
      *(undefined8 *)(lVar22 + 0x2c) = 0x3f80000000000000;
      *(undefined8 *)(lVar22 + 0x24) = 0;
      *(undefined8 *)(lVar22 + 0x3c) = 0;
      *(undefined8 *)(lVar22 + 0x44) = 0;
      *(undefined4 *)(lVar22 + 0x4c) = 0xffffffff;
      *(undefined8 *)(lVar22 + 0x50) = 0;
      *(undefined8 *)(lVar22 + 0x58) = 0x3f8000003f800000;
      *(undefined8 *)(lVar22 + 0x34) = 0x3f8000003f800000;
      *(undefined8 *)(lVar22 + 0x60) = 0;
    }
    if (uVar20 + 1 != (ulong)uVar5) {
      lVar15 = ~uVar20 + (ulong)uVar5;
      lVar22 = uVar20 * 0x68 + 0xcc;
      do {
        lVar4 = *(long *)(lVar33 + 0x30) + lVar22;
        if (lVar4 != 100) {
          *(undefined8 *)(lVar4 + -0x40) = 0;
          *(undefined8 *)(lVar4 + -0x38) = 0x3f80000000000000;
          *(undefined8 *)(lVar4 + -0x20) = 0;
          *(undefined4 *)(lVar4 + -0x18) = 0xffffffff;
          *(undefined8 *)(lVar4 + -0x14) = 0;
          *(undefined8 *)(lVar4 + -0xc) = 0x3f8000003f800000;
          *(undefined8 *)(lVar4 + -4) = 0;
          *(undefined8 *)(lVar4 + -0x30) = 0x3f8000003f800000;
          *(undefined8 *)(lVar4 + -0x28) = 0;
        }
        lVar15 = lVar15 + -1;
        lVar22 = lVar22 + 0x68;
      } while (lVar15 != 0);
    }
  }
LAB_02e5b05c:
  *(uint *)(lVar33 + 0x38) = uVar5;
  if (*(int *)(param_1 + 0x70) == 0) {
    fVar37 = 1.0;
  }
  else {
    local_e0 = *(undefined8 **)(lVar33 + 0x30);
    puVar28 = *(undefined8 **)(lVar33 + 0x20);
    lVar33 = *(long *)(param_1 + 0x68);
    fVar37 = 1.0;
    lVar22 = -4;
    if (lVar24 != -1) {
      lVar22 = lVar24;
    }
    bVar12 = bVar12 && bVar2;
    lVar24 = -4;
    if (lVar25 != -1) {
      lVar24 = lVar25;
    }
    if (bVar11 && bVar1) {
      do {
        fVar34 = *(float *)(lVar33 + 0x84);
        if (*(float *)(lVar33 + 0x84) <= fVar35) {
          fVar34 = fVar35;
        }
        fVar39 = *(float *)(lVar33 + 0x7c);
        uVar14 = *(undefined8 *)(lVar33 + 0x148);
        if (fVar34 <= fVar39 && (param_2 & 2) != 0) {
          fVar34 = fVar39;
        }
        uVar7 = *(undefined8 *)(lVar33 + 0x138);
        uVar21 = *(undefined8 *)(lVar33 + 0x140);
        *(undefined4 *)(puVar28 + 4) = *(undefined4 *)(lVar33 + 0x150);
        puVar28[2] = uVar21;
        puVar28[3] = uVar14;
        puVar28[1] = uVar7;
        uVar14 = *(undefined8 *)(lVar33 + 0x130);
        *(float *)((long)puVar28 + 0x44) = fVar32;
        *(float *)(puVar28 + 9) = fVar31;
        *(float *)((long)puVar28 + 0x3c) = fVar36;
        *(float *)(puVar28 + 8) = fVar34 * 100.0;
        *puVar28 = uVar14;
        *(undefined4 *)((long)puVar28 + 0x4c) = uVar10;
        puVar28[10] = lVar29;
        FUN_02e743d8(*(undefined4 *)(lVar30 + 0x50),lVar13,puVar28);
        uVar14 = puVar28[1];
        *local_e0 = *puVar28;
        local_e0[1] = uVar14;
        uVar14 = puVar28[2];
        uVar7 = puVar28[3];
        uVar21 = puVar28[5];
        local_e0[4] = puVar28[4];
        local_e0[5] = uVar21;
        local_e0[2] = uVar14;
        local_e0[3] = uVar7;
        uVar14 = puVar28[6];
        uVar21 = puVar28[7];
        uVar7 = puVar28[8];
        uVar8 = puVar28[9];
        local_e0[10] = lVar22;
        local_e0[6] = uVar14;
        local_e0[7] = uVar21;
        puVar17 = local_e0 + 0xd;
        local_e0[8] = uVar7;
        local_e0[9] = uVar8;
        if (bVar12) {
          uVar14 = puVar28[1];
          *puVar17 = *puVar28;
          local_e0[0xe] = uVar14;
          uVar14 = puVar28[2];
          uVar7 = puVar28[3];
          uVar21 = puVar28[5];
          local_e0[0x11] = puVar28[4];
          local_e0[0x12] = uVar21;
          local_e0[0xf] = uVar14;
          local_e0[0x10] = uVar7;
          uVar14 = puVar28[6];
          uVar7 = puVar28[7];
          uVar21 = puVar28[9];
          local_e0[0x15] = puVar28[8];
          local_e0[0x16] = uVar21;
          local_e0[0x13] = uVar14;
          local_e0[0x14] = uVar7;
          local_e0[0x17] = lVar24;
          puVar17 = local_e0 + 0x1a;
        }
        fVar37 = (float)NEON_fminnm(fVar39,fVar37);
        lVar33 = lVar33 + 0x158;
        puVar28 = puVar28 + 0xd;
        local_e0 = puVar17;
      } while (lVar33 != *(long *)(param_1 + 0x68) + (ulong)*(uint *)(param_1 + 0x70) * 0x158);
    }
    else if ((param_2 >> 1 & 1) == 0) {
      do {
        fVar34 = *(float *)(lVar33 + 0x84);
        if (*(float *)(lVar33 + 0x84) <= fVar35) {
          fVar34 = fVar35;
        }
        uVar21 = *(undefined8 *)(lVar33 + 0x148);
        uVar14 = *(undefined8 *)(lVar33 + 0x138);
        uVar7 = *(undefined8 *)(lVar33 + 0x140);
        uVar38 = *(undefined4 *)(lVar33 + 0x7c);
        *(undefined4 *)(puVar28 + 4) = *(undefined4 *)(lVar33 + 0x150);
        puVar28[2] = uVar7;
        puVar28[3] = uVar21;
        puVar28[1] = uVar14;
        uVar14 = *(undefined8 *)(lVar33 + 0x130);
        *(float *)((long)puVar28 + 0x44) = fVar32;
        *(float *)(puVar28 + 9) = fVar31;
        *puVar28 = uVar14;
        *(undefined4 *)((long)puVar28 + 0x4c) = uVar10;
        *(float *)(puVar28 + 8) = fVar34 * 100.0;
        *(float *)((long)puVar28 + 0x3c) = fVar36;
        puVar28[10] = lVar29;
        FUN_02e743d8(*(undefined4 *)(lVar30 + 0x50),lVar13,puVar28);
        if (bVar12) {
          uVar14 = puVar28[1];
          *local_e0 = *puVar28;
          local_e0[1] = uVar14;
          uVar14 = puVar28[2];
          uVar7 = puVar28[3];
          uVar21 = puVar28[5];
          local_e0[4] = puVar28[4];
          local_e0[5] = uVar21;
          local_e0[2] = uVar14;
          local_e0[3] = uVar7;
          uVar14 = puVar28[6];
          uVar7 = puVar28[7];
          uVar21 = puVar28[9];
          local_e0[8] = puVar28[8];
          local_e0[9] = uVar21;
          local_e0[6] = uVar14;
          local_e0[7] = uVar7;
          local_e0[10] = lVar24;
          local_e0 = local_e0 + 0xd;
        }
        fVar37 = (float)NEON_fminnm(uVar38,fVar37);
        lVar33 = lVar33 + 0x158;
        puVar28 = puVar28 + 0xd;
      } while (lVar33 != *(long *)(param_1 + 0x68) + (ulong)*(uint *)(param_1 + 0x70) * 0x158);
    }
    else {
      do {
        fVar34 = *(float *)(lVar33 + 0x84);
        if (*(float *)(lVar33 + 0x84) <= fVar35) {
          fVar34 = fVar35;
        }
        fVar39 = *(float *)(lVar33 + 0x7c);
        uVar14 = *(undefined8 *)(lVar33 + 0x138);
        uVar7 = *(undefined8 *)(lVar33 + 0x140);
        uVar21 = *(undefined8 *)(lVar33 + 0x148);
        *(undefined4 *)(puVar28 + 4) = *(undefined4 *)(lVar33 + 0x150);
        puVar28[2] = uVar7;
        puVar28[3] = uVar21;
        puVar28[1] = uVar14;
        if (fVar34 <= fVar39) {
          fVar34 = fVar39;
        }
        uVar14 = *(undefined8 *)(lVar33 + 0x130);
        *(float *)((long)puVar28 + 0x44) = fVar32;
        *(float *)(puVar28 + 9) = fVar31;
        *puVar28 = uVar14;
        *(float *)((long)puVar28 + 0x3c) = fVar36;
        *(undefined4 *)((long)puVar28 + 0x4c) = uVar10;
        puVar28[10] = lVar29;
        *(float *)(puVar28 + 8) = fVar34 * 100.0;
        FUN_02e743d8(*(undefined4 *)(lVar30 + 0x50),lVar13,puVar28);
        if (bVar12) {
          uVar14 = puVar28[1];
          *local_e0 = *puVar28;
          local_e0[1] = uVar14;
          uVar14 = puVar28[2];
          uVar7 = puVar28[3];
          uVar21 = puVar28[5];
          local_e0[4] = puVar28[4];
          local_e0[5] = uVar21;
          local_e0[2] = uVar14;
          local_e0[3] = uVar7;
          uVar14 = puVar28[6];
          uVar7 = puVar28[7];
          uVar21 = puVar28[9];
          local_e0[8] = puVar28[8];
          local_e0[9] = uVar21;
          local_e0[6] = uVar14;
          local_e0[7] = uVar7;
          local_e0[10] = lVar24;
          local_e0 = local_e0 + 0xd;
        }
        fVar37 = (float)NEON_fminnm(fVar39,fVar37);
        lVar33 = lVar33 + 0x158;
        puVar28 = puVar28 + 0xd;
      } while (lVar33 != *(long *)(param_1 + 0x68) + (ulong)*(uint *)(param_1 + 0x70) * 0x158);
    }
  }
  lVar29 = DAT_0440a160;
  if ((param_2 & 1) != 0) {
    local_c0 = *(undefined8 *)(param_1 + 8);
    local_b0 = 0;
    local_b8 = 0;
    local_a8 = 0xff;
    local_a0 = 0xff;
    local_98 = 0;
    if (*(int *)(DAT_0440a160 + 0xb8) != 0) {
      puVar26 = *(undefined4 **)(DAT_0440a160 + 0xb0);
      do {
        local_90 = 0x400000000;
        local_88 = 0;
        puVar27 = puVar26 + 1;
        FUN_02ee0d64(fVar37 * 100.0,lVar29,*puVar26,&local_c0,&local_90,1,1);
        puVar26 = puVar27;
      } while (puVar27 !=
               (undefined4 *)(*(long *)(lVar29 + 0xb0) + (ulong)*(uint *)(lVar29 + 0xb8) * 4));
    }
  }
  return;
}


