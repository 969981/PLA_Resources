/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030d9200; name: FUN_030d9200
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030d9200(long param_1,long param_2,float *param_3,float *param_4,undefined8 param_5)

{
  undefined1 auVar1 [16];
  float fVar3;
  undefined8 uVar2;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  undefined1 auVar10 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar16 [16];
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 uVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  auVar4 = NEON_fmov(0xbf800000,4);
  fVar5 = (float)*(undefined8 *)(param_1 + 0xc0) + auVar4._0_4_;
  fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 0xc0) >> 0x20) + auVar4._4_4_;
  fVar7 = (float)*(undefined8 *)(param_1 + 200) + auVar4._8_4_;
  fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 200) >> 0x20) + auVar4._12_4_;
  fVar14 = (float)*(undefined8 *)(param_1 + 0x38);
  fVar21 = fVar14 * 0.5;
  fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
  auVar27._0_4_ = -*(float *)(param_2 + 0xa0);
  auVar27._4_4_ = -*(float *)(param_2 + 0xa4);
  auVar27._8_4_ = -*(float *)(param_2 + 0xa8);
  auVar27._12_4_ = *(undefined4 *)(param_2 + 0xac);
  auVar32._0_4_ = -*(float *)(param_2 + 0xb0);
  auVar32._4_4_ = -*(float *)(param_2 + 0xb4);
  auVar32._8_4_ = -*(float *)(param_2 + 0xb8);
  auVar32._12_4_ = *(undefined4 *)(param_2 + 0xbc);
  auVar39._8_8_ = _UNK_038890f8;
  auVar39._0_8_ = _DAT_038890f0;
  auVar37._8_8_ = _UNK_03888e28;
  auVar37._0_8_ = _DAT_03888e20;
  auVar31._0_4_ = (param_3[4] + fVar5 * param_3[0x10]) * fVar21;
  auVar31._4_4_ = (param_3[5] + fVar6 * param_3[0x11]) * fVar17 * 0.5;
  auVar31._8_4_ = (param_3[6] + fVar7 * param_3[0x12]) * fVar21;
  auVar22._0_4_ = (param_4[4] + fVar5 * (float)*(undefined8 *)(param_4 + 0x10)) * fVar21;
  auVar22._4_4_ =
       (param_4[5] + fVar6 * (float)((ulong)*(undefined8 *)(param_4 + 0x10) >> 0x20)) * fVar17 * 0.5
  ;
  auVar22._8_4_ = (param_4[6] + fVar7 * (float)*(undefined8 *)(param_4 + 0x12)) * fVar21;
  auVar31._12_4_ = 0x3f800000;
  auVar40 = a64_TBL(ZEXT816(0),auVar27,auVar39);
  auVar24 = a64_TBL(ZEXT816(0),auVar27,auVar37);
  auVar27 = a64_TBL(ZEXT816(0),auVar32,auVar39);
  auVar16 = a64_TBL(ZEXT816(0),auVar32,auVar37);
  auVar38._8_8_ = _UNK_03888d78;
  auVar38._0_8_ = _DAT_03888d70;
  uVar35 = (undefined4)((ulong)_UNK_03889108 >> 0x20);
  auVar22._12_4_ = 0x3f800000;
  auVar10 = a64_TBL(ZEXT816(0),auVar31,auVar38);
  auVar4._8_4_ = (int)_UNK_03889108;
  auVar4._0_8_ = _DAT_03889100;
  auVar4._12_4_ = uVar35;
  auVar32 = a64_TBL(ZEXT816(0),auVar31,auVar4);
  auVar39 = a64_TBL(ZEXT816(0),auVar22,auVar38);
  auVar23._8_4_ = (int)_UNK_03889108;
  auVar23._0_8_ = _DAT_03889100;
  auVar23._12_4_ = uVar35;
  auVar4 = a64_TBL(ZEXT816(0),auVar22,auVar23);
  auVar25._0_4_ = auVar16._0_4_ * auVar4._0_4_ - auVar27._0_4_ * auVar39._0_4_;
  auVar25._4_4_ = auVar16._4_4_ * auVar4._4_4_ - auVar27._4_4_ * auVar39._4_4_;
  auVar25._8_4_ = auVar16._8_4_ * auVar4._8_4_ - auVar27._8_4_ * auVar39._8_4_;
  auVar25._12_4_ = auVar16._12_4_ * auVar4._12_4_ - auVar27._12_4_ * auVar39._12_4_;
  auVar28._8_8_ = _UNK_038895d8;
  auVar28._0_8_ = _DAT_038895d0;
  auVar26 = a64_TBL(ZEXT816(0),auVar25,auVar28);
  auVar1._4_4_ = auVar24._4_4_ * auVar32._4_4_ - auVar40._4_4_ * auVar10._4_4_;
  auVar1._0_4_ = auVar24._0_4_ * auVar32._0_4_ - auVar40._0_4_ * auVar10._0_4_;
  auVar1._8_4_ = auVar24._8_4_ * auVar32._8_4_ - auVar40._8_4_ * auVar10._8_4_;
  auVar1._12_4_ = auVar24._12_4_ * auVar32._12_4_ - auVar40._12_4_ * auVar10._12_4_;
  auVar23 = a64_TBL(ZEXT816(0),auVar1,auVar28);
  fVar13 = auVar23._12_4_ - (auVar24._12_4_ * auVar10._12_4_ + auVar40._12_4_ * auVar32._12_4_);
  fVar20 = auVar26._12_4_ - (auVar16._12_4_ * auVar39._12_4_ + auVar27._12_4_ * auVar4._12_4_);
  fVar9 = -(auVar23._0_4_ - (auVar24._0_4_ * auVar10._0_4_ + auVar40._0_4_ * auVar32._0_4_));
  fVar11 = -(auVar23._4_4_ - (auVar24._4_4_ * auVar10._4_4_ + auVar40._4_4_ * auVar32._4_4_));
  fVar12 = -(auVar23._8_4_ - (auVar24._8_4_ * auVar10._8_4_ + auVar40._8_4_ * auVar32._8_4_));
  fVar15 = -(auVar26._0_4_ - (auVar16._0_4_ * auVar39._0_4_ + auVar27._0_4_ * auVar4._0_4_));
  fVar18 = -(auVar26._4_4_ - (auVar16._4_4_ * auVar39._4_4_ + auVar27._4_4_ * auVar4._4_4_));
  fVar19 = -(auVar26._8_4_ - (auVar16._8_4_ * auVar39._8_4_ + auVar27._8_4_ * auVar4._8_4_));
  auVar40._0_4_ = fVar15 * fVar15;
  auVar40._4_4_ = fVar18 * fVar18;
  auVar40._8_4_ = fVar19 * fVar19;
  auVar40._12_4_ = fVar20 * fVar20;
  auVar23 = NEON_ext(auVar40,auVar40,8,1);
  fVar33 = fVar9 * fVar9;
  fVar34 = fVar11 * fVar11;
  auVar10._4_4_ = fVar34;
  auVar10._0_4_ = fVar33;
  auVar10._8_4_ = fVar12 * fVar12;
  auVar10._12_4_ = fVar13 * fVar13;
  auVar16._4_4_ = fVar34;
  auVar16._0_4_ = fVar33;
  auVar16._8_4_ = fVar12 * fVar12;
  auVar16._12_4_ = fVar13 * fVar13;
  auVar4 = NEON_ext(auVar10,auVar16,8,1);
  fVar21 = auVar23._0_4_ + auVar23._4_4_;
  fVar3 = auVar4._0_4_ + auVar4._4_4_;
  uVar30 = CONCAT44(fVar33 + fVar34 + fVar3,fVar33 + fVar34 + fVar3);
  uVar2 = CONCAT44(auVar40._0_4_ + auVar40._4_4_ + fVar21,auVar40._0_4_ + auVar40._4_4_ + fVar21);
  uVar29 = NEON_frsqrte(uVar30,4);
  fVar33 = (float)uVar29;
  fVar34 = (float)((ulong)uVar29 >> 0x20);
  uVar29 = NEON_frsqrte(uVar2,4);
  fVar21 = (float)uVar29;
  fVar3 = (float)((ulong)uVar29 >> 0x20);
  uVar36 = NEON_frsqrts(uVar30,CONCAT44(fVar34 * fVar34,fVar33 * fVar33),4);
  uVar29 = NEON_frsqrts(uVar2,CONCAT44(fVar3 * fVar3,fVar21 * fVar21),4);
  fVar33 = fVar33 * (float)uVar36;
  fVar34 = fVar34 * (float)((ulong)uVar36 >> 0x20);
  fVar21 = fVar21 * (float)uVar29;
  fVar3 = fVar3 * (float)((ulong)uVar29 >> 0x20);
  auVar24._0_8_ =
       CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x90) >> 0x20) +
                (param_4[1] + fVar6 * param_4[0xd]) * fVar17,
                (float)*(undefined8 *)(param_2 + 0x90) + (*param_4 + fVar5 * param_4[0xc]) * fVar14)
  ;
  auVar24._8_4_ =
       (float)*(undefined8 *)(param_2 + 0x98) + (param_4[2] + fVar7 * param_4[0xe]) * fVar14;
  auVar24._12_4_ =
       (float)((ulong)*(undefined8 *)(param_2 + 0x98) >> 0x20) +
       (param_4[3] + fVar8 * param_4[0xf]) * fVar17;
  uStack_20 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x80) >> 0x20) +
                       (param_3[1] + (float)((ulong)*(undefined8 *)(param_3 + 0xc) >> 0x20) * fVar6)
                       * fVar17,(float)*(undefined8 *)(param_2 + 0x80) +
                                (*param_3 + (float)*(undefined8 *)(param_3 + 0xc) * fVar5) * fVar14)
  ;
  uStack_18 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x88) >> 0x20) +
                       (param_3[3] + (float)((ulong)*(undefined8 *)(param_3 + 0xe) >> 0x20) * fVar8)
                       * fVar17,(float)*(undefined8 *)(param_2 + 0x88) +
                                (param_3[2] + (float)*(undefined8 *)(param_3 + 0xe) * fVar7) *
                                fVar14);
  uVar30 = NEON_frsqrts(uVar30,CONCAT44(fVar34 * fVar34,fVar33 * fVar33),4);
  uVar29 = NEON_frsqrts(uVar2,CONCAT44(fVar3 * fVar3,fVar21 * fVar21),4);
  fVar33 = (float)uVar30 * fVar33;
  fVar34 = (float)((ulong)uVar30 >> 0x20) * fVar34;
  fVar21 = (float)uVar29 * fVar21;
  fVar3 = (float)((ulong)uVar29 >> 0x20) * fVar3;
  auVar26._0_8_ = CONCAT44(fVar11 * fVar34,fVar9 * fVar33);
  auVar26._8_4_ = fVar12 * fVar33;
  auVar26._12_4_ = fVar13 * fVar34;
  uStack_28 = auVar26._8_8_;
  local_50 = CONCAT44(fVar18 * fVar3,fVar15 * fVar21);
  uStack_48 = CONCAT44(fVar20 * fVar3,fVar19 * fVar21);
  uStack_38 = auVar24._8_8_;
  uStack_40 = auVar24._0_8_;
  local_30 = auVar26._0_8_;
  FUN_030d8690(&local_30,&local_50,param_2,param_3,param_4,param_5);
  return;
}


