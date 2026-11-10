/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03009798; name: FUN_03009798
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03009798(long param_1,undefined8 *param_2,undefined8 *param_3,float *param_4,
                 undefined8 *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar11;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar12;
  int iVar16;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar33;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  
  uVar23 = *param_2;
  *(undefined8 *)(param_1 + 0x78) = param_2[1];
  *(undefined8 *)(param_1 + 0x70) = uVar23;
  uVar23 = *param_3;
  *(undefined8 *)(param_1 + 0xb8) = param_3[1];
  *(undefined8 *)(param_1 + 0xb0) = uVar23;
  fVar18 = *param_4;
  fVar20 = param_4[1];
  fVar21 = param_4[2];
  fVar8 = fVar18 * fVar18 + fVar20 * fVar20 + fVar21 * fVar21;
  fVar11 = fVar18 * fVar18 + fVar20 * fVar20 + fVar21 * fVar21;
  uVar24 = CONCAT44(fVar11,fVar8);
  uVar23 = NEON_frsqrte(uVar24,4);
  fVar17 = (float)uVar23;
  fVar19 = (float)((ulong)uVar23 >> 0x20);
  uVar23 = NEON_frsqrts(uVar24,CONCAT44(fVar19 * fVar19,fVar17 * fVar17),4);
  fVar17 = fVar17 * (float)uVar23;
  fVar19 = fVar19 * (float)((ulong)uVar23 >> 0x20);
  iVar12 = -(uint)(fVar8 <= 0.0);
  iVar16 = -(uint)(fVar11 <= 0.0);
  uVar23 = NEON_frsqrts(uVar24,CONCAT44(fVar19 * fVar19,fVar17 * fVar17),4);
  fVar17 = (float)uVar23 * fVar17;
  fVar19 = (float)((ulong)uVar23 >> 0x20) * fVar19;
  fVar8 = (float)CONCAT13((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                          CONCAT12((byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10),
                                   CONCAT11((byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar12 >> 8),
                                            SUB41(fVar17,0) & ~(byte)iVar12)));
  fVar18 = fVar18 * fVar8;
  fVar17 = (float)(CONCAT17((byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                            CONCAT16((byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                     CONCAT15((byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar16 >> 8)
                                              ,CONCAT14(SUB41(fVar19,0) & ~(byte)iVar16,fVar8)))) >>
                  0x20);
  fVar20 = fVar20 * fVar17;
  fVar21 = fVar21 * fVar8;
  fVar17 = param_4[3] * fVar17;
  auVar9._8_8_ = _UNK_03889038;
  auVar9._0_8_ = _DAT_03889030;
  auVar13._8_8_ = _UNK_03889f18;
  auVar13._0_8_ = _DAT_03889f10;
  auVar25._12_4_ = fVar17;
  auVar25._8_4_ = fVar21;
  auVar25._4_4_ = fVar20;
  auVar25._0_4_ = fVar18;
  auVar26._0_12_ = auVar25._0_12_;
  auVar26._12_4_ = 0;
  auVar34 = a64_TBL(ZEXT816(0),auVar26,auVar9);
  auVar27 = a64_TBL(ZEXT816(0),auVar26,auVar13);
  fVar11 = auVar27._0_4_;
  fVar19 = fVar11 * fVar11;
  fVar37 = auVar27._4_4_ * auVar27._4_4_;
  fVar8 = auVar27._8_4_ * auVar27._8_4_;
  fVar38 = auVar27._12_4_ * auVar27._12_4_;
  auVar4._4_4_ = fVar37;
  auVar4._0_4_ = fVar19;
  auVar4._8_4_ = fVar8;
  auVar4._12_4_ = fVar38;
  auVar5._4_4_ = fVar37;
  auVar5._0_4_ = fVar19;
  auVar5._8_4_ = fVar8;
  auVar5._12_4_ = fVar38;
  auVar39 = NEON_ext(auVar4,auVar5,8,1);
  fVar8 = auVar39._0_4_ + auVar39._4_4_;
  auVar36._4_12_ = auVar34._4_12_;
  auVar36._0_4_ = -auVar34._0_4_;
  auVar35._0_8_ =
       CONCAT44(-(uint)(fVar18 * fVar18 + fVar20 * fVar20 < fVar19 + fVar37 + fVar8),
                -(uint)(fVar18 * fVar18 + fVar20 * fVar20 < fVar19 + fVar37 + fVar8));
  auVar28._4_12_ = auVar27._4_12_;
  auVar28._0_4_ = -fVar11;
  auVar35._8_8_ = auVar35._0_8_;
  auVar36 = auVar36 ^ (auVar36 ^ auVar28) & auVar35;
  fVar19 = auVar36._0_4_;
  fVar33 = auVar36._4_4_;
  fVar22 = auVar36._8_4_;
  fVar8 = fVar19 * fVar19 + fVar33 * fVar33 + fVar22 * fVar22;
  fVar37 = fVar19 * fVar19 + fVar33 * fVar33 + fVar22 * fVar22;
  uVar24 = CONCAT44(fVar37,fVar8);
  uVar23 = NEON_frsqrte(uVar24,4);
  fVar11 = (float)uVar23;
  fVar38 = (float)((ulong)uVar23 >> 0x20);
  uVar23 = NEON_frsqrts(uVar24,CONCAT44(fVar38 * fVar38,fVar11 * fVar11),4);
  fVar11 = fVar11 * (float)uVar23;
  fVar38 = fVar38 * (float)((ulong)uVar23 >> 0x20);
  iVar12 = -(uint)(fVar8 <= 0.0);
  iVar16 = -(uint)(fVar37 <= 0.0);
  uVar23 = NEON_frsqrts(uVar24,CONCAT44(fVar38 * fVar38,fVar11 * fVar11),4);
  fVar11 = (float)uVar23 * fVar11;
  fVar38 = (float)((ulong)uVar23 >> 0x20) * fVar38;
  fVar8 = (float)CONCAT13((byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                          CONCAT12((byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10),
                                   CONCAT11((byte)((uint)fVar11 >> 8) & ~(byte)((uint)iVar12 >> 8),
                                            SUB41(fVar11,0) & ~(byte)iVar12)));
  auVar27._4_4_ = fVar20;
  auVar27._0_4_ = fVar18;
  auVar27._8_4_ = fVar21;
  auVar27._12_4_ = fVar17;
  auVar34._4_4_ = fVar20;
  auVar34._0_4_ = fVar18;
  auVar34._8_4_ = fVar21;
  auVar34._12_4_ = fVar17;
  auVar27 = NEON_ext(auVar27,auVar34,4,1);
  fVar19 = fVar19 * fVar8;
  fVar11 = (float)(CONCAT17((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                            CONCAT16((byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                     CONCAT15((byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar16 >> 8)
                                              ,CONCAT14(SUB41(fVar38,0) & ~(byte)iVar16,fVar8)))) >>
                  0x20);
  fVar33 = fVar33 * fVar11;
  auVar29._0_8_ = CONCAT44(fVar33,fVar19);
  auVar29._8_4_ = fVar22 * fVar8;
  auVar29._12_4_ = auVar36._12_4_ * fVar11;
  auVar34 = NEON_ext(auVar29,auVar29,4,1);
  *(ulong *)(param_1 + 0x48) = CONCAT44(fVar17,fVar21);
  *(ulong *)(param_1 + 0x40) = CONCAT44(fVar20,fVar18);
  *(long *)(param_1 + 0x58) = auVar29._8_8_;
  *(undefined8 *)(param_1 + 0x50) = auVar29._0_8_;
  fVar8 = fVar18 * auVar34._0_4_ - auVar27._0_4_ * fVar19;
  fVar11 = fVar20 * auVar34._4_4_ - auVar27._4_4_ * fVar33;
  fVar18 = fVar21 * fVar19 - fVar18 * auVar29._8_4_;
  fVar20 = fVar17 * fVar33 - fVar20 * auVar29._12_4_;
  auVar39._4_4_ = fVar11;
  auVar39._0_4_ = fVar8;
  auVar39._8_4_ = fVar18;
  auVar39._12_4_ = fVar20;
  auVar1._4_4_ = fVar11;
  auVar1._0_4_ = fVar8;
  auVar1._8_4_ = fVar18;
  auVar1._12_4_ = fVar20;
  auVar27 = NEON_ext(auVar39,auVar1,4,1);
  *(ulong *)(param_1 + 0x68) = CONCAT44(fVar11,fVar8);
  *(long *)(param_1 + 0x60) = auVar27._0_8_;
  fVar33 = (float)param_5[1];
  fVar37 = (float)*param_5;
  fVar38 = (float)((ulong)*param_5 >> 0x20);
  fVar18 = fVar37 * fVar37 + fVar38 * fVar38 + fVar33 * fVar33;
  fVar21 = fVar37 * fVar37 + fVar38 * fVar38 + fVar33 * fVar33;
  uVar24 = CONCAT44(fVar21,fVar18);
  uVar23 = NEON_frsqrte(uVar24,4);
  fVar20 = (float)uVar23;
  fVar8 = (float)((ulong)uVar23 >> 0x20);
  uVar23 = NEON_frsqrts(uVar24,CONCAT44(fVar8 * fVar8,fVar20 * fVar20),4);
  fVar20 = fVar20 * (float)uVar23;
  fVar8 = fVar8 * (float)((ulong)uVar23 >> 0x20);
  iVar12 = -(uint)(fVar18 <= 0.0);
  iVar16 = -(uint)(fVar21 <= 0.0);
  uVar23 = NEON_frsqrts(uVar24,CONCAT44(fVar8 * fVar8,fVar20 * fVar20),4);
  fVar20 = (float)uVar23 * fVar20;
  fVar8 = (float)((ulong)uVar23 >> 0x20) * fVar8;
  fVar18 = (float)CONCAT13((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                           CONCAT12((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10),
                                    CONCAT11((byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar12 >> 8),
                                             SUB41(fVar20,0) & ~(byte)iVar12)));
  fVar37 = fVar37 * fVar18;
  fVar22 = (float)(CONCAT17((byte)((uint)fVar8 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                            CONCAT16((byte)((uint)fVar8 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                     CONCAT15((byte)((uint)fVar8 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                              CONCAT14(SUB41(fVar8,0) & ~(byte)iVar16,fVar18)))) >>
                  0x20);
  fVar38 = fVar38 * fVar22;
  fVar33 = fVar33 * fVar18;
  fVar22 = (float)((ulong)param_5[1] >> 0x20) * fVar22;
  auVar30._12_4_ = fVar22;
  auVar30._8_4_ = fVar33;
  auVar30._4_4_ = fVar38;
  auVar30._0_4_ = fVar37;
  auVar31._0_12_ = auVar30._0_12_;
  auVar31._12_4_ = 0;
  auVar27 = a64_TBL(ZEXT816(0),auVar31,auVar9);
  auVar34 = a64_TBL(ZEXT816(0),auVar31,auVar13);
  fVar20 = auVar34._0_4_;
  auVar32._0_4_ = fVar20 * fVar20;
  auVar32._4_4_ = auVar34._4_4_ * auVar34._4_4_;
  auVar32._8_4_ = auVar34._8_4_ * auVar34._8_4_;
  auVar32._12_4_ = auVar34._12_4_ * auVar34._12_4_;
  auVar39 = NEON_ext(auVar32,auVar32,8,1);
  fVar18 = auVar39._0_4_ + auVar39._4_4_;
  auVar15._4_12_ = auVar27._4_12_;
  auVar15._0_4_ = -auVar27._0_4_;
  auVar10._4_12_ = auVar34._4_12_;
  auVar10._0_4_ = -fVar20;
  auVar14._0_8_ =
       CONCAT44(-(uint)(fVar37 * fVar37 + fVar38 * fVar38 < auVar32._0_4_ + auVar32._4_4_ + fVar18),
                -(uint)(fVar37 * fVar37 + fVar38 * fVar38 < auVar32._0_4_ + auVar32._4_4_ + fVar18))
  ;
  auVar14._8_8_ = auVar14._0_8_;
  auVar15 = auVar15 ^ (auVar15 ^ auVar10) & auVar14;
  fVar21 = auVar15._0_4_;
  fVar11 = auVar15._4_4_;
  fVar19 = auVar15._8_4_;
  fVar18 = fVar21 * fVar21 + fVar11 * fVar11 + fVar19 * fVar19;
  fVar8 = fVar21 * fVar21 + fVar11 * fVar11 + fVar19 * fVar19;
  uVar23 = CONCAT44(fVar8,fVar18);
  uVar24 = NEON_frsqrte(uVar23,4);
  fVar20 = (float)uVar24;
  fVar17 = (float)((ulong)uVar24 >> 0x20);
  uVar24 = NEON_frsqrts(uVar23,CONCAT44(fVar17 * fVar17,fVar20 * fVar20),4);
  fVar20 = fVar20 * (float)uVar24;
  fVar17 = fVar17 * (float)((ulong)uVar24 >> 0x20);
  iVar12 = -(uint)(fVar18 <= 0.0);
  iVar16 = -(uint)(fVar8 <= 0.0);
  uVar23 = NEON_frsqrts(uVar23,CONCAT44(fVar17 * fVar17,fVar20 * fVar20),4);
  fVar20 = (float)uVar23 * fVar20;
  fVar17 = (float)((ulong)uVar23 >> 0x20) * fVar17;
  fVar18 = (float)CONCAT13((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                           CONCAT12((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10),
                                    CONCAT11((byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar12 >> 8),
                                             SUB41(fVar20,0) & ~(byte)iVar12)));
  auVar2._4_4_ = fVar38;
  auVar2._0_4_ = fVar37;
  auVar2._8_4_ = fVar33;
  auVar2._12_4_ = fVar22;
  auVar3._4_4_ = fVar38;
  auVar3._0_4_ = fVar37;
  auVar3._8_4_ = fVar33;
  auVar3._12_4_ = fVar22;
  auVar27 = NEON_ext(auVar2,auVar3,4,1);
  fVar21 = fVar21 * fVar18;
  fVar20 = (float)(CONCAT17((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                            CONCAT16((byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                     CONCAT15((byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar16 >> 8)
                                              ,CONCAT14(SUB41(fVar17,0) & ~(byte)iVar16,fVar18))))
                  >> 0x20);
  fVar11 = fVar11 * fVar20;
  auVar6._0_8_ = CONCAT44(fVar11,fVar21);
  auVar6._8_4_ = fVar19 * fVar18;
  auVar6._12_4_ = auVar15._12_4_ * fVar20;
  auVar34 = NEON_ext(auVar6,auVar6,4,1);
  *(ulong *)(param_1 + 0x88) = CONCAT44(fVar22,fVar33);
  *(ulong *)(param_1 + 0x80) = CONCAT44(fVar38,fVar37);
  *(long *)(param_1 + 0x98) = auVar6._8_8_;
  *(undefined8 *)(param_1 + 0x90) = auVar6._0_8_;
  auVar7._0_8_ = CONCAT44(fVar38 * auVar34._4_4_ - auVar27._4_4_ * fVar11,
                          fVar37 * auVar34._0_4_ - auVar27._0_4_ * fVar21);
  auVar7._8_4_ = fVar33 * fVar21 - fVar37 * auVar6._8_4_;
  auVar7._12_4_ = fVar22 * fVar11 - fVar38 * auVar6._12_4_;
  auVar27 = NEON_ext(auVar7,auVar7,4,1);
  *(undefined8 *)(param_1 + 0xa8) = auVar7._0_8_;
  *(long *)(param_1 + 0xa0) = auVar27._0_8_;
  return;
}


