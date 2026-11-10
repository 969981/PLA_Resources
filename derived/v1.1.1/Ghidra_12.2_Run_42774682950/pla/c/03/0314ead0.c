/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0314ead0; name: FUN_0314ead0
 */


void FUN_0314ead0(long param_1,long param_2,undefined8 *param_3,undefined1 (*param_4) [12],
                 undefined8 *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  fVar8 = (float)*param_3 - *(float *)(param_1 + 0x70);
  fVar10 = (float)((ulong)*param_3 >> 0x20) - *(float *)(param_1 + 0x74);
  fVar12 = (float)param_3[1] - *(float *)(param_1 + 0x78);
  fVar14 = (float)((ulong)param_3[1] >> 0x20) - *(float *)(param_1 + 0x7c);
  uVar19 = *(undefined8 *)(*param_4 + 8);
  uVar7 = (undefined4)((ulong)uVar19 >> 0x20);
  uVar18 = *(undefined8 *)*param_4;
  auVar4 = *param_4;
  auVar3 = *param_4;
  fVar6 = (float)uVar18;
  fVar5 = (float)((ulong)uVar18 >> 0x20);
  param_5[1] = uVar19;
  *param_5 = uVar18;
  auVar20._12_4_ = uVar7;
  auVar20._0_12_ = auVar3;
  auVar25._12_4_ = uVar7;
  auVar25._0_12_ = auVar4;
  auVar20 = NEON_ext(auVar20,auVar25,8,1);
  uVar18 = NEON_ext(uVar18,auVar20._0_8_,4,1);
  auVar1._4_4_ = fVar10;
  auVar1._0_4_ = fVar8;
  auVar1._8_4_ = fVar12;
  auVar1._12_4_ = fVar14;
  auVar2._4_4_ = fVar10;
  auVar2._0_4_ = fVar8;
  auVar2._8_4_ = fVar12;
  auVar2._12_4_ = fVar14;
  auVar20 = NEON_ext(auVar1,auVar2,4,1);
  auVar16._0_4_ = fVar8 - *(float *)(param_2 + 0x70);
  auVar16._4_4_ = fVar10 - *(float *)(param_2 + 0x74);
  auVar16._8_4_ = fVar12 - *(float *)(param_2 + 0x78);
  auVar16._12_4_ = fVar14 - *(float *)(param_2 + 0x7c);
  auVar25 = NEON_ext(auVar16,auVar16,4,1);
  fVar9 = (float)((ulong)uVar18 >> 0x20);
  fVar14 = fVar8 * (float)uVar18 - fVar6 * auVar20._0_4_;
  fVar10 = fVar10 * fVar9 - fVar5 * auVar20._4_4_;
  fVar12 = fVar12 * fVar6 - (float)uVar19 * fVar8;
  fVar8 = fVar6 * auVar25._0_4_ - (float)uVar18 * auVar16._0_4_;
  fVar5 = fVar5 * auVar25._4_4_ - fVar9 * auVar16._4_4_;
  fVar6 = (float)uVar19 * auVar16._0_4_ - fVar6 * auVar16._8_4_;
  fVar9 = *(float *)(param_1 + 0x60) * fVar14 +
          *(float *)(param_1 + 0x40) * fVar10 + *(float *)(param_1 + 0x50) * fVar12;
  fVar11 = *(float *)(param_1 + 100) * fVar14 +
           *(float *)(param_1 + 0x44) * fVar10 + *(float *)(param_1 + 0x54) * fVar12;
  fVar13 = *(float *)(param_1 + 0x68) * fVar14 +
           *(float *)(param_1 + 0x48) * fVar10 + *(float *)(param_1 + 0x58) * fVar12;
  fVar15 = *(float *)(param_1 + 0x6c) * fVar14 +
           *(float *)(param_1 + 0x4c) * fVar10 + *(float *)(param_1 + 0x5c) * fVar12;
  fVar14 = *(float *)(param_2 + 0x60) * fVar8 +
           *(float *)(param_2 + 0x40) * fVar5 + *(float *)(param_2 + 0x50) * fVar6;
  fVar10 = *(float *)(param_2 + 100) * fVar8 +
           *(float *)(param_2 + 0x44) * fVar5 + *(float *)(param_2 + 0x54) * fVar6;
  fVar12 = *(float *)(param_2 + 0x68) * fVar8 +
           *(float *)(param_2 + 0x48) * fVar5 + *(float *)(param_2 + 0x58) * fVar6;
  fVar8 = *(float *)(param_2 + 0x6c) * fVar8 +
          *(float *)(param_2 + 0x4c) * fVar5 + *(float *)(param_2 + 0x5c) * fVar6;
  auVar17._0_4_ = *(float *)(param_1 + 0x30) + *(float *)(param_2 + 0x30);
  auVar17._4_4_ = *(float *)(param_1 + 0x34) + *(float *)(param_2 + 0x34);
  auVar17._8_4_ = *(float *)(param_1 + 0x38) + *(float *)(param_2 + 0x38);
  auVar17._12_4_ = *(float *)(param_1 + 0x3c) + *(float *)(param_2 + 0x3c);
  auVar26._8_4_ = 0x28800000;
  auVar26._0_8_ = 0x2880000028800000;
  auVar26._12_4_ = 0x28800000;
  fVar6 = *(float *)(param_1 + 0x30) * fVar9 * fVar9 + *(float *)(param_2 + 0x30) * fVar14 * fVar14;
  fVar5 = *(float *)(param_1 + 0x34) * fVar11 * fVar11 +
          *(float *)(param_2 + 0x34) * fVar10 * fVar10;
  auVar21._0_8_ = CONCAT44(fVar5,fVar6);
  auVar21._8_4_ =
       *(float *)(param_1 + 0x38) * fVar13 * fVar13 + *(float *)(param_2 + 0x38) * fVar12 * fVar12;
  auVar21._12_4_ =
       *(float *)(param_1 + 0x3c) * fVar15 * fVar15 + *(float *)(param_2 + 0x3c) * fVar8 * fVar8;
  auVar23._8_8_ = auVar21._8_8_;
  auVar23._0_8_ = auVar21._0_8_;
  auVar20 = NEON_fmax(auVar17,auVar26,4);
  auVar24._0_12_ = auVar23._0_12_;
  auVar24._12_4_ = auVar20._12_4_;
  auVar20 = NEON_ext(auVar24,auVar24,8,1);
  fVar6 = fVar6 + fVar5;
  fVar5 = auVar20._0_4_ + auVar20._4_4_;
  fVar8 = fVar6 + fVar5;
  uVar18 = CONCAT44(fVar6 + fVar5,fVar8);
  uVar19 = NEON_frecpe(uVar18,4);
  uVar22 = NEON_frecps(uVar18,uVar19,4);
  fVar6 = (float)uVar19 * (float)uVar22;
  uVar18 = NEON_frecps(uVar18,CONCAT44((float)((ulong)uVar19 >> 0x20) *
                                       (float)((ulong)uVar22 >> 0x20),fVar6),4);
  param_5[3] = CONCAT44(fVar6 * (float)uVar18,fVar13);
  param_5[2] = CONCAT44(fVar11,fVar9);
  param_5[5] = CONCAT44(fVar8,fVar12);
  param_5[4] = CONCAT44(fVar10,fVar14);
  return;
}


