/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0314c300; name: FUN_0314c300
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0314c300(long param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 (*pauVar20) [16];
  long *plVar21;
  long lVar22;
  long lVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  plVar21 = *(long **)(param_2 + 0x28);
  lVar23 = *(long *)(param_2 + 0x90);
  lVar22 = *(long *)(param_1 + 0x20);
  param_3 = param_3 & 0xff;
  lVar19 = (**(code **)(*plVar21 + 0x80))(plVar21,*(undefined8 *)(param_2 + 0x20));
  pauVar20 = (undefined1 (*) [16])
             (**(code **)(*plVar21 + 0x100))(plVar21,*(undefined4 *)(lVar19 + 0x80));
  uVar18 = _UNK_038895d8;
  uVar17 = _DAT_038895d0;
  uVar16 = _UNK_03889108;
  uVar15 = _DAT_03889100;
  uVar14 = _UNK_038890f8;
  uVar13 = _DAT_038890f0;
  uVar12 = _UNK_03888e28;
  uVar11 = _DAT_03888e20;
  uVar10 = _UNK_03888d78;
  uVar1 = _DAT_03888d70;
  lVar23 = lVar23 + param_3 * 0xd0;
  auVar27._8_8_ = _UNK_038890f8;
  auVar27._0_8_ = _DAT_038890f0;
  auVar29._8_8_ = _UNK_03888e28;
  auVar29._0_8_ = _DAT_03888e20;
  auVar32._8_8_ = _UNK_03888d78;
  auVar32._0_8_ = _DAT_03888d70;
  auVar28 = a64_TBL(ZEXT816(0),*pauVar20,auVar27);
  auVar25 = a64_TBL(ZEXT816(0),*pauVar20,auVar29);
  auVar34._8_8_ = _UNK_03889108;
  auVar34._0_8_ = _DAT_03889100;
  auVar33 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(lVar23 + 0xa0),auVar32);
  auVar30 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(lVar23 + 0xa0),auVar34);
  auVar35._0_4_ = auVar25._0_4_ * auVar30._0_4_ - auVar28._0_4_ * auVar33._0_4_;
  auVar35._4_4_ = auVar25._4_4_ * auVar30._4_4_ - auVar28._4_4_ * auVar33._4_4_;
  auVar35._8_4_ = auVar25._8_4_ * auVar30._8_4_ - auVar28._8_4_ * auVar33._8_4_;
  auVar35._12_4_ = auVar25._12_4_ * auVar30._12_4_ - auVar28._12_4_ * auVar33._12_4_;
  lVar19 = *(long *)(param_2 + 0x38);
  local_80 = *(undefined8 *)(lVar19 + 0x50);
  uStack_78 = *(undefined8 *)(lVar19 + 0x58);
  auVar36._8_4_ = (int)_UNK_038895d8;
  auVar36._0_8_ = _DAT_038895d0;
  auVar36._12_4_ = (int)((ulong)_UNK_038895d8 >> 0x20);
  auVar36 = a64_TBL(ZEXT816(0),auVar35,auVar36);
  auVar31._0_8_ =
       CONCAT44(-(auVar36._4_4_ - (auVar25._4_4_ * auVar33._4_4_ + auVar28._4_4_ * auVar30._4_4_)),
                -(auVar36._0_4_ - (auVar25._0_4_ * auVar33._0_4_ + auVar28._0_4_ * auVar30._0_4_)));
  auVar31._8_4_ = -(auVar36._8_4_ - (auVar25._8_4_ * auVar33._8_4_ + auVar28._8_4_ * auVar30._8_4_))
  ;
  local_70 = *(undefined8 *)(lVar19 + 0x40);
  uStack_68 = *(undefined8 *)(lVar19 + 0x48);
  auVar31._12_4_ =
       auVar36._12_4_ - (auVar25._12_4_ * auVar33._12_4_ + auVar28._12_4_ * auVar30._12_4_);
  uStack_58 = SUB168(*(undefined1 (*) [16])(lVar19 + 0x60),8);
  local_60 = SUB168(*(undefined1 (*) [16])(lVar19 + 0x60),0);
  FUN_032cb060(local_90,&local_80);
  auVar8._8_8_ = uVar12;
  auVar8._0_8_ = uVar11;
  auVar9._8_8_ = uVar14;
  auVar9._0_8_ = uVar13;
  lVar22 = lVar22 + param_3 * 0x80;
  auVar33._8_8_ = uVar10;
  auVar33._0_8_ = uVar1;
  auVar25._8_8_ = auVar31._8_8_;
  auVar25._0_8_ = auVar31._0_8_;
  auVar28._8_8_ = uVar16;
  auVar28._0_8_ = uVar15;
  auVar36 = a64_TBL(ZEXT816(0),auVar25,auVar9);
  auVar25 = a64_TBL(ZEXT816(0),auVar25,auVar8);
  auVar33 = a64_TBL(ZEXT816(0),local_90,auVar33);
  auVar28 = a64_TBL(ZEXT816(0),local_90,auVar28);
  auVar30._8_8_ = uVar18;
  auVar30._0_8_ = uVar17;
  auVar37._0_4_ = auVar25._0_4_ * auVar28._0_4_ - auVar36._0_4_ * auVar33._0_4_;
  auVar37._4_4_ = auVar25._4_4_ * auVar28._4_4_ - auVar36._4_4_ * auVar33._4_4_;
  auVar37._8_4_ = auVar25._8_4_ * auVar28._8_4_ - auVar36._8_4_ * auVar33._8_4_;
  auVar37._12_4_ = auVar25._12_4_ * auVar28._12_4_ - auVar36._12_4_ * auVar33._12_4_;
  auVar30 = a64_TBL(ZEXT816(0),auVar37,auVar30);
  auVar26._12_4_ =
       auVar30._12_4_ - (auVar25._12_4_ * auVar33._12_4_ + auVar36._12_4_ * auVar28._12_4_);
  auVar26._0_8_ =
       CONCAT44(-(auVar30._4_4_ - (auVar25._4_4_ * auVar33._4_4_ + auVar36._4_4_ * auVar28._4_4_)),
                -(auVar30._0_4_ - (auVar25._0_4_ * auVar33._0_4_ + auVar36._0_4_ * auVar28._0_4_)));
  auVar26._8_4_ = -(auVar30._8_4_ - (auVar25._8_4_ * auVar33._8_4_ + auVar36._8_4_ * auVar28._8_4_))
  ;
  uStack_48 = auVar26._8_8_;
  local_50 = auVar26._0_8_;
  FUN_032c9fc0(lVar22 + 0x30,&local_50);
  uVar1 = *(undefined8 *)(lVar23 + 0x40);
  *(undefined8 *)(lVar22 + 0x68) = *(undefined8 *)(lVar23 + 0x48);
  *(undefined8 *)(lVar22 + 0x60) = uVar1;
  fVar24 = *(float *)(*(long *)(*(long *)(param_2 + 0x68) + 0x18) + param_3 * 0x30 + 0x20);
  fVar2 = *(float *)(lVar23 + 0x70);
  fVar3 = *(float *)(lVar23 + 0x74);
  fVar4 = *(float *)(lVar23 + 0x7c);
  fVar5 = *(float *)(lVar23 + 0x40);
  fVar6 = *(float *)(lVar23 + 0x44);
  fVar7 = *(float *)(lVar23 + 0x4c);
  *(float *)(lVar22 + 0x78) = *(float *)(lVar23 + 0x48) + *(float *)(lVar23 + 0x78) * fVar24;
  *(float *)(lVar22 + 0x7c) = fVar7 + fVar4 * fVar24;
  *(float *)(lVar22 + 0x70) = fVar5 + fVar2 * fVar24;
  *(float *)(lVar22 + 0x74) = fVar6 + fVar3 * fVar24;
  return;
}


