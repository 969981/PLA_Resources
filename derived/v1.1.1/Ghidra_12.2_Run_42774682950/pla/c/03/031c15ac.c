/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c15ac; name: FUN_031c15ac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_031c15ac(float *param_1,float *param_2,float *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  float fVar4;
  undefined1 auVar3 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar13;
  float fVar14;
  undefined1 auVar12 [16];
  undefined8 uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  
  fVar9 = (float)*(undefined8 *)(param_3 + 6);
  fVar5 = (float)*(undefined8 *)(param_3 + 4);
  fVar7 = (float)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20);
  fVar10 = ABS(fVar5 - *param_3);
  fVar13 = ABS(fVar7 - param_3[1]);
  fVar14 = ABS(fVar9 - param_3[2]);
  uVar16 = _DAT_03889a80 ^ (_DAT_03889a80 ^ (uint)DAT_0388a140) & -(uint)(fVar13 < fVar10);
  uVar17 = _UNK_03889a84 ^ (_UNK_03889a84 ^ DAT_0388a140._4_4_) & -(uint)(fVar13 < fVar10);
  uVar18 = _UNK_03889a88 ^ (_UNK_03889a88 ^ (uint)DAT_0388a148) & -(uint)(fVar13 < fVar10);
  uVar19 = _UNK_03889a8c ^ (_UNK_03889a8c ^ DAT_0388a148._4_4_) & -(uint)(fVar13 < fVar10);
  fVar6 = (float)(uVar16 ^ (uVar16 ^ _DAT_03888d10) &
                           -(uint)(fVar14 < (float)((uint)fVar10 ^
                                                   ((uint)fVar10 ^ (uint)fVar13) &
                                                   -(uint)(fVar13 < fVar10))));
  fVar8 = (float)(uVar17 ^ (uVar17 ^ _UNK_03888d14) &
                           -(uint)(fVar14 < (float)((uint)fVar10 ^
                                                   ((uint)fVar10 ^ (uint)fVar13) &
                                                   -(uint)(fVar13 < fVar10))));
  fVar4 = (float)(uVar18 ^ (uVar18 ^ _UNK_03888d18) &
                           -(uint)(fVar14 < (float)((uint)fVar10 ^
                                                   ((uint)fVar10 ^ (uint)fVar13) &
                                                   -(uint)(fVar13 < fVar10))));
  fVar5 = (fVar5 + *param_3) * 0.5 * fVar6;
  fVar7 = (fVar7 + param_3[1]) * 0.5 * fVar8;
  fVar9 = (fVar9 + param_3[2]) * 0.5 * fVar4;
  fVar10 = ((float)((ulong)*(undefined8 *)(param_3 + 6) >> 0x20) + param_3[3]) * 0.5 *
           (float)(uVar19 ^ (uVar19 ^ _UNK_03888d1c) &
                            -(uint)(fVar14 < (float)((uint)fVar10 ^
                                                    ((uint)fVar10 ^ (uint)fVar13) &
                                                    -(uint)(fVar13 < fVar10))));
  auVar12._4_4_ = fVar7;
  auVar12._0_4_ = fVar5;
  auVar12._8_4_ = fVar9;
  auVar12._12_4_ = fVar10;
  auVar1._4_4_ = fVar7;
  auVar1._0_4_ = fVar5;
  auVar1._8_4_ = fVar9;
  auVar1._12_4_ = fVar10;
  auVar12 = NEON_ext(auVar12,auVar1,8,1);
  fVar5 = -(fVar5 + fVar7 + auVar12._0_4_);
  fVar7 = (*param_2 - *param_1) * fVar6;
  fVar10 = (param_2[1] - param_1[1]) * fVar8;
  fVar13 = (param_2[2] - param_1[2]) * fVar4;
  fVar9 = fVar7 + fVar10 + fVar13;
  uVar11 = CONCAT44(fVar7 + fVar10 + fVar13,fVar9);
  if (ABS(fVar9) < 1.1920929e-07) {
    return 0;
  }
  auVar3._0_4_ = *param_1 * fVar6;
  auVar3._4_4_ = param_1[1] * fVar8;
  auVar3._8_4_ = param_1[2] * fVar4;
  auVar3._12_4_ = param_1[3] * fVar5;
  auVar12 = NEON_ext(auVar3,auVar3,8,1);
  fVar5 = auVar12._0_4_ + fVar5;
  uVar2 = NEON_frecpe(uVar11,4);
  uVar15 = NEON_frecps(uVar11,uVar2,4);
  fVar6 = (float)uVar2 * (float)uVar15;
  fVar8 = (float)((ulong)uVar2 >> 0x20) * (float)((ulong)uVar15 >> 0x20);
  uVar11 = NEON_frecps(uVar11,CONCAT44(fVar8,fVar6),4);
  *param_4 = CONCAT44(-((auVar3._0_4_ + auVar3._4_4_ + fVar5) *
                       fVar8 * (float)((ulong)uVar11 >> 0x20)),
                      -((auVar3._0_4_ + auVar3._4_4_ + fVar5) * fVar6 * (float)uVar11));
  return 1;
}


