/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03016660; name: FUN_03016660
 */


void FUN_03016660(undefined1 (*param_1) [12],undefined1 (*param_2) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  
  fVar3 = (float)*(undefined8 *)(*param_1 + 8);
  fVar9 = (float)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
  uVar5 = *(undefined8 *)*param_1;
  fVar2 = (float)uVar5;
  fVar4 = (float)((ulong)uVar5 >> 0x20);
  auVar6._12_4_ = fVar9;
  auVar6._0_12_ = *param_1;
  auVar16._12_4_ = fVar9;
  auVar16._0_12_ = *param_1;
  auVar6 = NEON_ext(auVar6,auVar16,8,1);
  fVar10 = auVar6._4_4_ * auVar6._4_4_;
  uVar5 = NEON_ext(uVar5,auVar6._0_8_,4,1);
  fVar8 = fVar10 + -0.5;
  auVar6 = *param_2;
  fVar11 = auVar6._0_4_;
  fVar12 = auVar6._4_4_;
  fVar13 = auVar6._8_4_;
  fVar14 = fVar2 * fVar11 + fVar4 * fVar12 + fVar3 * fVar13;
  auVar16 = NEON_ext(auVar6,auVar6,8,1);
  uVar15 = NEON_ext(auVar6._0_8_,auVar16._0_8_,4,1);
  auVar7._0_4_ = fVar11 * (float)uVar5 - fVar2 * (float)uVar15;
  auVar7._4_4_ = fVar12 * (float)((ulong)uVar5 >> 0x20) - fVar4 * (float)((ulong)uVar15 >> 0x20);
  auVar7._8_4_ = fVar13 * fVar2 - fVar3 * fVar11;
  auVar7._12_4_ = auVar6._12_4_ * fVar4 - fVar9 * fVar12;
  auVar6 = NEON_ext(auVar7,auVar7,4,1);
  fVar1 = fVar11 * fVar8 + fVar2 * fVar14 + auVar6._0_4_ * fVar9;
  fVar2 = fVar12 * (fVar10 + -0.5) + fVar4 * (fVar2 * fVar11 + fVar4 * fVar12 + fVar3 * fVar13) +
          auVar6._4_4_ * fVar9;
  fVar4 = fVar13 * fVar8 + fVar3 * fVar14 + auVar7._0_4_ * fVar9;
  fVar1 = fVar1 + fVar1;
  fVar2 = fVar2 + fVar2;
  fVar4 = fVar4 + fVar4;
  fVar9 = fVar1 * fVar1 + fVar2 * fVar2 + fVar4 * fVar4;
  fVar8 = fVar1 * fVar1 + fVar2 * fVar2 + fVar4 * fVar4;
  uVar5 = CONCAT44(fVar8,fVar9);
  auVar6 = *(undefined1 (*) [16])(param_1[9] + 4);
  auVar16 = NEON_ext(auVar6,auVar6,8,1);
  fVar10 = auVar16._4_4_ * auVar16._4_4_;
  fVar3 = auVar6._12_4_;
  if (fVar10 < fVar9 && fVar10 < fVar8) {
    if ((~(uint)fVar9 & 0x7fc00000) == 0) {
      return;
    }
    uVar15 = NEON_frsqrte(uVar5,4);
    fVar9 = (float)uVar15;
    fVar8 = (float)((ulong)uVar15 >> 0x20);
    uVar15 = NEON_frsqrts(uVar5,CONCAT44(fVar8 * fVar8,fVar9 * fVar9),4);
    fVar9 = fVar9 * (float)uVar15;
    fVar8 = fVar8 * (float)((ulong)uVar15 >> 0x20);
    uVar5 = NEON_frsqrts(uVar5,CONCAT44(fVar8 * fVar8,fVar9 * fVar9),4);
    fVar9 = (float)uVar5 * fVar9;
    if ((~(uint)fVar9 & 0x7fc00000) == 0) {
      return;
    }
    fVar9 = fVar3 * fVar9 * 0.99999976;
    fVar1 = fVar1 * fVar9;
    fVar2 = fVar2 * fVar3 * (float)((ulong)uVar5 >> 0x20) * fVar8 * 0.99999976;
    fVar4 = fVar4 * fVar9;
  }
  *(ulong *)param_1[10] = CONCAT44(fVar3,fVar4);
  *(ulong *)(param_1[9] + 4) = CONCAT44(fVar2,fVar1);
  return;
}


