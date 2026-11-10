/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03026260; name: FUN_03026260
 */


void FUN_03026260(undefined8 *param_1,long param_2,undefined1 (*param_3) [16],
                 undefined1 (*param_4) [16],undefined8 *param_5)

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
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar26;
  float fVar27;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar40;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar41;
  float fVar42;
  float fVar45;
  undefined1 auVar43 [16];
  float fVar46;
  undefined1 auVar44 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar52;
  float fVar53;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar50 [16];
  float fVar54;
  undefined1 auVar51 [16];
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auVar64 [16];
  float fVar65;
  undefined8 uVar66;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  
  auVar73 = *(undefined1 (*) [16])(param_3[2] + 8);
  fVar72 = auVar73._12_4_;
  auVar64 = *(undefined1 (*) [16])(param_4[2] + 8);
  fVar58 = (float)*(double *)param_4[1];
  fVar40 = auVar64._12_4_;
  fVar41 = (float)*(double *)param_3[1];
  auVar67 = *param_3;
  auVar74 = NEON_ext(auVar73,auVar73,8,1);
  fVar63 = (float)*(double *)(param_4[1] + 8);
  fVar47 = (float)*(double *)(param_3[1] + 8);
  fVar54 = auVar73._0_4_;
  fVar65 = auVar67._0_4_;
  fVar21 = auVar73._4_4_;
  fVar69 = auVar67._4_4_;
  fVar23 = auVar73._8_4_;
  fVar70 = auVar67._8_4_;
  auVar43 = NEON_ext(auVar67,auVar67,8,1);
  uVar11 = NEON_ext(auVar73._0_8_,auVar74._0_8_,4,1);
  uVar66 = NEON_ext(auVar67._0_8_,auVar43._0_8_,4,1);
  fVar45 = auVar43._4_4_ * auVar43._4_4_;
  fVar71 = auVar67._12_4_;
  fVar42 = fVar54 * fVar65 + fVar21 * fVar69 + fVar23 * fVar70;
  fVar46 = fVar54 * fVar65 + fVar21 * fVar69 + fVar23 * fVar70;
  fVar26 = (float)*(undefined8 *)(param_3[3] + 8) - (float)*(undefined8 *)(param_4[3] + 8);
  fVar31 = (float)((ulong)*(undefined8 *)(param_3[3] + 8) >> 0x20) -
           (float)((ulong)*(undefined8 *)(param_4[3] + 8) >> 0x20);
  fVar12 = (float)*(double *)param_3[2];
  fVar9 = fVar45 + -0.5;
  fVar45 = fVar45 + -0.5;
  fVar13 = (float)*(double *)param_4[2];
  fVar16 = (float)*(undefined8 *)(param_2 + 0x18);
  fVar17 = (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
  fVar14 = (float)*(undefined8 *)(param_2 + 0x10);
  fVar15 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
  fVar48 = fVar14 * fVar26;
  fVar52 = fVar15 * fVar31;
  fVar55 = fVar16 * (fVar72 - fVar40);
  fVar10 = fVar48 + fVar52 + fVar55;
  fVar55 = fVar48 + fVar52 + fVar55;
  fVar24 = (float)*param_1;
  fVar18 = fVar24 * (fVar26 - fVar14 * fVar10);
  fVar25 = (float)((ulong)*param_1 >> 0x20);
  fVar22 = fVar25 * (fVar31 - fVar15 * fVar55);
  fVar24 = fVar24 * ((fVar72 - fVar40) - fVar16 * fVar10);
  fVar25 = fVar25 * (0.0 - fVar17 * fVar55);
  fVar49 = *(float *)(param_2 + 0x50) + fVar18;
  fVar53 = *(float *)(param_2 + 0x54) + fVar22;
  fVar56 = *(float *)(param_2 + 0x58) + fVar24;
  fVar57 = *(float *)(param_2 + 0x5c) + fVar25;
  fVar27 = *(float *)(param_2 + 0x40) + fVar18;
  fVar32 = *(float *)(param_2 + 0x44) + fVar22;
  fVar33 = *(float *)(param_2 + 0x48) + fVar24;
  fVar34 = *(float *)(param_2 + 0x4c) + fVar25;
  fVar26 = *(float *)(param_2 + 0x70) + fVar18;
  fVar31 = *(float *)(param_2 + 0x74) + fVar22;
  fVar48 = *(float *)(param_2 + 0x78) + fVar24;
  fVar52 = *(float *)(param_2 + 0x7c) + fVar25;
  fVar59 = fVar49 - fVar41;
  fVar60 = fVar53 - fVar47;
  fVar61 = fVar56 - fVar12;
  fVar62 = fVar57 - 0.0;
  fVar18 = *(float *)(param_2 + 0x60) + fVar18;
  fVar22 = *(float *)(param_2 + 100) + fVar22;
  fVar24 = *(float *)(param_2 + 0x68) + fVar24;
  fVar25 = *(float *)(param_2 + 0x6c) + fVar25;
  fVar75 = fVar27 - fVar41;
  fVar76 = fVar32 - fVar47;
  fVar77 = fVar33 - fVar12;
  fVar78 = fVar34 - 0.0;
  auVar35._0_4_ = fVar27 - fVar58;
  auVar35._4_4_ = fVar32 - fVar63;
  auVar35._8_4_ = fVar33 - fVar13;
  auVar35._12_4_ = fVar34 - 0.0;
  auVar28._0_4_ = fVar49 - fVar58;
  auVar28._4_4_ = fVar53 - fVar63;
  auVar28._8_4_ = fVar56 - fVar13;
  auVar28._12_4_ = fVar57 - 0.0;
  auVar50._0_4_ = (float)uVar11 * fVar65 - fVar54 * (float)uVar66;
  auVar50._4_4_ = (float)((ulong)uVar11 >> 0x20) * fVar69 - fVar21 * (float)((ulong)uVar66 >> 0x20);
  auVar50._8_4_ = fVar54 * fVar70 - fVar23 * fVar65;
  auVar50._12_4_ = fVar21 * fVar71 - fVar72 * fVar69;
  auVar44._0_4_ = fVar26 - fVar41;
  auVar44._4_4_ = fVar31 - fVar47;
  auVar44._8_4_ = fVar48 - fVar12;
  auVar44._12_4_ = fVar52 - 0.0;
  fVar41 = fVar18 - fVar41;
  fVar47 = fVar22 - fVar47;
  fVar12 = fVar24 - fVar12;
  fVar27 = fVar25 - 0.0;
  auVar73 = NEON_ext(auVar50,auVar50,4,1);
  auVar19._0_4_ = fVar18 - fVar58;
  auVar19._4_4_ = fVar22 - fVar63;
  auVar19._8_4_ = fVar24 - fVar13;
  auVar19._12_4_ = fVar25 - 0.0;
  fVar26 = fVar26 - fVar58;
  fVar31 = fVar31 - fVar63;
  fVar48 = fVar48 - fVar13;
  fVar52 = fVar52 - 0.0;
  fVar13 = fVar54 * fVar9 + fVar65 * fVar42 + auVar73._0_4_ * fVar71;
  fVar54 = fVar21 * fVar45 + fVar69 * fVar46 + auVar73._4_4_ * fVar71;
  fVar9 = fVar23 * fVar9 + fVar70 * fVar42 + auVar50._0_4_ * fVar71;
  fVar45 = fVar72 * fVar45 + fVar71 * fVar46 + auVar50._4_4_ * fVar71;
  auVar73 = *param_4;
  auVar67 = NEON_ext(auVar73,auVar73,8,1);
  fVar18 = auVar67._4_4_ * auVar67._4_4_;
  auVar51._0_4_ = fVar13 + fVar13;
  auVar51._4_4_ = fVar54 + fVar54;
  auVar51._8_4_ = fVar9 + fVar9;
  auVar51._12_4_ = fVar45 + fVar45;
  fVar54 = fVar18 + -0.5;
  fVar18 = fVar18 + -0.5;
  fVar9 = auVar64._0_4_;
  fVar21 = auVar73._0_4_;
  fVar45 = auVar64._4_4_;
  fVar22 = auVar73._4_4_;
  fVar13 = auVar64._8_4_;
  fVar23 = auVar73._8_4_;
  fVar24 = auVar73._12_4_;
  fVar72 = fVar9 * fVar21 + fVar45 * fVar22 + fVar13 * fVar23;
  fVar25 = fVar9 * fVar21 + fVar45 * fVar22 + fVar13 * fVar23;
  uVar66 = NEON_ext(auVar73._0_8_,auVar67._0_8_,4,1);
  auVar73 = NEON_ext(auVar64,auVar64,8,1);
  uVar11 = NEON_ext(auVar64._0_8_,auVar73._0_8_,4,1);
  auVar38._0_4_ = (float)uVar11 * fVar21 - fVar9 * (float)uVar66;
  auVar38._4_4_ = (float)((ulong)uVar11 >> 0x20) * fVar22 - fVar45 * (float)((ulong)uVar66 >> 0x20);
  auVar38._8_4_ = fVar9 * fVar23 - fVar13 * fVar21;
  auVar38._12_4_ = fVar45 * fVar24 - fVar40 * fVar22;
  auVar73 = NEON_ext(auVar38,auVar38,4,1);
  auVar64 = NEON_ext(auVar51,auVar51,4,1);
  fVar9 = fVar9 * fVar54 + fVar21 * fVar72 + auVar73._0_4_ * fVar24;
  fVar45 = fVar45 * fVar18 + fVar22 * fVar25 + auVar73._4_4_ * fVar24;
  fVar13 = fVar13 * fVar54 + fVar23 * fVar72 + auVar38._0_4_ * fVar24;
  fVar54 = fVar40 * fVar18 + fVar24 * fVar25 + auVar38._4_4_ * fVar24;
  auVar7._4_4_ = fVar76;
  auVar7._0_4_ = fVar75;
  auVar7._8_4_ = fVar77;
  auVar7._12_4_ = fVar78;
  auVar8._4_4_ = fVar76;
  auVar8._0_4_ = fVar75;
  auVar8._8_4_ = fVar77;
  auVar8._12_4_ = fVar78;
  auVar73 = NEON_ext(auVar7,auVar8,4,1);
  auVar39._0_4_ = fVar9 + fVar9;
  auVar39._4_4_ = fVar45 + fVar45;
  auVar39._8_4_ = fVar13 + fVar13;
  auVar39._12_4_ = fVar54 + fVar54;
  fVar13 = auVar64._0_4_;
  fVar54 = auVar64._4_4_;
  auVar5._4_4_ = fVar60;
  auVar5._0_4_ = fVar59;
  auVar5._8_4_ = fVar61;
  auVar5._12_4_ = fVar62;
  auVar6._4_4_ = fVar60;
  auVar6._0_4_ = fVar59;
  auVar6._8_4_ = fVar61;
  auVar6._12_4_ = fVar62;
  auVar43 = NEON_ext(auVar5,auVar6,4,1);
  auVar3._4_4_ = fVar47;
  auVar3._0_4_ = fVar41;
  auVar3._8_4_ = fVar12;
  auVar3._12_4_ = fVar27;
  auVar4._4_4_ = fVar47;
  auVar4._0_4_ = fVar41;
  auVar4._8_4_ = fVar12;
  auVar4._12_4_ = fVar27;
  auVar74 = NEON_ext(auVar3,auVar4,4,1);
  auVar68 = NEON_ext(auVar44,auVar44,4,1);
  auVar67 = NEON_ext(auVar35,auVar35,4,1);
  auVar64 = NEON_ext(auVar39,auVar39,4,1);
  fVar9 = auVar64._0_4_;
  fVar45 = auVar64._4_4_;
  auVar64 = NEON_ext(auVar28,auVar28,4,1);
  auVar36._0_4_ =
       (auVar73._0_4_ * auVar51._0_4_ - fVar75 * fVar13) -
       (auVar67._0_4_ * auVar39._0_4_ - auVar35._0_4_ * fVar9);
  auVar36._4_4_ =
       (auVar73._4_4_ * auVar51._4_4_ - fVar76 * fVar54) -
       (auVar67._4_4_ * auVar39._4_4_ - auVar35._4_4_ * fVar45);
  auVar36._8_4_ =
       (fVar75 * auVar51._8_4_ - fVar77 * auVar51._0_4_) -
       (auVar35._0_4_ * auVar39._8_4_ - auVar35._8_4_ * auVar39._0_4_);
  auVar36._12_4_ =
       (fVar76 * auVar51._12_4_ - fVar78 * auVar51._4_4_) -
       (auVar35._4_4_ * auVar39._12_4_ - auVar35._12_4_ * auVar39._4_4_);
  auVar73 = NEON_ext(auVar19,auVar19,4,1);
  auVar29._0_4_ =
       (auVar43._0_4_ * auVar51._0_4_ - fVar59 * fVar13) -
       (auVar64._0_4_ * auVar39._0_4_ - auVar28._0_4_ * fVar9);
  auVar29._4_4_ =
       (auVar43._4_4_ * auVar51._4_4_ - fVar60 * fVar54) -
       (auVar64._4_4_ * auVar39._4_4_ - auVar28._4_4_ * fVar45);
  auVar29._8_4_ =
       (fVar59 * auVar51._8_4_ - fVar61 * auVar51._0_4_) -
       (auVar28._0_4_ * auVar39._8_4_ - auVar28._8_4_ * auVar39._0_4_);
  auVar29._12_4_ =
       (fVar60 * auVar51._12_4_ - fVar62 * auVar51._4_4_) -
       (auVar28._4_4_ * auVar39._12_4_ - auVar28._12_4_ * auVar39._4_4_);
  auVar67._4_4_ = fVar31;
  auVar67._0_4_ = fVar26;
  auVar67._8_4_ = fVar48;
  auVar67._12_4_ = fVar52;
  auVar43._4_4_ = fVar31;
  auVar43._0_4_ = fVar26;
  auVar43._8_4_ = fVar48;
  auVar43._12_4_ = fVar52;
  auVar64 = NEON_ext(auVar67,auVar43,4,1);
  auVar20._0_4_ =
       (auVar74._0_4_ * auVar51._0_4_ - fVar41 * fVar13) -
       (auVar73._0_4_ * auVar39._0_4_ - auVar19._0_4_ * fVar9);
  auVar20._4_4_ =
       (auVar74._4_4_ * auVar51._4_4_ - fVar47 * fVar54) -
       (auVar73._4_4_ * auVar39._4_4_ - auVar19._4_4_ * fVar45);
  auVar20._8_4_ =
       (fVar41 * auVar51._8_4_ - fVar12 * auVar51._0_4_) -
       (auVar19._0_4_ * auVar39._8_4_ - auVar19._8_4_ * auVar39._0_4_);
  auVar20._12_4_ =
       (fVar47 * auVar51._12_4_ - fVar27 * auVar51._4_4_) -
       (auVar19._4_4_ * auVar39._12_4_ - auVar19._12_4_ * auVar39._4_4_);
  auVar43 = NEON_ext(auVar36,auVar36,4,1);
  auVar67 = NEON_ext(auVar29,auVar29,4,1);
  fVar9 = (auVar68._0_4_ * auVar51._0_4_ - auVar44._0_4_ * fVar13) -
          (auVar64._0_4_ * auVar39._0_4_ - fVar26 * fVar9);
  fVar12 = (auVar68._4_4_ * auVar51._4_4_ - auVar44._4_4_ * fVar54) -
           (auVar64._4_4_ * auVar39._4_4_ - fVar31 * fVar45);
  fVar45 = (auVar44._0_4_ * auVar51._8_4_ - auVar44._8_4_ * auVar51._0_4_) -
           (fVar26 * auVar39._8_4_ - fVar48 * auVar39._0_4_);
  fVar13 = (auVar44._4_4_ * auVar51._12_4_ - auVar44._12_4_ * auVar51._4_4_) -
           (fVar31 * auVar39._12_4_ - fVar52 * auVar39._4_4_);
  auVar64 = NEON_ext(auVar20,auVar20,4,1);
  auVar74._4_4_ = fVar12;
  auVar74._0_4_ = fVar9;
  auVar74._8_4_ = fVar45;
  auVar74._12_4_ = fVar13;
  auVar68._4_4_ = fVar12;
  auVar68._0_4_ = fVar9;
  auVar68._8_4_ = fVar45;
  auVar68._12_4_ = fVar13;
  auVar73 = NEON_ext(auVar74,auVar68,4,1);
  fVar45 = fVar14 * auVar43._0_4_;
  fVar13 = fVar15 * auVar43._4_4_;
  auVar1._4_4_ = fVar13;
  auVar1._0_4_ = fVar45;
  auVar1._8_4_ = fVar16 * auVar36._0_4_;
  auVar1._12_4_ = fVar17 * auVar36._4_4_;
  auVar2._4_4_ = fVar13;
  auVar2._0_4_ = fVar45;
  auVar2._8_4_ = fVar16 * auVar36._0_4_;
  auVar2._12_4_ = fVar17 * auVar36._4_4_;
  auVar43 = NEON_ext(auVar1,auVar2,8,1);
  auVar37._0_4_ = fVar14 * auVar67._0_4_;
  auVar37._4_4_ = fVar15 * auVar67._4_4_;
  auVar37._8_4_ = fVar16 * auVar29._0_4_;
  auVar37._12_4_ = fVar17 * auVar29._4_4_;
  auVar67 = NEON_ext(auVar37,auVar37,8,1);
  auVar30._0_4_ = fVar14 * auVar64._0_4_;
  auVar30._4_4_ = fVar15 * auVar64._4_4_;
  auVar30._8_4_ = fVar16 * auVar20._0_4_;
  auVar30._12_4_ = fVar17 * auVar20._4_4_;
  fVar14 = fVar14 * auVar73._0_4_;
  fVar15 = fVar15 * auVar73._4_4_;
  auVar74 = NEON_ext(auVar30,auVar30,8,1);
  auVar73._4_4_ = fVar15;
  auVar73._0_4_ = fVar14;
  auVar73._8_4_ = fVar16 * fVar9;
  auVar73._12_4_ = fVar17 * fVar12;
  auVar64._4_4_ = fVar15;
  auVar64._0_4_ = fVar14;
  auVar64._8_4_ = fVar16 * fVar9;
  auVar64._12_4_ = fVar17 * fVar12;
  auVar73 = NEON_ext(auVar73,auVar64,8,1);
  param_5[1] = CONCAT44(fVar55 + fVar14 + fVar15 + auVar73._0_4_,
                        fVar10 + auVar30._0_4_ + auVar30._4_4_ + auVar74._0_4_);
  *param_5 = CONCAT44(fVar55 + auVar37._0_4_ + auVar37._4_4_ + auVar67._0_4_,
                      fVar10 + fVar45 + fVar13 + auVar43._0_4_);
  return;
}


