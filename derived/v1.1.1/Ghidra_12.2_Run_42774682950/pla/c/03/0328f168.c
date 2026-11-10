/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0328f168; name: FUN_0328f168
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0328f168(float param_1,undefined1 (*param_2) [16],float *param_3)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar9;
  float fVar10;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  
  fVar6 = 0.0;
  fVar9 = 0.0;
  fVar10 = 0.0;
  fVar11 = 0.0;
  param_3[1] = param_1;
  param_3[6] = 0.0;
  param_3[7] = 0.0;
  param_3[4] = 0.0;
  param_3[5] = 0.0;
  if (0.0 < param_1) {
    auVar1 = *param_2;
    fVar5 = auVar1._0_4_;
    auVar7._0_4_ = fVar5 * fVar5;
    fVar12 = auVar1._4_4_;
    auVar7._4_4_ = fVar12 * fVar12;
    auVar7._8_4_ = auVar1._8_4_ * auVar1._8_4_;
    auVar7._12_4_ = auVar1._12_4_ * auVar1._12_4_;
    auVar14._8_8_ = _UNK_038897b8;
    auVar14._0_8_ = _DAT_038897b0;
    auVar14 = a64_TBL(ZEXT816(0),auVar7,auVar14);
    auVar8._8_8_ = _UNK_03889f48;
    auVar8._0_8_ = _DAT_03889f40;
    auVar8 = a64_TBL(ZEXT816(0),auVar7,auVar8);
    param_1 = param_1 * 0.33333334;
    fVar6 = (auVar14._0_4_ + auVar8._0_4_) * param_1;
    fVar9 = (auVar14._4_4_ + auVar8._4_4_) * param_1;
    fVar10 = (auVar14._8_4_ + auVar8._8_4_) * param_1;
    fVar11 = 1.0;
    auVar8 = NEON_ext(auVar1,auVar1,8,1);
    *param_3 = auVar8._0_4_ * fVar5 * fVar12 * 8.0;
  }
  fVar5 = (float)_DAT_03889a80;
  uVar2 = (ulong)_DAT_03889a80 >> 0x20;
  fVar12 = (float)DAT_0388a140;
  uVar3 = (ulong)DAT_0388a140 >> 0x20;
  fVar13 = (float)DAT_0388a148;
  uVar4 = (ulong)DAT_0388a148 >> 0x20;
  *(ulong *)(param_3 + 10) =
       CONCAT44(fVar11 * (float)((ulong)_UNK_03889a88 >> 0x20),fVar10 * (float)_UNK_03889a88);
  *(ulong *)(param_3 + 8) = CONCAT44(fVar9 * (float)uVar2,fVar6 * fVar5);
  param_3[0xe] = fVar10 * fVar13;
  param_3[0xf] = fVar11 * (float)uVar4;
  param_3[0xc] = fVar6 * fVar12;
  param_3[0xd] = fVar9 * (float)uVar3;
  fVar5 = (float)_DAT_03888d10;
  uVar2 = (ulong)_DAT_03888d10 >> 0x20;
  *(ulong *)(param_3 + 0x12) =
       CONCAT44(fVar11 * (float)((ulong)_UNK_03888d18 >> 0x20),fVar10 * (float)_UNK_03888d18);
  *(ulong *)(param_3 + 0x10) = CONCAT44(fVar9 * (float)uVar2,fVar6 * fVar5);
  return;
}


