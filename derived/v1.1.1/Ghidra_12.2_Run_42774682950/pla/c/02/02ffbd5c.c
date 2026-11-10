/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ffbd5c; name: FUN_02ffbd5c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02ffbd5c(long param_1,float *param_2,float *param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar9 [16];
  float fVar13;
  float fVar17;
  undefined1 auVar14 [12];
  float fVar18;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  
  fVar7 = ((float)*(undefined8 *)(param_2 + 4) - *param_2) * 0.5;
  fVar10 = ((float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20) - param_2[1]) * 0.5;
  fVar11 = ((float)*(undefined8 *)(param_2 + 6) - param_2[2]) * 0.5;
  fVar12 = ((float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20) - param_2[3]) * 0.5;
  auVar14._0_8_ =
       CONCAT17((char)(-(uint)(fVar10 == 0.0) >> 0x18),
                (uint7)((-(uint)(fVar7 == 0.0) >> 0x18 & 0x35) << 0x18)) & 0x35ffffffffffffff;
  auVar14._8_3_ = 0;
  auVar14[0xb] = (byte)(-(uint)(fVar11 == 0.0) >> 0x18) & 0x35;
  auVar20._12_3_ = 0;
  auVar20._0_12_ = auVar14;
  auVar20[0xf] = (byte)(-(uint)(fVar12 == 0.0) >> 0x18) & 0x35;
  auVar9._0_4_ = fVar7 + (float)auVar14._0_8_;
  auVar9._4_4_ = fVar10 + (float)(auVar14._0_8_ >> 0x20);
  auVar9._8_4_ = fVar11 + auVar14._8_4_;
  auVar9._12_4_ = fVar12 + auVar20._12_4_;
  auVar19._8_8_ = _UNK_038897b8;
  auVar19._0_8_ = _DAT_038897b0;
  auVar15._8_8_ = _UNK_03889f48;
  auVar15._0_8_ = _DAT_03889f40;
  fVar7 = auVar9._4_4_ * auVar9._4_4_;
  uVar21 = (undefined1)((uint)fVar7 >> 8);
  uVar22 = (undefined1)((uint)fVar7 >> 0x10);
  uVar23 = (undefined1)((uint)fVar7 >> 0x18);
  fVar10 = auVar9._8_4_ * auVar9._8_4_;
  uVar24 = (undefined1)((uint)fVar10 >> 8);
  uVar25 = (undefined1)((uint)fVar10 >> 0x10);
  uVar26 = (undefined1)((uint)fVar10 >> 0x18);
  fVar11 = auVar9._12_4_ * auVar9._12_4_;
  uVar27 = (undefined1)((uint)fVar11 >> 8);
  uVar28 = (undefined1)((uint)fVar11 >> 0x10);
  uVar29 = (undefined1)((uint)fVar11 >> 0x18);
  auVar16[4] = SUB41(fVar7,0);
  auVar16._0_4_ = auVar9._0_4_ * auVar9._0_4_;
  auVar16[5] = uVar21;
  auVar16[6] = uVar22;
  auVar16[7] = uVar23;
  auVar16[8] = SUB41(fVar10,0);
  auVar16[9] = uVar24;
  auVar16[10] = uVar25;
  auVar16[0xb] = uVar26;
  auVar16[0xc] = SUB41(fVar11,0);
  auVar16[0xd] = uVar27;
  auVar16[0xe] = uVar28;
  auVar16[0xf] = uVar29;
  auVar20 = a64_TBL(ZEXT816(0),auVar16,auVar19);
  auVar1[4] = SUB41(fVar7,0);
  auVar1._0_4_ = auVar9._0_4_ * auVar9._0_4_;
  auVar1[5] = uVar21;
  auVar1[6] = uVar22;
  auVar1[7] = uVar23;
  auVar1[8] = SUB41(fVar10,0);
  auVar1[9] = uVar24;
  auVar1[10] = uVar25;
  auVar1[0xb] = uVar26;
  auVar1[0xc] = SUB41(fVar11,0);
  auVar1[0xd] = uVar27;
  auVar1[0xe] = uVar28;
  auVar1[0xf] = uVar29;
  auVar16 = a64_TBL(ZEXT816(0),auVar1,auVar15);
  fVar13 = (auVar20._0_4_ + auVar16._0_4_) * 0.33333334;
  fVar17 = (auVar20._4_4_ + auVar16._4_4_) * 0.33333334;
  fVar18 = (auVar20._8_4_ + auVar16._8_4_) * 0.33333334;
  auVar16 = NEON_ext(auVar9,auVar9,8,1);
  fVar8 = auVar16._0_4_ * auVar9._0_4_ * auVar9._4_4_ * 8.0;
  *param_3 = fVar8;
  param_3[10] = fVar18;
  param_3[0xb] = 1.0;
  param_3[8] = fVar13;
  param_3[9] = fVar17;
  uVar6 = _DAT_0388a130;
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  fVar5 = param_2[3];
  fVar7 = (float)*(undefined8 *)(param_2 + 4);
  fVar10 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
  fVar11 = (float)*(undefined8 *)(param_2 + 6);
  fVar12 = (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20);
  *(undefined8 *)(param_3 + 0xe) = _UNK_0388a138;
  *(undefined8 *)(param_3 + 0xc) = uVar6;
  *(ulong *)(param_3 + 6) =
       CONCAT44(fVar12 + (fVar5 - fVar12) * 0.5,fVar11 + (fVar4 - fVar11) * 0.5);
  *(ulong *)(param_3 + 4) = CONCAT44(fVar10 + (fVar3 - fVar10) * 0.5,fVar7 + (fVar2 - fVar7) * 0.5);
  fVar10 = *(float *)(param_1 + 0x20);
  fVar7 = -(fVar10 * fVar8);
  if (0.0 <= fVar10) {
    fVar7 = fVar10;
  }
  fVar10 = *(float *)(param_1 + 0x1c) * fVar7;
  *(ulong *)(param_3 + 10) = CONCAT44(fVar10 * 1.0,fVar18 * fVar10);
  *(ulong *)(param_3 + 8) = CONCAT44(fVar17 * fVar10,fVar13 * fVar10);
  param_3[1] = fVar7;
  return 0;
}


