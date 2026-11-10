/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333e2c0; name: FUN_0333e2c0
 */


void FUN_0333e2c0(undefined1 (*param_1) [16],undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  undefined1 auVar10 [16];
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  uVar20 = *param_2;
  fVar3 = (float)uVar20;
  fVar6 = (float)param_2[2];
  fVar4 = (float)((ulong)uVar20 >> 0x20);
  fVar9 = (float)((ulong)param_2[2] >> 0x20);
  fVar5 = (float)param_2[1];
  fVar11 = (float)param_2[3];
  if ((fVar3 <= fVar6 && fVar4 <= fVar9) && fVar5 <= fVar11) {
    auVar10 = *param_1;
    fVar1 = auVar10._0_4_;
    auVar13._0_4_ = fVar1 + fVar1;
    fVar2 = auVar10._4_4_;
    auVar13._4_4_ = fVar2 + fVar2;
    auVar13._8_4_ = auVar10._8_4_ + auVar10._8_4_;
    fVar16 = auVar10._12_4_;
    auVar13._12_4_ = fVar16 + fVar16;
    uVar20 = NEON_fmov(0x3f800000,4);
    auVar10 = NEON_ext(auVar10,auVar10,8,1);
    auVar14 = NEON_ext(auVar13,auVar13,8,1);
    fVar7 = auVar10._0_4_ * auVar14._0_4_;
    fVar24 = auVar13._4_4_ * fVar1 + auVar13._8_4_ * fVar16;
    fVar21 = auVar13._4_4_ * fVar1 - auVar13._8_4_ * fVar16;
    fVar25 = auVar13._8_4_ * fVar1 - auVar13._4_4_ * fVar16;
    fVar23 = auVar13._8_4_ * fVar2 + auVar13._0_4_ * fVar16;
    fVar19 = auVar13._8_4_ * fVar2 - auVar13._0_4_ * fVar16;
    fVar12 = (float)uVar20;
    fVar8 = fVar12 - (auVar13._0_4_ * fVar1 + fVar7);
    fVar15 = fVar12 - (auVar13._0_4_ * fVar1 + auVar13._4_4_ * fVar2);
    fVar12 = fVar12 - (auVar13._4_4_ * fVar2 + fVar7);
    fVar22 = auVar13._8_4_ * fVar1 + auVar13._4_4_ * fVar16;
    fVar1 = ABS((fVar6 - fVar3) * 0.5);
    fVar7 = ABS((fVar9 - fVar4) * 0.5);
    fVar2 = ABS((fVar11 - fVar5) * 0.5);
    fVar16 = (fVar3 + fVar6) * 0.5;
    fVar17 = (fVar4 + fVar9) * 0.5;
    fVar18 = (fVar5 + fVar11) * 0.5;
    fVar3 = ABS(fVar22 * fVar2) + ABS(fVar12 * fVar1) + ABS(fVar21 * fVar7);
    fVar4 = ABS(fVar19 * fVar2) + ABS(fVar24 * fVar1) + ABS(fVar8 * fVar7);
    fVar5 = ABS(fVar15 * fVar2) + ABS(fVar25 * fVar1) + ABS(fVar23 * fVar7);
    fVar6 = ABS(fVar2 * 0.0) + ABS(fVar1 * 0.0) + ABS(fVar7 * 0.0);
    fVar9 = (float)*(undefined8 *)param_1[1] + fVar22 * fVar18 + fVar12 * fVar16 + fVar21 * fVar17;
    fVar11 = (float)((ulong)*(undefined8 *)param_1[1] >> 0x20) +
             fVar19 * fVar18 + fVar24 * fVar16 + fVar8 * fVar17;
    fVar1 = (float)*(undefined8 *)(param_1[1] + 8) +
            fVar15 * fVar18 + fVar25 * fVar16 + fVar23 * fVar17;
    fVar7 = (float)((ulong)*(undefined8 *)(param_1[1] + 8) >> 0x20) +
            fVar18 * 0.0 + fVar16 * 0.0 + fVar17 * 0.0;
    param_3[1] = CONCAT44(fVar7 - fVar6,fVar1 - fVar5);
    *param_3 = CONCAT44(fVar11 - fVar4,fVar9 - fVar3);
    param_3[3] = CONCAT44(fVar7 + fVar6,fVar1 + fVar5);
    param_3[2] = CONCAT44(fVar11 + fVar4,fVar9 + fVar3);
    return;
  }
  param_3[1] = param_2[1];
  *param_3 = uVar20;
  uVar20 = param_2[2];
  param_3[3] = param_2[3];
  param_3[2] = uVar20;
  return;
}


