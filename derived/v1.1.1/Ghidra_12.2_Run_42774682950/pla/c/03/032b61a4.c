/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b61a4; name: FUN_032b61a4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_032b61a4(long *param_1,undefined8 param_2,float *param_3,float *param_4,float *param_5,
            uint param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar11;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar17;
  int iVar18;
  undefined1 auVar16 [16];
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar23;
  undefined8 uVar22;
  
  auVar6._0_4_ = *param_4 - *param_3;
  auVar6._4_4_ = param_4[1] - param_3[1];
  auVar6._8_4_ = param_4[2] - param_3[2];
  auVar6._12_4_ = param_4[3] - param_3[3];
  auVar5._0_4_ = *param_5 - *param_3;
  auVar5._4_4_ = param_5[1] - param_3[1];
  auVar5._8_4_ = param_5[2] - param_3[2];
  auVar5._12_4_ = param_5[3] - param_3[3];
  auVar9 = NEON_ext(auVar6,auVar6,4,1);
  auVar16 = NEON_ext(auVar5,auVar5,4,1);
  fVar12 = auVar6._0_4_ * auVar16._0_4_ - auVar5._0_4_ * auVar9._0_4_;
  fVar17 = auVar6._4_4_ * auVar16._4_4_ - auVar5._4_4_ * auVar9._4_4_;
  auVar16._0_8_ = CONCAT44(fVar17,fVar12);
  auVar16._8_4_ = auVar6._8_4_ * auVar5._0_4_ - auVar5._8_4_ * auVar6._0_4_;
  auVar16._12_4_ = auVar6._12_4_ * auVar5._4_4_ - auVar5._12_4_ * auVar6._4_4_;
  auVar6 = NEON_ext(auVar16,auVar16,4,1);
  fVar4 = auVar6._0_4_;
  fVar20 = auVar6._4_4_;
  fVar7 = fVar4 * fVar4 + fVar20 * fVar20 + fVar12 * fVar12;
  fVar11 = fVar4 * fVar4 + fVar20 * fVar20 + fVar12 * fVar12;
  uVar8 = CONCAT44(fVar11,fVar7);
  auVar9._0_8_ = CONCAT44(-(uint)(0.0 < fVar11),-(uint)(0.0 < fVar7));
  if (-(uint)(0.0 < fVar7) == 0 && -(uint)(0.0 < fVar11) == 0) {
    uVar1 = 0x80040200;
  }
  else {
    uVar21 = NEON_frsqrte(uVar8,4);
    fVar19 = (float)uVar21;
    fVar23 = (float)((ulong)uVar21 >> 0x20);
    auVar2._0_8_ = auVar6._0_8_;
    auVar2._8_8_ = auVar16._0_8_;
    iVar13 = -(uint)(fVar7 <= 0.0);
    iVar18 = -(uint)(fVar11 <= 0.0);
    auVar9._8_8_ = auVar9._0_8_;
    uVar21 = NEON_frsqrts(uVar8,CONCAT44(fVar23 * fVar23,fVar19 * fVar19),4);
    fVar19 = fVar19 * (float)uVar21;
    fVar23 = fVar23 * (float)((ulong)uVar21 >> 0x20);
    uVar8 = NEON_frsqrts(uVar8,CONCAT44(fVar23 * fVar23,fVar19 * fVar19),4);
    fVar19 = (float)uVar8 * fVar19;
    fVar23 = (float)((ulong)uVar8 >> 0x20) * fVar23;
    fVar7 = (float)CONCAT13((byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                            CONCAT12((byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10),
                                     CONCAT11((byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar13 >> 8)
                                              ,SUB41(fVar19,0) & ~(byte)iVar13)));
    auVar10._0_4_ = fVar4 * fVar7;
    fVar4 = (float)(CONCAT17((byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                             CONCAT16((byte)((uint)fVar23 >> 0x10) & ~(byte)((uint)iVar18 >> 0x10),
                                      CONCAT15((byte)((uint)fVar23 >> 8) &
                                               ~(byte)((uint)iVar18 >> 8),
                                               CONCAT14(SUB41(fVar23,0) & ~(byte)iVar18,fVar7)))) >>
                   0x20);
    auVar10._4_4_ = fVar20 * fVar4;
    auVar10._8_4_ = fVar12 * fVar7;
    auVar10._12_4_ = fVar17 * fVar4;
    auVar2 = auVar2 ^ (auVar2 ^ auVar10) & auVar9;
    fVar20 = (float)((ulong)DAT_0388a6d0 >> 0x20);
    uVar21 = NEON_fmov(0x3f800000,4);
    fVar4 = (float)DAT_0388a6d0 + fVar20 + (float)uVar21;
    fVar23 = (float)((ulong)uVar21 >> 0x20);
    fVar7 = (float)DAT_0388a6d0 + fVar20 + fVar23;
    uVar8 = CONCAT44(fVar7,fVar4);
    uVar22 = NEON_frsqrte(uVar8,4);
    fVar20 = (float)uVar22;
    fVar11 = (float)((ulong)uVar22 >> 0x20);
    uVar22 = NEON_frsqrts(uVar8,CONCAT44(fVar11 * fVar11,fVar20 * fVar20),4);
    fVar20 = fVar20 * (float)uVar22;
    fVar11 = fVar11 * (float)((ulong)uVar22 >> 0x20);
    iVar13 = -(uint)(fVar4 <= 0.0);
    iVar18 = -(uint)(fVar7 <= 0.0);
    uVar8 = NEON_frsqrts(uVar8,CONCAT44(fVar11 * fVar11,fVar20 * fVar20),4);
    fVar20 = (float)uVar8 * fVar20;
    fVar11 = (float)((ulong)uVar8 >> 0x20) * fVar11;
    fVar4 = (float)CONCAT13((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                            CONCAT12((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10),
                                     CONCAT11((byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar13 >> 8)
                                              ,SUB41(fVar20,0) & ~(byte)iVar13)));
    fVar7 = (float)((ulong)DAT_0388a598 >> 0x20);
    fVar20 = (float)DAT_0388a598 + fVar7 + (float)uVar21;
    fVar23 = (float)DAT_0388a598 + fVar7 + fVar23;
    uVar8 = CONCAT44(fVar23,fVar20);
    fVar12 = auVar2._0_4_ * fVar4 * (float)_DAT_03889f00 * 0.9;
    fVar17 = auVar2._4_4_ *
             (float)(CONCAT17((byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                              CONCAT16((byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar18 >> 0x10),
                                       CONCAT15((byte)((uint)fVar11 >> 8) &
                                                ~(byte)((uint)iVar18 >> 8),
                                                CONCAT14(SUB41(fVar11,0) & ~(byte)iVar18,fVar4))))
                    >> 0x20) * (float)((ulong)_DAT_03889f00 >> 0x20) * 0.9;
    fVar19 = auVar2._8_4_ * fVar4 * (float)_UNK_03889f08 * 0.9;
    uVar21 = NEON_frsqrte(uVar8,4);
    fVar4 = (float)uVar21;
    fVar7 = (float)((ulong)uVar21 >> 0x20);
    uVar21 = NEON_frsqrts(uVar8,CONCAT44(fVar7 * fVar7,fVar4 * fVar4),4);
    fVar4 = fVar4 * (float)uVar21;
    fVar7 = fVar7 * (float)((ulong)uVar21 >> 0x20);
    iVar13 = -(uint)(fVar20 <= 0.0);
    iVar18 = -(uint)(fVar23 <= 0.0);
    uVar8 = NEON_frsqrts(uVar8,CONCAT44(fVar7 * fVar7,fVar4 * fVar4),4);
    fVar4 = (float)uVar8 * fVar4;
    fVar7 = (float)((ulong)uVar8 >> 0x20) * fVar7;
    fVar20 = (float)CONCAT13((byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                             CONCAT12((byte)((uint)fVar4 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10),
                                      CONCAT11((byte)((uint)fVar4 >> 8) & ~(byte)((uint)iVar13 >> 8)
                                               ,SUB41(fVar4,0) & ~(byte)iVar13)));
    fVar23 = (float)(param_6 >> 0x10 & 0xff) / 255.0;
    fVar4 = auVar2._0_4_ * fVar20 * (float)_DAT_0388a550 * 0.9;
    fVar7 = auVar2._4_4_ *
            (float)(CONCAT17((byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                             CONCAT16((byte)((uint)fVar7 >> 0x10) & ~(byte)((uint)iVar18 >> 0x10),
                                      CONCAT15((byte)((uint)fVar7 >> 8) & ~(byte)((uint)iVar18 >> 8)
                                               ,CONCAT14(SUB41(fVar7,0) & ~(byte)iVar18,fVar20))))
                   >> 0x20) * (float)((ulong)_DAT_0388a550 >> 0x20) * 0.9;
    fVar11 = auVar2._8_4_ * fVar20 * (float)_UNK_0388a558 * 0.9;
    fVar14 = (float)(param_6 >> 8 & 0xff) / 255.0;
    fVar15 = (float)(param_6 & 0xff) / 255.0;
    fVar20 = (fVar4 + fVar7 + fVar11) * 0.5 + 0.5;
    fVar4 = (fVar4 + fVar7 + fVar11) * 0.5 + 0.5;
    fVar7 = (fVar12 + fVar17 + fVar19) * 0.5 + 0.5;
    fVar11 = (fVar12 + fVar17 + fVar19) * 0.5 + 0.5;
    auVar3._0_4_ = fVar23 * 0.05 +
                   fVar23 * (float)_DAT_03889940 * fVar7 + fVar23 * (float)_DAT_03888e70 * fVar20;
    auVar3._4_4_ = fVar14 * 0.05 +
                   fVar14 * (float)((ulong)_DAT_03889940 >> 0x20) * fVar11 +
                   fVar14 * (float)((ulong)_DAT_03888e70 >> 0x20) * fVar4;
    auVar3._8_4_ = fVar15 * 0.05 +
                   fVar15 * (float)_UNK_03889948 * fVar7 + fVar15 * (float)_UNK_03888e78 * fVar20;
    auVar3._12_4_ =
         (float)((ulong)_UNK_03889948 >> 0x20) * 0.0 * fVar11 +
         (float)((ulong)_UNK_03888e78 >> 0x20) * 0.0 * fVar4 + 0.0;
    auVar9 = NEON_fmov(0x3f800000,4);
    auVar6 = NEON_fmax(auVar3,ZEXT816(0),4);
    NEON_fmin(auVar6,auVar9,4);
    uVar1 = FUN_0333d7e4();
    uVar1 = (**(code **)(*param_1 + 200))(param_1,param_2,param_3,param_4,param_5,uVar1,param_7);
  }
  return uVar1;
}


