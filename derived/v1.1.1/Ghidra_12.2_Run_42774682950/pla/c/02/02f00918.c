/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f00918; name: FUN_02f00918
 */


undefined8 FUN_02f00918(float param_1,long param_2,ulong param_3,undefined1 (*param_4) [16])

{
  uint *puVar1;
  undefined1 (*pauVar2) [16];
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  int iVar9;
  ulong uVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar14) [16];
  long lVar16;
  uint *puVar17;
  uint *puVar18;
  float *pfVar19;
  uint uVar20;
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  uVar8 = FUN_02f00cdc(param_2,param_3 & 0xffffffff);
  if ((int)uVar8 != 1) {
    return uVar8;
  }
  uVar5 = (uint)(param_3 >> 0xc);
  uVar4 = uVar5 & 0xffff7;
  uVar20 = (uint)param_3;
  if ((param_3 & 0xff) != 0) {
    memset(param_4,0,(ulong)((uVar20 & 0xff) << 2));
  }
  if ((uVar4 == 3) && (*(int *)(param_2 + 0x54) == 1)) {
    fVar21 = sinf(param_1);
    uVar10 = 1;
    fVar21 = fVar21 * (fVar21 * -0.20710677 + 0.5) + 0.70710677;
    fVar21 = fVar21 * fVar21;
    fVar24 = 1.0 - fVar21;
    if (1.0 < fVar21) {
      fVar24 = 0.0;
    }
    *(float *)*param_4 = *(float *)*param_4 + fVar24;
    goto LAB_02f00b30;
  }
  uVar10 = (ulong)(uVar20 - ((uVar5 & 0xfffff) - uVar4 >> 3)) & 0xff;
  uVar5 = uVar20 & 0xf00 | uVar4 << 0xc | (uint)uVar10;
  nn::os::LockMutex((MutexType *)(param_2 + 0x88));
  puVar11 = *(uint **)(param_2 + 0x78);
  uVar4 = *(uint *)(param_2 + 0x80);
  if ((uVar4 == 0) || (*puVar11 == uVar5)) {
    puVar17 = puVar11;
  }
  else {
    lVar16 = (ulong)uVar4 * 0x10;
    puVar18 = puVar11;
    do {
      lVar16 = lVar16 + -0x10;
      if (lVar16 == 0) goto LAB_02f00cc8;
      puVar17 = puVar18 + 4;
      puVar1 = puVar18 + 4;
      puVar18 = puVar17;
    } while (*puVar1 != uVar5);
  }
  if (puVar17 == puVar11 + (ulong)uVar4 * 4) {
LAB_02f00cc8:
    pfVar19 = (float *)FUN_02ec87f4(param_2,uVar5);
  }
  else {
    pfVar19 = *(float **)(puVar17 + 2);
  }
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x88));
  if (pfVar19 == (float *)0x0) {
    return 2;
  }
  fVar21 = sinf(param_1);
  fVar24 = cosf(param_1);
  fVar26 = -(pfVar19[3] * fVar24);
  fVar23 = *pfVar19 * fVar21;
  fVar25 = pfVar19[2] * fVar21;
  bVar6 = true;
  bVar7 = false;
  if (-(pfVar19[1] * fVar24) <= fVar23) {
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar25) && !NAN(fVar26)) {
      bVar6 = fVar25 < fVar26;
      bVar7 = false;
    }
  }
  if (bVar6 == bVar7) {
    uVar12 = 0;
    fVar21 = pfVar19[1] * fVar24;
    fVar24 = pfVar19[3] * fVar24;
    uVar13 = 1;
  }
  else {
    fVar23 = pfVar19[4] * fVar21;
    if (-(pfVar19[5] * fVar24) <= fVar23) {
      fVar25 = pfVar19[6] * fVar21;
      if (-(pfVar19[7] * fVar24) <= fVar25) {
        fVar21 = pfVar19[5] * fVar24;
        fVar24 = pfVar19[7] * fVar24;
        uVar12 = 1;
        uVar13 = 2;
        goto LAB_02f00ad0;
      }
    }
    fVar23 = pfVar19[8] * fVar21;
    if (-(pfVar19[9] * fVar24) <= fVar23) {
      fVar25 = pfVar19[10] * fVar21;
      if (-(pfVar19[0xb] * fVar24) <= fVar25) {
        fVar21 = pfVar19[9] * fVar24;
        fVar24 = pfVar19[0xb] * fVar24;
        uVar12 = 2;
        uVar13 = 3;
        goto LAB_02f00ad0;
      }
    }
    fVar23 = pfVar19[0xc] * fVar21;
    if (-(pfVar19[0xd] * fVar24) <= fVar23) {
      fVar25 = pfVar19[0xe] * fVar21;
      if (-(pfVar19[0xf] * fVar24) <= fVar25) {
        fVar21 = pfVar19[0xd] * fVar24;
        fVar24 = pfVar19[0xf] * fVar24;
        uVar12 = 3;
        uVar13 = 4;
        goto LAB_02f00ad0;
      }
    }
    fVar23 = pfVar19[0x10] * fVar21;
    if (-(pfVar19[0x11] * fVar24) <= fVar23) {
      fVar25 = pfVar19[0x12] * fVar21;
      if (-(pfVar19[0x13] * fVar24) <= fVar25) {
        fVar21 = pfVar19[0x11] * fVar24;
        fVar24 = pfVar19[0x13] * fVar24;
        uVar12 = 4;
        uVar13 = 5;
        goto LAB_02f00ad0;
      }
    }
    uVar12 = 4;
    do {
      iVar9 = (int)uVar12;
      uVar12 = (ulong)(iVar9 + 1);
      pfVar3 = pfVar19 + uVar12 * 4;
      fVar26 = -(pfVar3[3] * fVar24);
      fVar23 = *pfVar3 * fVar21;
      fVar25 = pfVar3[2] * fVar21;
      bVar6 = true;
      bVar7 = false;
      if (-(pfVar3[1] * fVar24) <= fVar23) {
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar25) && !NAN(fVar26)) {
          bVar6 = fVar25 < fVar26;
          bVar7 = false;
        }
      }
    } while (bVar6 != bVar7);
    fVar21 = pfVar3[1] * fVar24;
    fVar24 = pfVar3[3] * fVar24;
    uVar13 = (ulong)(iVar9 + 2);
  }
