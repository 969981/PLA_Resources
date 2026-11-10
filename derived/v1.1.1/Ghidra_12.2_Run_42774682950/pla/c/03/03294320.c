/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03294320; name: FUN_03294320
 */


undefined1  [16] FUN_03294320(undefined8 *param_1)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 (*pauVar5) [12];
  float fVar8;
  undefined1 auVar6 [16];
  float fVar9;
  undefined1 auVar7 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar23;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  
  if (*(int *)(param_1 + 1) == 2) {
    param_1 = (undefined8 *)*param_1;
    fVar18 = (float)param_1[1];
    fVar12 = (float)*param_1;
    fVar11 = (float)((ulong)*param_1 >> 0x20);
    fVar13 = fVar12 + *(float *)(param_1 + 2);
    fVar14 = fVar11 + *(float *)((long)param_1 + 0x14);
    fVar8 = fVar18 + *(float *)(param_1 + 3);
    fVar9 = (float)((ulong)param_1[1] >> 0x20) + *(float *)((long)param_1 + 0x1c);
    fVar12 = fVar12 * fVar13;
    fVar11 = fVar11 * fVar14;
    fVar18 = fVar18 * fVar8;
    fVar10 = fVar12 + fVar11 + fVar18;
    fVar18 = fVar12 + fVar11 + fVar18;
    if (fVar10 <= 0.001) goto LAB_03294444;
    uVar15 = NEON_frecpe(CONCAT44(fVar18,fVar10),4);
    uVar30 = NEON_frecps(CONCAT44(fVar18,fVar10),uVar15,4);
    fVar12 = (float)uVar15 * (float)uVar30;
    fVar11 = (float)((ulong)uVar15 >> 0x20) * (float)((ulong)uVar30 >> 0x20);
    uVar15 = NEON_frecps(CONCAT44(fVar18,fVar10),CONCAT44(fVar11,fVar12),4);
    fVar12 = fVar12 * (float)uVar15;
    fVar11 = fVar11 * (float)((ulong)uVar15 >> 0x20);
  }
  else {
    if (*(int *)(param_1 + 1) == 1) {
      return *(undefined1 (*) [16])*param_1;
    }
    pauVar5 = (undefined1 (*) [12])*param_1;
    fVar28 = (float)*(undefined8 *)(*pauVar5 + 8);
    fVar29 = (float)((ulong)*(undefined8 *)(*pauVar5 + 8) >> 0x20);
    uVar30 = *(undefined8 *)*pauVar5;
    fVar26 = (float)uVar30;
    fVar27 = (float)((ulong)uVar30 >> 0x20);
    auVar2 = *(undefined1 (*) [16])(pauVar5[1] + 4);
    pauVar1 = (undefined1 (*) [12])(pauVar5[2] + 8);
    fVar12 = (float)*(undefined8 *)(pauVar5[3] + 4);
    fVar10 = (float)((ulong)*(undefined8 *)(pauVar5[3] + 4) >> 0x20);
    uVar15 = *(undefined8 *)*pauVar1;
    fVar8 = (float)uVar15;
    fVar9 = (float)((ulong)uVar15 >> 0x20);
    auVar16._12_4_ = fVar10;
    auVar16._0_12_ = *pauVar1;
    auVar21._12_4_ = fVar10;
    auVar21._0_12_ = *pauVar1;
    auVar21 = NEON_ext(auVar16,auVar21,8,1);
    auVar16 = NEON_ext(auVar2,auVar2,8,1);
    uVar24 = NEON_ext(uVar15,auVar21._0_8_,4,1);
    uVar15 = NEON_ext(auVar2._0_8_,auVar16._0_8_,4,1);
    fVar13 = auVar2._0_4_;
    fVar14 = auVar2._4_4_;
    fVar25 = (float)((ulong)uVar24 >> 0x20);
    fVar11 = (float)((ulong)uVar15 >> 0x20);
    auVar22._0_4_ = fVar13 * (float)uVar24 - fVar8 * (float)uVar15;
    auVar22._4_4_ = fVar14 * fVar25 - fVar9 * fVar11;
    auVar22._8_4_ = auVar2._8_4_ * fVar8 - fVar12 * fVar13;
    auVar22._12_4_ = auVar2._12_4_ * fVar9 - fVar10 * fVar14;
    auVar16 = NEON_ext(auVar22,auVar22,4,1);
    fVar18 = fVar26 * auVar16._0_4_;
    fVar23 = fVar27 * auVar16._4_4_;
    fVar19 = fVar18 + fVar23 + fVar28 * auVar22._0_4_;
    uVar20 = CONCAT44(fVar18 + fVar23 + fVar28 * auVar22._0_4_,fVar19);
    if (ABS(fVar19) < 1e-05) {
LAB_03294444:
      return ZEXT816(0);
    }
    auVar17._12_4_ = fVar29;
    auVar17._0_12_ = *pauVar5;
    auVar4._12_4_ = fVar29;
    auVar4._0_12_ = *pauVar5;
    auVar21 = NEON_ext(auVar17,auVar4,8,1);
    uVar30 = NEON_ext(uVar30,auVar21._0_8_,4,1);
    fVar18 = (float)((ulong)uVar30 >> 0x20);
    auVar6._0_4_ = fVar26 * (float)uVar15 - fVar13 * (float)uVar30;
    auVar6._4_4_ = fVar27 * fVar11 - fVar14 * fVar18;
    auVar6._8_4_ = fVar28 * fVar13 - auVar2._8_4_ * fVar26;
    auVar6._12_4_ = fVar29 * fVar14 - auVar2._12_4_ * fVar27;
    auVar17 = NEON_ext(auVar6,auVar6,4,1);
    fVar11 = fVar8 * (float)uVar30 - fVar26 * (float)uVar24;
    fVar18 = fVar9 * fVar18 - fVar27 * fVar25;
    fVar13 = fVar12 * fVar26 - fVar28 * fVar8;
    fVar14 = fVar10 * fVar27 - fVar29 * fVar9;
    auVar2._4_4_ = fVar18;
    auVar2._0_4_ = fVar11;
    auVar2._8_4_ = fVar13;
    auVar2._12_4_ = fVar14;
    auVar3._4_4_ = fVar18;
    auVar3._0_4_ = fVar11;
    auVar3._8_4_ = fVar13;
    auVar3._12_4_ = fVar14;
    auVar21 = NEON_ext(auVar2,auVar3,4,1);
    uVar15 = NEON_frecpe(uVar20,4);
    fVar13 = auVar17._0_4_ + auVar16._0_4_ + auVar21._0_4_;
    fVar14 = auVar17._4_4_ + auVar16._4_4_ + auVar21._4_4_;
    fVar8 = auVar6._0_4_ + auVar22._0_4_ + fVar11;
    fVar9 = auVar6._4_4_ + auVar22._4_4_ + fVar18;
    uVar30 = NEON_frecps(uVar20,uVar15,4);
    fVar12 = (float)uVar15 * (float)uVar30;
    fVar11 = (float)((ulong)uVar15 >> 0x20) * (float)((ulong)uVar30 >> 0x20);
    uVar15 = NEON_frecps(uVar20,CONCAT44(fVar11,fVar12),4);
    fVar12 = fVar12 * (float)uVar15;
    fVar11 = fVar11 * (float)((ulong)uVar15 >> 0x20);
  }
  auVar7._0_4_ = fVar13 * fVar12;
  auVar7._4_4_ = fVar14 * fVar11;
  auVar7._8_4_ = fVar8 * fVar12;
  auVar7._12_4_ = fVar9 * fVar11;
  return auVar7;
}


