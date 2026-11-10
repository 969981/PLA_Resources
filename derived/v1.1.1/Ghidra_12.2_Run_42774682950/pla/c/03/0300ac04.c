/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0300ac04; name: FUN_0300ac04
 */


void FUN_0300ac04(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  undefined1 uVar18;
  byte bVar19;
  undefined1 uVar20;
  byte bVar21;
  undefined1 uVar22;
  byte bVar23;
  undefined1 uVar24;
  byte bVar25;
  float fVar26;
  int iVar27;
  float fVar28;
  int iVar31;
  float fVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar33;
  undefined8 uVar34;
  float fVar36;
  undefined1 auVar35 [16];
  undefined8 uVar37;
  float fVar38;
  
  fVar12 = (float)param_4[1];
  fVar10 = (float)*param_4;
  fVar11 = (float)((ulong)*param_4 >> 0x20);
  fVar9 = fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12;
  fVar28 = fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12;
  uVar18 = SUB41(fVar28,0);
  uVar20 = (undefined1)((uint)fVar28 >> 8);
  uVar22 = (undefined1)((uint)fVar28 >> 0x10);
  uVar24 = (undefined1)((uint)fVar28 >> 0x18);
  uVar34 = NEON_frsqrte(CONCAT17(uVar24,CONCAT16(uVar22,CONCAT15(uVar20,CONCAT14(uVar18,fVar9)))),4)
  ;
  fVar33 = (float)uVar34;
  fVar36 = (float)((ulong)uVar34 >> 0x20);
  uVar34 = NEON_frsqrts(CONCAT17(uVar24,CONCAT16(uVar22,CONCAT15(uVar20,CONCAT14(uVar18,fVar9)))),
                        CONCAT44(fVar36 * fVar36,fVar33 * fVar33),4);
  fVar33 = fVar33 * (float)uVar34;
  fVar36 = fVar36 * (float)((ulong)uVar34 >> 0x20);
  iVar27 = -(uint)(fVar9 <= 0.0);
  iVar31 = -(uint)(fVar28 <= 0.0);
  uVar34 = NEON_frsqrts(CONCAT17(uVar24,CONCAT16(uVar22,CONCAT15(uVar20,CONCAT14(uVar18,fVar9)))),
                        CONCAT44(fVar36 * fVar36,fVar33 * fVar33),4);
  fVar33 = (float)uVar34 * fVar33;
  fVar36 = (float)((ulong)uVar34 >> 0x20) * fVar36;
  bVar14 = SUB41(fVar33,0) & ~(byte)iVar27;
  bVar15 = (byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar27 >> 8);
  bVar16 = (byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10);
  bVar17 = (byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18);
  bVar19 = SUB41(fVar36,0) & ~(byte)iVar31;
  bVar21 = (byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar31 >> 8);
  bVar23 = (byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10);
  bVar25 = (byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18);
  fVar9 = (float)CONCAT13(bVar17,CONCAT12(bVar16,CONCAT11(bVar15,bVar14)));
  fVar10 = fVar10 * (float)CONCAT13(bVar17,CONCAT12(bVar16,CONCAT11(bVar15,bVar14)));
  fVar11 = fVar11 * (float)CONCAT13(bVar25,CONCAT12(bVar23,CONCAT11(bVar21,bVar19)));
  fVar12 = fVar12 * fVar9;
  fVar13 = (float)((ulong)param_4[1] >> 0x20) *
           (float)(CONCAT17(bVar25,CONCAT16(bVar23,CONCAT15(bVar21,CONCAT14(bVar19,fVar9)))) >> 0x20
                  );
  *(ulong *)(param_1 + 0x68) = CONCAT44(fVar13,fVar12);
  *(ulong *)(param_1 + 0x60) = CONCAT44(fVar11,fVar10);
  fVar26 = (float)param_6[1];
  fVar9 = (float)*param_6;
  fVar33 = (float)((ulong)*param_6 >> 0x20);
  fVar28 = fVar9 * fVar9 + fVar33 * fVar33 + fVar26 * fVar26;
  fVar32 = fVar9 * fVar9 + fVar33 * fVar33 + fVar26 * fVar26;
  uVar34 = CONCAT44(fVar32,fVar28);
  uVar37 = NEON_frsqrte(uVar34,4);
  fVar36 = (float)uVar37;
  fVar38 = (float)((ulong)uVar37 >> 0x20);
  uVar37 = NEON_frsqrts(uVar34,CONCAT44(fVar38 * fVar38,fVar36 * fVar36),4);
  fVar36 = fVar36 * (float)uVar37;
  fVar38 = fVar38 * (float)((ulong)uVar37 >> 0x20);
  iVar27 = -(uint)(fVar28 <= 0.0);
  iVar31 = -(uint)(fVar32 <= 0.0);
  uVar34 = NEON_frsqrts(uVar34,CONCAT44(fVar38 * fVar38,fVar36 * fVar36),4);
  fVar36 = (float)uVar34 * fVar36;
  fVar38 = (float)((ulong)uVar34 >> 0x20) * fVar38;
  fVar28 = (float)CONCAT13((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                           CONCAT12((byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10),
                                    CONCAT11((byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar27 >> 8),
                                             SUB41(fVar36,0) & ~(byte)iVar27)));
  fVar9 = fVar9 * fVar28;
  fVar32 = (float)(CONCAT17((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18),
                            CONCAT16((byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10),
                                     CONCAT15((byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar31 >> 8)
                                              ,CONCAT14(SUB41(fVar38,0) & ~(byte)iVar31,fVar28))))
                  >> 0x20);
  fVar33 = fVar33 * fVar32;
  uVar18 = SUB41(fVar33,0);
  uVar20 = (undefined1)((uint)fVar33 >> 8);
  uVar22 = (undefined1)((uint)fVar33 >> 0x10);
  uVar24 = (undefined1)((uint)fVar33 >> 0x18);
  fVar26 = fVar26 * fVar28;
  fVar32 = (float)((ulong)param_6[1] >> 0x20) * fVar32;
  auVar29._4_4_ = fVar11;
  auVar29._0_4_ = fVar10;
  auVar29._8_4_ = fVar12;
  auVar29._12_4_ = fVar13;
  auVar35._4_4_ = fVar11;
  auVar35._0_4_ = fVar10;
  auVar35._8_4_ = fVar12;
  auVar35._12_4_ = fVar13;
  auVar29 = NEON_ext(auVar29,auVar35,4,1);
  auVar5[4] = uVar18;
  auVar5._0_4_ = fVar9;
  auVar5[5] = uVar20;
  auVar5[6] = uVar22;
  auVar5[7] = uVar24;
  auVar5._8_4_ = fVar26;
  auVar5._12_4_ = fVar32;
  auVar6[4] = uVar18;
  auVar6._0_4_ = fVar9;
  auVar6[5] = uVar20;
  auVar6[6] = uVar22;
  auVar6[7] = uVar24;
  auVar6._8_4_ = fVar26;
  auVar6._12_4_ = fVar32;
  auVar35 = NEON_ext(auVar5,auVar6,4,1);
  fVar28 = fVar10 * auVar35._0_4_ - auVar29._0_4_ * fVar9;
  fVar33 = fVar11 * auVar35._4_4_ - auVar29._4_4_ * fVar33;
  fVar36 = fVar12 * fVar9 - fVar10 * fVar26;
  fVar10 = fVar13 * (float)(CONCAT17(uVar24,CONCAT16(uVar22,CONCAT15(uVar20,CONCAT14(uVar18,fVar9)))
                                    ) >> 0x20) - fVar11 * fVar32;
  auVar1._4_4_ = fVar33;
  auVar1._0_4_ = fVar28;
  auVar1._8_4_ = fVar36;
  auVar1._12_4_ = fVar10;
  auVar2._4_4_ = fVar33;
  auVar2._0_4_ = fVar28;
  auVar2._8_4_ = fVar36;
  auVar2._12_4_ = fVar10;
  auVar29 = NEON_ext(auVar1,auVar2,4,1);
  *(ulong *)(param_1 + 0x78) = CONCAT44(fVar32,fVar26);
  *(ulong *)(param_1 + 0x70) =
       CONCAT17(uVar24,CONCAT16(uVar22,CONCAT15(uVar20,CONCAT14(uVar18,fVar9))));
  *(ulong *)(param_1 + 0x88) = CONCAT44(fVar33,fVar28);
  *(long *)(param_1 + 0x80) = auVar29._0_8_;
  uVar34 = *param_2;
  *(undefined8 *)(param_1 + 0x98) = param_2[1];
  *(undefined8 *)(param_1 + 0x90) = uVar34;
  fVar12 = (float)param_5[1];
  fVar10 = (float)*param_5;
  fVar11 = (float)((ulong)*param_5 >> 0x20);
  fVar9 = fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12;
  fVar28 = fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12;
  uVar18 = SUB41(fVar28,0);
  uVar20 = (undefined1)((uint)fVar28 >> 8);
  uVar22 = (undefined1)((uint)fVar28 >> 0x10);
  uVar24 = (undefined1)((uint)fVar28 >> 0x18);
  uVar34 = NEON_frsqrte(CONCAT17(uVar24,CONCAT16(uVar22,CONCAT15(uVar20,CONCAT14(uVar18,fVar9)))),4)
  ;
  fVar33 = (float)uVar34;
  fVar36 = (float)((ulong)uVar34 >> 0x20);
  uVar34 = NEON_frsqrts(CONCAT17(uVar24,CONCAT16(uVar22,CONCAT15(uVar20,CONCAT14(uVar18,fVar9)))),
                        CONCAT44(fVar36 * fVar36,fVar33 * fVar33),4);
  fVar33 = fVar33 * (float)uVar34;
  fVar36 = fVar36 * (float)((ulong)uVar34 >> 0x20);
  iVar27 = -(uint)(fVar9 <= 0.0);
  iVar31 = -(uint)(fVar28 <= 0.0);
  uVar34 = NEON_frsqrts(CONCAT17(uVar24,CONCAT16(uVar22,CONCAT15(uVar20,CONCAT14(uVar18,fVar9)))),
                        CONCAT44(fVar36 * fVar36,fVar33 * fVar33),4);
  fVar33 = (float)uVar34 * fVar33;
  fVar36 = (float)((ulong)uVar34 >> 0x20) * fVar36;
  bVar14 = SUB41(fVar33,0) & ~(byte)iVar27;
  bVar15 = (byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar27 >> 8);
  bVar16 = (byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10);
  bVar17 = (byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18);
  bVar19 = SUB41(fVar36,0) & ~(byte)iVar31;
  bVar21 = (byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar31 >> 8);
  bVar23 = (byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10);
  bVar25 = (byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18);
  fVar9 = (float)CONCAT13(bVar17,CONCAT12(bVar16,CONCAT11(bVar15,bVar14)));
  fVar10 = fVar10 * (float)CONCAT13(bVar17,CONCAT12(bVar16,CONCAT11(bVar15,bVar14)));
  fVar11 = fVar11 * (float)CONCAT13(bVar25,CONCAT12(bVar23,CONCAT11(bVar21,bVar19)));
  fVar12 = fVar12 * fVar9;
  fVar28 = (float)((ulong)param_5[1] >> 0x20) *
           (float)(CONCAT17(bVar25,CONCAT16(bVar23,CONCAT15(bVar21,CONCAT14(bVar19,fVar9)))) >> 0x20
                  );
  *(ulong *)(param_1 + 0xa8) = CONCAT44(fVar28,fVar12);
  *(ulong *)(param_1 + 0xa0) = CONCAT44(fVar11,fVar10);
  fVar36 = (float)param_7[1];
  fVar9 = (float)*param_7;
  fVar33 = (float)((ulong)*param_7 >> 0x20);
  fVar13 = fVar9 * fVar9 + fVar33 * fVar33 + fVar36 * fVar36;
  fVar32 = fVar9 * fVar9 + fVar33 * fVar33 + fVar36 * fVar36;
  uVar34 = CONCAT44(fVar32,fVar13);
  uVar37 = NEON_frsqrte(uVar34,4);
  fVar26 = (float)uVar37;
  fVar38 = (float)((ulong)uVar37 >> 0x20);
  uVar37 = NEON_frsqrts(uVar34,CONCAT44(fVar38 * fVar38,fVar26 * fVar26),4);
  fVar26 = fVar26 * (float)uVar37;
  fVar38 = fVar38 * (float)((ulong)uVar37 >> 0x20);
  iVar27 = -(uint)(fVar13 <= 0.0);
  iVar31 = -(uint)(fVar32 <= 0.0);
  uVar34 = NEON_frsqrts(uVar34,CONCAT44(fVar38 * fVar38,fVar26 * fVar26),4);
  fVar26 = (float)uVar34 * fVar26;
  fVar38 = (float)((ulong)uVar34 >> 0x20) * fVar38;
  fVar26 = (float)CONCAT13((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                           CONCAT12((byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10),
                                    CONCAT11((byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar27 >> 8),
                                             SUB41(fVar26,0) & ~(byte)iVar27)));
  fVar9 = fVar9 * fVar26;
  fVar13 = (float)(CONCAT17((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18),
                            CONCAT16((byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10),
                                     CONCAT15((byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar31 >> 8)
                                              ,CONCAT14(SUB41(fVar38,0) & ~(byte)iVar31,fVar26))))
                  >> 0x20);
  fVar33 = fVar33 * fVar13;
  uVar18 = SUB41(fVar33,0);
  uVar20 = (undefined1)((uint)fVar33 >> 8);
  uVar22 = (undefined1)((uint)fVar33 >> 0x10);
  uVar24 = (undefined1)((uint)fVar33 >> 0x18);
  fVar36 = fVar36 * fVar26;
  fVar13 = (float)((ulong)param_7[1] >> 0x20) * fVar13;
  auVar3._4_4_ = fVar11;
  auVar3._0_4_ = fVar10;
  auVar3._8_4_ = fVar12;
  auVar3._12_4_ = fVar28;
  auVar4._4_4_ = fVar11;
  auVar4._0_4_ = fVar10;
  auVar4._8_4_ = fVar12;
  auVar4._12_4_ = fVar28;
  auVar29 = NEON_ext(auVar3,auVar4,4,1);
  auVar7[4] = uVar18;
  auVar7._0_4_ = fVar9;
  auVar7[5] = uVar20;
  auVar7[6] = uVar22;
  auVar7[7] = uVar24;
  auVar7._8_4_ = fVar36;
  auVar7._12_4_ = fVar13;
  auVar8[4] = uVar18;
  auVar8._0_4_ = fVar9;
  auVar8[5] = uVar20;
  auVar8[6] = uVar22;
  auVar8[7] = uVar24;
  auVar8._8_4_ = fVar36;
  auVar8._12_4_ = fVar13;
  auVar35 = NEON_ext(auVar7,auVar8,4,1);
  auVar30._0_8_ =
       CONCAT44(fVar11 * auVar35._4_4_ - auVar29._4_4_ * fVar33,
                fVar10 * auVar35._0_4_ - auVar29._0_4_ * fVar9);
  auVar30._8_4_ = fVar12 * fVar9 - fVar10 * fVar36;
  auVar30._12_4_ =
       fVar28 * (float)(CONCAT17(uVar24,CONCAT16(uVar22,CONCAT15(uVar20,CONCAT14(uVar18,fVar9)))) >>
                       0x20) - fVar11 * fVar13;
  auVar29 = NEON_ext(auVar30,auVar30,4,1);
  *(ulong *)(param_1 + 0xb8) = CONCAT44(fVar13,fVar36);
  *(ulong *)(param_1 + 0xb0) =
       CONCAT17(uVar24,CONCAT16(uVar22,CONCAT15(uVar20,CONCAT14(uVar18,fVar9))));
  *(undefined8 *)(param_1 + 200) = auVar30._0_8_;
  *(long *)(param_1 + 0xc0) = auVar29._0_8_;
  uVar34 = *param_3;
  uVar37 = param_3[1];
  *(ulong *)(param_1 + 0x108) = CONCAT44(fVar28,fVar12);
  *(ulong *)(param_1 + 0x100) = CONCAT44(fVar11,fVar10);
  *(ulong *)(param_1 + 0x118) = CONCAT44(fVar13,fVar36);
  *(ulong *)(param_1 + 0x110) =
       CONCAT17(uVar24,CONCAT16(uVar22,CONCAT15(uVar20,CONCAT14(uVar18,fVar9))));
  *(undefined1 *)(param_1 + 0x300) = 1;
  *(undefined8 *)(param_1 + 0x128) = auVar30._0_8_;
  *(long *)(param_1 + 0x120) = auVar29._0_8_;
  *(undefined8 *)(param_1 + 0xd8) = uVar37;
  *(undefined8 *)(param_1 + 0xd0) = uVar34;
  return;
}


