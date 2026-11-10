/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03290f48; name: FUN_03290f48
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03290f48(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined *puVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar5;
  undefined1 auVar4 [16];
  float fVar6;
  undefined8 uVar7;
  float fVar10;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar18;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar19;
  float fVar22;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  uVar7 = NEON_frecpe(uVar3,4);
  uVar11 = NEON_frecps(uVar3,uVar7,4);
  fVar6 = (float)uVar7 * (float)uVar11;
  fVar10 = (float)((ulong)uVar7 >> 0x20) * (float)((ulong)uVar11 >> 0x20);
  uVar3 = NEON_frecps(uVar3,CONCAT44(fVar10,fVar6),4);
  fVar6 = fVar6 * (float)uVar3;
  fVar10 = fVar10 * (float)((ulong)uVar3 >> 0x20);
  fVar2 = *(float *)(param_1 + 0xb0) * fVar6;
  fVar5 = *(float *)(param_1 + 0xb4) * fVar10;
  auVar4._0_8_ = CONCAT44(fVar5,fVar2);
  auVar4._8_4_ = *(float *)(param_1 + 0xb8) * fVar6;
  auVar4._12_4_ = *(float *)(param_1 + 0xbc) * fVar10;
  param_4[1] = auVar4._8_8_;
  *param_4 = auVar4._0_8_;
  puVar1 = PTR_DAT_043723a0;
  auVar8._8_8_ = _UNK_03889f38;
  auVar8._0_8_ = _DAT_03889f30;
  auVar15._8_8_ = _UNK_03889f28;
  auVar15._0_8_ = _DAT_03889f20;
  auVar14 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(param_1 + 0xc0),auVar8);
  auVar12 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(param_1 + 0xc0),auVar15);
  auVar8 = a64_TBL(ZEXT816(0),auVar4,auVar8);
  auVar20._8_8_ = _UNK_038897b8;
  auVar20._0_8_ = _DAT_038897b0;
  fVar10 = (float)*param_3;
  fVar18 = (float)((ulong)*param_3 >> 0x20);
  auVar16._0_4_ = fVar2 * fVar2;
  auVar16._4_4_ = fVar5 * fVar5;
  auVar16._8_4_ = auVar4._8_4_ * auVar4._8_4_;
  auVar16._12_4_ = auVar4._12_4_ * auVar4._12_4_;
  fVar6 = -fVar18;
  auVar21 = a64_TBL(ZEXT816(0),auVar16,auVar20);
  auVar17._8_8_ = _UNK_03889f48;
  auVar17._0_8_ = _DAT_03889f40;
  auVar17 = a64_TBL(ZEXT816(0),auVar16,auVar17);
  auVar9._8_8_ = _UNK_03889e68;
  auVar9._0_8_ = _DAT_03889e60;
  fVar19 = (float)*param_2;
  fVar22 = (float)((ulong)*param_2 >> 0x20);
  auVar13._0_4_ =
       fVar10 * (auVar14._0_4_ + auVar12._0_4_) - fVar19 * (auVar21._0_4_ + auVar17._0_4_);
  auVar13._4_4_ =
       fVar18 * (auVar14._4_4_ + auVar12._4_4_) - fVar22 * (auVar21._4_4_ + auVar17._4_4_);
  auVar13._8_4_ =
       fVar10 * (auVar14._8_4_ + auVar12._8_4_) - fVar19 * (auVar21._8_4_ + auVar17._8_4_);
  auVar12._0_4_ = -fVar10 * *(float *)(param_1 + 0xd0) + fVar19 * fVar2 * auVar8._0_4_;
  auVar12._4_4_ = fVar6 * *(float *)(param_1 + 0xd4) + fVar22 * fVar5 * auVar8._4_4_;
  auVar12._8_4_ = -fVar10 * *(float *)(param_1 + 0xd8) + fVar19 * auVar4._8_4_ * auVar8._8_4_;
  auVar12._12_4_ = fVar6 * *(float *)(param_1 + 0xdc) + fVar22 * auVar4._12_4_ * auVar8._12_4_;
  auVar13._12_4_ = 0;
  auVar17 = a64_TBL(ZEXT816(0),auVar12,auVar9);
  auVar17 = auVar17 ^ (auVar17 ^ auVar13) & *(undefined1 (*) [16])(PTR_DAT_043723a0 + 0x90);
  auVar14._8_8_ = _UNK_038895e8;
  auVar14._0_8_ = _DAT_038895e0;
  param_5[1] = auVar17._8_8_;
  *param_5 = auVar17._0_8_;
  auVar17 = a64_TBL(ZEXT816(0),auVar12,auVar14);
  auVar17 = auVar17 ^ (auVar17 ^ auVar13) & *(undefined1 (*) [16])(puVar1 + 0xa0);
  auVar21._8_8_ = _UNK_03888e58;
  auVar21._0_8_ = _DAT_03888e50;
  param_5[3] = auVar17._8_8_;
  param_5[2] = auVar17._0_8_;
  auVar17 = a64_TBL(ZEXT816(0),auVar12,auVar21);
  auVar17 = auVar17 ^ (auVar17 ^ auVar13) & *(undefined1 (*) [16])(puVar1 + 0xc0);
  param_5[5] = auVar17._8_8_;
  param_5[4] = auVar17._0_8_;
  return;
}


