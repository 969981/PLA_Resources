/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03290c38; name: FUN_03290c38
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03290c38(int *param_1,long param_2,float *param_3)

{
  undefined1 (*pauVar1) [12];
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int *piVar13;
  int *piVar14;
  long lVar15;
  int *piVar16;
  ulong uVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  float fVar34;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar35;
  float fVar38;
  float fVar39;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  uVar5 = *(uint *)(param_2 + 0x30);
  uVar17 = (ulong)uVar5;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  if ((int)uVar5 < 1) {
    fVar35 = 0.0;
    fVar38 = 0.0;
    fVar19 = 0.0;
    fVar22 = 0.0;
    fVar20 = 0.0;
    fVar23 = 0.0;
    fVar25 = 0.0;
    fVar39 = 0.0;
    fVar26 = 0.0;
    fVar28 = 0.0;
    fVar21 = 0.0;
    fVar24 = 0.0;
  }
  else {
    fVar35 = 0.0;
    fVar38 = 0.0;
    fVar19 = 0.0;
    fVar22 = 0.0;
    fVar20 = 0.0;
    fVar23 = 0.0;
    fVar25 = 0.0;
    fVar39 = 0.0;
    fVar26 = 0.0;
    fVar28 = 0.0;
    fVar21 = 0.0;
    fVar24 = 0.0;
    lVar18 = 0;
    piVar2 = param_1 + 0x16;
    piVar3 = param_1 + 0x18;
    piVar4 = param_1 + 0x14;
    do {
      piVar13 = (int *)(*(long *)(param_2 + 0x28) + lVar18);
      lVar15 = *(long *)(param_2 + 0x18);
      pfVar7 = (float *)(lVar15 + (long)*piVar13 * 0x10);
      pfVar8 = (float *)(lVar15 + (long)piVar13[1] * 0x10);
      local_70 = *param_3;
      fStack_6c = param_3[1];
      fStack_68 = param_3[2];
      fStack_64 = param_3[3];
      local_90 = *pfVar7 + local_70;
      fStack_8c = pfVar7[1] + fStack_6c;
      fStack_88 = pfVar7[2] + fStack_68;
      fStack_84 = pfVar7[3] + fStack_64;
      fStack_80 = local_70 + *pfVar8;
      fStack_7c = fStack_6c + pfVar8[1];
      fStack_78 = fStack_68 + pfVar8[2];
      fStack_74 = fStack_64 + pfVar8[3];
      auVar36._0_4_ = fStack_80 - local_90;
      auVar36._4_4_ = fStack_7c - fStack_8c;
      auVar36._8_4_ = fStack_78 - fStack_88;
      auVar36._12_4_ = fStack_74 - fStack_84;
      pfVar7 = (float *)(lVar15 + (long)piVar13[2] * 0x10);
      local_70 = local_70 + *pfVar7;
      fStack_6c = fStack_6c + pfVar7[1];
      fStack_68 = fStack_68 + pfVar7[2];
      fStack_64 = fStack_64 + pfVar7[3];
      auVar43._0_4_ = local_70 - local_90;
      auVar43._4_4_ = fStack_6c - fStack_8c;
      auVar43._8_4_ = fStack_68 - fStack_88;
      auVar43._12_4_ = fStack_64 - fStack_84;
      auVar44 = NEON_ext(auVar43,auVar43,4,1);
      auVar42 = NEON_ext(auVar36,auVar36,4,1);
      auVar32._0_4_ = auVar36._0_4_ * auVar44._0_4_ - auVar42._0_4_ * auVar43._0_4_;
      auVar32._4_4_ = auVar36._4_4_ * auVar44._4_4_ - auVar42._4_4_ * auVar43._4_4_;
      auVar32._8_4_ = auVar36._8_4_ * auVar43._0_4_ - auVar36._0_4_ * auVar43._8_4_;
      auVar32._12_4_ = auVar36._12_4_ * auVar43._4_4_ - auVar36._4_4_ * auVar43._12_4_;
      auVar43 = NEON_ext(auVar32,auVar32,4,1);
      fVar29 = auVar43._0_4_;
      fVar34 = auVar43._4_4_;
      fVar41 = fVar29 * fVar29 + fVar34 * fVar34 + auVar32._0_4_ * auVar32._0_4_;
      uVar31 = CONCAT44(fVar29 * fVar29 + fVar34 * fVar34 + auVar32._0_4_ * auVar32._0_4_,fVar41);
      if (0.0 < fVar41) {
        uVar30 = NEON_frsqrte(uVar31,4);
        fVar19 = (float)uVar30;
        fVar22 = (float)((ulong)uVar30 >> 0x20);
        uVar30 = NEON_frsqrts(uVar31,CONCAT44(fVar22 * fVar22,fVar19 * fVar19),4);
        fVar19 = fVar19 * (float)uVar30;
        fVar22 = fVar22 * (float)((ulong)uVar30 >> 0x20);
        uVar31 = NEON_frsqrts(uVar31,CONCAT44(fVar22 * fVar22,fVar19 * fVar19),4);
        fVar19 = (float)uVar31 * fVar19;
        fVar22 = (float)((ulong)uVar31 >> 0x20) * fVar22;
        fVar29 = fVar29 * fVar19;
        fVar34 = fVar34 * fVar22;
        fVar19 = auVar32._0_4_ * fVar19;
        fVar22 = auVar32._4_4_ * fVar22;
        fVar20 = ABS(fVar29);
        fVar23 = ABS(fVar34);
        fVar25 = ABS(fVar19);
        _fStack_98 = CONCAT44(fVar22,fVar19);
        _local_a0 = CONCAT44(fVar34,fVar29);
        uVar31 = NEON_fmaxp(CONCAT44(fVar23,fVar20),CONCAT44(fVar23,fVar20),4);
        uVar31 = NEON_fmax(CONCAT44(fVar25,fVar25),uVar31,4);
        *param_1 = (int)(char)(&DAT_03aadfd0)
                              [(-(uint)((float)((ulong)uVar31 >> 0x20) <= fVar23) & 2) +
                               (uint)((float)uVar31 <= fVar20) |
                               -(uint)((float)uVar31 <= fVar25) & 4];
        FUN_03290a38(param_1,&local_90,&local_a0);
        pauVar1 = (undefined1 (*) [12])(param_1 + 0x1c);
        uVar27 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x1e) >> 0x20);
        fVar23 = (float)*(undefined8 *)*pauVar1;
        fVar25 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
        auVar43 = *(undefined1 (*) [16])(param_1 + 0x20);
        auVar36 = NEON_ext(auVar43,auVar43,8,1);
        auVar42._12_4_ = uVar27;
        auVar42._0_12_ = *pauVar1;
        auVar44._12_4_ = uVar27;
        auVar44._0_12_ = *pauVar1;
        auVar32 = NEON_ext(auVar42,auVar44,8,1);
        auVar42 = *(undefined1 (*) [16])(param_1 + 0x24);
        auVar44 = NEON_ext(auVar42,auVar42,8,1);
        auVar33._0_8_ = CONCAT44(auVar36._0_4_,auVar32._0_4_);
        fVar20 = auVar43._0_4_;
        auVar33._8_8_ = auVar44._0_8_;
        iVar6 = *param_1;
        fVar39 = auVar42._4_4_;
        auVar45._4_12_ = auVar44._4_12_;
        auVar45._0_4_ = fVar39;
        *(long *)(param_1 + 0x1e) = auVar42._0_8_;
        *(ulong *)(param_1 + 0x1c) = CONCAT44(fVar20,fVar23);
        auVar37._0_8_ = CONCAT44(auVar43._4_4_,fVar25);
        auVar37._8_8_ = auVar45._0_8_;
        *(long *)(param_1 + 0x22) = auVar45._0_8_;
        *(undefined8 *)(param_1 + 0x20) = auVar37._0_8_;
        *(long *)(param_1 + 0x26) = auVar44._0_8_;
        *(undefined8 *)(param_1 + 0x24) = auVar33._0_8_;
        if (iVar6 != 1) {
          if (iVar6 == -1) {
            fVar20 = fVar39;
          }
          else if (iVar6 == 0) {
            fVar20 = auVar42._0_4_;
          }
          else {
            fVar20 = fVar23;
          }
        }
        *(ulong *)(param_1 + 0x28) =
             CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) + fVar29 * fVar20,
                      (float)*(undefined8 *)(param_1 + 0x28) + fVar29 * fVar20);
        if (iVar6 == 1) {
          uVar27 = (undefined4)((ulong)_UNK_03889f38 >> 0x20);
          auVar11._8_4_ = (int)_UNK_03889f38;
          auVar11._0_8_ = _DAT_03889f30;
          auVar11._12_4_ = uVar27;
          auVar43 = a64_TBL(ZEXT816(0),auVar37,auVar11);
          auVar12._8_4_ = (int)_UNK_03889f38;
          auVar12._0_8_ = _DAT_03889f30;
          auVar12._12_4_ = uVar27;
          auVar42 = a64_TBL(ZEXT816(0),auVar33,auVar12);
          fVar20 = (float)param_1[0x30];
          fVar23 = (float)param_1[0x31];
          fVar25 = (float)param_1[0x32];
          fVar39 = (float)param_1[0x33];
          fVar21 = (float)param_1[0x2c] + fVar29 * auVar43._0_4_;
          fVar24 = (float)param_1[0x2d] + fVar34 * auVar43._4_4_;
          fVar26 = (float)param_1[0x2e] + fVar19 * auVar43._8_4_;
          fVar28 = (float)param_1[0x2f] + fVar22 * auVar43._12_4_;
          piVar13 = piVar2;
          piVar14 = piVar3;
          piVar16 = piVar4;
LAB_03290ef0:
          fVar35 = fVar29 * auVar42._0_4_;
          fVar38 = fVar34 * auVar42._4_4_;
          fVar41 = fVar19 * auVar42._8_4_;
          fVar40 = fVar22 * auVar42._12_4_;
        }
        else {
          if (iVar6 == 0) {
            uVar27 = (undefined4)((ulong)_UNK_03889f28 >> 0x20);
            auVar9._8_4_ = (int)_UNK_03889f28;
            auVar9._0_8_ = _DAT_03889f20;
            auVar9._12_4_ = uVar27;
            auVar43 = a64_TBL(ZEXT816(0),auVar37,auVar9);
            auVar10._8_4_ = (int)_UNK_03889f28;
            auVar10._0_8_ = _DAT_03889f20;
            auVar10._12_4_ = uVar27;
            auVar42 = a64_TBL(ZEXT816(0),auVar33,auVar10);
            fVar20 = (float)param_1[0x30];
            fVar23 = (float)param_1[0x31];
            fVar25 = (float)param_1[0x32];
            fVar39 = (float)param_1[0x33];
            fVar21 = (float)param_1[0x2c] + fVar29 * auVar43._0_4_;
            fVar24 = (float)param_1[0x2d] + fVar34 * auVar43._4_4_;
            fVar26 = (float)param_1[0x2e] + fVar19 * auVar43._8_4_;
            fVar28 = (float)param_1[0x2f] + fVar22 * auVar43._12_4_;
            piVar13 = piVar3;
            piVar14 = piVar4;
            piVar16 = piVar2;
            goto LAB_03290ef0;
          }
          fVar35 = (float)param_1[0x30];
          fVar38 = (float)param_1[0x31];
          fVar41 = (float)param_1[0x32];
          fVar40 = (float)param_1[0x33];
          fVar21 = fVar29 * fVar25 + (float)param_1[0x2c];
          fVar24 = fVar34 * auVar43._4_4_ + (float)param_1[0x2d];
          fVar26 = fVar19 * fVar39 + (float)param_1[0x2e];
          fVar28 = fVar22 * auVar44._4_4_ + (float)param_1[0x2f];
          fVar20 = fVar29 * auVar32._0_4_;
          fVar23 = fVar34 * auVar36._0_4_;
          fVar25 = fVar19 * auVar44._0_4_;
          fVar39 = fVar22 * auVar44._4_4_;
          piVar13 = piVar4;
          piVar14 = piVar2;
          piVar16 = piVar3;
        }
        *(ulong *)(param_1 + 0x2e) = CONCAT44(fVar28,fVar26);
        *(ulong *)(param_1 + 0x2c) = CONCAT44(fVar24,fVar21);
        fVar20 = fVar20 + fVar35;
        fVar23 = fVar23 + fVar38;
        fVar25 = fVar25 + fVar41;
        fVar39 = fVar39 + fVar40;
        fVar35 = (float)param_1[0x34] + fVar29 * (float)*(undefined8 *)piVar13;
        fVar38 = (float)param_1[0x35] + fVar34 * (float)*(undefined8 *)piVar14;
        fVar19 = (float)param_1[0x36] + fVar19 * (float)*(undefined8 *)piVar16;
        fVar22 = (float)param_1[0x37] + fVar22 * (float)*(undefined8 *)piVar16;
        param_1[0x32] = (int)fVar25;
        param_1[0x33] = (int)fVar39;
        param_1[0x30] = (int)fVar20;
        param_1[0x31] = (int)fVar23;
        param_1[0x36] = (int)fVar19;
        param_1[0x37] = (int)fVar22;
        param_1[0x34] = (int)fVar35;
        param_1[0x35] = (int)fVar38;
      }
      uVar17 = uVar17 - 1;
      lVar18 = lVar18 + 0x10;
    } while (uVar17 != 0);
  }
  *(ulong *)(param_1 + 0x2e) = CONCAT44(fVar28 * 0.5,fVar26 * 0.5);
  *(ulong *)(param_1 + 0x2c) = CONCAT44(fVar24 * 0.5,fVar21 * 0.5);
  param_1[0x32] = (int)(fVar25 * 0.33333334);
  param_1[0x33] = (int)(fVar39 * 0.33333334);
  param_1[0x30] = (int)(fVar20 * 0.33333334);
  param_1[0x31] = (int)(fVar23 * 0.33333334);
  *(ulong *)(param_1 + 0x36) = CONCAT44(fVar22 * 0.5,fVar19 * 0.5);
  *(ulong *)(param_1 + 0x34) = CONCAT44(fVar38 * 0.5,fVar35 * 0.5);
  return;
}


