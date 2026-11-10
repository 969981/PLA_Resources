/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01589f34; name: FUN_01589f34
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01589f34(undefined8 param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar8;
  uint uVar11;
  undefined1 auVar5 [16];
  uint uVar9;
  uint uVar13;
  undefined1 auVar6 [16];
  float fVar10;
  float fVar12;
  float fVar14;
  undefined1 auVar7 [16];
  float fVar15;
  undefined8 uVar16;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar28;
  uint uVar29;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar45;
  float fVar46;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar54;
  float fVar55;
  undefined8 uVar52;
  float fVar56;
  undefined1 auVar53 [16];
  undefined8 uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float local_c0;
  float fStack_bc;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined1 auStack_50 [16];
  float local_40;
  float afStack_3c [3];
  
  fVar2 = 0.0;
  if (param_2 == 0) {
    FUN_02daafcc(auStack_50,param_1);
    pfVar1 = &local_40;
  }
  else {
    if (param_2 != 1) goto LAB_01589f80;
    FUN_02daafcc(auStack_50,param_1);
    pfVar1 = afStack_3c;
  }
  fVar2 = *pfVar1 * 3.1415927;
LAB_01589f80:
  fVar3 = *(float *)PTR_Float1Divided2Pi_04372d20;
  fVar8 = (fVar2 / 180.0) * fVar3;
  fVar28 = *(float *)PTR_Float2Pi_04372d30;
  auVar39._0_4_ =
       (int)(fVar3 * 0.0 + (float)(-(uint)(0.0 <= fVar3 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar39._4_4_ = (int)(fVar8 + (float)(-(uint)(0.0 <= fVar8) & 0x80000000 ^ 0xbf000000));
  auVar39._8_4_ =
       (int)(fVar3 * 0.0 + (float)(-(uint)(0.0 <= fVar3 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar39._12_4_ =
       (int)(fVar3 * 0.0 + (float)(-(uint)(0.0 <= fVar3 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar5 = NEON_scvtf(auVar39,4);
  fVar8 = 0.0 - auVar5._0_4_ * fVar28;
  fVar22 = fVar2 / 180.0 - auVar5._4_4_ * fVar28;
  fVar24 = 0.0 - auVar5._8_4_ * fVar28;
  fVar26 = 0.0 - auVar5._12_4_ * fVar28;
  fVar2 = *(float *)PTR_FloatPiDivided2_04372d38;
  fVar28 = *(float *)PTR_FloatPi_04372cf0;
  fVar3 = -fVar2;
  uVar29 = -(uint)(fVar2 < fVar8);
  uVar36 = -(uint)(fVar2 < fVar22);
  uVar37 = -(uint)(fVar2 < fVar24);
  uVar38 = -(uint)(fVar2 < fVar26);
  fVar8 = (float)((uint)fVar8 ^ ((uint)fVar8 ^ (uint)(fVar28 - fVar8)) & uVar29);
  fVar22 = (float)((uint)fVar22 ^ ((uint)fVar22 ^ (uint)(fVar28 - fVar22)) & uVar36);
  fVar24 = (float)((uint)fVar24 ^ ((uint)fVar24 ^ (uint)(fVar28 - fVar24)) & uVar37);
  fVar26 = (float)((uint)fVar26 ^ ((uint)fVar26 ^ (uint)(fVar28 - fVar26)) & uVar38);
  fVar28 = -fVar28;
  uVar4 = -(uint)(fVar8 < fVar3);
  uVar9 = -(uint)(fVar22 < fVar3);
  uVar11 = -(uint)(fVar24 < fVar3);
  uVar13 = -(uint)(fVar26 < fVar3);
  fVar47 = *(float *)PTR_SinCoefficients_04372d28;
  auVar30[0] = (byte)uVar4 | (byte)uVar29;
  auVar30[1] = (byte)(uVar4 >> 8) | (byte)(uVar29 >> 8);
  auVar30[2] = (byte)(uVar4 >> 0x10) | (byte)(uVar29 >> 0x10);
  auVar30[3] = (byte)(uVar4 >> 0x18) | (byte)(uVar29 >> 0x18);
  auVar30[4] = (byte)uVar9 | (byte)uVar36;
  auVar30[5] = (byte)(uVar9 >> 8) | (byte)(uVar36 >> 8);
  auVar30[6] = (byte)(uVar9 >> 0x10) | (byte)(uVar36 >> 0x10);
  auVar30[7] = (byte)(uVar9 >> 0x18) | (byte)(uVar36 >> 0x18);
  auVar30[8] = (byte)uVar11 | (byte)uVar37;
  auVar30[9] = (byte)(uVar11 >> 8) | (byte)(uVar37 >> 8);
  auVar30[10] = (byte)(uVar11 >> 0x10) | (byte)(uVar37 >> 0x10);
  auVar30[0xb] = (byte)(uVar11 >> 0x18) | (byte)(uVar37 >> 0x18);
  auVar30[0xc] = (byte)uVar13 | (byte)uVar38;
  auVar30[0xd] = (byte)(uVar13 >> 8) | (byte)(uVar38 >> 8);
  auVar30[0xe] = (byte)(uVar13 >> 0x10) | (byte)(uVar38 >> 0x10);
  auVar30[0xf] = (byte)(uVar13 >> 0x18) | (byte)(uVar38 >> 0x18);
  fVar8 = (float)((uint)fVar8 ^ ((uint)fVar8 ^ (uint)(fVar28 - fVar8)) & uVar4);
  fVar22 = (float)((uint)fVar22 ^ ((uint)fVar22 ^ (uint)(fVar28 - fVar22)) & uVar9);
  fVar24 = (float)((uint)fVar24 ^ ((uint)fVar24 ^ (uint)(fVar28 - fVar24)) & uVar11);
  fVar26 = (float)((uint)fVar26 ^ ((uint)fVar26 ^ (uint)(fVar28 - fVar26)) & uVar13);
  auVar39 = NEON_fmov(0x3f800000,4);
  auVar5 = NEON_fmov(0xbf800000,4);
  auVar5 = auVar39 ^ (auVar39 ^ auVar5) & auVar30;
  fVar2 = *(float *)(PTR_SinCoefficients_04372d28 + 4);
  fVar14 = auVar39._12_4_;
  fVar15 = fVar8 * fVar8;
  fVar23 = fVar22 * fVar22;
  fVar25 = fVar24 * fVar24;
  fVar27 = fVar26 * fVar26;
  fVar48 = -*(float *)(PTR_SinCoefficients_04372d28 + 8);
  fVar3 = *(float *)(PTR_SinCoefficients_04372d28 + 0xc);
  fVar49 = -*(float *)(PTR_SinCoefficients_04372d28 + 0x10);
  fVar28 = auVar39._0_4_;
  fVar10 = auVar39._4_4_;
  fVar12 = auVar39._8_4_;
  auVar6._0_4_ = fVar8 * (fVar28 + fVar15 * (fVar49 + fVar15 * (fVar3 + fVar15 * (fVar48 + fVar15 * 
                                                  (fVar2 - fVar15 * fVar47)))));
  auVar6._4_4_ = fVar22 * (fVar10 + fVar23 * (fVar49 + fVar23 * (fVar3 + fVar23 * (fVar48 + fVar23 *
                                                                                            (fVar2 -
                                                                                            fVar23 *
                                                                                            fVar47))
                                                                )));
  auVar6._8_4_ = fVar24 * (fVar12 + fVar25 * (fVar49 + fVar25 * (fVar3 + fVar25 * (fVar48 + fVar25 *
                                                                                            (fVar2 -
                                                                                            fVar25 *
                                                                                            fVar47))
                                                                )));
  auVar6._12_4_ =
       fVar26 * (fVar14 + fVar27 * (fVar49 + fVar27 * (fVar3 + fVar27 * (fVar48 + fVar27 * (fVar2 - 
                                                  fVar27 * fVar47)))));
  fVar2 = *(float *)(PTR_CosCoefficients_04372d40 + 4);
  fVar8 = *(float *)PTR_CosCoefficients_04372d40;
  fVar22 = -*(float *)(PTR_CosCoefficients_04372d40 + 8);
  fVar3 = *(float *)(PTR_CosCoefficients_04372d40 + 0xc);
  fVar24 = -*(float *)(PTR_CosCoefficients_04372d40 + 0x10);
  auVar39 = NEON_ext(auVar6,auVar6,8,1);
  auVar17._0_4_ =
       auVar5._0_4_ *
       (fVar28 + fVar15 * (fVar24 + fVar15 * (fVar3 + fVar15 * (fVar22 + fVar15 * (fVar2 - fVar15 * 
                                                  fVar8)))));
  auVar17._4_4_ =
       auVar5._4_4_ *
       (fVar10 + fVar23 * (fVar24 + fVar23 * (fVar3 + fVar23 * (fVar22 + fVar23 * (fVar2 - fVar23 * 
                                                  fVar8)))));
  auVar17._8_4_ =
       auVar5._8_4_ *
       (fVar12 + fVar25 * (fVar24 + fVar25 * (fVar3 + fVar25 * (fVar22 + fVar25 * (fVar2 - fVar25 * 
                                                  fVar8)))));
  auVar17._12_4_ =
       auVar5._12_4_ *
       (fVar14 + fVar27 * (fVar24 + fVar27 * (fVar3 + fVar27 * (fVar22 + fVar27 * (fVar2 - fVar27 * 
                                                  fVar8)))));
  auVar5 = NEON_ext(auVar17,auVar17,8,1);
  fVar2 = auVar5._0_4_;
  fVar3 = auVar39._0_4_;
  fVar22 = auVar17._4_4_ * (float)DAT_0388a618;
  fVar50 = fVar3 * auVar17._0_4_ * (float)_DAT_03889200 + fVar2 * auVar6._4_4_ * auVar6._0_4_;
  fVar54 = fVar2 * auVar17._0_4_ * (float)((ulong)_DAT_03889200 >> 0x20) +
           fVar3 * auVar6._4_4_ * auVar6._0_4_;
  fVar56 = auVar17._0_4_ * 0.0 * (float)_UNK_03889208 + fVar22 * auVar6._0_4_;
  auVar31._0_4_ = fVar2 * auVar17._4_4_;
  auVar31._4_4_ = fVar3 * auVar17._4_4_;
  auVar31._8_8_ = 0;
  fVar8 = fVar3 * auVar6._0_4_ * (float)_DAT_03889d50 + fVar2 * auVar6._4_4_ * auVar17._0_4_;
  fVar3 = fVar2 * auVar6._0_4_ * (float)((ulong)_DAT_03889d50 >> 0x20) +
          fVar3 * auVar6._4_4_ * auVar17._0_4_;
  fVar24 = auVar6._0_4_ * 0.0 * (float)_UNK_03889d58 + fVar22 * auVar17._0_4_;
  auVar5 = auVar31;
  FUN_02daafcc(auStack_50,param_1);
  auVar7 = ZEXT816(0x40490fdb);
  auVar39 = FUN_0158a398();
  FUN_02daafcc(auStack_50,param_1);
  fVar2 = (float)_DAT_03889a80;
  fVar22 = (float)((ulong)_DAT_03889a80 >> 0x20);
  fVar26 = (float)_UNK_03889a88;
  fVar27 = (float)DAT_0388a140;
  fVar47 = (float)((ulong)DAT_0388a140 >> 0x20);
  fVar48 = (float)DAT_0388a148;
  fVar49 = (float)_DAT_03888d10;
  fVar45 = (float)((ulong)_DAT_03888d10 >> 0x20);
  fVar46 = (float)_UNK_03888d18;
  fVar15 = (fVar2 * auVar31._0_4_ + fVar27 * auVar31._4_4_) - fVar49 * auVar6._4_4_;
  fVar23 = (fVar22 * auVar31._0_4_ + fVar47 * auVar31._4_4_) - fVar45 * auVar6._4_4_;
  fVar25 = (fVar26 * auVar31._0_4_ + fVar48 * auVar31._4_4_) - fVar46 * auVar6._4_4_;
  fVar51 = fVar2 * fVar50 + fVar27 * fVar54 + fVar49 * fVar56;
  fVar55 = fVar22 * fVar50 + fVar47 * fVar54 + fVar45 * fVar56;
  fVar50 = fVar26 * fVar50 + fVar48 * fVar54 + fVar46 * fVar56;
  fVar2 = fVar2 * fVar8 + fVar27 * fVar3 + fVar49 * fVar24;
  fVar22 = fVar22 * fVar8 + fVar47 * fVar3 + fVar45 * fVar24;
  fVar3 = fVar26 * fVar8 + fVar48 * fVar3 + fVar46 * fVar24;
  local_a0 = auVar5._0_4_;
  fStack_9c = auVar5._4_4_;
  fStack_98 = auVar5._8_4_;
  fStack_94 = auVar5._12_4_;
  fVar47 = auVar39._8_4_;
  local_c0 = auVar39._0_4_;
  fStack_bc = auVar39._4_4_;
  fStack_b0 = auVar7._0_4_;
  fStack_ac = auVar7._4_4_;
  fStack_a8 = auVar7._8_4_;
  fStack_a4 = auVar7._12_4_;
  fVar27 = local_c0 * fVar15 + fStack_b0 * fVar23 + local_a0 * fVar25;
  auVar32._0_8_ = CONCAT44(fStack_bc * fVar15 + fStack_ac * fVar23 + fStack_9c * fVar25,fVar27);
  auVar32._8_4_ = fVar47 * fVar15 + fStack_a8 * fVar23 + fStack_98 * fVar25;
  auVar32._12_4_ = auVar39._12_4_ * fVar15 + fStack_a4 * fVar23 + fStack_94 * fVar25;
  fVar8 = local_c0 * fVar51 + fStack_b0 * fVar55 + local_a0 * fVar50;
  fVar24 = fStack_bc * fVar51 + fStack_ac * fVar55 + fStack_9c * fVar50;
  fVar26 = fVar47 * fVar51 + fStack_a8 * fVar55 + fStack_98 * fVar50;
  fVar15 = fStack_bc * fVar2 + fStack_ac * fVar22 + fStack_9c * fVar3;
  fVar23 = fVar47 * fVar2 + fStack_a8 * fVar22 + fStack_98 * fVar3;
  uVar57 = NEON_ext(auVar32._0_8_,
                    CONCAT44(fVar15,local_c0 * fVar2 + fStack_b0 * fVar22 + local_a0 * fVar3),4,1);
  fVar28 = (float)_DAT_03889820 * fVar27 + (float)_DAT_0388a450 * fVar24 +
           (float)_DAT_03889eb0 * fVar23 + fVar28;
  fVar10 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar27 +
           (float)((ulong)_DAT_0388a450 >> 0x20) * fVar24 +
           (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar23 + fVar10;
  fVar12 = (float)_UNK_03889828 * fVar27 + (float)_UNK_0388a458 * fVar24 +
           (float)_UNK_03889eb8 * fVar23 + fVar12;
  fVar14 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar27 +
           (float)((ulong)_UNK_0388a458 >> 0x20) * fVar24 +
           (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar23 + fVar14;
  auVar5 = NEON_ext(auVar32,auVar32,8,1);
  auVar33._0_4_ = (float)uVar57 + fVar8;
  fVar2 = (float)((ulong)uVar57 >> 0x20);
  auVar33._4_4_ = fVar2 + auVar5._0_4_;
  auVar33._8_4_ = fVar26 + fVar15;
  auVar33._12_4_ = 0;
  auVar40._0_4_ = (float)uVar57 - fVar8;
  auVar40._4_4_ = fVar2 - auVar5._0_4_;
  auVar40._8_4_ = fVar26 - fVar15;
  auVar40._12_4_ = 0;
  uVar16 = a64_TBL(ZEXT816(0),auVar33,auVar40,DAT_0388a888);
  uVar57 = a64_TBL(ZEXT816(0),auVar33,auVar40,DAT_0388a710);
  auVar58._8_8_ = uVar57;
  auVar58._0_8_ = uVar16;
  uVar52 = a64_TBL(ZEXT816(0),auVar33,auVar40,DAT_0388a758);
  auVar60._4_12_ = auVar58._4_12_;
  auVar60._0_4_ = fVar28;
  auVar53._0_8_ = a64_TBL(ZEXT816(0),auVar33,auVar40,DAT_0388a880);
  uVar57 = a64_TBL(ZEXT816(0),auVar33,auVar40,DAT_0388a640);
  auVar18._0_4_ = (undefined4)uVar16;
  auVar18._4_4_ = fVar10;
  auVar18._8_8_ = uVar52;
  uVar16 = a64_TBL(ZEXT816(0),auVar33,auVar40,DAT_0388a700);
  uVar52 = a64_TBL(ZEXT816(0),auVar33,auVar40,DAT_0388a590);
  auVar41._4_4_ = fVar10;
  auVar41._0_4_ = fVar10;
  auVar41._8_4_ = fVar10;
  auVar41._12_4_ = fVar10;
  auVar53._12_4_ = (undefined4)((ulong)uVar57 >> 0x20);
  auVar53._8_4_ = fVar12;
  auVar62._4_4_ = fVar28;
  auVar62._0_4_ = fVar28;
  auVar62._8_4_ = fVar28;
  auVar62._12_4_ = fVar28;
  auVar59._0_8_ = CONCAT44(-(uint)(fVar28 <= fVar10),-(uint)(fVar28 <= fVar10));
  auVar59._8_4_ = -(uint)(fVar28 <= fVar10);
  auVar59._12_4_ = -(uint)(fVar28 <= fVar10);
  auVar61._8_8_ = auVar59._8_8_;
  auVar61._0_8_ = auVar59._0_8_;
  auVar60 = auVar60 ^ (auVar60 ^ auVar18) & auVar59;
  auVar19._4_4_ = fVar12;
  auVar19._0_4_ = fVar12;
  auVar19._8_4_ = fVar12;
  auVar19._12_4_ = fVar12;
  auVar62 = auVar62 ^ (auVar62 ^ auVar41) & auVar61;
  auVar34._0_8_ = CONCAT44(-(uint)(auVar62._4_4_ <= fVar12),-(uint)(auVar62._0_4_ <= fVar12));
  auVar34._8_4_ = -(uint)(auVar62._8_4_ <= fVar12);
  auVar34._12_4_ = -(uint)(auVar62._12_4_ <= fVar12);
  auVar42._8_8_ = auVar34._8_8_;
  auVar42._0_8_ = auVar34._0_8_;
  auVar60 = auVar60 ^ (auVar60 ^ auVar53) & auVar34;
  auVar62 = auVar62 ^ (auVar62 ^ auVar19) & auVar42;
  auVar7._0_4_ = -(uint)(auVar62._0_4_ <= fVar14);
  auVar7._4_4_ = -(uint)(auVar62._4_4_ <= fVar14);
  auVar7._8_4_ = -(uint)(auVar62._8_4_ <= fVar14);
  auVar7._12_4_ = -(uint)(auVar62._12_4_ <= fVar14);
  auVar5._8_4_ = (int)uVar52;
  auVar5._0_8_ = uVar16;
  auVar5._12_4_ = fVar14;
  auVar60 = auVar60 ^ (auVar60 ^ auVar5) & auVar7;
  auVar20._0_4_ = auVar60._0_4_ * auVar60._0_4_;
  auVar20._4_4_ = auVar60._4_4_ * auVar60._4_4_;
  auVar20._8_4_ = auVar60._8_4_ * auVar60._8_4_;
  auVar20._12_4_ = auVar60._12_4_ * auVar60._12_4_;
  auVar5 = NEON_ext(auVar20,auVar20,8,1);
  fVar3 = auVar5._0_4_ + auVar20._0_4_;
  fVar8 = auVar5._4_4_ + auVar20._4_4_;
  fVar2 = fVar3 + fVar8;
  fVar3 = fVar3 + fVar8;
  auVar21._8_8_ = CONCAT44(fVar3,fVar2);
  auVar21._0_8_ = CONCAT44(fVar3,fVar2);
  auVar5 = NEON_frsqrte(auVar21,4);
  auVar43._0_4_ = auVar5._0_4_ * fVar2;
  auVar43._4_4_ = auVar5._4_4_ * fVar3;
  auVar43._8_4_ = auVar5._8_4_ * fVar2;
  auVar43._12_4_ = auVar5._12_4_ * fVar3;
  auVar39 = NEON_frsqrts(auVar5,auVar43,4);
  auVar35._0_4_ = auVar5._0_4_ * auVar39._0_4_;
  auVar35._4_4_ = auVar5._4_4_ * auVar39._4_4_;
  auVar35._8_4_ = auVar5._8_4_ * auVar39._8_4_;
  auVar35._12_4_ = auVar5._12_4_ * auVar39._12_4_;
  auVar44._0_4_ = fVar2 * auVar35._0_4_;
  auVar44._4_4_ = fVar3 * auVar35._4_4_;
  auVar44._8_4_ = fVar2 * auVar35._8_4_;
  auVar44._12_4_ = fVar3 * auVar35._12_4_;
  NEON_frsqrts(auVar35,auVar44,4);
  return;
}


