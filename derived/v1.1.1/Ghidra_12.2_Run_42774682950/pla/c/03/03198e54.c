/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03198e54; name: FUN_03198e54
 */


void FUN_03198e54(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined1 (*pauVar8) [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar22;
  undefined1 auVar21 [16];
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  
  uVar1 = *(int *)(param_1 + 1) - 1;
  if ((int)uVar1 < 1) {
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar15 = 0.0;
    fVar16 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
  }
  else {
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar15 = 0.0;
    fVar16 = 0.0;
    uVar7 = (ulong)uVar1;
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    auVar21 = *(undefined1 (*) [16])*param_1;
    fVar18 = auVar21._8_4_;
    fVar39 = auVar21._12_4_;
    uVar23 = auVar21[0];
    uVar24 = auVar21[1];
    uVar25 = auVar21[2];
    uVar26 = auVar21[3];
    uVar27 = auVar21[4];
    uVar29 = auVar21[5];
    uVar31 = auVar21[6];
    uVar33 = auVar21[7];
    fVar17 = fVar18;
    fVar22 = fVar39;
    pauVar8 = (undefined1 (*) [16])*param_1;
    do {
      uVar20 = *(undefined8 *)pauVar8[1];
      uVar7 = uVar7 - 1;
      fVar13 = (float)CONCAT13(uVar26,CONCAT12(uVar25,CONCAT11(uVar24,uVar23))) + fVar13;
      fVar14 = (float)CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar29,uVar27))) + fVar14;
      fVar15 = fVar17 + fVar15;
      fVar16 = fVar22 + fVar16;
      fVar38 = (float)CONCAT13(uVar26,CONCAT12(uVar25,CONCAT11(uVar24,uVar23))) - auVar21._0_4_;
      fVar36 = (float)CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar29,uVar27))) - auVar21._4_4_;
      uVar23 = SUB41(fVar36,0);
      uVar24 = (undefined1)((uint)fVar36 >> 8);
      uVar25 = (undefined1)((uint)fVar36 >> 0x10);
      uVar26 = (undefined1)((uint)fVar36 >> 0x18);
      fVar35 = fVar17 - fVar18;
      fVar37 = fVar22 - fVar39;
      auVar43[4] = uVar23;
      auVar43._0_4_ = fVar38;
      auVar43[5] = uVar24;
      auVar43[6] = uVar25;
      auVar43[7] = uVar26;
      auVar43._8_4_ = fVar35;
      auVar43._12_4_ = fVar37;
      auVar44[4] = uVar23;
      auVar44._0_4_ = fVar38;
      auVar44[5] = uVar24;
      auVar44[6] = uVar25;
      auVar44[7] = uVar26;
      auVar44._8_4_ = fVar35;
      auVar44._12_4_ = fVar37;
      auVar43 = NEON_ext(auVar43,auVar44,4,1);
      auVar42._0_4_ = (float)uVar20 - auVar21._0_4_;
      auVar42._4_4_ = (float)((ulong)uVar20 >> 0x20) - auVar21._4_4_;
      fVar17 = (float)*(undefined8 *)(pauVar8[1] + 8);
      auVar42._8_4_ = fVar17 - fVar18;
      fVar22 = (float)((ulong)*(undefined8 *)(pauVar8[1] + 8) >> 0x20);
      auVar42._12_4_ = fVar22 - fVar39;
      auVar44 = NEON_ext(auVar42,auVar42,4,1);
      fVar41 = fVar38 * auVar44._0_4_ - auVar43._0_4_ * auVar42._0_4_;
      fVar36 = fVar36 * auVar44._4_4_ - auVar43._4_4_ * auVar42._4_4_;
      uVar28 = SUB41(fVar36,0);
      uVar30 = (undefined1)((uint)fVar36 >> 8);
      uVar32 = (undefined1)((uint)fVar36 >> 0x10);
      uVar34 = (undefined1)((uint)fVar36 >> 0x18);
      fVar36 = fVar35 * auVar42._0_4_ - fVar38 * auVar42._8_4_;
      fVar38 = fVar37 * auVar42._4_4_ -
               (float)(CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,fVar38)))) >>
                      0x20) * auVar42._12_4_;
      auVar3[4] = uVar28;
      auVar3._0_4_ = fVar41;
      auVar3[5] = uVar30;
      auVar3[6] = uVar32;
      auVar3[7] = uVar34;
      auVar3._8_4_ = fVar36;
      auVar3._12_4_ = fVar38;
      auVar4[4] = uVar28;
      auVar4._0_4_ = fVar41;
      auVar4[5] = uVar30;
      auVar4[6] = uVar32;
      auVar4[7] = uVar34;
      auVar4._8_4_ = fVar36;
      auVar4._12_4_ = fVar38;
      auVar43 = NEON_ext(auVar3,auVar4,4,1);
      uVar23 = (undefined1)uVar20;
      uVar24 = (undefined1)((ulong)uVar20 >> 8);
      uVar25 = (undefined1)((ulong)uVar20 >> 0x10);
      uVar26 = (undefined1)((ulong)uVar20 >> 0x18);
      uVar27 = (undefined1)((ulong)uVar20 >> 0x20);
      uVar29 = (undefined1)((ulong)uVar20 >> 0x28);
      uVar31 = (undefined1)((ulong)uVar20 >> 0x30);
      uVar33 = (undefined1)((ulong)uVar20 >> 0x38);
      fVar9 = fVar9 + auVar43._0_4_;
      fVar10 = fVar10 + auVar43._4_4_;
      fVar11 = fVar11 + fVar41;
      fVar12 = fVar12 + (float)(CONCAT17(uVar34,CONCAT16(uVar32,CONCAT15(uVar30,CONCAT14(uVar28,
                                                  fVar41)))) >> 0x20);
      pauVar8 = pauVar8 + 1;
    } while (uVar7 != 0);
  }
  uVar19 = NEON_scvtf(CONCAT44(uVar1,uVar1),4);
  uVar20 = NEON_frecpe(uVar19,4);
  uVar40 = NEON_frecps(uVar19,uVar20,4);
  fVar17 = (float)uVar20 * (float)uVar40;
  fVar22 = (float)((ulong)uVar20 >> 0x20) * (float)((ulong)uVar40 >> 0x20);
  uVar20 = NEON_frecps(uVar19,CONCAT17((char)((uint)fVar22 >> 0x18),
                                       CONCAT16((char)((uint)fVar22 >> 0x10),
                                                CONCAT15((char)((uint)fVar22 >> 8),
                                                         CONCAT14(SUB41(fVar22,0),fVar17)))),4);
  fVar17 = fVar17 * (float)uVar20;
  fVar22 = fVar22 * (float)((ulong)uVar20 >> 0x20);
  fVar18 = fVar11 * fVar11 + fVar9 * fVar9 + fVar10 * fVar10;
  fVar38 = fVar11 * fVar11 + fVar9 * fVar9 + fVar10 * fVar10;
  uVar20 = CONCAT44(fVar38,fVar18);
  uVar19 = NEON_frsqrte(uVar20,4);
  fVar39 = (float)uVar19;
  fVar41 = (float)((ulong)uVar19 >> 0x20);
  uVar19 = NEON_frsqrts(uVar20,CONCAT44(fVar41 * fVar41,fVar39 * fVar39),4);
  fVar39 = fVar39 * (float)uVar19;
  fVar41 = fVar41 * (float)((ulong)uVar19 >> 0x20);
  iVar5 = -(uint)(fVar18 <= 0.0);
  iVar6 = -(uint)(fVar38 <= 0.0);
  uVar20 = NEON_frsqrts(uVar20,CONCAT44(fVar41 * fVar41,fVar39 * fVar39),4);
  fVar39 = (float)uVar20 * fVar39;
  fVar41 = (float)((ulong)uVar20 >> 0x20) * fVar41;
  fVar18 = (float)CONCAT13((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18),
                           CONCAT12((byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10),
                                    CONCAT11((byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar5 >> 8),
                                             SUB41(fVar39,0) & ~(byte)iVar5)));
  fVar39 = (float)(CONCAT17((byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18),
                            CONCAT16((byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar6 >> 0x10),
                                     CONCAT15((byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar6 >> 8),
                                              CONCAT14(SUB41(fVar41,0) & ~(byte)iVar6,fVar18)))) >>
                  0x20);
  fVar10 = fVar10 * fVar39;
  fVar13 = fVar13 * fVar17 * fVar9 * fVar18;
  fVar14 = fVar14 * fVar22 * fVar10;
  fVar15 = fVar15 * fVar17 * fVar11 * fVar18;
  fVar16 = fVar16 * fVar22 * fVar12 * fVar39;
  auVar21._4_4_ = fVar14;
  auVar21._0_4_ = fVar13;
  auVar21._8_4_ = fVar15;
  auVar21._12_4_ = fVar16;
  auVar2._4_4_ = fVar14;
  auVar2._0_4_ = fVar13;
  auVar2._8_4_ = fVar15;
  auVar2._12_4_ = fVar16;
  auVar21 = NEON_ext(auVar21,auVar2,8,1);
  param_2[1] = CONCAT44(-(fVar13 + fVar14 + auVar21._0_4_),fVar11 * fVar18);
  *param_2 = CONCAT44(fVar10,fVar9 * fVar18);
  return;
}


