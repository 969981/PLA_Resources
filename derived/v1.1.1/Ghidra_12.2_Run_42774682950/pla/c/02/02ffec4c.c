/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ffec4c; name: FUN_02ffec4c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ffec4c(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar6;
  undefined1 auVar5 [16];
  float fVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  undefined8 uVar14;
  float fVar16;
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float local_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  
  auVar4 = *param_1;
  auVar12 = param_1[1];
  auVar10 = param_1[2];
  auVar17 = NEON_ext(auVar4,auVar4,8,1);
  auVar20 = NEON_ext(auVar12,auVar12,8,1);
  auVar21 = NEON_ext(auVar10,auVar10,8,1);
  fVar2 = (float)(*(double *)param_2[1] -
                 ((double)*(float *)param_1[3] + (double)*(float *)param_1[4]));
  fVar7 = (float)(*(double *)param_2[2] -
                 ((double)*(float *)(param_1[3] + 8) + (double)*(float *)(param_1[4] + 8)));
  fVar13 = (float)(*(double *)(param_2[1] + 8) -
                  ((double)*(float *)(param_1[3] + 4) + (double)*(float *)(param_1[4] + 4)));
  *(float *)(*param_1 + 0xc) = auVar17._0_4_ * fVar7 + auVar4._0_4_ * fVar2 + auVar4._4_4_ * fVar13;
  *(float *)(param_1[1] + 0xc) =
       auVar20._0_4_ * fVar7 + auVar12._0_4_ * fVar2 + auVar12._4_4_ * fVar13;
  *(float *)(param_1[2] + 0xc) =
       auVar21._0_4_ * fVar7 + auVar10._0_4_ * fVar2 + auVar10._4_4_ * fVar13;
  if (param_3 == (undefined1 (*) [16])0x0) {
    FUN_032cb060(&local_20,param_1);
    auVar4._0_4_ = -local_20;
    auVar4._4_4_ = -fStack_1c;
    auVar4._8_4_ = -fStack_18;
    auVar4._12_4_ = uStack_14;
    auVar12._8_8_ = _UNK_038890f8;
    auVar12._0_8_ = _DAT_038890f0;
    auVar10._8_8_ = _UNK_03888e28;
    auVar10._0_8_ = _DAT_03888e20;
    auVar17._8_8_ = _UNK_03888d78;
    auVar17._0_8_ = _DAT_03888d70;
    auVar21._8_8_ = _UNK_03889108;
    auVar21._0_8_ = _DAT_03889100;
    auVar12 = a64_TBL(ZEXT816(0),auVar4,auVar12);
    auVar4 = a64_TBL(ZEXT816(0),auVar4,auVar10);
    auVar17 = a64_TBL(ZEXT816(0),*param_2,auVar17);
    auVar10 = a64_TBL(ZEXT816(0),*param_2,auVar21);
    auVar20._0_4_ = auVar4._0_4_ * auVar10._0_4_ - auVar12._0_4_ * auVar17._0_4_;
    auVar20._4_4_ = auVar4._4_4_ * auVar10._4_4_ - auVar12._4_4_ * auVar17._4_4_;
    auVar20._8_4_ = auVar4._8_4_ * auVar10._8_4_ - auVar12._8_4_ * auVar17._8_4_;
    auVar20._12_4_ = auVar4._12_4_ * auVar10._12_4_ - auVar12._12_4_ * auVar17._12_4_;
    uVar25 = (undefined4)_UNK_038895d8;
    uVar26 = (undefined4)((ulong)_UNK_038895d8 >> 0x20);
    uVar23 = (undefined4)_DAT_038895d0;
    uVar24 = (undefined4)((ulong)_DAT_038895d0 >> 0x20);
    fVar2 = auVar4._0_4_ * auVar17._0_4_ + auVar12._0_4_ * auVar10._0_4_;
    fVar7 = auVar4._4_4_ * auVar17._4_4_ + auVar12._4_4_ * auVar10._4_4_;
    fVar13 = auVar4._8_4_ * auVar17._8_4_ + auVar12._8_4_ * auVar10._8_4_;
    fVar6 = auVar4._12_4_ * auVar17._12_4_ + auVar12._12_4_ * auVar10._12_4_;
  }
  else {
    auVar4 = *param_3;
    auVar12 = *param_2;
    auVar9._12_4_ = auVar4._12_4_;
    if (auVar9._12_4_ == auVar12._12_4_ &&
        (auVar4._8_4_ == auVar12._8_4_ &&
        (auVar4._0_4_ == auVar12._0_4_ && auVar4._4_4_ == auVar12._4_4_))) {
      auVar5._8_8_ = _UNK_0388a138;
      auVar5._0_8_ = _DAT_0388a130;
      goto LAB_02ffede0;
    }
    auVar9._0_4_ = -auVar4._0_4_;
    auVar9._4_4_ = -auVar4._4_4_;
    auVar9._8_4_ = -auVar4._8_4_;
    auVar15._8_8_ = _UNK_038890f8;
    auVar15._0_8_ = _DAT_038890f0;
    auVar18._8_8_ = _UNK_03888e28;
    auVar18._0_8_ = _DAT_03888e20;
    auVar17 = a64_TBL(ZEXT816(0),auVar9,auVar15);
    auVar10 = a64_TBL(ZEXT816(0),auVar9,auVar18);
    auVar19._8_8_ = _UNK_03888d78;
    auVar19._0_8_ = _DAT_03888d70;
    auVar22._8_8_ = _UNK_03889108;
    auVar22._0_8_ = _DAT_03889100;
    auVar21 = a64_TBL(ZEXT816(0),auVar12,auVar19);
    auVar4 = a64_TBL(ZEXT816(0),auVar12,auVar22);
    auVar20._0_4_ = auVar10._0_4_ * auVar4._0_4_ - auVar17._0_4_ * auVar21._0_4_;
    auVar20._4_4_ = auVar10._4_4_ * auVar4._4_4_ - auVar17._4_4_ * auVar21._4_4_;
    auVar20._8_4_ = auVar10._8_4_ * auVar4._8_4_ - auVar17._8_4_ * auVar21._8_4_;
    auVar20._12_4_ = auVar10._12_4_ * auVar4._12_4_ - auVar17._12_4_ * auVar21._12_4_;
    uVar25 = (undefined4)_UNK_038895d8;
    uVar26 = (undefined4)((ulong)_UNK_038895d8 >> 0x20);
    uVar23 = (undefined4)_DAT_038895d0;
    uVar24 = (undefined4)((ulong)_DAT_038895d0 >> 0x20);
    fVar2 = auVar10._0_4_ * auVar21._0_4_ + auVar17._0_4_ * auVar4._0_4_;
    fVar7 = auVar10._4_4_ * auVar21._4_4_ + auVar17._4_4_ * auVar4._4_4_;
    fVar13 = auVar10._8_4_ * auVar21._8_4_ + auVar17._8_4_ * auVar4._8_4_;
    fVar6 = auVar10._12_4_ * auVar21._12_4_ + auVar17._12_4_ * auVar4._12_4_;
  }
  auVar1._4_4_ = uVar24;
  auVar1._0_4_ = uVar23;
  auVar1._8_4_ = uVar25;
  auVar1._12_4_ = uVar26;
  auVar4 = a64_TBL(ZEXT816(0),auVar20,auVar1);
  fVar6 = auVar4._12_4_ - fVar6;
  fVar3 = -(auVar4._0_4_ - fVar2);
  fVar7 = -(auVar4._4_4_ - fVar7);
  fVar13 = -(auVar4._8_4_ - fVar13);
  auVar11._0_4_ = fVar3 * fVar3;
  auVar11._4_4_ = fVar7 * fVar7;
  auVar11._8_4_ = fVar13 * fVar13;
  auVar11._12_4_ = fVar6 * fVar6;
  auVar4 = NEON_ext(auVar11,auVar11,8,1);
  fVar2 = auVar4._0_4_ + auVar4._4_4_;
  uVar8 = CONCAT44(auVar11._0_4_ + auVar11._4_4_ + fVar2,auVar11._0_4_ + auVar11._4_4_ + fVar2);
  uVar14 = NEON_frsqrte(uVar8,4);
  fVar2 = (float)uVar14;
  fVar16 = (float)((ulong)uVar14 >> 0x20);
  uVar14 = NEON_frsqrts(uVar8,CONCAT44(fVar16 * fVar16,fVar2 * fVar2),4);
  fVar2 = fVar2 * (float)uVar14;
  fVar16 = fVar16 * (float)((ulong)uVar14 >> 0x20);
  uVar8 = NEON_frsqrts(uVar8,CONCAT44(fVar16 * fVar16,fVar2 * fVar2),4);
  fVar2 = (float)uVar8 * fVar2;
  fVar16 = (float)((ulong)uVar8 >> 0x20) * fVar16;
  auVar5._0_4_ = fVar3 * fVar2;
  auVar5._4_4_ = fVar7 * fVar16;
  auVar5._8_4_ = fVar13 * fVar2;
  auVar5._12_4_ = fVar6 * fVar16;
LAB_02ffede0:
  *(long *)(param_1[10] + 8) = auVar5._8_8_;
  *(long *)param_1[10] = auVar5._0_8_;
  FUN_030190ec(param_1);
  return;
}


