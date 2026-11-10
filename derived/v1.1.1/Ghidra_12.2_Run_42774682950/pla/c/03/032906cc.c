/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032906cc; name: FUN_032906cc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032906cc(undefined1 (*param_1) [16],undefined8 *param_2,float *param_3)

{
  undefined *puVar1;
  float fVar2;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar3 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar13;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar14;
  float fVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uVar18;
  undefined8 uVar19;
  
  puVar1 = PTR_DAT_043723a0;
  auVar3 = *param_1;
  auVar9._8_8_ = _UNK_038897b8;
  auVar9._0_8_ = _DAT_038897b0;
  auVar15._8_8_ = _UNK_03889f48;
  auVar15._0_8_ = _DAT_03889f40;
  fVar2 = auVar3._0_4_;
  auVar7._0_4_ = fVar2 * fVar2;
  fVar4 = auVar3._4_4_;
  auVar7._4_4_ = fVar4 * fVar4;
  fVar5 = auVar3._8_4_;
  auVar7._8_4_ = fVar5 * fVar5;
  fVar6 = auVar3._12_4_;
  auVar7._12_4_ = fVar6 * fVar6;
  auVar9 = a64_TBL(ZEXT816(0),auVar7,auVar9);
  auVar7 = a64_TBL(ZEXT816(0),auVar7,auVar15);
  fVar14 = (float)*param_2;
  fVar17 = (float)((ulong)*param_2 >> 0x20);
  fVar13 = -fVar17;
  auVar8._0_4_ = fVar14 * (auVar9._0_4_ + auVar7._0_4_);
  auVar8._4_4_ = fVar17 * (auVar9._4_4_ + auVar7._4_4_);
  auVar8._8_4_ = fVar14 * (auVar9._8_4_ + auVar7._8_4_);
  auVar8._12_4_ = 0;
  auVar16._8_8_ = _UNK_03889f38;
  auVar16._0_8_ = _DAT_03889f30;
  auVar7 = a64_TBL(ZEXT816(0),auVar3,auVar16);
  auVar3._0_4_ = -fVar14 * fVar2 * auVar7._0_4_;
  auVar3._4_4_ = fVar13 * fVar4 * auVar7._4_4_;
  auVar3._8_4_ = -fVar14 * fVar5 * auVar7._8_4_;
  auVar3._12_4_ = fVar13 * fVar6 * auVar7._12_4_;
  auVar10._8_8_ = _UNK_03889e68;
  auVar10._0_8_ = _DAT_03889e60;
  auVar7 = a64_TBL(ZEXT816(0),auVar3,auVar10);
  auVar7 = auVar7 ^ (auVar7 ^ auVar8) & *(undefined1 (*) [16])(PTR_DAT_043723a0 + 0x90);
  uVar19 = *(undefined8 *)(param_3 + 6);
  uVar18 = *(undefined8 *)(param_3 + 4);
  param_3[2] = param_3[2] + auVar7._8_4_;
  param_3[3] = param_3[3] + auVar7._12_4_;
  *param_3 = *param_3 + auVar7._0_4_;
  param_3[1] = param_3[1] + auVar7._4_4_;
  auVar11._8_8_ = _UNK_038895e8;
  auVar11._0_8_ = _DAT_038895e0;
  auVar7 = a64_TBL(ZEXT816(0),auVar3,auVar11);
  auVar7 = auVar7 ^ (auVar7 ^ auVar8) & *(undefined1 (*) [16])(puVar1 + 0xa0);
  param_3[6] = (float)uVar19 + auVar7._8_4_;
  param_3[7] = (float)((ulong)uVar19 >> 0x20) + auVar7._12_4_;
  param_3[4] = (float)uVar18 + auVar7._0_4_;
  param_3[5] = (float)((ulong)uVar18 >> 0x20) + auVar7._4_4_;
  auVar12._8_8_ = _UNK_03888e58;
  auVar12._0_8_ = _DAT_03888e50;
  auVar3 = a64_TBL(ZEXT816(0),auVar3,auVar12);
  auVar3 = auVar3 ^ (auVar3 ^ auVar8) & *(undefined1 (*) [16])(puVar1 + 0xc0);
  param_3[10] = param_3[10] + auVar3._8_4_;
  param_3[0xb] = param_3[0xb] + auVar3._12_4_;
  param_3[8] = param_3[8] + auVar3._0_4_;
  param_3[9] = param_3[9] + auVar3._4_4_;
  return;
}


