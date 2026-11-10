/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03261180; name: FUN_03261180
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03261180(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined8 *param_3,
                 undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  ulong uVar3;
  long lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar9;
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  auVar8 = *param_1;
  fVar7 = auVar8._0_4_;
  auVar10._0_4_ = -fVar7;
  fVar9 = auVar8._4_4_;
  auVar10._4_4_ = -fVar9;
  auVar10._8_4_ = -auVar8._8_4_;
  auVar10._12_4_ = -auVar8._12_4_;
  auVar12 = *param_2;
  fVar13 = auVar12._0_4_;
  auVar17._0_4_ = -fVar13;
  fVar16 = auVar12._4_4_;
  auVar17._4_4_ = -fVar16;
  auVar17._8_4_ = -auVar12._8_4_;
  auVar17._12_4_ = -auVar12._12_4_;
  auVar8 = NEON_ext(auVar8,auVar8,8,1);
  auVar11 = NEON_ext(auVar10,auVar10,8,1);
  auVar14 = NEON_ext(auVar12,auVar12,8,1);
  auVar18 = NEON_ext(auVar17,auVar17,8,1);
  pfVar5 = (float *)*param_3;
  fVar6 = *pfVar5;
  fVar1 = pfVar5[1];
  fVar2 = pfVar5[2];
  auVar12._0_4_ = auVar8._0_4_ * fVar2 + fVar7 * fVar6 + fVar9 * fVar1;
  auVar12._4_4_ = auVar11._0_4_ * fVar2 + auVar10._0_4_ * fVar6 + auVar10._4_4_ * fVar1;
  auVar12._8_4_ = auVar14._0_4_ * fVar2 + fVar13 * fVar6 + fVar16 * fVar1;
  auVar12._12_4_ = auVar18._0_4_ * fVar2 + auVar17._0_4_ * fVar6 + auVar17._4_4_ * fVar1;
  if (1 < (int)*(uint *)(param_3 + 1)) {
    lVar4 = (ulong)*(uint *)(param_3 + 1) - 1;
    do {
      fVar6 = pfVar5[4];
      fVar1 = pfVar5[5];
      fVar2 = pfVar5[6];
      lVar4 = lVar4 + -1;
      auVar15._0_4_ = auVar8._0_4_ * fVar2 + fVar7 * fVar6 + fVar9 * fVar1;
      auVar15._4_4_ = auVar11._0_4_ * fVar2 + auVar10._0_4_ * fVar6 + auVar10._4_4_ * fVar1;
      auVar15._8_4_ = auVar14._0_4_ * fVar2 + fVar13 * fVar6 + fVar16 * fVar1;
      auVar15._12_4_ = auVar18._0_4_ * fVar2 + auVar17._0_4_ * fVar6 + auVar17._4_4_ * fVar1;
      auVar12 = NEON_fmin(auVar12,auVar15,4);
      pfVar5 = pfVar5 + 4;
    } while (lVar4 != 0);
  }
  fVar6 = (float)_DAT_03889f60;
  uVar3 = (ulong)_DAT_03889f60 >> 0x20;
  param_4[1] = CONCAT44(auVar12._12_4_ * (float)((ulong)_UNK_03889f68 >> 0x20),
                        auVar12._8_4_ * (float)_UNK_03889f68);
  *param_4 = CONCAT44(auVar12._4_4_ * (float)uVar3,auVar12._0_4_ * fVar6);
  return;
}


