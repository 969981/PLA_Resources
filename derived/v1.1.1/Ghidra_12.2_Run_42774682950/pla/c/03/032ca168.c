/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ca168; name: FUN_032ca168
 */


undefined1  [16] FUN_032ca168(undefined1 (*param_1) [12])

{
  undefined1 (*pauVar1) [12];
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar11;
  float fVar12;
  undefined1 auVar10 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined8 uVar29;
  float fVar31;
  undefined1 auVar30 [16];
  undefined1 auVar32 [16];
  
  fVar12 = (float)*(undefined8 *)(*param_1 + 8);
  fVar13 = (float)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
  uVar19 = *(undefined8 *)*param_1;
  fVar9 = (float)uVar19;
  fVar11 = (float)((ulong)uVar19 >> 0x20);
  pauVar1 = (undefined1 (*) [12])(param_1[1] + 4);
  fVar15 = (float)*(undefined8 *)param_1[2];
  fVar17 = (float)((ulong)*(undefined8 *)param_1[2] >> 0x20);
  uVar27 = *(undefined8 *)*pauVar1;
  fVar16 = (float)uVar27;
  fVar18 = (float)((ulong)uVar27 >> 0x20);
  auVar3._12_4_ = fVar17;
  auVar3._0_12_ = *pauVar1;
  auVar4._12_4_ = fVar17;
  auVar4._0_12_ = *pauVar1;
  auVar30 = NEON_ext(auVar3,auVar4,8,1);
  uVar29 = NEON_ext(uVar27,auVar30._0_8_,4,1);
  pauVar1 = (undefined1 (*) [12])(param_1[2] + 8);
  fVar24 = (float)*(undefined8 *)(param_1[3] + 4);
  fVar25 = (float)((ulong)*(undefined8 *)(param_1[3] + 4) >> 0x20);
  uVar27 = *(undefined8 *)*pauVar1;
  fVar20 = (float)uVar27;
  fVar22 = (float)((ulong)uVar27 >> 0x20);
  fVar31 = (float)((ulong)uVar29 >> 0x20);
  uVar26 = NEON_fmov(0xbf800000,4);
  fVar14 = (float)uVar26;
  fVar21 = (float)((ulong)uVar26 >> 0x20);
  auVar30._12_4_ = fVar13;
  auVar30._0_12_ = *param_1;
  auVar32._12_4_ = fVar13;
  auVar32._0_12_ = *param_1;
  auVar30 = NEON_ext(auVar30,auVar32,8,1);
  uVar26 = NEON_ext(uVar19,auVar30._0_8_,4,1);
  uVar19 = NEON_fmax(CONCAT44(ABS(fVar9 * fVar9 + fVar11 * fVar11 + fVar12 * fVar12 + fVar21),
                              ABS(fVar9 * fVar9 + fVar11 * fVar11 + fVar12 * fVar12 + fVar14)),
                     CONCAT44(ABS(fVar16 * fVar16 + fVar18 * fVar18 + fVar15 * fVar15 + fVar21),
                              ABS(fVar16 * fVar16 + fVar18 * fVar18 + fVar15 * fVar15 + fVar14)),4);
  auVar28._0_4_ = fVar9 * (float)uVar29 - fVar16 * (float)uVar26;
  auVar28._4_4_ = fVar11 * fVar31 - fVar18 * (float)((ulong)uVar26 >> 0x20);
  auVar28._8_4_ = fVar12 * fVar16 - fVar15 * fVar9;
  auVar28._12_4_ = fVar13 * fVar18 - fVar17 * fVar11;
  auVar32 = NEON_ext(auVar28,auVar28,4,1);
  auVar7._12_4_ = fVar25;
  auVar7._0_12_ = *pauVar1;
  auVar8._12_4_ = fVar25;
  auVar8._0_12_ = *pauVar1;
  auVar30 = NEON_ext(auVar7,auVar8,8,1);
  uVar27 = NEON_ext(uVar27,auVar30._0_8_,4,1);
  uVar19 = NEON_fmax(uVar19,CONCAT44(ABS(fVar20 * fVar20 + fVar22 * fVar22 + fVar24 * fVar24 +
                                         fVar21),
                                     ABS(fVar20 * fVar20 + fVar22 * fVar22 + fVar24 * fVar24 +
                                         fVar14)),4);
  fVar21 = ABS(auVar32._0_4_ - fVar20);
  fVar23 = ABS(auVar32._4_4_ - fVar22);
  fVar13 = fVar16 * (float)uVar27 - fVar20 * (float)uVar29;
  fVar14 = fVar18 * (float)((ulong)uVar27 >> 0x20) - fVar22 * fVar31;
  fVar16 = fVar15 * fVar20 - fVar24 * fVar16;
  fVar18 = fVar17 * fVar22 - fVar25 * fVar18;
  auVar5._4_4_ = fVar14;
  auVar5._0_4_ = fVar13;
  auVar5._8_4_ = fVar16;
  auVar5._12_4_ = fVar18;
  auVar6._4_4_ = fVar14;
  auVar6._0_4_ = fVar13;
  auVar6._8_4_ = fVar16;
  auVar6._12_4_ = fVar18;
  auVar30 = NEON_ext(auVar5,auVar6,4,1);
  uVar27 = NEON_fmaxp(CONCAT44(fVar23,fVar21),CONCAT44(fVar23,fVar21),4);
  fVar9 = ABS(auVar30._0_4_ - fVar9);
  fVar11 = ABS(auVar30._4_4_ - fVar11);
  uVar27 = NEON_fmax(CONCAT44(ABS(auVar28._0_4_ - fVar24),ABS(auVar28._0_4_ - fVar24)),uVar27,4);
  uVar26 = NEON_fmaxp(CONCAT44(fVar11,fVar9),CONCAT44(fVar11,fVar9),4);
  uVar27 = NEON_fmax(CONCAT44((float)((ulong)uVar19 >> 0x20) * 0.5,(float)uVar19 * 0.5),uVar27,4);
  uVar19 = NEON_fmax(CONCAT44(ABS(fVar13 - fVar12),ABS(fVar13 - fVar12)),uVar26,4);
  uVar2 = NEON_fmax(uVar27,uVar19,4);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar2;
  return auVar10;
}


