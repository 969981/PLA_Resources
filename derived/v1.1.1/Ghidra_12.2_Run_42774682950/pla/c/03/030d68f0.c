/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030d68f0; name: FUN_030d68f0
 */


void FUN_030d68f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,float *param_4,
                 undefined8 *param_5,float *param_6,undefined8 *param_7,undefined8 *param_8,
                 undefined8 *param_9)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar38 [16];
  undefined1 auVar37 [16];
  undefined1 auVar36 [16];
  undefined1 auVar35 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auVar48 [16];
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  undefined1 auVar45 [16];
  undefined1 auVar49 [16];
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  
  fVar9 = -(float)*param_1;
  fVar11 = -(float)((ulong)*param_1 >> 0x20);
  fVar12 = -(float)param_1[1];
  fVar10 = (float)((ulong)param_1[1] >> 0x20);
  fVar3 = -(float)*param_2;
  fVar4 = -(float)((ulong)*param_2 >> 0x20);
  fVar5 = -(float)param_2[1];
  fVar2 = (float)((ulong)param_2[1] >> 0x20);
  uVar1 = NEON_fmov(0x3f800000,4);
  fVar43 = (float)uVar1;
  auVar15._12_4_ = -fVar10;
  auVar15._8_4_ = fVar12;
  auVar15._4_4_ = fVar11;
  auVar15._0_4_ = fVar9;
  auVar16._0_12_ = auVar15._0_12_;
  auVar16._12_4_ = fVar10;
  auVar49._12_4_ = -fVar2;
  auVar49._8_4_ = fVar5;
  auVar49._4_4_ = fVar4;
  auVar49._0_4_ = fVar3;
  auVar52._0_12_ = auVar49._0_12_;
  auVar52._12_4_ = fVar2;
  fVar18 = fVar9 + fVar9;
  fVar19 = fVar11 + fVar11;
  fVar12 = fVar12 + fVar12;
  auVar17 = NEON_ext(auVar16,auVar16,8,1);
  auVar23._0_4_ = fVar3 + fVar3;
  auVar23._4_4_ = fVar4 + fVar4;
  auVar23._8_4_ = fVar5 + fVar5;
  auVar23._12_4_ = fVar2 + fVar2;
  auVar7 = NEON_ext(auVar52,auVar52,8,1);
  auVar32._4_4_ = fVar19;
  auVar32._0_4_ = fVar18;
  auVar32._8_4_ = fVar12;
  auVar32._12_4_ = fVar10 + fVar10;
  auVar39._4_4_ = fVar19;
  auVar39._0_4_ = fVar18;
  auVar39._8_4_ = fVar12;
  auVar39._12_4_ = fVar10 + fVar10;
  auVar32 = NEON_ext(auVar32,auVar39,8,1);
  fVar13 = auVar17._0_4_ * auVar32._0_4_;
  auVar32 = NEON_ext(auVar23,auVar23,8,1);
  fVar5 = auVar7._0_4_ * auVar32._0_4_;
  fVar53 = fVar12 * fVar9 - fVar19 * fVar10;
  fVar40 = fVar12 * fVar9 + fVar19 * fVar10;
  fVar41 = fVar12 * fVar11 - fVar18 * fVar10;
  fVar8 = fVar12 * fVar11 + fVar18 * fVar10;
  fVar50 = fVar19 * fVar9 + fVar12 * fVar10;
  fVar30 = fVar19 * fVar9 - fVar12 * fVar10;
  fVar33 = auVar23._4_4_ * fVar3 + auVar23._8_4_ * fVar2;
  fVar22 = auVar23._4_4_ * fVar3 - auVar23._8_4_ * fVar2;
  fVar6 = auVar23._8_4_ * fVar4 + auVar23._0_4_ * fVar2;
  fVar10 = fVar43 - (fVar18 * fVar9 + fVar13);
  fVar54 = fVar43 - (fVar18 * fVar9 + fVar19 * fVar11);
  fVar9 = fVar43 - (fVar19 * fVar11 + fVar13);
  fVar14 = fVar43 - (auVar23._4_4_ * fVar4 + fVar5);
  fVar12 = fVar43 - (auVar23._0_4_ * fVar3 + fVar5);
  fVar55 = auVar23._8_4_ * fVar3 - auVar23._4_4_ * fVar2;
  fVar19 = (float)param_3[1];
  fVar11 = (float)*param_3;
  fVar18 = (float)((ulong)*param_3 >> 0x20);
  fVar43 = fVar43 - (auVar23._0_4_ * fVar3 + auVar23._4_4_ * fVar4);
  fVar5 = auVar23._8_4_ * fVar4 - auVar23._0_4_ * fVar2;
  fVar13 = auVar23._8_4_ * fVar3 + auVar23._4_4_ * fVar2;
  *(float *)(param_8 + 3) = fVar54 * fVar11 - fVar53 * fVar19;
  *(float *)((long)param_8 + 0x1c) = fVar11 * 0.0 - fVar19 * 0.0;
  *(float *)(param_8 + 2) = fVar40 * fVar11 - fVar9 * fVar19;
  *(float *)((long)param_8 + 0x14) = fVar41 * fVar11 - fVar50 * fVar19;
  param_8[5] = CONCAT44(fVar18 * 0.0 - fVar11 * 0.0,fVar53 * fVar18 - fVar8 * fVar11);
  param_8[4] = CONCAT44(fVar50 * fVar18 - fVar10 * fVar11,fVar9 * fVar18 - fVar30 * fVar11);
  param_8[1] = CONCAT44(fVar19 * 0.0 - fVar18 * 0.0,fVar8 * fVar19 - fVar54 * fVar18);
  *param_8 = CONCAT44(fVar10 * fVar19 - fVar41 * fVar18,fVar30 * fVar19 - fVar40 * fVar18);
  fVar2 = *param_4;
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  fVar8 = fVar22 * fVar4 - fVar13 * fVar3;
  fVar10 = fVar12 * fVar4 - fVar5 * fVar3;
  fVar9 = fVar6 * fVar4 - fVar43 * fVar3;
  fVar11 = fVar4 * 0.0 - fVar3 * 0.0;
  fVar13 = fVar13 * fVar2 - fVar14 * fVar4;
  fVar18 = fVar5 * fVar2 - fVar33 * fVar4;
  fVar19 = fVar43 * fVar2 - fVar55 * fVar4;
  fVar5 = fVar14 * fVar3 - fVar22 * fVar2;
  fVar14 = fVar33 * fVar3 - fVar12 * fVar2;
  fVar6 = fVar55 * fVar3 - fVar6 * fVar2;
  param_9[1] = CONCAT44(fVar11,fVar9);
  *param_9 = CONCAT44(fVar10,fVar8);
  param_9[3] = CONCAT44(fVar2 * 0.0 - fVar4 * 0.0,fVar19);
  param_9[2] = CONCAT44(fVar18,fVar13);
  *(float *)(param_9 + 5) = fVar6;
  *(float *)((long)param_9 + 0x2c) = fVar3 * 0.0 - fVar2 * 0.0;
  *(float *)(param_9 + 4) = fVar5;
  *(float *)((long)param_9 + 0x24) = fVar14;
  fVar53 = (float)param_8[3];
  fVar12 = (float)param_8[2];
  fVar50 = (float)((ulong)param_8[2] >> 0x20);
  fVar20 = (float)param_5[1];
  fVar40 = (float)((ulong)param_5[1] >> 0x20);
  fVar30 = (float)*param_5;
  fVar55 = (float)((ulong)*param_5 >> 0x20);
  fVar26 = (float)param_8[5];
  fVar41 = (float)((ulong)param_8[5] >> 0x20);
  fVar27 = (float)param_8[4];
  fVar25 = (float)((ulong)param_8[4] >> 0x20);
  fVar2 = *param_6;
  fVar3 = param_6[1];
  fVar4 = param_6[2];
  fVar22 = (float)*param_8;
  fVar43 = (float)((ulong)*param_8 >> 0x20);
  fVar33 = (float)param_8[1];
  auVar34._0_4_ = fVar8 * fVar2;
  auVar34._4_4_ = fVar10 * fVar3;
  auVar34._8_4_ = fVar9 * fVar4;
  auVar34._12_4_ = fVar11 * param_6[3];
  fVar21 = fVar40 + param_6[3];
  fVar42 = fVar12 * fVar12 * fVar30;
  fVar31 = fVar22 * fVar22 * fVar30;
  auVar44._0_4_ = fVar27 * fVar27 * fVar30;
  auVar44._4_4_ = fVar25 * fVar25 * fVar55;
  auVar44._8_4_ = fVar26 * fVar26 * fVar20;
  auVar44._12_4_ = fVar41 * fVar41 * fVar40;
  fVar41 = fVar12 * fVar22 * fVar30;
  fVar54 = fVar27 * fVar12 * fVar30;
  fVar24 = fVar13 * fVar13 * fVar2;
  auVar51._4_4_ = fVar24;
  auVar51._0_4_ = fVar8 * auVar34._0_4_;
  auVar51._8_4_ = fVar9 * auVar34._8_4_;
  auVar51._12_4_ = fVar19 * fVar19 * fVar4;
  fVar22 = fVar22 * fVar27 * fVar30;
  fVar30 = fVar43 * fVar25 * fVar55;
  fVar40 = fVar33 * fVar26 * fVar20;
  fVar27 = fVar5 * fVar5 * fVar2;
  fVar28 = fVar14 * fVar14 * fVar3;
  fVar29 = fVar6 * fVar6 * fVar4;
  fVar11 = fVar13 * auVar34._0_4_;
  auVar35._4_12_ = auVar34._4_12_;
  auVar35._0_4_ = fVar31;
  auVar37._0_8_ = auVar35._0_8_;
  auVar37._8_4_ = fVar33 * fVar33 * fVar20;
  auVar37._12_4_ = auVar34._12_4_;
  auVar36._8_8_ = auVar37._8_8_;
  auVar36._4_4_ = fVar42;
  auVar36._0_4_ = fVar31;
  auVar38._0_12_ = auVar36._0_12_;
  auVar38._12_4_ = fVar53 * fVar53 * fVar20;
  fVar12 = fVar5 * fVar13 * fVar2;
  fVar13 = fVar6 * fVar19 * fVar4;
  fVar2 = fVar8 * fVar5 * fVar2;
  fVar5 = fVar10 * fVar14 * fVar3;
  fVar9 = fVar9 * fVar6 * fVar4;
  auVar45._4_12_ = auVar44._4_12_;
  auVar45._0_4_ = fVar41;
  auVar47._0_8_ = auVar45._0_8_;
  auVar47._8_4_ = fVar53 * fVar33 * fVar20;
  auVar47._12_4_ = auVar44._12_4_;
  auVar46._8_8_ = auVar47._8_8_;
  auVar46._4_4_ = fVar54;
  auVar46._0_4_ = fVar41;
  auVar48._0_12_ = auVar46._0_12_;
  auVar48._12_4_ = fVar26 * fVar53 * fVar20;
  auVar39 = NEON_ext(auVar38,auVar38,8,1);
  auVar52 = NEON_ext(auVar51,auVar51,8,1);
  auVar49 = NEON_ext(auVar48,auVar48,8,1);
  auVar7._4_4_ = fVar12;
  auVar7._0_4_ = fVar11;
  auVar7._8_4_ = fVar19 * auVar34._8_4_;
  auVar7._12_4_ = fVar13;
  auVar17._4_4_ = fVar12;
  auVar17._0_4_ = fVar11;
  auVar17._8_4_ = fVar19 * auVar34._8_4_;
  auVar17._12_4_ = fVar13;
  auVar32 = NEON_ext(auVar7,auVar17,8,1);
  param_7[1] = CONCAT44(fVar21 + auVar44._0_4_ + auVar44._4_4_ + auVar44._8_4_ +
                                 fVar27 + fVar28 + fVar29,
                        fVar21 + auVar44._0_4_ + auVar44._4_4_ + auVar44._8_4_ +
                                 fVar27 + fVar28 + fVar29);
  *param_7 = CONCAT44(fVar21 + auVar39._4_4_ + fVar50 * fVar50 * fVar55 + fVar42 +
                               auVar52._4_4_ + fVar18 * fVar18 * fVar3 + fVar24,
                      fVar21 + auVar39._0_4_ + fVar43 * fVar43 * fVar55 + fVar31 +
                               auVar52._0_4_ + fVar10 * auVar34._4_4_ + fVar8 * auVar34._0_4_);
  param_7[3] = CONCAT44(fVar22 + fVar30 + fVar40 + fVar2 + fVar5 + fVar9,
                        fVar22 + fVar30 + fVar40 + fVar2 + fVar5 + fVar9);
  param_7[2] = CONCAT44(auVar49._4_4_ + fVar25 * fVar50 * fVar55 + fVar54 +
                        auVar32._4_4_ + fVar14 * fVar18 * fVar3 + fVar12,
                        auVar49._0_4_ + fVar50 * fVar43 * fVar55 + fVar41 +
                        auVar32._0_4_ + fVar18 * auVar34._4_4_ + fVar11);
  return;
}


