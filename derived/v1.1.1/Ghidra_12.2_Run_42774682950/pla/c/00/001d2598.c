/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d2598; name: FUN_001d2598
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001d2598(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar10;
  undefined1 auVar9 [16];
  float fVar11;
  float fVar12;
  float fVar15;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  uVar6 = _DAT_03889e80;
  *(undefined8 *)(param_1 + 0xd68) = _UNK_03889e88;
  *(undefined8 *)(param_1 + 0xd60) = uVar6;
  uVar6 = _DAT_03888f20;
  *(undefined8 *)(param_1 + 0xd78) = _UNK_03888f28;
  *(undefined8 *)(param_1 + 0xd70) = uVar6;
  uVar7 = *(undefined8 *)(param_1 + 0x8d8);
  uVar6 = *(undefined8 *)(param_1 + 0x8d0);
  fVar23 = (float)uVar6;
  auVar21._0_4_ = *(float *)(param_1 + 0x8e0) - fVar23;
  fVar24 = (float)((ulong)uVar6 >> 0x20);
  auVar21._4_4_ = *(float *)(param_1 + 0x8e4) - fVar24;
  fVar25 = (float)uVar7;
  auVar21._8_4_ = *(float *)(param_1 + 0x8e8) - fVar25;
  fVar26 = (float)((ulong)uVar7 >> 0x20);
  auVar21._12_4_ = *(float *)(param_1 + 0x8ec) - fVar26;
  auVar19._0_4_ = *(float *)(param_1 + 0x8f0) - fVar23;
  auVar19._4_4_ = *(float *)(param_1 + 0x8f4) - fVar24;
  auVar19._8_4_ = *(float *)(param_1 + 0x8f8) - fVar25;
  auVar19._12_4_ = *(float *)(param_1 + 0x8fc) - fVar26;
  auVar9 = NEON_ext(auVar21,auVar21,4,1);
  *(undefined8 *)(param_1 + 0x1568) = uVar7;
  *(undefined8 *)(param_1 + 0x1560) = uVar6;
  auVar14 = NEON_ext(auVar19,auVar19,4,1);
  fVar11 = auVar21._0_4_ * auVar14._0_4_ - auVar19._0_4_ * auVar9._0_4_;
  fVar15 = auVar21._4_4_ * auVar14._4_4_ - auVar19._4_4_ * auVar9._4_4_;
  auVar14._0_8_ = CONCAT44(fVar15,fVar11);
  auVar14._8_4_ = auVar21._8_4_ * auVar19._0_4_ - auVar19._8_4_ * auVar21._0_4_;
  auVar14._12_4_ = auVar21._12_4_ * auVar19._4_4_ - auVar19._12_4_ * auVar21._4_4_;
  auVar9 = NEON_ext(auVar14,auVar14,4,1);
  fVar8 = auVar9._0_4_;
  fVar10 = auVar9._4_4_;
  auVar9._8_8_ = auVar14._0_8_;
  *(undefined8 *)(param_1 + 0x1d68) = auVar14._0_8_;
  *(undefined8 *)(param_1 + 0x1d60) = auVar9._0_8_;
  fVar12 = fVar8 * fVar8 + fVar10 * fVar10 + fVar11 * fVar11;
  uVar13 = CONCAT44(fVar8 * fVar8 + fVar10 * fVar10 + fVar11 * fVar11,fVar12);
  *(undefined4 *)(param_1 + 0xd58) = 2;
  if (fVar12 <= (float)*(undefined8 *)(param_1 + 0x68)) {
    FUN_001d2b94(param_1,0);
    uVar7 = *(undefined8 *)(param_1 + 0x1568);
    uVar6 = *(undefined8 *)(param_1 + 0x1560);
    auVar9 = *(undefined1 (*) [16])(param_1 + 0x1d60);
    fVar23 = *(float *)(param_1 + 0x2760);
    fVar28 = *(float *)(param_1 + 0x2960);
    fVar12 = *(float *)(param_1 + 0x2560);
    uVar5 = *(undefined1 *)(param_1 + 0x2b60);
  }
  else {
    uVar27 = NEON_frsqrte(uVar13,4);
    fVar12 = (float)uVar27;
    fVar28 = (float)((ulong)uVar27 >> 0x20);
    auVar16._0_4_ = ABS(auVar21._0_4_);
    auVar16._4_4_ = ABS(auVar21._4_4_);
    auVar16._8_4_ = ABS(auVar21._8_4_);
    auVar16._12_4_ = ABS(auVar21._12_4_);
    fVar23 = (float)*(undefined8 *)(param_1 + 0x90) - fVar23;
    fVar24 = (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20) - fVar24;
    fVar25 = (float)*(undefined8 *)(param_1 + 0x98) - fVar25;
    fVar26 = (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) - fVar26;
    auVar20._0_4_ = ABS(auVar19._0_4_);
    auVar20._4_4_ = ABS(auVar19._4_4_);
    auVar20._8_4_ = ABS(auVar19._8_4_);
    auVar20._12_4_ = ABS(auVar19._12_4_);
    auVar14 = NEON_ext(auVar16,auVar16,8,1);
    auVar21 = NEON_ext(auVar20,auVar20,8,1);
    auVar17._4_4_ = auVar21._0_4_;
    auVar17._0_4_ = auVar14._0_4_;
    *(undefined1 *)(param_1 + 0x2b60) = 0;
    uVar27 = NEON_frsqrts(uVar13,CONCAT44(fVar28 * fVar28,fVar12 * fVar12),4);
    fVar12 = fVar12 * (float)uVar27;
    fVar28 = fVar28 * (float)((ulong)uVar27 >> 0x20);
    fVar29 = ABS(fVar23);
    fVar30 = ABS(fVar24);
    fVar31 = ABS(fVar25);
    fVar32 = ABS(fVar26);
    auVar1._4_4_ = fVar30;
    auVar1._0_4_ = fVar29;
    auVar1._8_4_ = fVar31;
    auVar1._12_4_ = fVar32;
    auVar2._4_4_ = fVar30;
    auVar2._0_4_ = fVar29;
    auVar2._8_4_ = fVar31;
    auVar2._12_4_ = fVar32;
    auVar14 = NEON_ext(auVar1,auVar2,8,1);
    uVar5 = 0;
    auVar3._12_4_ = fVar30;
    auVar3._8_4_ = fVar29;
    auVar17._8_8_ = auVar14._0_8_;
    auVar22._4_12_ = auVar14._4_12_;
    auVar22._0_4_ = fVar30;
    uVar13 = NEON_frsqrts(uVar13,CONCAT44(fVar28 * fVar28,fVar12 * fVar12),4);
    fVar12 = (float)uVar13 * fVar12;
    auVar3._4_4_ = auVar20._0_4_;
    auVar3._0_4_ = auVar16._0_4_;
    auVar4._4_4_ = auVar20._4_4_;
    auVar4._0_4_ = auVar16._4_4_;
    auVar4._8_8_ = auVar22._0_8_;
    auVar14 = NEON_fmax(auVar3,auVar4,4);
    *(float *)(param_1 + 0x2560) = fVar12;
    auVar14 = NEON_fmax(auVar14,auVar17,4);
    auVar21 = NEON_ext(auVar14,auVar14,8,1);
    fVar28 = fVar12 * *(float *)(PTR_DAT_04372370 + 0xd0) *
                      auVar21._0_4_ * auVar14._0_4_ * auVar14._4_4_ * 1.1920929e-07;
    auVar18._0_4_ = fVar23 * fVar8;
    auVar18._4_4_ = fVar24 * fVar10;
    auVar18._8_4_ = fVar25 * fVar11;
    auVar18._12_4_ = fVar26 * fVar15;
    auVar14 = NEON_ext(auVar18,auVar18,8,1);
    fVar23 = fVar12 * (auVar14._0_4_ + auVar18._0_4_ + auVar18._4_4_) + fVar28;
    *(float *)(param_1 + 0x2960) = fVar28;
    *(float *)(param_1 + 0x2760) = fVar23;
  }
  *(undefined8 *)(param_1 + 0x1578) = uVar7;
  *(undefined8 *)(param_1 + 0x1570) = uVar6;
  *(float *)(param_1 + 0x2564) = fVar12;
  *(float *)(param_1 + 0x2964) = fVar28;
  *(ulong *)(param_1 + 0x1d78) = CONCAT44(0.0 - auVar9._12_4_,0.0 - auVar9._8_4_);
  *(ulong *)(param_1 + 0x1d70) = CONCAT44(0.0 - auVar9._4_4_,0.0 - auVar9._0_4_);
  *(float *)(param_1 + 0x2764) = (fVar28 + fVar28) - fVar23;
  *(undefined1 *)(param_1 + 0x2b61) = uVar5;
  *(double *)(param_1 + 0x2c00) = 0.0 - *(double *)(param_1 + 0x2be0);
  *(double *)(param_1 + 0x2c08) = 0.0 - *(double *)(param_1 + 0x2be8);
  *(double *)(param_1 + 0x2c10) = 0.0 - *(double *)(param_1 + 0x2bf0);
  *(double *)(param_1 + 0x2c18) = 0.0 - *(double *)(param_1 + 0x2bf8);
  *(double *)(param_1 + 0x3c00) = 0.0 - *(double *)(param_1 + 0x3be0);
  *(double *)(param_1 + 0x3c08) = 0.0 - *(double *)(param_1 + 0x3be8);
  *(double *)(param_1 + 0x3c10) = 0.0 - *(double *)(param_1 + 0x3bf0);
  *(double *)(param_1 + 0x3c18) = 0.0 - *(double *)(param_1 + 0x3bf8);
  return;
}


