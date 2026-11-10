/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030244b0; name: FUN_030244b0
 */


void FUN_030244b0(undefined1 (*param_1) [12],undefined8 *param_2,long param_3,undefined8 *param_4,
                 float *param_5)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  lVar1 = *(long *)(param_3 + 0x30);
  lVar2 = *(long *)(param_3 + 0x38);
  uVar20 = *(undefined8 *)(*param_1 + 8);
  uVar8 = (undefined4)((ulong)uVar20 >> 0x20);
  uVar18 = *(undefined8 *)*param_1;
  fVar7 = (float)uVar18;
  fVar6 = (float)((ulong)uVar18 >> 0x20);
  auVar21._12_4_ = uVar8;
  auVar21._0_12_ = *param_1;
  auVar27._12_4_ = uVar8;
  auVar27._0_12_ = *param_1;
  auVar21 = NEON_ext(auVar21,auVar27,8,1);
  uVar5 = param_2[1];
  uVar23 = *param_2;
  uVar19 = *(undefined8 *)(lVar1 + 0x78);
  uVar17 = *(undefined8 *)(lVar1 + 0x70);
  param_4[1] = uVar20;
  *param_4 = uVar18;
  fVar9 = (float)uVar23 - (float)uVar17;
  fVar11 = (float)((ulong)uVar23 >> 0x20) - (float)((ulong)uVar17 >> 0x20);
  fVar13 = (float)uVar5 - (float)uVar19;
  fVar15 = (float)((ulong)uVar5 >> 0x20) - (float)((ulong)uVar19 >> 0x20);
  uVar18 = NEON_ext(uVar18,auVar21._0_8_,4,1);
  auVar22._0_4_ = fVar9 - *(float *)(lVar2 + 0x70);
  auVar22._4_4_ = fVar11 - *(float *)(lVar2 + 0x74);
  auVar22._8_4_ = fVar13 - *(float *)(lVar2 + 0x78);
  auVar22._12_4_ = fVar15 - *(float *)(lVar2 + 0x7c);
  auVar3._4_4_ = fVar11;
  auVar3._0_4_ = fVar9;
  auVar3._8_4_ = fVar13;
  auVar3._12_4_ = fVar15;
  auVar4._4_4_ = fVar11;
  auVar4._0_4_ = fVar9;
  auVar4._8_4_ = fVar13;
  auVar4._12_4_ = fVar15;
  auVar21 = NEON_ext(auVar3,auVar4,4,1);
  auVar27 = NEON_ext(auVar22,auVar22,4,1);
  fVar10 = (float)((ulong)uVar18 >> 0x20);
  fVar15 = fVar9 * (float)uVar18 - fVar7 * auVar21._0_4_;
  fVar11 = fVar11 * fVar10 - fVar6 * auVar21._4_4_;
  fVar13 = fVar13 * fVar7 - (float)uVar20 * fVar9;
  fVar9 = fVar7 * auVar27._0_4_ - (float)uVar18 * auVar22._0_4_;
  fVar6 = fVar6 * auVar27._4_4_ - fVar10 * auVar22._4_4_;
  fVar7 = (float)uVar20 * auVar22._0_4_ - fVar7 * auVar22._8_4_;
  fVar10 = *(float *)(lVar1 + 0x60) * fVar15 +
           *(float *)(lVar1 + 0x40) * fVar11 + *(float *)(lVar1 + 0x50) * fVar13;
  fVar12 = *(float *)(lVar1 + 100) * fVar15 +
           *(float *)(lVar1 + 0x44) * fVar11 + *(float *)(lVar1 + 0x54) * fVar13;
  fVar14 = *(float *)(lVar1 + 0x68) * fVar15 +
           *(float *)(lVar1 + 0x48) * fVar11 + *(float *)(lVar1 + 0x58) * fVar13;
  fVar16 = *(float *)(lVar1 + 0x6c) * fVar15 +
           *(float *)(lVar1 + 0x4c) * fVar11 + *(float *)(lVar1 + 0x5c) * fVar13;
  fVar15 = *(float *)(lVar2 + 0x60) * fVar9 +
           *(float *)(lVar2 + 0x40) * fVar6 + *(float *)(lVar2 + 0x50) * fVar7;
  fVar11 = *(float *)(lVar2 + 100) * fVar9 +
           *(float *)(lVar2 + 0x44) * fVar6 + *(float *)(lVar2 + 0x54) * fVar7;
  fVar13 = *(float *)(lVar2 + 0x68) * fVar9 +
           *(float *)(lVar2 + 0x48) * fVar6 + *(float *)(lVar2 + 0x58) * fVar7;
  fVar9 = *(float *)(lVar2 + 0x6c) * fVar9 +
          *(float *)(lVar2 + 0x4c) * fVar6 + *(float *)(lVar2 + 0x5c) * fVar7;
  auVar24._0_4_ = *(float *)(lVar1 + 0x30) + *(float *)(lVar2 + 0x30);
  auVar24._4_4_ = *(float *)(lVar1 + 0x34) + *(float *)(lVar2 + 0x34);
  auVar24._8_4_ = *(float *)(lVar1 + 0x38) + *(float *)(lVar2 + 0x38);
  auVar24._12_4_ = *(float *)(lVar1 + 0x3c) + *(float *)(lVar2 + 0x3c);
  auVar28._8_4_ = 0x28800000;
  auVar28._0_8_ = 0x2880000028800000;
  auVar28._12_4_ = 0x28800000;
  fVar7 = *(float *)(lVar1 + 0x30) * fVar10 * fVar10 + *(float *)(lVar2 + 0x30) * fVar15 * fVar15;
  fVar6 = *(float *)(lVar1 + 0x34) * fVar12 * fVar12 + *(float *)(lVar2 + 0x34) * fVar11 * fVar11;
  auVar25._4_4_ = fVar6;
  auVar25._0_4_ = fVar7;
  auVar25._12_4_ =
       *(float *)(lVar1 + 0x3c) * fVar16 * fVar16 + *(float *)(lVar2 + 0x3c) * fVar9 * fVar9;
  auVar25._8_4_ =
       *(float *)(lVar1 + 0x38) * fVar14 * fVar14 + *(float *)(lVar2 + 0x38) * fVar13 * fVar13;
  auVar21 = NEON_fmax(auVar24,auVar28,4);
  auVar26._0_12_ = auVar25._0_12_;
  auVar26._12_4_ = auVar21._12_4_;
  auVar21 = NEON_ext(auVar26,auVar26,8,1);
  fVar7 = fVar7 + fVar6;
  fVar6 = auVar21._0_4_ + auVar21._4_4_;
  fVar9 = fVar7 + fVar6;
  uVar18 = CONCAT44(fVar7 + fVar6,fVar9);
  uVar20 = NEON_frecpe(uVar18,4);
  uVar23 = NEON_frecps(uVar18,uVar20,4);
  fVar7 = (float)uVar20 * (float)uVar23;
  uVar18 = NEON_frecps(uVar18,CONCAT44((float)((ulong)uVar20 >> 0x20) *
                                       (float)((ulong)uVar23 >> 0x20),fVar7),4);
  fVar7 = fVar7 * (float)uVar18;
  param_4[3] = CONCAT44(fVar7,fVar14);
  param_4[2] = CONCAT44(fVar12,fVar10);
  param_4[5] = CONCAT44(fVar9,fVar13);
  param_4[4] = CONCAT44(fVar11,fVar15);
  *param_5 = fVar7;
  return;
}


