/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0328f03c; name: FUN_0328f03c
 */


void FUN_0328f03c(undefined4 *param_1,undefined4 *param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
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
  float fVar24;
  float fVar25;
  
  auVar2 = *(undefined1 (*) [16])(param_1 + 0xc);
  fVar7 = auVar2._0_4_;
  auVar4._0_4_ = fVar7 + fVar7;
  fVar8 = auVar2._4_4_;
  auVar4._4_4_ = fVar8 + fVar8;
  auVar4._8_4_ = auVar2._8_4_ + auVar2._8_4_;
  fVar9 = auVar2._12_4_;
  auVar4._12_4_ = fVar9 + fVar9;
  auVar2 = NEON_ext(auVar2,auVar2,8,1);
  auVar5 = NEON_ext(auVar4,auVar4,8,1);
  fVar1 = auVar2._0_4_ * auVar5._0_4_;
  fVar19 = auVar4._4_4_ * fVar7 + auVar4._8_4_ * fVar9;
  fVar25 = auVar4._8_4_ * fVar7 - auVar4._4_4_ * fVar9;
  fVar17 = auVar4._4_4_ * fVar7 - auVar4._8_4_ * fVar9;
  fVar18 = auVar4._8_4_ * fVar8 + auVar4._0_4_ * fVar9;
  uVar13 = NEON_fmov(0x3f800000,4);
  fVar6 = (float)uVar13;
  fVar3 = fVar6 - (auVar4._0_4_ * fVar7 + fVar1);
  fVar1 = fVar6 - (auVar4._4_4_ * fVar8 + fVar1);
  fVar6 = fVar6 - (auVar4._0_4_ * fVar7 + auVar4._4_4_ * fVar8);
  fVar20 = auVar4._8_4_ * fVar7 + auVar4._4_4_ * fVar9;
  fVar7 = auVar4._8_4_ * fVar8 - auVar4._0_4_ * fVar9;
  fVar16 = (float)*(undefined8 *)(param_1 + 8);
  fVar12 = fVar1 * fVar16;
  fVar14 = fVar19 * fVar16;
  fVar15 = fVar25 * fVar16;
  fVar16 = fVar16 * 0.0;
  fVar24 = (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  fVar21 = fVar17 * fVar24;
  fVar22 = fVar3 * fVar24;
  fVar23 = fVar18 * fVar24;
  fVar24 = fVar24 * 0.0;
  fVar11 = (float)*(undefined8 *)(param_1 + 10);
  fVar8 = fVar20 * fVar11;
  fVar9 = fVar7 * fVar11;
  fVar10 = fVar6 * fVar11;
  fVar11 = fVar11 * 0.0;
  *(ulong *)(param_2 + 0x12) =
       CONCAT44(fVar11 * fVar6 + fVar16 * fVar25 + fVar24 * fVar18,
                fVar10 * fVar6 + fVar15 * fVar25 + fVar23 * fVar18);
  *(ulong *)(param_2 + 0x10) =
       CONCAT44(fVar9 * fVar6 + fVar14 * fVar25 + fVar22 * fVar18,
                fVar8 * fVar6 + fVar12 * fVar25 + fVar21 * fVar18);
  param_2[10] = fVar10 * fVar20 + fVar15 * fVar1 + fVar23 * fVar17;
  param_2[0xb] = fVar11 * fVar20 + fVar16 * fVar1 + fVar24 * fVar17;
  param_2[8] = fVar8 * fVar20 + fVar12 * fVar1 + fVar21 * fVar17;
  param_2[9] = fVar9 * fVar20 + fVar14 * fVar1 + fVar22 * fVar17;
  param_2[0xe] = fVar10 * fVar7 + fVar15 * fVar19 + fVar23 * fVar3;
  param_2[0xf] = fVar11 * fVar7 + fVar16 * fVar19 + fVar24 * fVar3;
  param_2[0xc] = fVar8 * fVar7 + fVar12 * fVar19 + fVar21 * fVar3;
  param_2[0xd] = fVar9 * fVar7 + fVar14 * fVar19 + fVar22 * fVar3;
  *param_2 = *param_1;
  uVar13 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_1 + 6);
  *(undefined8 *)(param_2 + 4) = uVar13;
  param_2[1] = param_1[1];
  return;
}


