/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030d7ee0; name: FUN_030d7ee0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030d7ee0(long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  float fVar1;
  float fVar3;
  float fVar4;
  undefined1 auVar2 [16];
  float fVar6;
  undefined1 auVar5 [16];
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  float fVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  auVar2 = NEON_fmov(0xbf800000,4);
  fVar1 = *(float *)(param_1 + 0xc0) + auVar2._0_4_;
  fVar3 = *(float *)(param_1 + 0xc4) + auVar2._4_4_;
  fVar4 = *(float *)(param_1 + 200) + auVar2._8_4_;
  auVar8._0_4_ = -*(float *)(param_2 + 0x40);
  auVar8._4_4_ = -*(float *)(param_2 + 0x44);
  auVar8._8_4_ = -*(float *)(param_2 + 0x48);
  auVar23._8_8_ = _UNK_03888e28;
  auVar23._0_8_ = _DAT_03888e20;
  auVar13._0_4_ = -*(float *)(param_2 + 0x50);
  auVar13._4_4_ = -*(float *)(param_2 + 0x54);
  auVar13._8_4_ = -*(float *)(param_2 + 0x58);
  auVar8._12_4_ = *(undefined4 *)(param_2 + 0x4c);
  auVar13._12_4_ = *(undefined4 *)(param_2 + 0x5c);
  fVar19 = (float)*(undefined8 *)(param_1 + 0x38);
  auVar22._0_4_ = (*(float *)(param_3 + 0x10) + *(float *)(param_3 + 0x40) * fVar1) * fVar19;
  fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
  auVar22._4_4_ = (*(float *)(param_3 + 0x14) + *(float *)(param_3 + 0x44) * fVar3) * fVar6;
  auVar22._8_4_ = (*(float *)(param_3 + 0x18) + *(float *)(param_3 + 0x48) * fVar4) * fVar19;
  auVar2._0_4_ = (*(float *)(param_4 + 0x10) + fVar1 * *(float *)(param_4 + 0x40)) * fVar19;
  auVar2._4_4_ = (*(float *)(param_4 + 0x14) + fVar3 * *(float *)(param_4 + 0x44)) * fVar6;
  auVar2._8_4_ = (*(float *)(param_4 + 0x18) + fVar4 * *(float *)(param_4 + 0x48)) * fVar19;
  auVar5._8_8_ = _UNK_038890f8;
  auVar5._0_8_ = _DAT_038890f0;
  auVar22._12_4_ = 0x40000000;
  auVar2._12_4_ = 0x40000000;
  auVar17 = a64_TBL(ZEXT816(0),auVar13,auVar23);
  auVar20 = a64_TBL(ZEXT816(0),auVar8,auVar5);
  auVar5 = a64_TBL(ZEXT816(0),auVar13,auVar5);
  auVar15._8_8_ = _UNK_03889108;
  auVar15._0_8_ = _DAT_03889100;
  auVar8 = a64_TBL(ZEXT816(0),auVar8,auVar23);
  auVar21._8_8_ = _UNK_03888d78;
  auVar21._0_8_ = _DAT_03888d70;
  auVar23 = a64_TBL(ZEXT816(0),auVar22,auVar21);
  auVar13 = a64_TBL(ZEXT816(0),auVar22,auVar15);
  auVar22 = a64_TBL(ZEXT816(0),auVar2,auVar21);
  auVar2 = a64_TBL(ZEXT816(0),auVar2,auVar15);
  auVar10._0_4_ = auVar8._0_4_ * auVar13._0_4_ - auVar20._0_4_ * auVar23._0_4_;
  auVar10._4_4_ = auVar8._4_4_ * auVar13._4_4_ - auVar20._4_4_ * auVar23._4_4_;
  auVar10._8_4_ = auVar8._8_4_ * auVar13._8_4_ - auVar20._8_4_ * auVar23._8_4_;
  auVar10._12_4_ = auVar8._12_4_ * auVar13._12_4_ - auVar20._12_4_ * auVar23._12_4_;
  auVar14._8_8_ = _UNK_038895d8;
  auVar14._0_8_ = _DAT_038895d0;
  auVar18._0_4_ = auVar17._0_4_ * auVar2._0_4_ - auVar5._0_4_ * auVar22._0_4_;
  auVar18._4_4_ = auVar17._4_4_ * auVar2._4_4_ - auVar5._4_4_ * auVar22._4_4_;
  auVar18._8_4_ = auVar17._8_4_ * auVar2._8_4_ - auVar5._8_4_ * auVar22._8_4_;
  auVar18._12_4_ = auVar17._12_4_ * auVar2._12_4_ - auVar5._12_4_ * auVar22._12_4_;
  auVar11 = a64_TBL(ZEXT816(0),auVar10,auVar14);
  auVar15 = a64_TBL(ZEXT816(0),auVar18,auVar14);
  fStack_14 = auVar11._12_4_ - (auVar8._12_4_ * auVar23._12_4_ + auVar20._12_4_ * auVar13._12_4_);
  fStack_24 = auVar15._12_4_ - (auVar17._12_4_ * auVar22._12_4_ + auVar5._12_4_ * auVar2._12_4_);
  fStack_20 = -(auVar11._0_4_ - (auVar8._0_4_ * auVar23._0_4_ + auVar20._0_4_ * auVar13._0_4_));
  fStack_1c = -(auVar11._4_4_ - (auVar8._4_4_ * auVar23._4_4_ + auVar20._4_4_ * auVar13._4_4_));
  fStack_18 = -(auVar11._8_4_ - (auVar8._8_4_ * auVar23._8_4_ + auVar20._8_4_ * auVar13._8_4_));
  local_30 = -(auVar15._0_4_ - (auVar17._0_4_ * auVar22._0_4_ + auVar5._0_4_ * auVar2._0_4_));
  fStack_2c = -(auVar15._4_4_ - (auVar17._4_4_ * auVar22._4_4_ + auVar5._4_4_ * auVar2._4_4_));
  fStack_28 = -(auVar15._8_4_ - (auVar17._8_4_ * auVar22._8_4_ + auVar5._8_4_ * auVar2._8_4_));
  auVar11._0_4_ = fStack_20 * fStack_20;
  auVar11._4_4_ = fStack_1c * fStack_1c;
  auVar11._8_4_ = fStack_18 * fStack_18;
  auVar11._12_4_ = fStack_14 * fStack_14;
  auVar2 = NEON_ext(auVar11,auVar11,8,1);
  auVar17._0_4_ = local_30 * local_30;
  auVar17._4_4_ = fStack_2c * fStack_2c;
  auVar17._8_4_ = fStack_28 * fStack_28;
  auVar17._12_4_ = fStack_24 * fStack_24;
  auVar5 = NEON_ext(auVar17,auVar17,8,1);
  fVar1 = auVar2._0_4_ + auVar2._4_4_;
  fVar3 = auVar5._0_4_ + auVar5._4_4_;
  uVar7 = CONCAT44(auVar11._0_4_ + auVar11._4_4_ + fVar1,auVar11._0_4_ + auVar11._4_4_ + fVar1);
  uVar9 = CONCAT44(auVar17._0_4_ + auVar17._4_4_ + fVar3,auVar17._0_4_ + auVar17._4_4_ + fVar3);
  uVar12 = NEON_frsqrte(uVar7,4);
  uVar16 = NEON_frsqrte(uVar9,4);
  fVar1 = (float)uVar12;
  fVar3 = (float)((ulong)uVar12 >> 0x20);
  fVar4 = (float)uVar16;
  fVar19 = (float)((ulong)uVar16 >> 0x20);
  uVar12 = NEON_frsqrts(uVar7,CONCAT44(fVar3 * fVar3,fVar1 * fVar1),4);
  uVar16 = NEON_frsqrts(uVar9,CONCAT44(fVar19 * fVar19,fVar4 * fVar4),4);
  fVar1 = fVar1 * (float)uVar12;
  fVar3 = fVar3 * (float)((ulong)uVar12 >> 0x20);
  fVar4 = fVar4 * (float)uVar16;
  fVar19 = fVar19 * (float)((ulong)uVar16 >> 0x20);
  uVar7 = NEON_frsqrts(uVar7,CONCAT44(fVar3 * fVar3,fVar1 * fVar1),4);
  uVar9 = NEON_frsqrts(uVar9,CONCAT44(fVar19 * fVar19,fVar4 * fVar4),4);
  fVar1 = (float)uVar7 * fVar1;
  fVar3 = (float)((ulong)uVar7 >> 0x20) * fVar3;
  fVar4 = (float)uVar9 * fVar4;
  fVar19 = (float)((ulong)uVar9 >> 0x20) * fVar19;
  fStack_20 = fStack_20 * fVar1;
  fStack_1c = fStack_1c * fVar3;
  fStack_18 = fStack_18 * fVar1;
  fStack_14 = fStack_14 * fVar3;
  local_30 = local_30 * fVar4;
  fStack_2c = fStack_2c * fVar19;
  fStack_28 = fStack_28 * fVar4;
  fStack_24 = fStack_24 * fVar19;
  local_38 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = CONCAT44(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 4));
  local_50 = CONCAT44(*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0xc));
  local_48 = CONCAT44(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 8));
  FUN_030d7620(&uStack_40,&local_48,&local_38,&local_50,param_2 + 0x10,param_2 + 0x20,&fStack_20,
               &local_30,param_2 + 0x60,param_3,param_4,param_5);
  return;
}


