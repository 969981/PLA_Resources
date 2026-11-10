/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0328ec08; name: FUN_0328ec08
 */


void FUN_0328ec08(ushort *param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined1 auVar2 [14];
  float fVar3;
  float fVar4;
  float fVar9;
  float fVar10;
  undefined1 auVar8 [16];
  undefined1 auVar7 [16];
  undefined1 auVar6 [16];
  undefined1 auVar5 [16];
  float fVar11;
  float fVar15;
  float fVar16;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar17;
  undefined1 auVar14 [16];
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  
  auVar12 = *(undefined1 (*) [16])(param_1 + 4);
  auVar14 = *(undefined1 (*) [16])(param_1 + 8);
  uVar29 = NEON_fmov(0x3f800000,4);
  auVar5._0_8_ = auVar12._6_8_ << 0x30;
  auVar5._10_6_ = auVar12._10_6_;
  auVar5._8_2_ = 0;
  auVar7._14_2_ = auVar12._14_2_;
  auVar7._0_12_ = auVar5._0_12_;
  auVar7._12_2_ = 0;
  auVar2._2_12_ = auVar7._4_12_;
  auVar2._0_2_ = auVar12._0_2_;
  auVar21._0_6_ = auVar2._0_6_ << 0x10;
  auVar21._8_8_ = auVar7._8_8_;
  auVar21._6_2_ = auVar12._2_2_;
  auVar6._12_4_ = auVar7._12_4_;
  auVar6._0_10_ = auVar21._0_10_;
  auVar6._10_2_ = auVar12._4_2_;
  auVar8._0_14_ = auVar6._0_14_;
  auVar8._14_2_ = auVar12._6_2_;
  auVar12 = NEON_scvtf(auVar8,4);
  fVar10 = auVar8._12_4_;
  fVar4 = auVar12._0_4_ * fVar10;
  fVar9 = auVar12._4_4_ * fVar10;
  fVar10 = auVar12._8_4_ * fVar10;
  auVar13._0_8_ =
       CONCAT17(auVar14[3],CONCAT16(auVar14[2],(uint6)(ushort)(auVar14._0_2_ ^ 0x8000) << 0x10)) ^
       0x8000000000000000;
  auVar13._8_2_ = 0;
  auVar13[10] = auVar14[4];
  auVar13[0xb] = auVar14[5] ^ 0x80;
  auVar13._12_2_ = 0;
  auVar13[0xe] = auVar14[6];
  auVar13[0xf] = auVar14[7] ^ 0x80;
  auVar12 = NEON_scvtf(auVar13,4);
  fVar11 = auVar12._0_4_ * 5.086263e-10;
  fVar15 = auVar12._4_4_ * 5.086263e-10;
  fVar16 = auVar12._8_4_ * 5.086263e-10;
  fVar17 = auVar12._12_4_ * 5.086263e-10;
  auVar19._0_4_ = fVar11 * fVar11;
  auVar19._4_4_ = fVar15 * fVar15;
  auVar19._8_4_ = fVar16 * fVar16;
  auVar19._12_4_ = fVar17 * fVar17;
  auVar12 = NEON_ext(auVar19,auVar19,8,1);
  fVar3 = auVar12._0_4_ + auVar12._4_4_;
  uVar18 = CONCAT44(auVar19._0_4_ + auVar19._4_4_ + fVar3,auVar19._0_4_ + auVar19._4_4_ + fVar3);
  uVar22 = NEON_frsqrte(uVar18,4);
  fVar3 = (float)uVar22;
  fVar23 = (float)((ulong)uVar22 >> 0x20);
  uVar22 = NEON_frsqrts(uVar18,CONCAT44(fVar23 * fVar23,fVar3 * fVar3),4);
  fVar3 = fVar3 * (float)uVar22;
  fVar23 = fVar23 * (float)((ulong)uVar22 >> 0x20);
  uVar18 = NEON_frsqrts(uVar18,CONCAT44(fVar23 * fVar23,fVar3 * fVar3),4);
  fVar3 = (float)uVar18 * fVar3;
  fVar23 = (float)((ulong)uVar18 >> 0x20) * fVar23;
  auVar14._0_4_ = fVar11 * fVar3;
  auVar14._4_4_ = fVar15 * fVar23;
  auVar14._8_4_ = fVar16 * fVar3;
  auVar14._12_4_ = fVar17 * fVar23;
  auVar20._0_4_ = auVar14._0_4_ + auVar14._0_4_;
  auVar20._4_4_ = auVar14._4_4_ + auVar14._4_4_;
  auVar20._8_4_ = auVar14._8_4_ + auVar14._8_4_;
  auVar20._12_4_ = auVar14._12_4_ + auVar14._12_4_;
  auVar12 = NEON_ext(auVar14,auVar14,8,1);
  auVar21 = NEON_ext(auVar20,auVar20,8,1);
  fVar3 = auVar12._0_4_ * auVar21._0_4_;
  fVar34 = auVar20._4_4_ * auVar14._0_4_ + auVar20._8_4_ * auVar14._12_4_;
  fVar36 = auVar20._8_4_ * auVar14._0_4_ - auVar20._4_4_ * auVar14._12_4_;
  fVar32 = auVar20._4_4_ * auVar14._0_4_ - auVar20._8_4_ * auVar14._12_4_;
  fVar33 = auVar20._8_4_ * auVar14._4_4_ + auVar20._0_4_ * auVar14._12_4_;
  fVar17 = (float)uVar29;
  fVar23 = fVar17 - (auVar20._0_4_ * auVar14._0_4_ + auVar20._4_4_ * auVar14._4_4_);
  fVar16 = fVar17 - (auVar20._4_4_ * auVar14._4_4_ + fVar3);
  fVar17 = fVar17 - (auVar20._0_4_ * auVar14._0_4_ + fVar3);
  fVar35 = auVar20._8_4_ * auVar14._0_4_ + auVar20._4_4_ * auVar14._12_4_;
  fVar24 = auVar20._8_4_ * auVar14._4_4_ - auVar20._0_4_ * auVar14._12_4_;
  fVar25 = fVar16 * fVar4;
  fVar26 = fVar34 * fVar4;
  fVar27 = fVar36 * fVar4;
  fVar4 = fVar4 * 0.0;
  fVar28 = fVar32 * fVar9;
  fVar30 = fVar17 * fVar9;
  fVar31 = fVar33 * fVar9;
  fVar9 = fVar9 * 0.0;
  fVar3 = fVar35 * fVar10;
  fVar11 = fVar24 * fVar10;
  fVar15 = fVar23 * fVar10;
  fVar10 = fVar10 * 0.0;
  param_2[0x12] = fVar15 * fVar23 + fVar27 * fVar36 + fVar31 * fVar33;
  param_2[0x13] = fVar10 * fVar23 + fVar4 * fVar36 + fVar9 * fVar33;
  param_2[0x10] = fVar3 * fVar23 + fVar25 * fVar36 + fVar28 * fVar33;
  param_2[0x11] = fVar11 * fVar23 + fVar26 * fVar36 + fVar30 * fVar33;
  param_2[10] = fVar15 * fVar35 + fVar27 * fVar16 + fVar31 * fVar32;
  param_2[0xb] = fVar10 * fVar35 + fVar4 * fVar16 + fVar9 * fVar32;
  param_2[8] = fVar3 * fVar35 + fVar25 * fVar16 + fVar28 * fVar32;
  param_2[9] = fVar11 * fVar35 + fVar26 * fVar16 + fVar30 * fVar32;
  param_2[0xe] = fVar15 * fVar24 + fVar27 * fVar34 + fVar31 * fVar17;
  param_2[0xf] = fVar10 * fVar24 + fVar4 * fVar34 + fVar9 * fVar17;
  param_2[0xc] = fVar3 * fVar24 + fVar25 * fVar34 + fVar28 * fVar17;
  param_2[0xd] = fVar11 * fVar24 + fVar26 * fVar34 + fVar30 * fVar17;
  *param_2 = *(undefined4 *)(param_1 + 0xe);
  uVar1 = param_1[3];
  auVar12._6_2_ = param_1[1];
  auVar12._0_6_ = (uint6)*param_1 << 0x10;
  auVar12._8_2_ = 0;
  auVar12._10_2_ = param_1[2];
  auVar12._12_2_ = 0;
  auVar12._14_2_ = uVar1;
  auVar12 = NEON_scvtf(auVar12,4);
  fVar3 = auVar12._4_4_ * (float)((uint)uVar1 << 0x10);
  fVar4 = auVar12._12_4_ * (float)((uint)uVar1 << 0x10);
  *(ulong *)(param_2 + 6) =
       CONCAT26((short)((uint)fVar4 >> 0x10),
                CONCAT24(SUB42(fVar4,0),auVar12._8_4_ * (float)((uint)uVar1 << 0x10)));
  *(ulong *)(param_2 + 4) =
       CONCAT26((short)((uint)fVar3 >> 0x10),
                CONCAT24(SUB42(fVar3,0),auVar12._0_4_ * (float)((uint)uVar1 << 0x10)));
  param_2[1] = *(undefined4 *)(param_1 + 0xc);
  return;
}