LAB_02f00ad0:
  uVar12 = (ulong)(*(uint *)(&DAT_03a9f3ec + uVar12 * 4 + uVar10 * 0x20) >> 0xe) & 0x3fffc;
  fVar23 = fVar23 + fVar21 + 1.1920929e-07;
  fVar25 = fVar25 + fVar24 + 1.1920929e-07;
  fVar23 = fVar23 * fVar23;
  fVar25 = fVar25 * fVar25;
  fVar21 = 1.0 / (fVar25 + fVar23);
  *(float *)(*param_4 + uVar12) = *(float *)(*param_4 + uVar12) + fVar23 * fVar21;
  fVar21 = fVar21 * fVar25;
  uVar10 = (ulong)*(ushort *)(&DAT_03a9f3ec + uVar13 * 4 + uVar10 * 0x20 + 2);
LAB_02f00b30:
  *(float *)(*param_4 + uVar10 * 4) = *(float *)(*param_4 + uVar10 * 4) + fVar21;
  pauVar2 = param_4 + ((uVar20 & 0xff) + 3 >> 2);
  if (param_4 < pauVar2) {
    auVar22 = NEON_frsqrte(*param_4,4);
    auVar22 = NEON_frecpe(auVar22,4);
    *(long *)(*param_4 + 8) = auVar22._8_8_;
    *(long *)*param_4 = auVar22._0_8_;
    if (param_4 + 1 < pauVar2) {
      pauVar14 = param_4 + 1;
      do {
        pauVar15 = pauVar14 + 1;
        auVar22 = NEON_frsqrte(*pauVar14,4);
        auVar22 = NEON_frecpe(auVar22,4);
        *(long *)(*pauVar14 + 8) = auVar22._8_8_;
        *(long *)*pauVar14 = auVar22._0_8_;
        pauVar14 = pauVar15;
      } while (pauVar15 < pauVar2);
      return 1;
    }
  }
  return 1;
}


