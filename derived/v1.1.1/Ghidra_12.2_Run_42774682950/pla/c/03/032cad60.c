/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cad60; name: FUN_032cad60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032cad60(undefined8 *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar4;
  undefined1 auVar3 [16];
  float fVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  int iVar13;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  
  auVar8 = *param_2;
  fVar2 = auVar8._0_4_ * auVar8._0_4_;
  fVar4 = auVar8._4_4_ * auVar8._4_4_;
  auVar7._0_12_ = auVar8._0_12_;
  auVar7._12_4_ = 0;
  auVar11._8_8_ = _UNK_03889038;
  auVar11._0_8_ = _DAT_03889030;
  auVar12 = a64_TBL(ZEXT816(0),auVar7,auVar11);
  auVar8._8_4_ = (int)_UNK_03889f18;
  auVar8._0_8_ = _DAT_03889f10;
  auVar8._12_4_ = (int)((ulong)_UNK_03889f18 >> 0x20);
  auVar8 = a64_TBL(ZEXT816(0),auVar7,auVar8);
  fVar5 = auVar8._0_4_;
  fVar14 = fVar5 * fVar5;
  fVar15 = auVar8._4_4_ * auVar8._4_4_;
  fVar16 = auVar8._8_4_ * auVar8._8_4_;
  fVar17 = auVar8._12_4_ * auVar8._12_4_;
  auVar19._4_4_ = fVar15;
  auVar19._0_4_ = fVar14;
  auVar19._8_4_ = fVar16;
  auVar19._12_4_ = fVar17;
  auVar1._4_4_ = fVar15;
  auVar1._0_4_ = fVar14;
  auVar1._8_4_ = fVar16;
  auVar1._12_4_ = fVar17;
  auVar19 = NEON_ext(auVar19,auVar1,8,1);
  fVar16 = auVar19._0_4_ + auVar19._4_4_;
  auVar3._4_12_ = auVar12._4_12_;
  auVar3._0_4_ = -auVar12._0_4_;
  auVar9._4_12_ = auVar8._4_12_;
  auVar9._0_4_ = -fVar5;
  auVar12._0_8_ =
       CONCAT44(-(uint)(fVar2 + fVar4 < fVar14 + fVar15 + fVar16),
                -(uint)(fVar2 + fVar4 < fVar14 + fVar15 + fVar16));
  auVar12._8_8_ = auVar12._0_8_;
  auVar3 = auVar3 ^ (auVar3 ^ auVar9) & auVar12;
  fVar16 = auVar3._0_4_;
  fVar2 = auVar3._4_4_;
  fVar4 = auVar3._8_4_;
  fVar5 = fVar16 * fVar16 + fVar2 * fVar2 + fVar4 * fVar4;
  fVar15 = fVar16 * fVar16 + fVar2 * fVar2 + fVar4 * fVar4;
  uVar6 = CONCAT44(fVar15,fVar5);
  uVar18 = NEON_frsqrte(uVar6,4);
  fVar14 = (float)uVar18;
  fVar17 = (float)((ulong)uVar18 >> 0x20);
  uVar18 = NEON_frsqrts(uVar6,CONCAT44(fVar17 * fVar17,fVar14 * fVar14),4);
  fVar14 = fVar14 * (float)uVar18;
  fVar17 = fVar17 * (float)((ulong)uVar18 >> 0x20);
  iVar10 = -(uint)(fVar5 <= 0.0);
  iVar13 = -(uint)(fVar15 <= 0.0);
  uVar18 = NEON_frsqrts(uVar6,CONCAT44(fVar17 * fVar17,fVar14 * fVar14),4);
  fVar14 = (float)uVar18 * fVar14;
  fVar17 = (float)((ulong)uVar18 >> 0x20) * fVar17;
  fVar5 = (float)CONCAT13((byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18),
                          CONCAT12((byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10),
                                   CONCAT11((byte)((uint)fVar14 >> 8) & ~(byte)((uint)iVar10 >> 8),
                                            SUB41(fVar14,0) & ~(byte)iVar10)));
  param_1[1] = (ulong)(uint)(fVar4 * fVar5);
  *param_1 = CONCAT44(fVar2 * (float)(CONCAT17((byte)((uint)fVar17 >> 0x18) &
                                               ~(byte)((uint)iVar13 >> 0x18),
                                               CONCAT16((byte)((uint)fVar17 >> 0x10) &
                                                        ~(byte)((uint)iVar13 >> 0x10),
                                                        CONCAT15((byte)((uint)fVar17 >> 8) &
                                                                 ~(byte)((uint)iVar13 >> 8),
                                                                 CONCAT14(SUB41(fVar17,0) &
                                                                          ~(byte)iVar13,fVar5)))) >>
                                     0x20),fVar16 * fVar5);
  return;
}


