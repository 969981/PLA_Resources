/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030d9010; name: FUN_030d9010
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030d9010(long param_1,long param_2,float *param_3,float *param_4,undefined8 param_5)

{
  float fVar2;
  undefined8 uVar1;
  float fVar3;
  float fVar4;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar5 [16];
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  undefined8 uVar16;
  float fVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  undefined8 uVar26;
  float fVar30;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  auVar13 = NEON_fmov(0xbf800000,4);
  fVar3 = *(float *)(param_1 + 0xc0) + auVar13._0_4_;
  fVar6 = *(float *)(param_1 + 0xc4) + auVar13._4_4_;
  fVar8 = *(float *)(param_1 + 200) + auVar13._8_4_;
  fVar10 = *(float *)(param_1 + 0xcc) + auVar13._12_4_;
  fVar15 = (float)*(undefined8 *)(param_1 + 0x38);
  fVar12 = fVar15 * 0.5;
  fVar19 = (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
  auVar20._0_4_ = -*(float *)(param_2 + 0x90);
  auVar20._4_4_ = -*(float *)(param_2 + 0x94);
  auVar20._8_4_ = -*(float *)(param_2 + 0x98);
  auVar20._12_4_ = *(undefined4 *)(param_2 + 0x9c);
  auVar23._0_4_ = -(float)*(undefined8 *)(param_2 + 0xa0);
  auVar23._4_4_ = -(float)((ulong)*(undefined8 *)(param_2 + 0xa0) >> 0x20);
  auVar23._8_4_ = -(float)*(undefined8 *)(param_2 + 0xa8);
  auVar31._8_8_ = _UNK_038890f8;
  auVar31._0_8_ = _DAT_038890f0;
  auVar23._12_4_ = (int)((ulong)*(undefined8 *)(param_2 + 0xa8) >> 0x20);
  auVar27._8_8_ = _UNK_03888e28;
  auVar27._0_8_ = _DAT_03888e20;
  auVar33 = a64_TBL(ZEXT816(0),auVar20,auVar31);
  auVar32 = a64_TBL(ZEXT816(0),auVar23,auVar31);
  auVar29._0_4_ = (param_3[4] + fVar3 * param_3[0x10]) * fVar12;
  auVar29._4_4_ = (param_3[5] + fVar6 * param_3[0x11]) * fVar19 * 0.5;
  auVar29._8_4_ = (param_3[6] + fVar8 * param_3[0x12]) * fVar12;
  auVar5._0_4_ = (param_4[4] + fVar3 * param_4[0x10]) * fVar12;
  auVar5._4_4_ = (param_4[5] + fVar6 * param_4[0x11]) * fVar19 * 0.5;
  auVar5._8_4_ = (param_4[6] + fVar8 * param_4[0x12]) * fVar12;
  auVar29._12_4_ = 0x3f800000;
  auVar5._12_4_ = 0x3f800000;
  auVar20 = a64_TBL(ZEXT816(0),auVar20,auVar27);
  auVar17 = a64_TBL(ZEXT816(0),auVar23,auVar27);
  auVar28._8_8_ = _UNK_03888d78;
  auVar28._0_8_ = _DAT_03888d70;
  auVar14._8_8_ = _UNK_03889108;
  auVar14._0_8_ = _DAT_03889100;
  auVar13 = a64_TBL(ZEXT816(0),auVar29,auVar28);
  auVar23 = a64_TBL(ZEXT816(0),auVar29,auVar14);
  auVar29 = a64_TBL(ZEXT816(0),auVar5,auVar28);
  auVar5 = a64_TBL(ZEXT816(0),auVar5,auVar14);
  auVar18._0_4_ = auVar20._0_4_ * auVar23._0_4_ - auVar33._0_4_ * auVar13._0_4_;
  auVar18._4_4_ = auVar20._4_4_ * auVar23._4_4_ - auVar33._4_4_ * auVar13._4_4_;
  auVar18._8_4_ = auVar20._8_4_ * auVar23._8_4_ - auVar33._8_4_ * auVar13._8_4_;
  auVar18._12_4_ = auVar20._12_4_ * auVar23._12_4_ - auVar33._12_4_ * auVar13._12_4_;
  auVar24._8_8_ = _UNK_038895d8;
  auVar24._0_8_ = _DAT_038895d0;
  auVar21._0_4_ = auVar17._0_4_ * auVar5._0_4_ - auVar32._0_4_ * auVar29._0_4_;
  auVar21._4_4_ = auVar17._4_4_ * auVar5._4_4_ - auVar32._4_4_ * auVar29._4_4_;
  auVar21._8_4_ = auVar17._8_4_ * auVar5._8_4_ - auVar32._8_4_ * auVar29._8_4_;
  auVar21._12_4_ = auVar17._12_4_ * auVar5._12_4_ - auVar32._12_4_ * auVar29._12_4_;
  auVar14 = a64_TBL(ZEXT816(0),auVar18,auVar24);
  auVar18 = a64_TBL(ZEXT816(0),auVar21,auVar24);
  fStack_24 = auVar14._12_4_ - (auVar20._12_4_ * auVar13._12_4_ + auVar33._12_4_ * auVar23._12_4_);
  fVar11 = auVar18._12_4_ - (auVar17._12_4_ * auVar29._12_4_ + auVar32._12_4_ * auVar5._12_4_);
  local_30 = -(auVar14._0_4_ - (auVar20._0_4_ * auVar13._0_4_ + auVar33._0_4_ * auVar23._0_4_));
  fStack_2c = -(auVar14._4_4_ - (auVar20._4_4_ * auVar13._4_4_ + auVar33._4_4_ * auVar23._4_4_));
  fStack_28 = -(auVar14._8_4_ - (auVar20._8_4_ * auVar13._8_4_ + auVar33._8_4_ * auVar23._8_4_));
  fVar4 = -(auVar18._0_4_ - (auVar17._0_4_ * auVar29._0_4_ + auVar32._0_4_ * auVar5._0_4_));
  fVar7 = -(auVar18._4_4_ - (auVar17._4_4_ * auVar29._4_4_ + auVar32._4_4_ * auVar5._4_4_));
  fVar9 = -(auVar18._8_4_ - (auVar17._8_4_ * auVar29._8_4_ + auVar32._8_4_ * auVar5._8_4_));
  auVar32._0_4_ = fVar4 * fVar4;
  auVar32._4_4_ = fVar7 * fVar7;
  auVar32._8_4_ = fVar9 * fVar9;
  auVar32._12_4_ = fVar11 * fVar11;
  auVar5 = NEON_ext(auVar32,auVar32,8,1);
  auVar33._0_4_ = local_30 * local_30;
  auVar33._4_4_ = fStack_2c * fStack_2c;
  auVar33._8_4_ = fStack_28 * fStack_28;
  auVar33._12_4_ = fStack_24 * fStack_24;
  auVar13 = NEON_ext(auVar33,auVar33,8,1);
  fVar12 = auVar5._0_4_ + auVar5._4_4_;
  fVar2 = auVar13._0_4_ + auVar13._4_4_;
  uVar16 = CONCAT44(auVar33._0_4_ + auVar33._4_4_ + fVar2,auVar33._0_4_ + auVar33._4_4_ + fVar2);
  uVar1 = CONCAT44(auVar32._0_4_ + auVar32._4_4_ + fVar12,auVar32._0_4_ + auVar32._4_4_ + fVar12);
  uVar26 = NEON_frsqrte(uVar16,4);
  uVar22 = NEON_frsqrte(uVar1,4);
  fVar25 = (float)uVar26;
  fVar30 = (float)((ulong)uVar26 >> 0x20);
  fVar12 = (float)uVar22;
  fVar2 = (float)((ulong)uVar22 >> 0x20);
  auVar17._0_8_ =
       CONCAT44((param_3[1] + (float)((ulong)*(undefined8 *)(param_3 + 0xc) >> 0x20) * fVar6) *
                fVar19 + 0.0,
                (*param_3 + (float)*(undefined8 *)(param_3 + 0xc) * fVar3) * fVar15 + 0.0);
  auVar17._8_4_ = (param_3[2] + (float)*(undefined8 *)(param_3 + 0xe) * fVar8) * fVar15 + 0.0;
  auVar17._12_4_ =
       (param_3[3] + (float)((ulong)*(undefined8 *)(param_3 + 0xe) >> 0x20) * fVar10) * fVar19 + 0.0
  ;
  uVar22 = NEON_frsqrts(uVar16,CONCAT44(fVar30 * fVar30,fVar25 * fVar25),4);
  uVar26 = NEON_frsqrts(uVar1,CONCAT44(fVar2 * fVar2,fVar12 * fVar12),4);
  fVar25 = fVar25 * (float)uVar22;
  fVar30 = fVar30 * (float)((ulong)uVar22 >> 0x20);
  fVar12 = fVar12 * (float)uVar26;
  fVar2 = fVar2 * (float)((ulong)uVar26 >> 0x20);
  uStack_40 = CONCAT44(*(float *)(param_2 + 0x84) +
                       (param_4[1] + fVar6 * (float)((ulong)*(undefined8 *)(param_4 + 0xc) >> 0x20))
                       * fVar19,*(float *)(param_2 + 0x80) +
                                (*param_4 + fVar3 * (float)*(undefined8 *)(param_4 + 0xc)) * fVar15)
  ;
  uStack_38 = CONCAT44(*(float *)(param_2 + 0x8c) +
                       (param_4[3] + fVar10 * (float)((ulong)*(undefined8 *)(param_4 + 0xe) >> 0x20)
                       ) * fVar19,
                       *(float *)(param_2 + 0x88) +
                       (param_4[2] + fVar8 * (float)*(undefined8 *)(param_4 + 0xe)) * fVar15);
  uVar22 = NEON_frsqrts(uVar16,CONCAT44(fVar30 * fVar30,fVar25 * fVar25),4);
  uVar16 = NEON_frsqrts(uVar1,CONCAT44(fVar2 * fVar2,fVar12 * fVar12),4);
  fVar25 = (float)uVar22 * fVar25;
  fVar30 = (float)((ulong)uVar22 >> 0x20) * fVar30;
  fVar12 = (float)uVar16 * fVar12;
  fVar2 = (float)((ulong)uVar16 >> 0x20) * fVar2;
  local_30 = local_30 * fVar25;
  fStack_2c = fStack_2c * fVar30;
  fStack_28 = fStack_28 * fVar25;
  fStack_24 = fStack_24 * fVar30;
  uStack_18 = auVar17._8_8_;
  auVar13._0_8_ = CONCAT44(fVar7 * fVar2,fVar4 * fVar12);
  auVar13._8_4_ = fVar9 * fVar12;
  auVar13._12_4_ = fVar11 * fVar2;
  uStack_48 = auVar13._8_8_;
  local_50 = auVar13._0_8_;
  uStack_20 = auVar17._0_8_;
  FUN_030d80c0(&local_30,&local_50,param_2,param_3,param_4,param_5);
  return;
}


