/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02efce28; name: FUN_02efce28
 */


void FUN_02efce28(float param_1,undefined1 (*param_2) [16],int param_3,undefined8 *param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  fVar9 = (ABS(param_1 * 3.1415927) * -0.4052847 + 1.2732395) * param_1 * 3.1415927;
  puVar2 = *param_2;
  fVar9 = 1.0 / (fVar9 + 0.0001 + (ABS(fVar9) * fVar9 - fVar9) * 0.225);
  do {
    auVar22 = *param_2;
    pauVar1 = param_2 + 1;
    uVar15 = (undefined4)((ulong)*(undefined8 *)(param_2[1] + 8) >> 0x20);
    fVar10 = (float)*(undefined8 *)*pauVar1;
    fVar12 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    auVar20._12_4_ = uVar15;
    auVar20._0_12_ = *(undefined1 (*) [12])*pauVar1;
    auVar24._12_4_ = uVar15;
    auVar24._0_12_ = *(undefined1 (*) [12])*pauVar1;
    auVar24 = NEON_ext(auVar20,auVar24,8,1);
    auVar20 = NEON_ext(auVar22,auVar22,8,1);
    auVar21._4_4_ = auVar24._0_4_;
    auVar21._0_4_ = auVar20._0_4_;
    auVar20 = param_2[2];
    auVar24 = param_2[3];
    auVar26 = NEON_ext(auVar20,auVar20,8,1);
    auVar25 = NEON_ext(auVar24,auVar24,8,1);
    auVar21._12_4_ = auVar25._0_4_;
    auVar21._8_4_ = auVar26._0_4_;
    fVar3 = auVar22._0_4_;
    fVar5 = auVar22._4_4_;
    fVar6 = auVar20._4_4_;
    fVar8 = auVar24._4_4_;
    fVar4 = auVar20._0_4_;
    fVar7 = auVar24._0_4_;
    param_2 = param_2 + 4;
    auVar22._8_4_ = 0xbf7fbe77;
    auVar22._0_8_ = 0xbf7fbe77bf7fbe77;
    auVar22._12_4_ = 0xbf7fbe77;
    auVar22 = NEON_fmax(auVar21,auVar22,4);
    fVar11 = auVar22._0_4_ + fVar9;
    fVar13 = auVar22._4_4_ + fVar9;
    fVar14 = auVar22._8_4_ + fVar9;
    fVar16 = auVar22._12_4_ + fVar9;
    auVar26._0_4_ = fVar11 * fVar11 + fVar3 * fVar3 + fVar5 * fVar5;
    auVar26._4_4_ = fVar13 * fVar13 + fVar10 * fVar10 + fVar12 * fVar12;
    auVar26._8_4_ = fVar14 * fVar14 + fVar4 * fVar4 + fVar6 * fVar6;
    auVar26._12_4_ = fVar16 * fVar16 + fVar7 * fVar7 + fVar8 * fVar8;
    auVar22 = NEON_frsqrte(auVar26,4);
    fVar17 = auVar22._0_4_;
    auVar19._0_4_ = fVar3 * fVar17;
    fVar3 = auVar22._4_4_;
    auVar19._4_4_ = fVar10 * fVar3;
    fVar10 = auVar22._8_4_;
    auVar19._8_4_ = fVar4 * fVar10;
    fVar4 = auVar22._12_4_;
    auVar19._12_4_ = fVar7 * fVar4;
    auVar25._0_4_ = fVar5 * fVar17;
    auVar25._4_4_ = fVar12 * fVar3;
    auVar25._8_4_ = fVar6 * fVar10;
    auVar25._12_4_ = fVar8 * fVar4;
    uVar23 = CONCAT44(auVar25._4_4_,auVar19._4_4_);
    uVar18 = CONCAT44(auVar25._0_4_,auVar19._0_4_);
    auVar20 = NEON_ext(auVar19,auVar19,8,1);
    auVar22 = NEON_ext(auVar25,auVar25,8,1);
    param_4[1] = CONCAT44(fVar11 * fVar17,fVar11 * fVar17);
    *param_4 = uVar18;
    param_4[3] = CONCAT44(fVar13 * fVar3,fVar13 * fVar3);
    param_4[2] = uVar23;
    param_4[5] = CONCAT44(fVar14 * fVar10,fVar14 * fVar10);
    param_4[4] = CONCAT44(auVar22._0_4_,auVar20._0_4_);
    param_4[7] = CONCAT44(fVar16 * fVar4,fVar16 * fVar4);
    param_4[6] = CONCAT44(auVar22._4_4_,auVar20._4_4_);
    param_4 = param_4 + 8;
  } while (param_2 < (undefined1 (*) [16])(puVar2 + (ulong)(uint)(param_3 << 2) * 4));
  return;
}


