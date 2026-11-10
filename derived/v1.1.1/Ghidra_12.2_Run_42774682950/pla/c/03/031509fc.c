/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031509fc; name: FUN_031509fc
 */


void FUN_031509fc(long param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  long lVar4;
  undefined1 (*pauVar5) [12];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar21;
  undefined1 auVar20 [16];
  
  plVar1 = *(long **)(param_1 + 0x28);
  lVar4 = (**(code **)(*plVar1 + 0x80))(plVar1,*(undefined8 *)(param_1 + 0x20));
  pauVar5 = (undefined1 (*) [12])
            (**(code **)(*plVar1 + 0x100))(plVar1,*(undefined4 *)(lVar4 + 0x80));
  fVar8 = (float)*(undefined8 *)(*pauVar5 + 8);
  fVar9 = (float)((ulong)*(undefined8 *)(*pauVar5 + 8) >> 0x20);
  uVar10 = *(undefined8 *)*pauVar5;
  auVar3 = *pauVar5;
  auVar2 = *pauVar5;
  fVar6 = (float)uVar10;
  fVar7 = (float)((ulong)uVar10 >> 0x20);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  param_3[1] = *(undefined8 *)(param_2 + 0x18);
  *param_3 = uVar19;
  auVar11._12_4_ = fVar9;
  auVar11._0_12_ = auVar2;
  auVar20._12_4_ = fVar9;
  auVar20._0_12_ = auVar3;
  auVar11 = NEON_ext(auVar11,auVar20,8,1);
  fVar14 = auVar11._4_4_ * auVar11._4_4_;
  uVar10 = NEON_ext(uVar10,auVar11._0_8_,4,1);
  fVar13 = fVar14 + -0.5;
  fVar14 = fVar14 + -0.5;
  auVar11 = *(undefined1 (*) [16])(param_2 + 0x20);
  fVar15 = auVar11._0_4_;
  fVar16 = auVar11._4_4_;
  fVar17 = auVar11._8_4_;
  fVar18 = fVar6 * fVar15 + fVar7 * fVar16 + fVar8 * fVar17;
  fVar21 = fVar6 * fVar15 + fVar7 * fVar16 + fVar8 * fVar17;
  auVar20 = NEON_ext(auVar11,auVar11,8,1);
  uVar19 = NEON_ext(auVar11._0_8_,auVar20._0_8_,4,1);
  auVar12._0_4_ = fVar6 * (float)uVar19 - (float)uVar10 * fVar15;
  auVar12._4_4_ = fVar7 * (float)((ulong)uVar19 >> 0x20) - (float)((ulong)uVar10 >> 0x20) * fVar16;
  auVar12._8_4_ = fVar8 * fVar15 - fVar6 * fVar17;
  auVar12._12_4_ = fVar9 * fVar16 - fVar7 * auVar11._12_4_;
  auVar20 = NEON_ext(auVar12,auVar12,4,1);
  fVar6 = fVar15 * fVar13 + fVar6 * fVar18 + auVar20._0_4_ * fVar9;
  fVar7 = fVar16 * fVar14 + fVar7 * fVar21 + auVar20._4_4_ * fVar9;
  fVar8 = fVar17 * fVar13 + fVar8 * fVar18 + auVar12._0_4_ * fVar9;
  fVar9 = auVar11._12_4_ * fVar14 + fVar9 * fVar21 + auVar12._4_4_ * fVar9;
  param_3[3] = CONCAT44(fVar9 + fVar9,fVar8 + fVar8);
  param_3[2] = CONCAT44(fVar7 + fVar7,fVar6 + fVar6);
  return;
}


