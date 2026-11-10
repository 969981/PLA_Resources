/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030110d8; name: FUN_030110d8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030110d8(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined1 (*param_6) [16],float *param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar28;
  undefined1 auVar26 [16];
  float fVar29;
  undefined1 auVar27 [16];
  int iVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  int iVar36;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 uVar37;
  float fVar40;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 uVar46;
  undefined1 auVar47 [16];
  
  uVar37 = *param_2;
  *(undefined8 *)(param_1 + 0x78) = param_2[1];
  *(undefined8 *)(param_1 + 0x70) = uVar37;
  uVar37 = *param_3;
  *(undefined8 *)(param_1 + 0xb8) = param_3[1];
  *(undefined8 *)(param_1 + 0xb0) = uVar37;
  uVar46 = DAT_0388a148;
  uVar31 = DAT_0388a140;
  uVar37 = _DAT_03889a80;
  *(undefined8 *)(param_1 + 0x48) = _UNK_03889a88;
  *(undefined8 *)(param_1 + 0x40) = uVar37;
  *(undefined8 *)(param_1 + 0x58) = uVar46;
  *(undefined8 *)(param_1 + 0x50) = uVar31;
  uVar37 = _DAT_03888d10;
  auVar9._8_8_ = _UNK_03889038;
  auVar9._0_8_ = _DAT_03889030;
  auVar12._8_8_ = _UNK_03889f18;
  auVar12._0_8_ = _DAT_03889f10;
  *(undefined8 *)(param_1 + 0x68) = _UNK_03888d18;
  *(undefined8 *)(param_1 + 0x60) = uVar37;
  uVar31 = *(undefined8 *)(*param_6 + 8);
  fVar40 = (float)((ulong)uVar31 >> 0x20);
  uVar37 = *(undefined8 *)*param_6;
  fVar17 = (float)uVar37;
  fVar19 = (float)((ulong)uVar37 >> 0x20);
  auVar23._0_12_ = SUB1612(*param_6,0);
  auVar23._12_4_ = 0;
  auVar32 = a64_TBL(ZEXT816(0),auVar23,auVar9);
  auVar24 = a64_TBL(ZEXT816(0),auVar23,auVar12);
  fVar42 = auVar24._0_4_;
  fVar41 = fVar42 * fVar42;
  fVar43 = auVar24._4_4_ * auVar24._4_4_;
  fVar44 = auVar24._8_4_ * auVar24._8_4_;
  fVar45 = auVar24._12_4_ * auVar24._12_4_;
  auVar4._4_4_ = fVar43;
  auVar4._0_4_ = fVar41;
  auVar4._8_4_ = fVar44;
  auVar4._12_4_ = fVar45;
  auVar5._4_4_ = fVar43;
  auVar5._0_4_ = fVar41;
  auVar5._8_4_ = fVar44;
  auVar5._12_4_ = fVar45;
  auVar47 = NEON_ext(auVar4,auVar5,8,1);
  fVar44 = auVar47._0_4_ + auVar47._4_4_;
  auVar39._4_12_ = auVar32._4_12_;
  auVar39._0_4_ = -auVar32._0_4_;
  auVar25._4_12_ = auVar24._4_12_;
  auVar25._0_4_ = -fVar42;
  auVar38._0_8_ =
       CONCAT44(-(uint)(fVar17 * fVar17 + fVar19 * fVar19 < fVar41 + fVar43 + fVar44),
                -(uint)(fVar17 * fVar17 + fVar19 * fVar19 < fVar41 + fVar43 + fVar44));
  auVar38._8_8_ = auVar38._0_8_;
  auVar39 = auVar39 ^ (auVar39 ^ auVar25) & auVar38;
  fVar41 = auVar39._0_4_;
  fVar28 = auVar39._4_4_;
  fVar21 = auVar39._8_4_;
  fVar44 = fVar41 * fVar41 + fVar28 * fVar28 + fVar21 * fVar21;
  fVar43 = fVar41 * fVar41 + fVar28 * fVar28 + fVar21 * fVar21;
  uVar22 = CONCAT44(fVar43,fVar44);
  uVar46 = NEON_frsqrte(uVar22,4);
  fVar42 = (float)uVar46;
  fVar45 = (float)((ulong)uVar46 >> 0x20);
  uVar46 = NEON_frsqrts(uVar22,CONCAT44(fVar45 * fVar45,fVar42 * fVar42),4);
  fVar42 = fVar42 * (float)uVar46;
  fVar45 = fVar45 * (float)((ulong)uVar46 >> 0x20);
  iVar30 = -(uint)(fVar44 <= 0.0);
  iVar36 = -(uint)(fVar43 <= 0.0);
  uVar46 = NEON_frsqrts(uVar22,CONCAT44(fVar45 * fVar45,fVar42 * fVar42),4);
  fVar42 = (float)uVar46 * fVar42;
  fVar45 = (float)((ulong)uVar46 >> 0x20) * fVar45;
  fVar44 = (float)CONCAT13((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18),
                           CONCAT12((byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10),
                                    CONCAT11((byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar30 >> 8),
                                             SUB41(fVar42,0) & ~(byte)iVar30)));
  auVar24._12_4_ = fVar40;
  auVar24._0_12_ = *(undefined1 (*) [12])*param_6;
  auVar32._12_4_ = fVar40;
  auVar32._0_12_ = *(undefined1 (*) [12])*param_6;
  auVar24 = NEON_ext(auVar24,auVar32,8,1);
  uVar46 = NEON_ext(uVar37,auVar24._0_8_,4,1);
  fVar41 = fVar41 * fVar44;
  fVar42 = (float)(CONCAT17((byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                            CONCAT16((byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                                     CONCAT15((byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar36 >> 8)
                                              ,CONCAT14(SUB41(fVar45,0) & ~(byte)iVar36,fVar44))))
                  >> 0x20);
  fVar28 = fVar28 * fVar42;
  auVar26._0_8_ = CONCAT44(fVar28,fVar41);
  auVar26._8_4_ = fVar21 * fVar44;
  auVar26._12_4_ = auVar39._12_4_ * fVar42;
  auVar24 = NEON_ext(auVar26,auVar26,4,1);
  *(undefined8 *)(param_1 + 0x88) = uVar31;
  *(undefined8 *)(param_1 + 0x80) = uVar37;
  *(long *)(param_1 + 0x98) = auVar26._8_8_;
  *(undefined8 *)(param_1 + 0x90) = auVar26._0_8_;
  fVar44 = fVar17 * auVar24._0_4_ - (float)uVar46 * fVar41;
  fVar42 = fVar19 * auVar24._4_4_ - (float)((ulong)uVar46 >> 0x20) * fVar28;
  fVar17 = (float)uVar31 * fVar41 - fVar17 * auVar26._8_4_;
  fVar19 = fVar40 * fVar28 - fVar19 * auVar26._12_4_;
  auVar47._4_4_ = fVar42;
  auVar47._0_4_ = fVar44;
  auVar47._8_4_ = fVar17;
  auVar47._12_4_ = fVar19;
  auVar1._4_4_ = fVar42;
  auVar1._0_4_ = fVar44;
  auVar1._8_4_ = fVar17;
  auVar1._12_4_ = fVar19;
  auVar24 = NEON_ext(auVar47,auVar1,4,1);
  *(ulong *)(param_1 + 0xa8) = CONCAT44(fVar42,fVar44);
  *(long *)(param_1 + 0xa0) = auVar24._0_8_;
  fVar44 = (float)param_4[1];
  fVar21 = (float)*param_4;
  fVar29 = (float)((ulong)*param_4 >> 0x20);
  fVar17 = fVar21 * fVar21 + fVar29 * fVar29 + fVar44 * fVar44;
  fVar42 = fVar21 * fVar21 + fVar29 * fVar29 + fVar44 * fVar44;
  uVar31 = CONCAT44(fVar42,fVar17);
  uVar37 = NEON_frsqrte(uVar31,4);
  fVar19 = (float)uVar37;
  fVar40 = (float)((ulong)uVar37 >> 0x20);
  uVar37 = NEON_frsqrts(uVar31,CONCAT44(fVar40 * fVar40,fVar19 * fVar19),4);
  fVar19 = fVar19 * (float)uVar37;
  fVar40 = fVar40 * (float)((ulong)uVar37 >> 0x20);
  iVar30 = -(uint)(fVar17 <= 0.0);
  iVar36 = -(uint)(fVar42 <= 0.0);
  uVar37 = NEON_frsqrts(uVar31,CONCAT44(fVar40 * fVar40,fVar19 * fVar19),4);
  fVar19 = (float)uVar37 * fVar19;
  fVar40 = (float)((ulong)uVar37 >> 0x20) * fVar40;
  fVar17 = (float)CONCAT13((byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18),
                           CONCAT12((byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10),
                                    CONCAT11((byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar30 >> 8),
                                             SUB41(fVar19,0) & ~(byte)iVar30)));
  fVar21 = fVar21 * fVar17;
  fVar19 = (float)(CONCAT17((byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                            CONCAT16((byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                                     CONCAT15((byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar36 >> 8)
                                              ,CONCAT14(SUB41(fVar40,0) & ~(byte)iVar36,fVar17))))
                  >> 0x20);
  fVar29 = fVar29 * fVar19;
  auVar27._0_8_ = CONCAT44(fVar29,fVar21);
  auVar27._8_4_ = fVar44 * fVar17;
  auVar27._12_4_ = (float)((ulong)param_4[1] >> 0x20) * fVar19;
  *(long *)(param_1 + 0x128) = auVar27._8_8_;
  *(undefined8 *)(param_1 + 0x120) = auVar27._0_8_;
  fVar18 = (float)param_5[1];
  fVar15 = (float)*param_5;
  fVar16 = (float)((ulong)*param_5 >> 0x20);
  fVar44 = fVar15 * fVar15 + fVar16 * fVar16 + fVar18 * fVar18;
  fVar19 = fVar15 * fVar15 + fVar16 * fVar16 + fVar18 * fVar18;
  uVar31 = CONCAT44(fVar19,fVar44);
  uVar37 = NEON_frsqrte(uVar31,4);
  fVar17 = (float)uVar37;
  fVar42 = (float)((ulong)uVar37 >> 0x20);
  uVar37 = NEON_frsqrts(uVar31,CONCAT44(fVar42 * fVar42,fVar17 * fVar17),4);
  fVar17 = fVar17 * (float)uVar37;
  fVar42 = fVar42 * (float)((ulong)uVar37 >> 0x20);
  iVar30 = -(uint)(fVar44 <= 0.0);
  iVar36 = -(uint)(fVar19 <= 0.0);
  uVar37 = NEON_frsqrts(uVar31,CONCAT44(fVar42 * fVar42,fVar17 * fVar17),4);
  fVar17 = (float)uVar37 * fVar17;
  fVar42 = (float)((ulong)uVar37 >> 0x20) * fVar42;
  fVar44 = (float)CONCAT13((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18),
                           CONCAT12((byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10),
                                    CONCAT11((byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar30 >> 8),
                                             SUB41(fVar17,0) & ~(byte)iVar30)));
  fVar15 = fVar15 * fVar44;
  fVar20 = (float)(CONCAT17((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                            CONCAT16((byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                                     CONCAT15((byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar36 >> 8)
                                              ,CONCAT14(SUB41(fVar42,0) & ~(byte)iVar36,fVar44))))
                  >> 0x20);
  fVar16 = fVar16 * fVar20;
  fVar18 = fVar18 * fVar44;
  fVar20 = (float)((ulong)param_5[1] >> 0x20) * fVar20;
  auVar33._8_8_ = auVar27._8_8_;
  auVar33._0_8_ = auVar27._0_8_;
  auVar34._0_12_ = auVar33._0_12_;
  auVar34._12_4_ = 0;
  *(ulong *)(param_1 + 0x158) = CONCAT44(fVar20,fVar18);
  *(ulong *)(param_1 + 0x150) = CONCAT44(fVar16,fVar15);
  *(ulong *)(param_1 + 0x198) = CONCAT44(fVar20,fVar18);
  *(ulong *)(param_1 + 400) = CONCAT44(fVar16,fVar15);
  auVar24 = a64_TBL(ZEXT816(0),auVar34,auVar9);
  auVar32 = a64_TBL(ZEXT816(0),auVar34,auVar12);
  fVar17 = auVar32._0_4_;
  auVar35._0_4_ = fVar17 * fVar17;
  auVar35._4_4_ = auVar32._4_4_ * auVar32._4_4_;
  auVar35._8_4_ = auVar32._8_4_ * auVar32._8_4_;
  auVar35._12_4_ = auVar32._12_4_ * auVar32._12_4_;
  auVar47 = NEON_ext(auVar35,auVar35,8,1);
  fVar44 = auVar47._0_4_ + auVar47._4_4_;
  auVar14._4_12_ = auVar24._4_12_;
  auVar14._0_4_ = -auVar24._0_4_;
  auVar10._4_12_ = auVar32._4_12_;
  auVar10._0_4_ = -fVar17;
  auVar13._0_8_ =
       CONCAT44(-(uint)(fVar21 * fVar21 + fVar29 * fVar29 < auVar35._0_4_ + auVar35._4_4_ + fVar44),
                -(uint)(fVar21 * fVar21 + fVar29 * fVar29 < auVar35._0_4_ + auVar35._4_4_ + fVar44))
  ;
  auVar13._8_8_ = auVar13._0_8_;
  auVar14 = auVar14 ^ (auVar14 ^ auVar10) & auVar13;
  fVar42 = auVar14._0_4_;
  fVar41 = auVar14._4_4_;
  fVar43 = auVar14._8_4_;
  fVar44 = fVar42 * fVar42 + fVar41 * fVar41 + fVar43 * fVar43;
  fVar19 = fVar42 * fVar42 + fVar41 * fVar41 + fVar43 * fVar43;
  uVar37 = CONCAT44(fVar19,fVar44);
  uVar31 = NEON_frsqrte(uVar37,4);
  fVar17 = (float)uVar31;
  fVar40 = (float)((ulong)uVar31 >> 0x20);
  uVar31 = NEON_frsqrts(uVar37,CONCAT44(fVar40 * fVar40,fVar17 * fVar17),4);
  fVar17 = fVar17 * (float)uVar31;
  fVar40 = fVar40 * (float)((ulong)uVar31 >> 0x20);
  iVar30 = -(uint)(fVar44 <= 0.0);
  iVar36 = -(uint)(fVar19 <= 0.0);
  uVar37 = NEON_frsqrts(uVar37,CONCAT44(fVar40 * fVar40,fVar17 * fVar17),4);
  fVar17 = (float)uVar37 * fVar17;
  fVar40 = (float)((ulong)uVar37 >> 0x20) * fVar40;
  fVar44 = (float)CONCAT13((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18),
                           CONCAT12((byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10),
                                    CONCAT11((byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar30 >> 8),
                                             SUB41(fVar17,0) & ~(byte)iVar30)));
  fVar42 = fVar42 * fVar44;
  fVar17 = (float)(CONCAT17((byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                            CONCAT16((byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                                     CONCAT15((byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar36 >> 8)
                                              ,CONCAT14(SUB41(fVar40,0) & ~(byte)iVar36,fVar44))))
                  >> 0x20);
  fVar41 = fVar41 * fVar17;
  auVar6._0_8_ = CONCAT44(fVar41,fVar42);
  auVar6._8_4_ = fVar43 * fVar44;
  auVar6._12_4_ = auVar14._12_4_ * fVar17;
  *(long *)(param_1 + 0x138) = auVar6._8_8_;
  *(undefined8 *)(param_1 + 0x130) = auVar6._0_8_;
  fVar44 = *param_7;
  fVar17 = param_7[1];
  fVar19 = param_7[2];
  fVar40 = fVar44 * fVar44 + fVar17 * fVar17 + fVar19 * fVar19;
  fVar45 = fVar44 * fVar44 + fVar17 * fVar17 + fVar19 * fVar19;
  uVar31 = CONCAT44(fVar45,fVar40);
  uVar37 = NEON_frsqrte(uVar31,4);
  fVar43 = (float)uVar37;
  fVar28 = (float)((ulong)uVar37 >> 0x20);
  uVar37 = NEON_frsqrts(uVar31,CONCAT44(fVar28 * fVar28,fVar43 * fVar43),4);
  fVar43 = fVar43 * (float)uVar37;
  fVar28 = fVar28 * (float)((ulong)uVar37 >> 0x20);
  iVar30 = -(uint)(fVar40 <= 0.0);
  iVar36 = -(uint)(fVar45 <= 0.0);
  uVar37 = NEON_frsqrts(uVar31,CONCAT44(fVar28 * fVar28,fVar43 * fVar43),4);
  fVar43 = (float)uVar37 * fVar43;
  fVar28 = (float)((ulong)uVar37 >> 0x20) * fVar28;
  fVar40 = (float)CONCAT13((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18),
                           CONCAT12((byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10),
                                    CONCAT11((byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar30 >> 8),
                                             SUB41(fVar43,0) & ~(byte)iVar30)));
  auVar32 = NEON_ext(auVar6,auVar6,4,1);
  fVar44 = fVar44 * fVar40;
  fVar43 = (float)(CONCAT17((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                            CONCAT16((byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                                     CONCAT15((byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar36 >> 8)
                                              ,CONCAT14(SUB41(fVar28,0) & ~(byte)iVar36,fVar40))))
                  >> 0x20);
  fVar17 = fVar17 * fVar43;
  auVar11._0_8_ = CONCAT44(fVar17,fVar44);
  auVar11._8_4_ = fVar19 * fVar40;
  auVar11._12_4_ = param_7[3] * fVar43;
  auVar24 = NEON_ext(auVar27,auVar27,4,1);
  *(long *)(param_1 + 0x1a8) = auVar11._8_8_;
  *(undefined8 *)(param_1 + 0x1a0) = auVar11._0_8_;
  auVar7._0_8_ = CONCAT44(fVar29 * auVar32._4_4_ - auVar24._4_4_ * fVar41,
                          fVar21 * auVar32._0_4_ - auVar24._0_4_ * fVar42);
  auVar7._8_4_ = auVar27._8_4_ * fVar42 - fVar21 * auVar6._8_4_;
  auVar7._12_4_ = auVar27._12_4_ * fVar41 - fVar29 * auVar6._12_4_;
  auVar32 = NEON_ext(auVar7,auVar7,4,1);
  auVar2._4_4_ = fVar16;
  auVar2._0_4_ = fVar15;
  auVar2._8_4_ = fVar18;
  auVar2._12_4_ = fVar20;
  auVar3._4_4_ = fVar16;
  auVar3._0_4_ = fVar15;
  auVar3._8_4_ = fVar18;
  auVar3._12_4_ = fVar20;
  auVar24 = NEON_ext(auVar2,auVar3,4,1);
  *(undefined8 *)(param_1 + 0x148) = auVar7._0_8_;
  *(long *)(param_1 + 0x140) = auVar32._0_8_;
  auVar32 = NEON_ext(auVar11,auVar11,4,1);
  auVar8._0_8_ = CONCAT44(fVar16 * auVar32._4_4_ - auVar24._4_4_ * fVar17,
                          fVar15 * auVar32._0_4_ - auVar24._0_4_ * fVar44);
  auVar8._8_4_ = fVar18 * fVar44 - fVar15 * auVar11._8_4_;
  auVar8._12_4_ = fVar20 * fVar17 - fVar16 * auVar11._12_4_;
  auVar24 = NEON_ext(auVar8,auVar8,4,1);
  *(long *)(param_1 + 0x168) = auVar11._8_8_;
  *(undefined8 *)(param_1 + 0x160) = auVar11._0_8_;
  *(undefined8 *)(param_1 + 0x178) = auVar8._0_8_;
  *(long *)(param_1 + 0x170) = auVar24._0_8_;
  return;
}


