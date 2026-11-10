/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0301f720; name: FUN_0301f720
 */


void FUN_0301f720(undefined1 (*param_1) [16],long param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 *puVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar11 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  
  pauVar1 = param_1 + 2;
  uVar23 = *(undefined8 *)(param_1[2] + 8);
  fVar8 = (float)uVar23;
  uVar9 = (undefined4)((ulong)uVar23 >> 0x20);
  uVar4 = *(undefined8 *)*pauVar1;
  fVar20 = (float)uVar4;
  fVar14 = (float)((ulong)uVar4 >> 0x20);
  auVar28._12_4_ = uVar9;
  auVar28._0_12_ = *(undefined1 (*) [12])*pauVar1;
  auVar24._12_4_ = uVar9;
  auVar24._0_12_ = *(undefined1 (*) [12])*pauVar1;
  auVar24 = NEON_ext(auVar28,auVar24,8,1);
  puVar7 = (undefined8 *)*param_3;
  lVar2 = *(long *)(param_2 + 0x30);
  lVar3 = *(long *)(param_2 + 0x38);
  fVar10 = *(float *)(param_2 + 8);
  puVar7[1] = uVar23;
  *puVar7 = uVar4;
  auVar28 = *param_1;
  auVar27 = NEON_ext(auVar28,auVar28,8,1);
  fVar13 = auVar28._0_4_;
  fVar15 = fVar13 - (float)*(undefined8 *)(lVar3 + 0x70);
  fVar17 = auVar28._4_4_ - (float)((ulong)*(undefined8 *)(lVar3 + 0x70) >> 0x20);
  fVar19 = auVar28._8_4_ - (float)*(undefined8 *)(lVar3 + 0x78);
  fVar22 = auVar28._12_4_ - (float)((ulong)*(undefined8 *)(lVar3 + 0x78) >> 0x20);
  uVar23 = NEON_ext(uVar4,auVar24._0_8_,4,1);
  uVar26 = NEON_ext(auVar28._0_8_,auVar27._0_8_,4,1);
  auVar27._4_4_ = fVar17;
  auVar27._0_4_ = fVar15;
  auVar27._8_4_ = fVar19;
  auVar27._12_4_ = fVar22;
  auVar5._4_4_ = fVar17;
  auVar5._0_4_ = fVar15;
  auVar5._8_4_ = fVar19;
  auVar5._12_4_ = fVar22;
  auVar24 = NEON_ext(auVar27,auVar5,4,1);
  fVar18 = (float)((ulong)uVar23 >> 0x20);
  fVar22 = fVar13 * (float)uVar23 - fVar20 * (float)uVar26;
  fVar12 = auVar28._4_4_ * fVar18 - fVar14 * (float)((ulong)uVar26 >> 0x20);
  fVar13 = auVar28._8_4_ * fVar20 - fVar8 * fVar13;
  fVar16 = fVar20 * auVar24._0_4_ - (float)uVar23 * fVar15;
  fVar18 = fVar14 * auVar24._4_4_ - fVar18 * fVar17;
  fVar20 = fVar8 * fVar15 - fVar20 * fVar19;
  fVar15 = *(float *)(lVar2 + 0x60) * fVar22 +
           *(float *)(lVar2 + 0x40) * fVar12 + *(float *)(lVar2 + 0x50) * fVar13;
  fVar17 = *(float *)(lVar2 + 100) * fVar22 +
           *(float *)(lVar2 + 0x44) * fVar12 + *(float *)(lVar2 + 0x54) * fVar13;
  fVar19 = *(float *)(lVar2 + 0x68) * fVar22 +
           *(float *)(lVar2 + 0x48) * fVar12 + *(float *)(lVar2 + 0x58) * fVar13;
  fVar14 = *(float *)(lVar2 + 0x6c) * fVar22 +
           *(float *)(lVar2 + 0x4c) * fVar12 + *(float *)(lVar2 + 0x5c) * fVar13;
  fVar35 = (float)*(undefined8 *)(lVar3 + 0x38);
  fVar36 = (float)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20);
  fVar33 = (float)*(undefined8 *)(lVar3 + 0x30);
  fVar34 = (float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20);
  fVar22 = (float)*(undefined8 *)(lVar3 + 0x60) * fVar16 +
           (float)*(undefined8 *)(lVar3 + 0x40) * fVar18 +
           (float)*(undefined8 *)(lVar3 + 0x50) * fVar20;
  fVar12 = (float)((ulong)*(undefined8 *)(lVar3 + 0x60) >> 0x20) * fVar16 +
           (float)((ulong)*(undefined8 *)(lVar3 + 0x40) >> 0x20) * fVar18 +
           (float)((ulong)*(undefined8 *)(lVar3 + 0x50) >> 0x20) * fVar20;
  fVar21 = (float)*(undefined8 *)(lVar3 + 0x68) * fVar16 +
           (float)*(undefined8 *)(lVar3 + 0x48) * fVar18 +
           (float)*(undefined8 *)(lVar3 + 0x58) * fVar20;
  fVar13 = (float)((ulong)*(undefined8 *)(lVar3 + 0x68) >> 0x20) * fVar16 +
           (float)((ulong)*(undefined8 *)(lVar3 + 0x48) >> 0x20) * fVar18 +
           (float)((ulong)*(undefined8 *)(lVar3 + 0x58) >> 0x20) * fVar20;
  auVar30._0_4_ = *(float *)(lVar2 + 0x30) + fVar33;
  auVar30._4_4_ = *(float *)(lVar2 + 0x34) + fVar34;
  auVar30._8_4_ = *(float *)(lVar2 + 0x38) + fVar35;
  auVar30._12_4_ = *(float *)(lVar2 + 0x3c) + fVar36;
  fVar20 = *(float *)(lVar2 + 0x30) * fVar15 * fVar15 + fVar33 * fVar22 * fVar22;
  fVar16 = *(float *)(lVar2 + 0x34) * fVar17 * fVar17 + fVar34 * fVar12 * fVar12;
  auVar25._0_8_ = CONCAT44(fVar16,fVar20);
  auVar25._8_4_ = *(float *)(lVar2 + 0x38) * fVar19 * fVar19 + fVar35 * fVar21 * fVar21;
  auVar25._12_4_ = *(float *)(lVar2 + 0x3c) * fVar14 * fVar14 + fVar36 * fVar13 * fVar13;
  auVar6._8_4_ = 0x28800000;
  auVar6._0_8_ = 0x2880000028800000;
  auVar6._12_4_ = 0x28800000;
  auVar28 = NEON_fmax(auVar30,auVar6,4);
  auVar31._8_8_ = auVar25._8_8_;
  auVar31._0_8_ = auVar25._0_8_;
  auVar32._0_12_ = auVar31._0_12_;
  auVar32._12_4_ = auVar28._12_4_;
  auVar28 = NEON_ext(auVar32,auVar32,8,1);
  fVar20 = fVar20 + fVar16;
  fVar13 = auVar28._0_4_ + auVar28._4_4_;
  fVar14 = fVar20 + fVar13;
  uVar23 = CONCAT44(fVar20 + fVar13,fVar14);
  uVar26 = NEON_frecpe(uVar23,4);
  uVar29 = NEON_frecps(uVar23,uVar26,4);
  fVar20 = (float)uVar26 * (float)uVar29;
  uVar23 = NEON_frecps(uVar23,CONCAT44((float)((ulong)uVar26 >> 0x20) *
                                       (float)((ulong)uVar29 >> 0x20),fVar20),4);
  *(float *)(puVar7 + 3) = fVar19;
  *(float *)((long)puVar7 + 0x1c) = fVar20 * (float)uVar23;
  *(float *)(puVar7 + 2) = fVar15;
  *(float *)((long)puVar7 + 0x14) = fVar17;
  puVar7[5] = CONCAT44(fVar14,fVar21);
  puVar7[4] = CONCAT44(fVar12,fVar22);
  auVar11._0_4_ =
       ((float)*(undefined8 *)param_1[1] - *(float *)*param_1) * (float)*(undefined8 *)param_1[2];
  auVar11._4_4_ =
       ((float)((ulong)*(undefined8 *)param_1[1] >> 0x20) - *(float *)(*param_1 + 4)) *
       (float)((ulong)*(undefined8 *)param_1[2] >> 0x20);
  auVar11._8_4_ =
       ((float)*(undefined8 *)(param_1[1] + 8) - *(float *)(*param_1 + 8)) *
       (float)*(undefined8 *)(param_1[2] + 8);
  auVar11._12_4_ =
       ((float)((ulong)*(undefined8 *)(param_1[1] + 8) >> 0x20) - *(float *)(*param_1 + 0xc)) *
       (float)((ulong)*(undefined8 *)(param_1[2] + 8) >> 0x20);
  auVar28 = NEON_ext(auVar11,auVar11,8,1);
  puVar7[1] = CONCAT44(fVar10 * (auVar11._0_4_ + auVar11._4_4_ + auVar28._0_4_),fVar8);
  *puVar7 = uVar4;
  uVar9 = *(undefined4 *)(param_1[3] + 4);
  *(undefined4 *)(puVar7 + 6) = *(undefined4 *)param_1[3];
  *(undefined4 *)((long)puVar7 + 0x34) = uVar9;
  *(undefined1 *)puVar7 = 6;
  *param_3 = puVar7 + 8;
  return;
}


