/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0300f1f4; name: FUN_0300f1f4
 */


void FUN_0300f1f4(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
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
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  undefined1 uVar20;
  byte bVar21;
  undefined1 uVar22;
  byte bVar23;
  undefined1 uVar24;
  byte bVar25;
  undefined1 uVar26;
  byte bVar27;
  float fVar28;
  int iVar29;
  float fVar30;
  int iVar32;
  float fVar33;
  undefined1 auVar31 [16];
  float fVar34;
  undefined8 uVar35;
  float fVar37;
  undefined1 auVar36 [16];
  undefined8 uVar38;
  float fVar39;
  
  uVar35 = *param_2;
  *(undefined8 *)(param_1 + 0x78) = param_2[1];
  *(undefined8 *)(param_1 + 0x70) = uVar35;
  uVar35 = *param_3;
  *(undefined8 *)(param_1 + 0xb8) = param_3[1];
  *(undefined8 *)(param_1 + 0xb0) = uVar35;
  fVar14 = (float)param_4[1];
  fVar12 = (float)*param_4;
  fVar13 = (float)((ulong)*param_4 >> 0x20);
  fVar11 = fVar12 * fVar12 + fVar13 * fVar13 + fVar14 * fVar14;
  fVar30 = fVar12 * fVar12 + fVar13 * fVar13 + fVar14 * fVar14;
  uVar20 = SUB41(fVar30,0);
  uVar22 = (undefined1)((uint)fVar30 >> 8);
  uVar24 = (undefined1)((uint)fVar30 >> 0x10);
  uVar26 = (undefined1)((uint)fVar30 >> 0x18);
  uVar35 = NEON_frsqrte(CONCAT17(uVar26,CONCAT16(uVar24,CONCAT15(uVar22,CONCAT14(uVar20,fVar11)))),4
                       );
  fVar34 = (float)uVar35;
  fVar37 = (float)((ulong)uVar35 >> 0x20);
  uVar35 = NEON_frsqrts(CONCAT17(uVar26,CONCAT16(uVar24,CONCAT15(uVar22,CONCAT14(uVar20,fVar11)))),
                        CONCAT44(fVar37 * fVar37,fVar34 * fVar34),4);
  fVar34 = fVar34 * (float)uVar35;
  fVar37 = fVar37 * (float)((ulong)uVar35 >> 0x20);
  iVar29 = -(uint)(fVar11 <= 0.0);
  iVar32 = -(uint)(fVar30 <= 0.0);
  uVar35 = NEON_frsqrts(CONCAT17(uVar26,CONCAT16(uVar24,CONCAT15(uVar22,CONCAT14(uVar20,fVar11)))),
                        CONCAT44(fVar37 * fVar37,fVar34 * fVar34),4);
  fVar34 = (float)uVar35 * fVar34;
  fVar37 = (float)((ulong)uVar35 >> 0x20) * fVar37;
  bVar16 = SUB41(fVar34,0) & ~(byte)iVar29;
  bVar17 = (byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar29 >> 8);
  bVar18 = (byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
  bVar19 = (byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
  bVar21 = SUB41(fVar37,0) & ~(byte)iVar32;
  bVar23 = (byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar32 >> 8);
  bVar25 = (byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10);
  bVar27 = (byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18);
  fVar11 = (float)CONCAT13(bVar19,CONCAT12(bVar18,CONCAT11(bVar17,bVar16)));
  fVar12 = fVar12 * (float)CONCAT13(bVar19,CONCAT12(bVar18,CONCAT11(bVar17,bVar16)));
  fVar13 = fVar13 * (float)CONCAT13(bVar27,CONCAT12(bVar25,CONCAT11(bVar23,bVar21)));
  fVar14 = fVar14 * fVar11;
  fVar15 = (float)((ulong)param_4[1] >> 0x20) *
           (float)(CONCAT17(bVar27,CONCAT16(bVar25,CONCAT15(bVar23,CONCAT14(bVar21,fVar11)))) >>
                  0x20);
  *(ulong *)(param_1 + 0x48) = CONCAT44(fVar15,fVar14);
  *(ulong *)(param_1 + 0x40) = CONCAT44(fVar13,fVar12);
  fVar28 = (float)param_6[1];
  fVar11 = (float)*param_6;
  fVar34 = (float)((ulong)*param_6 >> 0x20);
  fVar30 = fVar11 * fVar11 + fVar34 * fVar34 + fVar28 * fVar28;
  fVar33 = fVar11 * fVar11 + fVar34 * fVar34 + fVar28 * fVar28;
  uVar35 = CONCAT44(fVar33,fVar30);
  uVar38 = NEON_frsqrte(uVar35,4);
  fVar37 = (float)uVar38;
  fVar39 = (float)((ulong)uVar38 >> 0x20);
  uVar38 = NEON_frsqrts(uVar35,CONCAT44(fVar39 * fVar39,fVar37 * fVar37),4);
  fVar37 = fVar37 * (float)uVar38;
  fVar39 = fVar39 * (float)((ulong)uVar38 >> 0x20);
  iVar29 = -(uint)(fVar30 <= 0.0);
  iVar32 = -(uint)(fVar33 <= 0.0);
  uVar35 = NEON_frsqrts(uVar35,CONCAT44(fVar39 * fVar39,fVar37 * fVar37),4);
  fVar37 = (float)uVar35 * fVar37;
  fVar39 = (float)((ulong)uVar35 >> 0x20) * fVar39;
  fVar30 = (float)CONCAT13((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                           CONCAT12((byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10),
                                    CONCAT11((byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar29 >> 8),
                                             SUB41(fVar37,0) & ~(byte)iVar29)));
  fVar11 = fVar11 * fVar30;
  fVar33 = (float)(CONCAT17((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                            CONCAT16((byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10),
                                     CONCAT15((byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar32 >> 8)
                                              ,CONCAT14(SUB41(fVar39,0) & ~(byte)iVar32,fVar30))))
                  >> 0x20);
  fVar34 = fVar34 * fVar33;
  uVar20 = SUB41(fVar34,0);
  uVar22 = (undefined1)((uint)fVar34 >> 8);
  uVar24 = (undefined1)((uint)fVar34 >> 0x10);
  uVar26 = (undefined1)((uint)fVar34 >> 0x18);
  fVar28 = fVar28 * fVar30;
  fVar33 = (float)((ulong)param_6[1] >> 0x20) * fVar33;
  auVar31._4_4_ = fVar13;
  auVar31._0_4_ = fVar12;
  auVar31._8_4_ = fVar14;
  auVar31._12_4_ = fVar15;
  auVar36._4_4_ = fVar13;
  auVar36._0_4_ = fVar12;
  auVar36._8_4_ = fVar14;
  auVar36._12_4_ = fVar15;
  auVar31 = NEON_ext(auVar31,auVar36,4,1);
  auVar7[4] = uVar20;
  auVar7._0_4_ = fVar11;
  auVar7[5] = uVar22;
  auVar7[6] = uVar24;
  auVar7[7] = uVar26;
  auVar7._8_4_ = fVar28;
  auVar7._12_4_ = fVar33;
  auVar8[4] = uVar20;
  auVar8._0_4_ = fVar11;
  auVar8[5] = uVar22;
  auVar8[6] = uVar24;
  auVar8[7] = uVar26;
  auVar8._8_4_ = fVar28;
  auVar8._12_4_ = fVar33;
  auVar36 = NEON_ext(auVar7,auVar8,4,1);
  fVar30 = fVar12 * auVar36._0_4_ - auVar31._0_4_ * fVar11;
  fVar34 = fVar13 * auVar36._4_4_ - auVar31._4_4_ * fVar34;
  fVar37 = fVar14 * fVar11 - fVar12 * fVar28;
  fVar12 = fVar15 * (float)(CONCAT17(uVar26,CONCAT16(uVar24,CONCAT15(uVar22,CONCAT14(uVar20,fVar11))
                                                    )) >> 0x20) - fVar13 * fVar33;
  auVar1._4_4_ = fVar34;
  auVar1._0_4_ = fVar30;
  auVar1._8_4_ = fVar37;
  auVar1._12_4_ = fVar12;
  auVar2._4_4_ = fVar34;
  auVar2._0_4_ = fVar30;
  auVar2._8_4_ = fVar37;
  auVar2._12_4_ = fVar12;
  auVar31 = NEON_ext(auVar1,auVar2,4,1);
  *(ulong *)(param_1 + 0x58) = CONCAT44(fVar33,fVar28);
  *(ulong *)(param_1 + 0x50) =
       CONCAT17(uVar26,CONCAT16(uVar24,CONCAT15(uVar22,CONCAT14(uVar20,fVar11))));
  *(ulong *)(param_1 + 0x68) = CONCAT44(fVar34,fVar30);
  *(long *)(param_1 + 0x60) = auVar31._0_8_;
  fVar14 = (float)param_5[1];
  fVar12 = (float)*param_5;
  fVar13 = (float)((ulong)*param_5 >> 0x20);
  fVar11 = fVar12 * fVar12 + fVar13 * fVar13 + fVar14 * fVar14;
  fVar30 = fVar12 * fVar12 + fVar13 * fVar13 + fVar14 * fVar14;
  uVar20 = SUB41(fVar30,0);
  uVar22 = (undefined1)((uint)fVar30 >> 8);
  uVar24 = (undefined1)((uint)fVar30 >> 0x10);
  uVar26 = (undefined1)((uint)fVar30 >> 0x18);
  uVar35 = NEON_frsqrte(CONCAT17(uVar26,CONCAT16(uVar24,CONCAT15(uVar22,CONCAT14(uVar20,fVar11)))),4
                       );
  fVar34 = (float)uVar35;
  fVar37 = (float)((ulong)uVar35 >> 0x20);
  uVar35 = NEON_frsqrts(CONCAT17(uVar26,CONCAT16(uVar24,CONCAT15(uVar22,CONCAT14(uVar20,fVar11)))),
                        CONCAT44(fVar37 * fVar37,fVar34 * fVar34),4);
  fVar34 = fVar34 * (float)uVar35;
  fVar37 = fVar37 * (float)((ulong)uVar35 >> 0x20);
  iVar29 = -(uint)(fVar11 <= 0.0);
  iVar32 = -(uint)(fVar30 <= 0.0);
  uVar35 = NEON_frsqrts(CONCAT17(uVar26,CONCAT16(uVar24,CONCAT15(uVar22,CONCAT14(uVar20,fVar11)))),
                        CONCAT44(fVar37 * fVar37,fVar34 * fVar34),4);
  fVar34 = (float)uVar35 * fVar34;
  fVar37 = (float)((ulong)uVar35 >> 0x20) * fVar37;
  bVar16 = SUB41(fVar34,0) & ~(byte)iVar29;
  bVar17 = (byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar29 >> 8);
  bVar18 = (byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
  bVar19 = (byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
  bVar21 = SUB41(fVar37,0) & ~(byte)iVar32;
  bVar23 = (byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar32 >> 8);
  bVar25 = (byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10);
  bVar27 = (byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18);
  fVar11 = (float)CONCAT13(bVar19,CONCAT12(bVar18,CONCAT11(bVar17,bVar16)));
  fVar12 = fVar12 * (float)CONCAT13(bVar19,CONCAT12(bVar18,CONCAT11(bVar17,bVar16)));
  fVar13 = fVar13 * (float)CONCAT13(bVar27,CONCAT12(bVar25,CONCAT11(bVar23,bVar21)));
  fVar14 = fVar14 * fVar11;
  fVar15 = (float)((ulong)param_5[1] >> 0x20) *
           (float)(CONCAT17(bVar27,CONCAT16(bVar25,CONCAT15(bVar23,CONCAT14(bVar21,fVar11)))) >>
                  0x20);
  *(ulong *)(param_1 + 0x88) = CONCAT44(fVar15,fVar14);
  *(ulong *)(param_1 + 0x80) = CONCAT44(fVar13,fVar12);
  fVar28 = (float)param_7[1];
  fVar11 = (float)*param_7;
  fVar34 = (float)((ulong)*param_7 >> 0x20);
  fVar30 = fVar11 * fVar11 + fVar34 * fVar34 + fVar28 * fVar28;
  fVar33 = fVar11 * fVar11 + fVar34 * fVar34 + fVar28 * fVar28;
  uVar35 = CONCAT44(fVar33,fVar30);
  uVar38 = NEON_frsqrte(uVar35,4);
  fVar37 = (float)uVar38;
  fVar39 = (float)((ulong)uVar38 >> 0x20);
  uVar38 = NEON_frsqrts(uVar35,CONCAT44(fVar39 * fVar39,fVar37 * fVar37),4);
  fVar37 = fVar37 * (float)uVar38;
  fVar39 = fVar39 * (float)((ulong)uVar38 >> 0x20);
  iVar29 = -(uint)(fVar30 <= 0.0);
  iVar32 = -(uint)(fVar33 <= 0.0);
  uVar35 = NEON_frsqrts(uVar35,CONCAT44(fVar39 * fVar39,fVar37 * fVar37),4);
  fVar37 = (float)uVar35 * fVar37;
  fVar39 = (float)((ulong)uVar35 >> 0x20) * fVar39;
  fVar30 = (float)CONCAT13((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                           CONCAT12((byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10),
                                    CONCAT11((byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar29 >> 8),
                                             SUB41(fVar37,0) & ~(byte)iVar29)));
  fVar11 = fVar11 * fVar30;
  fVar33 = (float)(CONCAT17((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                            CONCAT16((byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10),
                                     CONCAT15((byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar32 >> 8)
                                              ,CONCAT14(SUB41(fVar39,0) & ~(byte)iVar32,fVar30))))
                  >> 0x20);
  fVar34 = fVar34 * fVar33;
  uVar20 = SUB41(fVar34,0);
  uVar22 = (undefined1)((uint)fVar34 >> 8);
  uVar24 = (undefined1)((uint)fVar34 >> 0x10);
  uVar26 = (undefined1)((uint)fVar34 >> 0x18);
  fVar28 = fVar28 * fVar30;
  fVar33 = (float)((ulong)param_7[1] >> 0x20) * fVar33;
  auVar3._4_4_ = fVar13;
  auVar3._0_4_ = fVar12;
  auVar3._8_4_ = fVar14;
  auVar3._12_4_ = fVar15;
  auVar4._4_4_ = fVar13;
  auVar4._0_4_ = fVar12;
  auVar4._8_4_ = fVar14;
  auVar4._12_4_ = fVar15;
  auVar31 = NEON_ext(auVar3,auVar4,4,1);
  auVar9[4] = uVar20;
  auVar9._0_4_ = fVar11;
  auVar9[5] = uVar22;
  auVar9[6] = uVar24;
  auVar9[7] = uVar26;
  auVar9._8_4_ = fVar28;
  auVar9._12_4_ = fVar33;
  auVar10[4] = uVar20;
  auVar10._0_4_ = fVar11;
  auVar10[5] = uVar22;
  auVar10[6] = uVar24;
  auVar10[7] = uVar26;
  auVar10._8_4_ = fVar28;
  auVar10._12_4_ = fVar33;
  auVar36 = NEON_ext(auVar9,auVar10,4,1);
  fVar30 = fVar12 * auVar36._0_4_ - auVar31._0_4_ * fVar11;
  fVar34 = fVar13 * auVar36._4_4_ - auVar31._4_4_ * fVar34;
  fVar37 = fVar14 * fVar11 - fVar12 * fVar28;
  fVar12 = fVar15 * (float)(CONCAT17(uVar26,CONCAT16(uVar24,CONCAT15(uVar22,CONCAT14(uVar20,fVar11))
                                                    )) >> 0x20) - fVar13 * fVar33;
  auVar5._4_4_ = fVar34;
  auVar5._0_4_ = fVar30;
  auVar5._8_4_ = fVar37;
  auVar5._12_4_ = fVar12;
  auVar6._4_4_ = fVar34;
  auVar6._0_4_ = fVar30;
  auVar6._8_4_ = fVar37;
  auVar6._12_4_ = fVar12;
  auVar31 = NEON_ext(auVar5,auVar6,4,1);
  *(ulong *)(param_1 + 0x98) = CONCAT44(fVar33,fVar28);
  *(ulong *)(param_1 + 0x90) =
       CONCAT17(uVar26,CONCAT16(uVar24,CONCAT15(uVar22,CONCAT14(uVar20,fVar11))));
  *(ulong *)(param_1 + 0xa8) = CONCAT44(fVar34,fVar30);
  *(long *)(param_1 + 0xa0) = auVar31._0_8_;
  return;
}


