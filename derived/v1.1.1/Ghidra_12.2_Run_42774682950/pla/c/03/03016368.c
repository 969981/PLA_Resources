/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03016368; name: FUN_03016368
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03016368(float *param_1,long param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [14];
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  int iVar7;
  double dVar8;
  int iVar10;
  int iVar11;
  undefined1 auVar9 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  
  fVar2 = *(float *)param_3[1];
  fVar3 = *(float *)(param_3[1] + 4);
  dVar22 = (double)*(float *)*param_3;
  dVar12 = (double)*(float *)(param_2 + 0x10);
  dVar4 = (double)*(float *)(param_2 + 0x18);
  dVar8 = (double)*(float *)(param_2 + 0x14);
  dVar23 = (double)*(float *)(*param_3 + 4);
  dVar24 = (double)*(float *)(*param_3 + 8);
  dVar16 = (double)*(float *)(*param_3 + 0xc);
  dVar25 = dVar16 * dVar16 - DAT_04445180;
  dVar26 = dVar4 * dVar24 + dVar12 * dVar22 + dVar8 * dVar23;
  dVar13 = (dVar4 * dVar23 - dVar8 * dVar24) * dVar16 + dVar25 * dVar12 + dVar26 * dVar22;
  dVar5 = (dVar12 * dVar24 - dVar4 * dVar22) * dVar16 + dVar25 * dVar8 + dVar26 * dVar23;
  dVar4 = (dVar8 * dVar22 - dVar12 * dVar23) * dVar16 + dVar25 * dVar4 + dVar26 * dVar24;
  *(double *)(param_1 + 8) = dVar4 + dVar4 + (double)*(float *)(param_3[1] + 8);
  *(double *)(param_1 + 4) = dVar13 + dVar13 + (double)fVar2;
  *(double *)(param_1 + 6) = dVar5 + dVar5 + (double)fVar3;
  auVar14._8_8_ = _UNK_038890f8;
  auVar14._0_8_ = _DAT_038890f0;
  auVar18._8_8_ = _UNK_03888e28;
  auVar18._0_8_ = _DAT_03888e20;
  auVar17._8_8_ = _UNK_03888d78;
  auVar17._0_8_ = _DAT_03888d70;
  auVar19._8_8_ = _UNK_03889108;
  auVar19._0_8_ = _DAT_03889100;
  auVar9 = a64_TBL(ZEXT816(0),*param_3,auVar14);
  auVar6 = a64_TBL(ZEXT816(0),*param_3,auVar18);
  auVar18 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(param_2 + 0x30),auVar17);
  auVar14 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(param_2 + 0x30),auVar19);
  auVar20._0_4_ = auVar6._0_4_ * auVar14._0_4_ - auVar9._0_4_ * auVar18._0_4_;
  auVar20._4_4_ = auVar6._4_4_ * auVar14._4_4_ - auVar9._4_4_ * auVar18._4_4_;
  auVar20._8_4_ = auVar6._8_4_ * auVar14._8_4_ - auVar9._8_4_ * auVar18._8_4_;
  auVar20._12_4_ = auVar6._12_4_ * auVar14._12_4_ - auVar9._12_4_ * auVar18._12_4_;
  auVar21._8_4_ = (int)_UNK_038895d8;
  auVar21._0_8_ = _DAT_038895d0;
  auVar21._12_4_ = (int)((ulong)_UNK_038895d8 >> 0x20);
  auVar21 = a64_TBL(ZEXT816(0),auVar20,auVar21);
  param_1[2] = -(auVar21._8_4_ - (auVar6._8_4_ * auVar18._8_4_ + auVar9._8_4_ * auVar14._8_4_));
  param_1[3] = auVar21._12_4_ - (auVar6._12_4_ * auVar18._12_4_ + auVar9._12_4_ * auVar14._12_4_);
  *param_1 = -(auVar21._0_4_ - (auVar6._0_4_ * auVar18._0_4_ + auVar9._0_4_ * auVar14._0_4_));
  param_1[1] = -(auVar21._4_4_ - (auVar6._4_4_ * auVar18._4_4_ + auVar9._4_4_ * auVar14._4_4_));
  auVar21 = *(undefined1 (*) [16])(param_2 + 0x20);
  auVar6._0_12_ = auVar21._0_12_;
  auVar6._12_4_ = *(float *)(param_2 + 4);
  auVar9 = NEON_frecpe(auVar6,4);
  iVar7 = -(uint)(auVar21._0_4_ == 0.0);
  iVar10 = -(uint)(auVar21._4_4_ == 0.0);
  iVar11 = -(uint)(auVar21._8_4_ == 0.0);
  auVar21 = NEON_frecps(auVar6,auVar9,4);
  auVar15._0_4_ = auVar9._0_4_ * auVar21._0_4_;
  auVar15._4_4_ = auVar9._4_4_ * auVar21._4_4_;
  auVar15._8_4_ = auVar9._8_4_ * auVar21._8_4_;
  auVar15._12_4_ = auVar9._12_4_ * auVar21._12_4_;
  auVar21 = NEON_frecps(auVar6,auVar15,4);
  auVar9._0_4_ = auVar15._0_4_ * auVar21._0_4_ * 1.0039062;
  auVar9._4_4_ = auVar15._4_4_ * auVar21._4_4_ * 1.0039062;
  auVar9._8_4_ = auVar15._8_4_ * auVar21._8_4_ * 1.0039062;
  auVar9._12_4_ = auVar15._12_4_ * auVar21._12_4_ * 1.0039062;
  auVar1._1_13_ = auVar9._3_13_;
  auVar1[0] = (byte)((uint)auVar9._0_4_ >> 0x10) & ~(byte)((uint)iVar7 >> 0x10);
  *(ulong *)(param_1 + 0x10) =
       CONCAT26(CONCAT11((byte)((uint)auVar9._12_4_ >> 0x18) &
                         ~(byte)(-(uint)(auVar6._12_4_ == 0.0) >> 0x18),
                         (byte)((uint)auVar9._12_4_ >> 0x10) &
                         ~(byte)(-(uint)(auVar6._12_4_ == 0.0) >> 0x10)),
                CONCAT24(CONCAT11((byte)((uint)auVar9._8_4_ >> 0x18) & ~(byte)((uint)iVar11 >> 0x18)
                                  ,(byte)((uint)auVar9._8_4_ >> 0x10) &
                                   ~(byte)((uint)iVar11 >> 0x10)),
                         CONCAT22(CONCAT11((byte)((uint)auVar9._4_4_ >> 0x18) &
                                           ~(byte)((uint)iVar10 >> 0x18),
                                           (byte)((uint)auVar9._4_4_ >> 0x10) &
                                           ~(byte)((uint)iVar10 >> 0x10)),
                                  (short)(CONCAT13((byte)((uint)auVar9._0_4_ >> 0x18) &
                                                   ~(byte)((uint)iVar7 >> 0x18),auVar1._0_3_ << 0x10
                                                  ) >> 0x10))));
  return;
}


