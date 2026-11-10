/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030190ec; name: FUN_030190ec
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030190ec(undefined8 *param_1,undefined1 (*param_2) [16])

{
  double dVar1;
  undefined1 auVar2 [16];
  float fVar3;
  double dVar4;
  undefined1 auVar5 [16];
  float fVar7;
  undefined1 auVar6 [16];
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  if (param_1[0xf] != 0) {
    auVar2._0_4_ = -*(float *)(param_1 + 0x14);
    auVar2._4_4_ = -*(float *)((long)param_1 + 0xa4);
    auVar2._8_4_ = -*(float *)(param_1 + 0x15);
    auVar5._8_8_ = _UNK_038890f8;
    auVar5._0_8_ = _DAT_038890f0;
    auVar2._12_4_ = *(undefined4 *)((long)param_1 + 0xac);
    auVar13._8_8_ = _UNK_03888e28;
    auVar13._0_8_ = _DAT_03888e20;
    uVar22 = NEON_fmov(0x3f800000,4);
    auVar9 = a64_TBL(ZEXT816(0),*param_2,auVar5);
    auVar5 = a64_TBL(ZEXT816(0),*param_2,auVar13);
    auVar12._8_8_ = _UNK_03888d78;
    auVar12._0_8_ = _DAT_03888d70;
    auVar17._8_8_ = _UNK_03889108;
    auVar17._0_8_ = _DAT_03889100;
    auVar13 = a64_TBL(ZEXT816(0),auVar2,auVar12);
    auVar2 = a64_TBL(ZEXT816(0),auVar2,auVar17);
    auVar18._0_4_ = auVar5._0_4_ * auVar2._0_4_ - auVar9._0_4_ * auVar13._0_4_;
    auVar18._4_4_ = auVar5._4_4_ * auVar2._4_4_ - auVar9._4_4_ * auVar13._4_4_;
    auVar18._8_4_ = auVar5._8_4_ * auVar2._8_4_ - auVar9._8_4_ * auVar13._8_4_;
    auVar18._12_4_ = auVar5._12_4_ * auVar2._12_4_ - auVar9._12_4_ * auVar13._12_4_;
    auVar19._8_4_ = (int)_UNK_038895d8;
    auVar19._0_8_ = _DAT_038895d0;
    auVar19._12_4_ = (int)((ulong)_UNK_038895d8 >> 0x20);
    auVar19 = a64_TBL(ZEXT816(0),auVar18,auVar19);
    fVar10 = auVar19._12_4_ - (auVar5._12_4_ * auVar13._12_4_ + auVar9._12_4_ * auVar2._12_4_);
    fVar3 = -(auVar19._0_4_ - (auVar5._0_4_ * auVar13._0_4_ + auVar9._0_4_ * auVar2._0_4_));
    fVar7 = -(auVar19._4_4_ - (auVar5._4_4_ * auVar13._4_4_ + auVar9._4_4_ * auVar2._4_4_));
    auVar6._0_8_ = CONCAT44(fVar7,fVar3);
    auVar6._8_4_ = -(auVar19._8_4_ - (auVar5._8_4_ * auVar13._8_4_ + auVar9._8_4_ * auVar2._8_4_));
    auVar6._12_4_ = -fVar10;
    auVar9._8_8_ = auVar6._8_8_;
    auVar9._0_8_ = auVar6._0_8_;
    auVar14._0_12_ = auVar9._0_12_;
    auVar14._12_4_ = fVar10;
    auVar20._0_4_ = fVar3 + fVar3;
    auVar20._4_4_ = fVar7 + fVar7;
    auVar20._8_4_ = auVar6._8_4_ + auVar6._8_4_;
    auVar20._12_4_ = fVar10 + fVar10;
    auVar19 = NEON_ext(auVar14,auVar14,8,1);
    auVar2 = NEON_ext(auVar20,auVar20,8,1);
    fVar8 = auVar19._0_4_ * auVar2._0_4_;
    dVar4 = *(double *)param_2[1];
    dVar1 = *(double *)(param_2[1] + 8);
    fVar26 = auVar20._4_4_ * fVar3 + auVar20._8_4_ * fVar10;
    fVar23 = auVar20._4_4_ * fVar3 - auVar20._8_4_ * fVar10;
    fVar21 = (float)uVar22;
    fVar15 = fVar21 - (auVar20._4_4_ * fVar7 + fVar8);
    fVar24 = fVar21 - (auVar20._0_4_ * fVar3 + fVar8);
    fVar8 = auVar20._8_4_ * fVar3 - auVar20._4_4_ * fVar10;
    fVar11 = auVar20._8_4_ * fVar7 + auVar20._0_4_ * fVar10;
    fVar27 = auVar20._8_4_ * fVar3 + auVar20._4_4_ * fVar10;
    fVar10 = auVar20._8_4_ * fVar7 - auVar20._0_4_ * fVar10;
    fVar21 = fVar21 - (auVar20._0_4_ * fVar3 + auVar20._4_4_ * fVar7);
    dVar16 = *(double *)param_2[2];
    *param_1 = CONCAT44(fVar26,fVar15);
    fVar3 = (float)((ulong)param_1[1] >> 0x20);
    param_1[2] = CONCAT44(fVar24,fVar23);
    fVar7 = (float)((ulong)param_1[3] >> 0x20);
    param_1[4] = CONCAT44(fVar10,fVar27);
    fVar25 = (float)((ulong)param_1[5] >> 0x20);
    *(float *)(param_1 + 1) = fVar8;
    dVar4 = dVar4 - (double)(fVar27 * fVar25 + fVar15 * fVar3 + fVar23 * fVar7);
    dVar16 = dVar16 - (double)(fVar21 * fVar25 + fVar8 * fVar3 + fVar11 * fVar7);
    dVar1 = dVar1 - (double)(fVar10 * fVar25 + fVar26 * fVar3 + fVar24 * fVar7);
    fVar8 = (float)dVar16;
    fVar3 = (float)dVar4;
    fVar7 = (float)dVar1;
    *(float *)(param_1 + 3) = fVar11;
    *(float *)(param_1 + 5) = fVar21;
    param_1[6] = CONCAT44(fVar7,fVar3);
    *(float *)(param_1 + 7) = fVar8;
    *(float *)(param_1 + 9) = (float)(dVar16 - (double)fVar8);
    param_1[8] = CONCAT44((float)(dVar1 - (double)fVar7),(float)(dVar4 - (double)fVar3));
  }
  return;
}


