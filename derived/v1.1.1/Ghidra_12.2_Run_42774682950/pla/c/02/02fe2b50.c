/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fe2b50; name: FUN_02fe2b50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_02fe2b50(float *param_1,int param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  undefined8 uVar31;
  
  fVar6 = *param_3;
  fVar7 = param_3[1];
  fVar8 = param_3[2];
  pfVar3 = param_1 + ((long)param_2 + -4) * 4;
  iVar27 = (int)((long)param_2 + -4);
  iVar28 = (int)((ulong)_UNK_03889d78 >> 0x20);
  auVar23._0_4_ = fVar6 * *pfVar3 + fVar7 * pfVar3[1] + fVar8 * pfVar3[2] + pfVar3[3] * 1.0;
  auVar23._4_4_ =
       fVar6 * param_1[(long)param_2 * 4 + -0xc] + fVar7 * param_1[(long)param_2 * 4 + -0xb] +
       fVar8 * param_1[(long)param_2 * 4 + -10] + param_1[(long)param_2 * 4 + -9] * 1.0;
  auVar23._8_4_ =
       fVar6 * param_1[(long)param_2 * 4 + -8] + fVar7 * param_1[(long)param_2 * 4 + -7] +
       fVar8 * param_1[(long)param_2 * 4 + -6] + param_1[(long)param_2 * 4 + -5] * 1.0;
  auVar23._12_4_ =
       fVar6 * param_1[(long)param_2 * 4 + -4] + fVar7 * param_1[(long)param_2 * 4 + -3] +
       fVar8 * param_1[(long)param_2 * 4 + -2] + param_1[(long)param_2 * 4 + -1] * 1.0;
  auVar26._0_4_ = iVar27 + (int)_DAT_03889d70;
  auVar26._4_4_ = iVar27 + (int)((ulong)_DAT_03889d70 >> 0x20);
  auVar26._8_4_ = iVar27 + (int)_UNK_03889d78;
  auVar26._12_4_ = iVar27 + iVar28;
  if (0 < iVar27) {
    param_2 = param_2 + -8;
    auVar22._0_4_ = fVar6 * *param_1 + fVar7 * param_1[1] + fVar8 * param_1[2] + param_1[3] * 1.0;
    auVar22._4_4_ = fVar6 * param_1[4] + fVar7 * param_1[5] + fVar8 * param_1[6] + param_1[7] * 1.0;
    auVar22._8_4_ =
         fVar6 * param_1[8] + fVar7 * param_1[9] + fVar8 * param_1[10] + param_1[0xb] * 1.0;
    auVar22._12_4_ =
         fVar6 * param_1[0xc] + fVar7 * param_1[0xd] + fVar8 * param_1[0xe] + param_1[0xf] * 1.0;
    auVar25._0_4_ = -(uint)(auVar23._0_4_ < auVar22._0_4_);
    auVar25._4_4_ = -(uint)(auVar23._4_4_ < auVar22._4_4_);
    auVar25._8_4_ = -(uint)(auVar23._8_4_ < auVar22._8_4_);
    auVar25._12_4_ = -(uint)(auVar23._12_4_ < auVar22._12_4_);
    auVar19._8_4_ = (int)_UNK_03889d78;
    auVar19._0_8_ = _DAT_03889d70;
    auVar19._12_4_ = iVar28;
    auVar26 = auVar26 ^ (auVar26 ^ auVar19) & auVar25;
    auVar23 = auVar23 ^ (auVar23 ^ auVar22) & auVar25;
    if (0 < param_2) {
      iVar29 = (int)_UNK_03889088;
      iVar30 = (int)((ulong)_UNK_03889088 >> 0x20);
      iVar27 = (int)_DAT_03889080;
      iVar28 = (int)((ulong)_DAT_03889080 >> 0x20);
      param_1 = param_1 + 0x1c;
      do {
        pfVar3 = param_1 + -0xc;
        pfVar9 = param_1 + -0xb;
        pfVar10 = param_1 + -10;
        pfVar11 = param_1 + -9;
        pfVar2 = param_1 + -8;
        pfVar12 = param_1 + -7;
        pfVar13 = param_1 + -6;
        pfVar14 = param_1 + -5;
        param_2 = param_2 + -4;
        pfVar1 = param_1 + -4;
        pfVar15 = param_1 + -3;
        pfVar16 = param_1 + -2;
        pfVar17 = param_1 + -1;
        pfVar4 = param_1 + 2;
        uVar31 = *(undefined8 *)param_1;
        param_1 = param_1 + 0x10;
        auVar18._0_4_ = fVar6 * *pfVar3 + fVar7 * *pfVar9 + fVar8 * *pfVar10 + *pfVar11 * 1.0;
        auVar18._4_4_ = fVar6 * *pfVar2 + fVar7 * *pfVar12 + fVar8 * *pfVar13 + *pfVar14 * 1.0;
        auVar18._8_4_ = fVar6 * *pfVar1 + fVar7 * *pfVar15 + fVar8 * *pfVar16 + *pfVar17 * 1.0;
        auVar18._12_4_ =
             fVar6 * (float)uVar31 + fVar7 * (float)((ulong)uVar31 >> 0x20) +
             fVar8 * (float)*(undefined8 *)pfVar4 +
             (float)((ulong)*(undefined8 *)pfVar4 >> 0x20) * 1.0;
        auVar20._0_8_ =
             CONCAT44(-(uint)(auVar23._4_4_ < auVar18._4_4_),-(uint)(auVar23._0_4_ < auVar18._0_4_))
        ;
        auVar20._8_4_ = -(uint)(auVar23._8_4_ < auVar18._8_4_);
        auVar20._12_4_ = -(uint)(auVar23._12_4_ < auVar18._12_4_);
        auVar21._8_8_ = auVar20._8_8_;
        auVar21._0_8_ = auVar20._0_8_;
        auVar5._4_4_ = iVar28;
        auVar5._0_4_ = iVar27;
        auVar5._8_4_ = iVar29;
        auVar5._12_4_ = iVar30;
        auVar26 = auVar26 ^ (auVar26 ^ auVar5) & auVar20;
        iVar27 = iVar27 + 4;
        iVar28 = iVar28 + 4;
        iVar29 = iVar29 + 4;
        iVar30 = iVar30 + 4;
        auVar23 = auVar23 ^ (auVar23 ^ auVar18) & auVar21;
      } while (0 < param_2);
    }
  }
  auVar19 = NEON_rev64(auVar23,4);
  auVar24._0_4_ = -(uint)(auVar19._0_4_ < auVar23._0_4_);
  auVar24._4_4_ = -(uint)(auVar19._4_4_ < auVar23._4_4_);
  auVar24._8_4_ = -(uint)(auVar19._8_4_ < auVar23._8_4_);
  auVar24._12_4_ = -(uint)(auVar19._12_4_ < auVar23._12_4_);
  auVar23 = NEON_fmax(auVar23,auVar19,4);
  auVar19 = NEON_rev64(auVar26,4);
  auVar19 = auVar19 ^ (auVar19 ^ auVar26) & auVar24;
  auVar26 = NEON_ext(auVar23,auVar23,8,1);
  auVar22 = NEON_ext(auVar19,auVar19,8,1);
  return (auVar22._0_8_ ^
         (auVar22._0_8_ ^ auVar19._0_8_) & (ulong)-(uint)(auVar26._0_4_ < auVar23._0_4_)) &
         0xffffffff;
}


