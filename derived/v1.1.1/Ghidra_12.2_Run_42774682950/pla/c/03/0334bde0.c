/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0334bde0; name: FUN_0334bde0
 */


bool FUN_0334bde0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  
  fVar11 = (float)*param_4;
  if (fVar11 < 0.0) {
    return false;
  }
  fVar28 = (float)param_1[1];
  fVar29 = (float)((ulong)param_1[1] >> 0x20);
  fVar25 = (float)*param_1;
  fVar27 = (float)((ulong)*param_1 >> 0x20);
  fVar15 = (float)*param_2;
  fVar10 = fVar25 - fVar15;
  fVar17 = (float)((ulong)*param_2 >> 0x20);
  fVar12 = fVar27 - fVar17;
  fVar19 = (float)param_2[1];
  fVar13 = fVar28 - fVar19;
  fVar21 = (float)((ulong)param_2[1] >> 0x20);
  fVar14 = fVar29 - fVar21;
  auVar41._4_4_ = fVar12;
  auVar41._0_4_ = fVar10;
  auVar41._8_4_ = fVar13;
  auVar41._12_4_ = fVar14;
  auVar43._4_4_ = fVar12;
  auVar43._0_4_ = fVar10;
  auVar43._8_4_ = fVar13;
  auVar43._12_4_ = fVar14;
  auVar41 = NEON_ext(auVar41,auVar43,4,1);
  fVar16 = (float)*param_3;
  fVar40 = fVar25 - fVar16;
  fVar18 = (float)((ulong)*param_3 >> 0x20);
  fVar26 = fVar27 - fVar18;
  uVar30 = SUB41(fVar26,0);
  uVar31 = (undefined1)((uint)fVar26 >> 8);
  uVar33 = (undefined1)((uint)fVar26 >> 0x10);
  uVar35 = (undefined1)((uint)fVar26 >> 0x18);
  fVar20 = (float)param_3[1];
  fVar37 = fVar28 - fVar20;
  fVar38 = (float)((ulong)param_3[1] >> 0x20);
  fVar39 = fVar29 - fVar38;
  auVar4[4] = uVar30;
  auVar4._0_4_ = fVar40;
  auVar4[5] = uVar31;
  auVar4[6] = uVar33;
  auVar4[7] = uVar35;
  auVar4._8_4_ = fVar37;
  auVar4._12_4_ = fVar39;
  auVar5[4] = uVar30;
  auVar5._0_4_ = fVar40;
  auVar5[5] = uVar31;
  auVar5[6] = uVar33;
  auVar5[7] = uVar35;
  auVar5._8_4_ = fVar37;
  auVar5._12_4_ = fVar39;
  auVar43 = NEON_ext(auVar4,auVar5,4,1);
  fVar25 = fVar15 - fVar25;
  fVar27 = fVar17 - fVar27;
  fVar28 = fVar19 - fVar28;
  fVar29 = fVar21 - fVar29;
  auVar42._0_4_ = fVar15 - fVar16;
  auVar42._4_4_ = fVar17 - fVar18;
  auVar42._8_4_ = fVar19 - fVar20;
  auVar42._12_4_ = fVar21 - fVar38;
  auVar44 = NEON_ext(auVar42,auVar42,4,1);
  fVar21 = fVar10 * auVar43._0_4_ - fVar40 * auVar41._0_4_;
  fVar26 = fVar12 * auVar43._4_4_ - fVar26 * auVar41._4_4_;
  uVar32 = (undefined1)((uint)fVar26 >> 8);
  uVar34 = (undefined1)((uint)fVar26 >> 0x10);
  uVar36 = (undefined1)((uint)fVar26 >> 0x18);
  fVar38 = fVar13 * fVar40 - fVar37 * fVar10;
  fVar40 = fVar14 * (float)(CONCAT17(uVar35,CONCAT16(uVar33,CONCAT15(uVar31,CONCAT14(uVar30,fVar40))
                                                    )) >> 0x20) - fVar39 * fVar12;
  auVar1._4_4_ = fVar27;
  auVar1._0_4_ = fVar25;
  auVar1._8_4_ = fVar28;
  auVar1._12_4_ = fVar29;
  auVar2._4_4_ = fVar27;
  auVar2._0_4_ = fVar25;
  auVar2._8_4_ = fVar28;
  auVar2._12_4_ = fVar29;
  auVar41 = NEON_ext(auVar1,auVar2,4,1);
  auVar6[4] = SUB41(fVar26,0);
  auVar6._0_4_ = fVar21;
  auVar6[5] = uVar32;
  auVar6[6] = uVar34;
  auVar6[7] = uVar36;
  auVar6._8_4_ = fVar38;
  auVar6._12_4_ = fVar40;
  auVar7[4] = SUB41(fVar26,0);
  auVar7._0_4_ = fVar21;
  auVar7[5] = uVar32;
  auVar7[6] = uVar34;
  auVar7[7] = uVar36;
  auVar7._8_4_ = fVar38;
  auVar7._12_4_ = fVar40;
  auVar43 = NEON_ext(auVar6,auVar7,4,1);
  fVar37 = auVar43._0_4_ * auVar43._0_4_;
  fVar39 = auVar43._4_4_ * auVar43._4_4_;
  fVar26 = fVar25 * auVar44._0_4_ - auVar42._0_4_ * auVar41._0_4_;
  fVar40 = fVar27 * auVar44._4_4_ - auVar42._4_4_ * auVar41._4_4_;
  fVar14 = fVar28 * auVar42._0_4_ - auVar42._8_4_ * fVar25;
  fVar38 = fVar29 * auVar42._4_4_ - auVar42._12_4_ * fVar27;
  auVar44._4_4_ = fVar40;
  auVar44._0_4_ = fVar26;
  auVar44._8_4_ = fVar14;
  auVar44._12_4_ = fVar38;
  auVar3._4_4_ = fVar40;
  auVar3._0_4_ = fVar26;
  auVar3._8_4_ = fVar14;
  auVar3._12_4_ = fVar38;
  auVar41 = NEON_ext(auVar44,auVar3,4,1);
  fVar14 = auVar41._0_4_ * auVar41._0_4_;
  fVar38 = auVar41._4_4_ * auVar41._4_4_;
  iVar8 = -(uint)(fVar37 + fVar39 + fVar21 * fVar21 < fVar11);
  fVar40 = (float)((ulong)*param_4 >> 0x20);
  iVar9 = -(uint)(fVar37 + fVar39 + fVar21 * fVar21 < fVar40);
  iVar22 = -(uint)(fVar14 + fVar38 + fVar26 * fVar26 < fVar11);
  iVar24 = -(uint)(fVar14 + fVar38 + fVar26 * fVar26 < fVar40);
  uVar23 = CONCAT13((byte)((uint)iVar22 >> 0x18) | (byte)((uint)iVar8 >> 0x18),
                    CONCAT12((byte)((uint)iVar22 >> 0x10) | (byte)((uint)iVar8 >> 0x10),
                             CONCAT11((byte)((uint)iVar22 >> 8) | (byte)((uint)iVar8 >> 8),
                                      (byte)iVar22 | (byte)iVar8)));
  if ((uVar23 & (uint)(CONCAT17((byte)((uint)iVar24 >> 0x18) | (byte)((uint)iVar9 >> 0x18),
                                CONCAT16((byte)((uint)iVar24 >> 0x10) | (byte)((uint)iVar9 >> 0x10),
                                         CONCAT15((byte)((uint)iVar24 >> 8) |
                                                  (byte)((uint)iVar9 >> 8),
                                                  CONCAT14((byte)iVar24 | (byte)iVar9,uVar23)))) >>
                      0x20)) == 0) {
    fVar16 = fVar16 - fVar15;
    fVar18 = fVar18 - fVar17;
    fVar20 = fVar20 - fVar19;
    fVar11 = fVar10 * fVar16 + fVar12 * fVar18 + fVar13 * fVar20;
    return (fVar10 * fVar10 + fVar12 * fVar12 + fVar13 * fVar13) *
           (fVar16 * fVar16 + fVar18 * fVar18 + fVar20 * fVar20) - fVar11 * fVar11 == 0.0;
  }
  return true;
}


