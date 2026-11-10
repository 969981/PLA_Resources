/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f4aa0; name: FUN_031f4aa0
 */


void FUN_031f4aa0(long param_1,undefined8 *param_2,long param_3,uint *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  uint extraout_var;
  ulong extraout_x1;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [24];
  undefined8 local_78;
  
  FUN_031f4cc0(param_1 + 0x28,*(undefined4 *)(param_2 + 2),*(undefined4 *)(param_1 + 0x20));
  fVar27 = *(float *)(param_3 + 0x10);
  fVar11 = *(float *)(param_3 + 0x14);
  local_78 = CONCAT44(fVar27 * fVar27,fVar27 * fVar27);
  iVar5 = (int)extraout_x1 + 1;
  if (iVar5 < *(int *)(param_1 + 0x20)) {
    iVar9 = 0;
    bVar3 = true;
    uVar8 = extraout_x1;
    do {
      lVar10 = *(long *)(param_1 + 0x18);
      lVar1 = lVar10 + (long)iVar5 * 0x40 + 0x10;
      iVar4 = FUN_031f5e80(lVar1);
      if (iVar4 == 0) {
        FUN_031f48f0(param_1,iVar5,*(undefined4 *)(param_2 + 2),param_2,auStack_90);
        FUN_031f47d8(param_1,iVar5,auStack_a0);
        lVar7 = (long)iVar5 * 0x40;
        puVar2 = (undefined8 *)(lVar10 + lVar7);
        uVar24 = puVar2[1];
        uVar21 = *puVar2;
        FUN_031f5600(lVar1,auStack_90,auStack_a0,&local_78,&local_b0);
        puVar2 = (undefined8 *)(lVar10 + lVar7);
        puVar2[1] = CONCAT44(fStack_a4,fStack_a8);
        *puVar2 = CONCAT44(fStack_ac,local_b0);
        fVar13 = (float)uVar21;
        fVar15 = (float)((ulong)uVar21 >> 0x20);
        fVar16 = (float)uVar24;
        fVar18 = (float)((ulong)uVar24 >> 0x20);
        if (iVar5 == *(int *)(param_2 + 2)) {
          fVar20 = (float)param_2[1];
          fVar17 = (float)((ulong)param_2[1] >> 0x20);
          fVar12 = (float)*param_2;
          fVar14 = (float)((ulong)*param_2 >> 0x20);
          auVar22._0_4_ = local_b0 - fVar12;
          auVar22._4_4_ = fStack_ac - fVar14;
          auVar22._8_4_ = fStack_a8 - fVar20;
          auVar22._12_4_ = fStack_a4 - fVar17;
          auVar23._0_4_ = fVar13 - fVar12;
          auVar23._4_4_ = fVar15 - fVar14;
          auVar23._8_4_ = fVar16 - fVar20;
          auVar23._12_4_ = fVar18 - fVar17;
          fVar12 = (auVar23._0_4_ * auVar23._0_4_ + auVar23._4_4_ * auVar23._4_4_ +
                   auVar23._8_4_ * auVar23._8_4_) *
                   (auVar22._0_4_ * auVar22._0_4_ + auVar22._4_4_ * auVar22._4_4_ +
                   auVar22._8_4_ * auVar22._8_4_);
          fVar14 = (auVar23._0_4_ * auVar23._0_4_ + auVar23._4_4_ * auVar23._4_4_ +
                   auVar23._8_4_ * auVar23._8_4_) *
                   (auVar22._0_4_ * auVar22._0_4_ + auVar22._4_4_ * auVar22._4_4_ +
                   auVar22._8_4_ * auVar22._8_4_);
          if (fVar12 != 0.0) {
            auVar25 = NEON_ext(auVar23,auVar23,4,1);
            auVar26 = NEON_ext(auVar22,auVar22,4,1);
            auVar19._0_4_ = auVar23._0_4_ * auVar26._0_4_ - auVar22._0_4_ * auVar25._0_4_;
            auVar19._4_4_ = auVar23._4_4_ * auVar26._4_4_ - auVar22._4_4_ * auVar25._4_4_;
            auVar19._8_4_ = auVar23._8_4_ * auVar22._0_4_ - auVar22._8_4_ * auVar23._0_4_;
            auVar19._12_4_ = auVar23._12_4_ * auVar22._4_4_ - auVar22._12_4_ * auVar23._4_4_;
            auVar23 = NEON_ext(auVar19,auVar19,4,1);
            uVar21 = NEON_frecpe(CONCAT44(fVar14,fVar12),4);
            uVar24 = NEON_frecps(CONCAT44(fVar14,fVar12),uVar21,4);
            fVar20 = (float)uVar21 * (float)uVar24;
            uVar21 = NEON_frecps(CONCAT44(fVar14,fVar12),
                                 CONCAT44((float)((ulong)uVar21 >> 0x20) *
                                          (float)((ulong)uVar24 >> 0x20),fVar20),4);
            iVar9 = -(uint)((auVar19._0_4_ * auVar19._0_4_ +
                            auVar23._0_4_ * auVar23._0_4_ + auVar23._4_4_ * auVar23._4_4_) *
                            fVar20 * (float)uVar21 < fVar11 * fVar11);
          }
        }
        if (bVar3) {
          fVar13 = fVar13 - local_b0;
          fVar15 = fVar15 - fStack_ac;
          fVar16 = fVar16 - fStack_a8;
          fVar18 = fVar18 - fStack_a4;
          fVar13 = fVar13 * fVar13;
          fVar15 = fVar15 * fVar15;
          fVar16 = fVar16 * fVar16;
          fVar18 = fVar18 * fVar18;
          auVar25._4_4_ = fVar15;
          auVar25._0_4_ = fVar13;
          auVar25._8_4_ = fVar16;
          auVar25._12_4_ = fVar18;
          auVar26._4_4_ = fVar15;
          auVar26._0_4_ = fVar13;
          auVar26._8_4_ = fVar16;
          auVar26._12_4_ = fVar18;
          auVar23 = NEON_ext(auVar25,auVar26,8,1);
          bVar3 = fVar13 + fVar15 + auVar23._0_4_ < fVar27;
        }
      }
      uVar6 = (uint)(uVar8 >> 0x20);
      iVar5 = (uVar6 - 1 & extraout_var | uVar6) + (int)uVar8;
      uVar8 = uVar8 & 0xffffffff | (uVar8 >> 0x20) << 0x21;
    } while (iVar5 < *(int *)(param_1 + 0x20));
  }
  else {
    iVar9 = 0;
    bVar3 = true;
  }
  *param_4 = (uint)(bVar3 || iVar9 != 0);
  return;
}


