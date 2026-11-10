/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f2e18; name: FUN_030f2e18
 */


int FUN_030f2e18(float param_1,long param_2,undefined8 *param_3,long *param_4)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  long lVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar28;
  float fVar29;
  undefined1 auVar24 [16];
  float fVar30;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar39;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar40;
  float fVar41;
  undefined8 uVar42;
  float fVar44;
  undefined1 auVar43 [16];
  float fVar45;
  float fVar46;
  
  lVar9 = param_3[5];
  if ((lVar9 == -1) || ((int)param_4[1] < 1)) {
    iVar11 = -1;
  }
  else {
    lVar12 = 0;
    lVar13 = 1;
    iVar10 = -1;
    while( true ) {
      pfVar1 = (float *)(*param_4 + lVar12);
      fVar14 = (float)param_3[2] * pfVar1[4];
      fVar16 = (float)((ulong)param_3[2] >> 0x20) * pfVar1[5];
      fVar18 = (float)param_3[3] * pfVar1[6];
      fVar20 = (float)((ulong)param_3[3] >> 0x20) * pfVar1[7];
      auVar43._4_4_ = fVar16;
      auVar43._0_4_ = fVar14;
      auVar43._8_4_ = fVar18;
      auVar43._12_4_ = fVar20;
      auVar34._4_4_ = fVar16;
      auVar34._0_4_ = fVar14;
      auVar34._8_4_ = fVar18;
      auVar34._12_4_ = fVar20;
      auVar24 = NEON_ext(auVar43,auVar34,8,1);
      fVar22 = pfVar1[8];
      fVar18 = *(float *)(param_2 + 0x148);
      fVar20 = *(float *)(param_3 + 4);
      lVar9 = (**(code **)(**(long **)(param_2 + 0x48) + 0x80))(*(long **)(param_2 + 0x48),lVar9);
      lVar6 = (**(code **)(**(long **)(param_2 + 0x48) + 0x80))
                        (*(long **)(param_2 + 0x48),*(undefined8 *)(pfVar1 + 10));
      pauVar7 = (undefined1 (*) [16])
                (**(code **)(**(long **)(param_2 + 0x48) + 0x100))
                          (*(long **)(param_2 + 0x48),*(undefined4 *)(lVar9 + 0x80));
      pauVar8 = (undefined1 (*) [16])
                (**(code **)(**(long **)(param_2 + 0x48) + 0x100))
                          (*(long **)(param_2 + 0x48),*(undefined4 *)(lVar6 + 0x80));
      auVar43 = *pauVar7;
      auVar34 = pauVar7[7];
      auVar32 = NEON_ext(auVar43,auVar43,8,1);
      fVar23 = auVar43._0_4_;
      fVar40 = auVar34._0_4_;
      fVar28 = auVar43._4_4_;
      fVar45 = auVar34._4_4_;
      fVar29 = auVar43._8_4_;
      fVar46 = auVar34._8_4_;
      fVar30 = auVar43._12_4_;
      fVar15 = (float)*param_3 - (float)*(double *)pauVar7[1];
      fVar17 = (float)((ulong)*param_3 >> 0x20) - (float)*(double *)(pauVar7[1] + 8);
      fVar19 = (float)param_3[1] - (float)*(double *)pauVar7[2];
      fVar21 = (float)((ulong)param_3[1] >> 0x20) - 0.0;
      fVar39 = auVar32._4_4_ * auVar32._4_4_;
      fVar41 = fVar23 * fVar40 + fVar28 * fVar45 + fVar29 * fVar46;
      fVar44 = fVar23 * fVar40 + fVar28 * fVar45 + fVar29 * fVar46;
      fVar36 = fVar39 + -0.5;
      fVar39 = fVar39 + -0.5;
      uVar31 = NEON_ext(auVar43._0_8_,auVar32._0_8_,4,1);
      auVar43 = NEON_ext(auVar34,auVar34,8,1);
      uVar42 = NEON_ext(auVar34._0_8_,auVar43._0_8_,4,1);
      auVar33._0_4_ = fVar23 * (float)uVar42 - fVar40 * (float)uVar31;
      auVar33._4_4_ =
           fVar28 * (float)((ulong)uVar42 >> 0x20) - fVar45 * (float)((ulong)uVar31 >> 0x20);
      auVar33._8_4_ = fVar29 * fVar40 - fVar46 * fVar23;
      auVar33._12_4_ = fVar30 * fVar45 - auVar34._12_4_ * fVar28;
      auVar43 = pauVar8[7];
      auVar32 = NEON_ext(auVar33,auVar33,4,1);
      fVar23 = fVar40 * fVar36 + fVar23 * fVar41 + auVar32._0_4_ * fVar30;
      fVar28 = fVar45 * fVar39 + fVar28 * fVar44 + auVar32._4_4_ * fVar30;
      fVar29 = fVar46 * fVar36 + fVar29 * fVar41 + auVar33._0_4_ * fVar30;
      fVar30 = auVar34._12_4_ * fVar39 + fVar30 * fVar44 + auVar33._4_4_ * fVar30;
      auVar32._4_4_ = fVar17;
      auVar32._0_4_ = fVar15;
      auVar32._8_4_ = fVar19;
      auVar32._12_4_ = fVar21;
      auVar37._4_4_ = fVar17;
      auVar37._0_4_ = fVar15;
      auVar37._8_4_ = fVar19;
      auVar37._12_4_ = fVar21;
      auVar32 = NEON_ext(auVar32,auVar37,4,1);
      auVar25._0_4_ = fVar23 + fVar23;
      auVar25._4_4_ = fVar28 + fVar28;
      auVar25._8_4_ = fVar29 + fVar29;
      auVar25._12_4_ = fVar30 + fVar30;
      auVar34 = NEON_ext(auVar25,auVar25,4,1);
      fVar23 = auVar32._0_4_ * auVar25._0_4_ - fVar15 * auVar34._0_4_;
      fVar28 = auVar32._4_4_ * auVar25._4_4_ - fVar17 * auVar34._4_4_;
      fVar15 = fVar15 * auVar25._8_4_ - fVar19 * auVar25._0_4_;
      fVar17 = fVar17 * auVar25._12_4_ - fVar21 * auVar25._4_4_;
      auVar2._4_4_ = fVar28;
      auVar2._0_4_ = fVar23;
      auVar2._8_4_ = fVar15;
      auVar2._12_4_ = fVar17;
      auVar3._4_4_ = fVar28;
      auVar3._0_4_ = fVar23;
      auVar3._8_4_ = fVar15;
      auVar3._12_4_ = fVar17;
      auVar32 = NEON_ext(auVar2,auVar3,4,1);
      auVar34 = *pauVar8;
      auVar37 = NEON_ext(auVar34,auVar34,8,1);
      fVar15 = auVar34._0_4_;
      fVar36 = auVar43._0_4_;
      fVar17 = auVar34._4_4_;
      fVar39 = auVar43._4_4_;
      fVar19 = auVar34._8_4_;
      fVar40 = auVar43._8_4_;
      fVar21 = auVar34._12_4_;
      auVar26._0_4_ = *pfVar1 - (float)*(double *)pauVar8[1];
      auVar26._4_4_ = pfVar1[1] - (float)*(double *)(pauVar8[1] + 8);
      auVar26._8_4_ = pfVar1[2] - (float)*(double *)pauVar8[2];
      auVar26._12_4_ = pfVar1[3] - 0.0;
      fVar30 = auVar37._4_4_ * auVar37._4_4_;
      fVar45 = fVar15 * fVar36 + fVar17 * fVar39 + fVar19 * fVar40;
      fVar46 = fVar15 * fVar36 + fVar17 * fVar39 + fVar19 * fVar40;
      fVar29 = fVar30 + -0.5;
      fVar30 = fVar30 + -0.5;
      uVar31 = NEON_ext(auVar34._0_8_,auVar37._0_8_,4,1);
      auVar34 = NEON_ext(auVar43,auVar43,8,1);
      uVar42 = NEON_ext(auVar43._0_8_,auVar34._0_8_,4,1);
      auVar38._0_4_ = fVar15 * (float)uVar42 - fVar36 * (float)uVar31;
      auVar38._4_4_ =
           fVar17 * (float)((ulong)uVar42 >> 0x20) - fVar39 * (float)((ulong)uVar31 >> 0x20);
      auVar38._8_4_ = fVar19 * fVar36 - fVar40 * fVar15;
      auVar38._12_4_ = fVar21 * fVar39 - auVar43._12_4_ * fVar17;
      auVar34 = NEON_ext(auVar38,auVar38,4,1);
      fVar15 = fVar36 * fVar29 + fVar15 * fVar45 + auVar34._0_4_ * fVar21;
      fVar17 = fVar39 * fVar30 + fVar17 * fVar46 + auVar34._4_4_ * fVar21;
      fVar19 = fVar40 * fVar29 + fVar19 * fVar45 + auVar38._0_4_ * fVar21;
      fVar21 = auVar43._12_4_ * fVar30 + fVar21 * fVar46 + auVar38._4_4_ * fVar21;
      auVar34 = NEON_ext(auVar26,auVar26,4,1);
      auVar35._0_4_ = fVar15 + fVar15;
      auVar35._4_4_ = fVar17 + fVar17;
      auVar35._8_4_ = fVar19 + fVar19;
      auVar35._12_4_ = fVar21 + fVar21;
      auVar43 = NEON_ext(auVar35,auVar35,4,1);
      auVar27._0_4_ = auVar34._0_4_ * auVar35._0_4_ - auVar26._0_4_ * auVar43._0_4_;
      auVar27._4_4_ = auVar34._4_4_ * auVar35._4_4_ - auVar26._4_4_ * auVar43._4_4_;
      auVar27._8_4_ = auVar26._0_4_ * auVar35._8_4_ - auVar26._8_4_ * auVar35._0_4_;
      auVar27._12_4_ = auVar26._4_4_ * auVar35._12_4_ - auVar26._12_4_ * auVar35._4_4_;
      auVar43 = NEON_ext(auVar27,auVar27,4,1);
      fVar15 = ((float)*(undefined8 *)pauVar7[6] + auVar32._0_4_) -
               (*(float *)pauVar8[6] + auVar43._0_4_);
      fVar17 = ((float)((ulong)*(undefined8 *)pauVar7[6] >> 0x20) + auVar32._4_4_) -
               (*(float *)(pauVar8[6] + 4) + auVar43._4_4_);
      fVar23 = ((float)*(undefined8 *)(pauVar7[6] + 8) + fVar23) -
               (*(float *)(pauVar8[6] + 8) + auVar27._0_4_);
      fVar28 = ((float)((ulong)*(undefined8 *)(pauVar7[6] + 8) >> 0x20) + fVar28) -
               (*(float *)(pauVar8[6] + 0xc) + auVar27._4_4_);
      fVar15 = fVar15 * fVar15;
      fVar17 = fVar17 * fVar17;
      fVar23 = fVar23 * fVar23;
      fVar28 = fVar28 * fVar28;
      auVar4._4_4_ = fVar17;
      auVar4._0_4_ = fVar15;
      auVar4._8_4_ = fVar23;
      auVar4._12_4_ = fVar28;
      auVar5._4_4_ = fVar17;
      auVar5._0_4_ = fVar15;
      auVar5._8_4_ = fVar23;
      auVar5._12_4_ = fVar28;
      auVar43 = NEON_ext(auVar4,auVar5,8,1);
      fVar14 = (fVar20 - fVar22) * (fVar20 - fVar22) +
               fVar18 * fVar18 * (1.0 - (fVar14 + fVar16 + auVar24._0_4_)) * 10.0 +
               (fVar15 + fVar17 + auVar43._0_4_) * 0.1;
      iVar11 = (int)lVar13 + -1;
      if (param_1 <= fVar14) {
        iVar11 = iVar10;
      }
      if ((int)param_4[1] <= lVar13) break;
      lVar9 = param_3[5];
      lVar13 = lVar13 + 1;
      if (param_1 <= fVar14) {
        fVar14 = param_1;
      }
      param_1 = fVar14;
      lVar12 = lVar12 + 0x40;
      iVar10 = iVar11;
    }
  }
  return iVar11;
}


