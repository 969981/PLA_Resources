/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0301f5f0; name: FUN_0301f5f0
 */


void FUN_0301f5f0(undefined1 (*param_1) [12],long param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [12];
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 *puVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  float fVar29;
  undefined1 auVar28 [16];
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  
  pauVar1 = (undefined1 (*) [12])(param_1[2] + 8);
  uVar30 = *(undefined8 *)(param_1[3] + 4);
  fVar11 = (float)uVar30;
  uVar12 = (undefined4)((ulong)uVar30 >> 0x20);
  uVar4 = *(undefined8 *)*pauVar1;
  fVar24 = (float)uVar4;
  fVar19 = (float)((ulong)uVar4 >> 0x20);
  auVar27._12_4_ = uVar12;
  auVar27._0_12_ = *pauVar1;
  auVar31._12_4_ = uVar12;
  auVar31._0_12_ = *pauVar1;
  auVar27 = NEON_ext(auVar27,auVar31,8,1);
  puVar10 = (undefined8 *)*param_3;
  lVar2 = *(long *)(param_2 + 0x30);
  lVar3 = *(long *)(param_2 + 0x38);
  fVar13 = *(float *)(param_2 + 0x74);
  puVar10[1] = uVar30;
  *puVar10 = uVar4;
  fVar17 = (float)*(undefined8 *)(*param_1 + 8);
  fVar25 = (float)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
  uVar30 = *(undefined8 *)*param_1;
  fVar18 = (float)uVar30;
  fVar15 = (float)((ulong)uVar30 >> 0x20);
  auVar5._12_4_ = fVar25;
  auVar5._0_12_ = *param_1;
  auVar6._12_4_ = fVar25;
  auVar6._0_12_ = *param_1;
  auVar31 = NEON_ext(auVar5,auVar6,8,1);
  fVar20 = fVar18 - (float)*(undefined8 *)(lVar3 + 0x70);
  fVar22 = fVar15 - (float)((ulong)*(undefined8 *)(lVar3 + 0x70) >> 0x20);
  fVar23 = fVar17 - (float)*(undefined8 *)(lVar3 + 0x78);
  fVar25 = fVar25 - (float)((ulong)*(undefined8 *)(lVar3 + 0x78) >> 0x20);
  uVar26 = NEON_ext(uVar4,auVar27._0_8_,4,1);
  uVar30 = NEON_ext(uVar30,auVar31._0_8_,4,1);
  auVar7._4_4_ = fVar22;
  auVar7._0_4_ = fVar20;
  auVar7._8_4_ = fVar23;
  auVar7._12_4_ = fVar25;
  auVar8._4_4_ = fVar22;
  auVar8._0_4_ = fVar20;
  auVar8._8_4_ = fVar23;
  auVar8._12_4_ = fVar25;
  auVar27 = NEON_ext(auVar7,auVar8,4,1);
  fVar29 = (float)((ulong)uVar26 >> 0x20);
  fVar25 = fVar18 * (float)uVar26 - fVar24 * (float)uVar30;
  fVar16 = fVar15 * fVar29 - fVar19 * (float)((ulong)uVar30 >> 0x20);
  fVar18 = fVar17 * fVar24 - fVar11 * fVar18;
  fVar21 = fVar24 * auVar27._0_4_ - (float)uVar26 * fVar20;
  fVar22 = fVar19 * auVar27._4_4_ - fVar29 * fVar22;
  fVar24 = fVar11 * fVar20 - fVar24 * fVar23;
  fVar15 = *(float *)(lVar2 + 0x60) * fVar25 +
           *(float *)(lVar2 + 0x40) * fVar16 + *(float *)(lVar2 + 0x50) * fVar18;
  fVar17 = *(float *)(lVar2 + 100) * fVar25 +
           *(float *)(lVar2 + 0x44) * fVar16 + *(float *)(lVar2 + 0x54) * fVar18;
  fVar20 = *(float *)(lVar2 + 0x68) * fVar25 +
           *(float *)(lVar2 + 0x48) * fVar16 + *(float *)(lVar2 + 0x58) * fVar18;
  fVar19 = *(float *)(lVar2 + 0x6c) * fVar25 +
           *(float *)(lVar2 + 0x4c) * fVar16 + *(float *)(lVar2 + 0x5c) * fVar18;
  fVar37 = (float)*(undefined8 *)(lVar3 + 0x38);
  fVar38 = (float)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20);
  fVar29 = (float)*(undefined8 *)(lVar3 + 0x30);
  fVar36 = (float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20);
  fVar25 = (float)*(undefined8 *)(lVar3 + 0x60) * fVar21 +
           (float)*(undefined8 *)(lVar3 + 0x40) * fVar22 +
           (float)*(undefined8 *)(lVar3 + 0x50) * fVar24;
  fVar16 = (float)((ulong)*(undefined8 *)(lVar3 + 0x60) >> 0x20) * fVar21 +
           (float)((ulong)*(undefined8 *)(lVar3 + 0x40) >> 0x20) * fVar22 +
           (float)((ulong)*(undefined8 *)(lVar3 + 0x50) >> 0x20) * fVar24;
  fVar23 = (float)*(undefined8 *)(lVar3 + 0x68) * fVar21 +
           (float)*(undefined8 *)(lVar3 + 0x48) * fVar22 +
           (float)*(undefined8 *)(lVar3 + 0x58) * fVar24;
  fVar18 = (float)((ulong)*(undefined8 *)(lVar3 + 0x68) >> 0x20) * fVar21 +
           (float)((ulong)*(undefined8 *)(lVar3 + 0x48) >> 0x20) * fVar22 +
           (float)((ulong)*(undefined8 *)(lVar3 + 0x58) >> 0x20) * fVar24;
  auVar33._0_4_ = *(float *)(lVar2 + 0x30) + fVar29;
  auVar33._4_4_ = *(float *)(lVar2 + 0x34) + fVar36;
  auVar33._8_4_ = *(float *)(lVar2 + 0x38) + fVar37;
  auVar33._12_4_ = *(float *)(lVar2 + 0x3c) + fVar38;
  fVar24 = *(float *)(lVar2 + 0x30) * fVar15 * fVar15 + fVar29 * fVar25 * fVar25;
  fVar21 = *(float *)(lVar2 + 0x34) * fVar17 * fVar17 + fVar36 * fVar16 * fVar16;
  auVar28._0_8_ = CONCAT44(fVar21,fVar24);
  auVar28._8_4_ = *(float *)(lVar2 + 0x38) * fVar20 * fVar20 + fVar37 * fVar23 * fVar23;
  auVar28._12_4_ = *(float *)(lVar2 + 0x3c) * fVar19 * fVar19 + fVar38 * fVar18 * fVar18;
  auVar9._8_4_ = 0x28800000;
  auVar9._0_8_ = 0x2880000028800000;
  auVar9._12_4_ = 0x28800000;
  auVar27 = NEON_fmax(auVar33,auVar9,4);
  auVar34._8_8_ = auVar28._8_8_;
  auVar34._0_8_ = auVar28._0_8_;
  auVar35._0_12_ = auVar34._0_12_;
  auVar35._12_4_ = auVar27._12_4_;
  auVar27 = NEON_ext(auVar35,auVar35,8,1);
  fVar24 = fVar24 + fVar21;
  fVar18 = auVar27._0_4_ + auVar27._4_4_;
  fVar19 = fVar24 + fVar18;
  uVar30 = CONCAT44(fVar24 + fVar18,fVar19);
  uVar26 = NEON_frecpe(uVar30,4);
  uVar32 = NEON_frecps(uVar30,uVar26,4);
  fVar24 = (float)uVar26 * (float)uVar32;
  uVar30 = NEON_frecps(uVar30,CONCAT44((float)((ulong)uVar26 >> 0x20) *
                                       (float)((ulong)uVar32 >> 0x20),fVar24),4);
  puVar10[3] = CONCAT44(fVar13 * fVar24 * (float)uVar30,fVar20);
  puVar10[2] = CONCAT44(fVar17,fVar15);
  puVar10[5] = CONCAT44(fVar19,fVar23);
  puVar10[4] = CONCAT44(fVar16,fVar25);
  auVar14._0_4_ =
       ((float)*(undefined8 *)(param_1[1] + 4) - *(float *)*param_1) *
       (float)*(undefined8 *)(param_1[2] + 8);
  auVar14._4_4_ =
       ((float)((ulong)*(undefined8 *)(param_1[1] + 4) >> 0x20) - *(float *)(*param_1 + 4)) *
       (float)((ulong)*(undefined8 *)(param_1[2] + 8) >> 0x20);
  auVar14._8_4_ =
       ((float)*(undefined8 *)param_1[2] - *(float *)(*param_1 + 8)) *
       (float)*(undefined8 *)(param_1[3] + 4);
  auVar14._12_4_ =
       ((float)((ulong)*(undefined8 *)param_1[2] >> 0x20) - *(float *)param_1[1]) *
       (float)((ulong)*(undefined8 *)(param_1[3] + 4) >> 0x20);
  auVar27 = NEON_ext(auVar14,auVar14,8,1);
  puVar10[1] = CONCAT44((auVar14._0_4_ + auVar14._4_4_ + auVar27._0_4_) * *(float *)(param_2 + 0x1c)
                        ,fVar11);
  *puVar10 = uVar4;
  *(undefined1 *)puVar10 = 4;
  *param_3 = puVar10 + 6;
  return;
}


