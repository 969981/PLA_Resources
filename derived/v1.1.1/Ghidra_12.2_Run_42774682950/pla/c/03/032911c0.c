/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032911c0; name: FUN_032911c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032911c0(float *param_1,float *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  float fVar9;
  undefined1 auVar8 [16];
  float fVar10;
  float fVar14;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iVar15;
  int iVar17;
  undefined1 auVar16 [16];
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  float fVar26;
  undefined1 local_30 [16];
  
  FUN_032c9878(param_1,param_2,local_30,10);
  auVar16._8_4_ = 0x34000000;
  auVar16._0_8_ = 0x3400000034000000;
  auVar16._12_4_ = 0x34000000;
  auVar8 = NEON_fmax(local_30,auVar16,4);
  fVar22 = auVar8._0_4_;
  fVar18 = (float)_DAT_03889a80;
  fVar10 = auVar8._4_4_;
  uVar1 = (ulong)_DAT_03889a80 >> 0x20;
  fVar7 = auVar8._8_4_;
  uVar2 = (ulong)_UNK_03889a88 >> 0x20;
  fVar9 = auVar8._12_4_;
  fVar14 = (float)DAT_0388a140;
  uVar3 = (ulong)DAT_0388a140 >> 0x20;
  fVar20 = (float)DAT_0388a148;
  uVar4 = (ulong)DAT_0388a148 >> 0x20;
  fVar26 = (float)_DAT_03888d10;
  uVar5 = (ulong)_DAT_03888d10 >> 0x20;
  fVar21 = (float)_UNK_03888d18;
  uVar6 = (ulong)_UNK_03888d18 >> 0x20;
  param_1[2] = fVar7 * (float)_UNK_03889a88;
  param_1[3] = fVar9 * (float)uVar2;
  *param_1 = fVar22 * fVar18;
  param_1[1] = fVar10 * (float)uVar1;
  param_1[6] = fVar7 * fVar20;
  param_1[7] = fVar9 * (float)uVar4;
  param_1[4] = fVar22 * fVar14;
  param_1[5] = fVar10 * (float)uVar3;
  param_1[10] = fVar7 * fVar21;
  param_1[0xb] = fVar9 * (float)uVar6;
  param_1[8] = fVar22 * fVar26;
  param_1[9] = fVar10 * (float)uVar5;
  fVar7 = *param_2;
  fVar9 = param_2[1];
  fVar22 = param_2[2];
  fVar10 = fVar7 * fVar7 + fVar9 * fVar9 + fVar22 * fVar22;
  fVar14 = fVar7 * fVar7 + fVar9 * fVar9 + fVar22 * fVar22;
  uVar11 = CONCAT44(fVar14,fVar10);
  uVar19 = NEON_frsqrte(uVar11,4);
  fVar18 = (float)uVar19;
  fVar20 = (float)((ulong)uVar19 >> 0x20);
  uVar19 = NEON_frsqrts(uVar11,CONCAT44(fVar20 * fVar20,fVar18 * fVar18),4);
  fVar18 = fVar18 * (float)uVar19;
  fVar20 = fVar20 * (float)((ulong)uVar19 >> 0x20);
  iVar15 = -(uint)(fVar10 <= 0.0);
  iVar17 = -(uint)(fVar14 <= 0.0);
  uVar11 = NEON_frsqrts(uVar11,CONCAT44(fVar20 * fVar20,fVar18 * fVar18),4);
  fVar18 = (float)uVar11 * fVar18;
  fVar20 = (float)((ulong)uVar11 >> 0x20) * fVar20;
  fVar10 = (float)CONCAT13((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                           CONCAT12((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10),
                                    CONCAT11((byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar15 >> 8),
                                             SUB41(fVar18,0) & ~(byte)iVar15)));
  fVar7 = fVar7 * fVar10;
  fVar18 = (float)(CONCAT17((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                            CONCAT16((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar17 >> 0x10),
                                     CONCAT15((byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar17 >> 8)
                                              ,CONCAT14(SUB41(fVar20,0) & ~(byte)iVar17,fVar10))))
                  >> 0x20);
  fVar9 = fVar9 * fVar18;
  auVar13._0_8_ = CONCAT44(fVar9,fVar7);
  auVar13._8_4_ = fVar22 * fVar10;
  auVar13._12_4_ = param_2[3] * fVar18;
  auVar8 = *(undefined1 (*) [16])(param_2 + 8);
  auVar16 = NEON_ext(auVar8,auVar8,8,1);
  uVar11 = NEON_ext(auVar8._0_8_,auVar16._0_8_,4,1);
  auVar16 = NEON_ext(auVar13,auVar13,4,1);
  *(long *)(param_2 + 2) = auVar13._8_8_;
  *(undefined8 *)param_2 = auVar13._0_8_;
  auVar12._0_4_ = auVar8._0_4_ * auVar16._0_4_ - fVar7 * (float)uVar11;
  auVar12._4_4_ = auVar8._4_4_ * auVar16._4_4_ - fVar9 * (float)((ulong)uVar11 >> 0x20);
  auVar12._8_4_ = auVar8._8_4_ * fVar7 - auVar13._8_4_ * auVar8._0_4_;
  auVar12._12_4_ = auVar8._12_4_ * fVar9 - auVar13._12_4_ * auVar8._4_4_;
  auVar8 = NEON_ext(auVar12,auVar12,4,1);
  fVar18 = auVar8._0_4_;
  fVar14 = auVar8._4_4_;
  fVar22 = fVar18 * fVar18 + fVar14 * fVar14 + auVar12._0_4_ * auVar12._0_4_;
  fVar20 = fVar18 * fVar18 + fVar14 * fVar14 + auVar12._0_4_ * auVar12._0_4_;
  uVar11 = CONCAT44(fVar20,fVar22);
  uVar19 = NEON_frsqrte(uVar11,4);
  fVar10 = (float)uVar19;
  fVar26 = (float)((ulong)uVar19 >> 0x20);
  uVar19 = NEON_frsqrts(uVar11,CONCAT44(fVar26 * fVar26,fVar10 * fVar10),4);
  fVar10 = fVar10 * (float)uVar19;
  fVar26 = fVar26 * (float)((ulong)uVar19 >> 0x20);
  iVar15 = -(uint)(fVar22 <= 0.0);
  iVar17 = -(uint)(fVar20 <= 0.0);
  uVar11 = NEON_frsqrts(uVar11,CONCAT44(fVar26 * fVar26,fVar10 * fVar10),4);
  fVar10 = (float)uVar11 * fVar10;
  fVar26 = (float)((ulong)uVar11 >> 0x20) * fVar26;
  fVar20 = (float)CONCAT13((byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                           CONCAT12((byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10),
                                    CONCAT11((byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar15 >> 8),
                                             SUB41(fVar10,0) & ~(byte)iVar15)));
  fVar22 = fVar18 * fVar20;
  fVar26 = (float)(CONCAT17((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                            CONCAT16((byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar17 >> 0x10),
                                     CONCAT15((byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar17 >> 8)
                                              ,CONCAT14(SUB41(fVar26,0) & ~(byte)iVar17,fVar20))))
                  >> 0x20);
  fVar10 = fVar14 * fVar26;
  uVar23 = (undefined1)((uint)fVar10 >> 8);
  uVar24 = (undefined1)((uint)fVar10 >> 0x10);
  uVar25 = (undefined1)((uint)fVar10 >> 0x18);
  uVar11 = NEON_ext(CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14(SUB41(fVar10,0),fVar22)
                                                            ))),
                    CONCAT44(auVar12._4_4_ * fVar26,auVar12._0_4_ * fVar20),4,1);
  param_2[6] = auVar12._0_4_ * fVar20;
  param_2[7] = auVar12._4_4_ * fVar26;
  param_2[4] = fVar18 * fVar20;
  param_2[5] = fVar14 * fVar26;
  auVar8._0_4_ = fVar7 * (float)uVar11 - auVar16._0_4_ * fVar18 * fVar20;
  auVar8._4_4_ = fVar9 * (float)((ulong)uVar11 >> 0x20) - auVar16._4_4_ * fVar14 * fVar26;
  auVar8._8_4_ = auVar13._8_4_ * fVar22 - fVar7 * auVar12._0_4_ * fVar20;
  auVar8._12_4_ =
       auVar13._12_4_ *
       (float)(CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14(SUB41(fVar10,0),fVar22))))
              >> 0x20) - fVar9 * auVar12._4_4_ * fVar26;
  auVar13 = NEON_ext(auVar8,auVar8,4,1);
  fVar18 = auVar13._0_4_;
  fVar14 = auVar13._4_4_;
  fVar22 = fVar18 * fVar18 + fVar14 * fVar14 + auVar8._0_4_ * auVar8._0_4_;
  fVar7 = fVar18 * fVar18 + fVar14 * fVar14 + auVar8._0_4_ * auVar8._0_4_;
  uVar11 = CONCAT44(fVar7,fVar22);
  uVar19 = NEON_frsqrte(uVar11,4);
  fVar10 = (float)uVar19;
  fVar9 = (float)((ulong)uVar19 >> 0x20);
  uVar19 = NEON_frsqrts(uVar11,CONCAT44(fVar9 * fVar9,fVar10 * fVar10),4);
  fVar10 = fVar10 * (float)uVar19;
  fVar9 = fVar9 * (float)((ulong)uVar19 >> 0x20);
  iVar15 = -(uint)(fVar22 <= 0.0);
  iVar17 = -(uint)(fVar7 <= 0.0);
  uVar11 = NEON_frsqrts(uVar11,CONCAT44(fVar9 * fVar9,fVar10 * fVar10),4);
  fVar10 = (float)uVar11 * fVar10;
  fVar9 = (float)((ulong)uVar11 >> 0x20) * fVar9;
  fVar22 = (float)CONCAT13((byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                           CONCAT12((byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10),
                                    CONCAT11((byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar15 >> 8),
                                             SUB41(fVar10,0) & ~(byte)iVar15)));
  fVar10 = (float)(CONCAT17((byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                            CONCAT16((byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar17 >> 0x10),
                                     CONCAT15((byte)((uint)fVar9 >> 8) & ~(byte)((uint)iVar17 >> 8),
                                              CONCAT14(SUB41(fVar9,0) & ~(byte)iVar17,fVar22)))) >>
                  0x20);
  param_2[10] = auVar8._0_4_ * fVar22;
  param_2[0xb] = auVar8._4_4_ * fVar10;
  param_2[8] = fVar18 * fVar22;
  param_2[9] = fVar14 * fVar10;
  return;
}


