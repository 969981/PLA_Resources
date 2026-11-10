/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dfec70; name: FUN_02dfec70
 */


void FUN_02dfec70(undefined1 param_1 [16],float param_2,uint param_3,long param_4,float *param_5,
                 long param_6,long param_7,long param_8,long param_9)

{
  uint uVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  int iVar35;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  int iVar36;
  undefined1 local_a0 [16];
  undefined1 auStack_90 [16];
  float local_80 [4];
  undefined1 auStack_70 [16];
  undefined1 local_60 [16];
  
  FUN_02dfebd0(param_4,local_60,auStack_70,local_80,auStack_90,local_a0);
  if (param_3 != 0) {
    fVar13 = *param_5;
    fVar18 = fVar13 + param_5[2];
    fVar12 = fVar18 + fVar13;
    fVar15 = fVar12 + fVar13;
    fVar11 = fVar13 * 4.0;
    fVar13 = fVar15 + fVar13;
    fVar21 = local_80[2];
    fVar23 = local_80[3];
    fVar19 = local_80[1];
    fVar14 = param_2 * 20000.0;
    fVar28 = local_60._8_4_;
    fVar29 = local_60._12_4_;
    fVar26 = local_60._0_4_;
    fVar27 = local_60._4_4_;
    auVar16 = NEON_fmov(0x3f800000,4);
    auVar17 = NEON_fmov(0xbf800000,4);
    uVar9 = 0;
    do {
      lVar10 = uVar9 * 4;
      pfVar2 = (float *)(param_6 + lVar10);
      uVar1 = (int)uVar9 + 4;
      uVar9 = (ulong)uVar1;
      fVar5 = local_80[0] + local_a0._0_4_ + auStack_90._0_4_ * fVar26;
      fVar6 = fVar19 + local_a0._4_4_ + auStack_90._4_4_ * fVar27;
      fVar7 = fVar21 + local_a0._8_4_ + auStack_90._8_4_ * fVar28;
      fVar8 = fVar23 + local_a0._12_4_ + auStack_90._12_4_ * fVar29;
      local_80[0] = local_80[0] + *pfVar2 * (fVar14 - fVar26 * param_2) * fVar18 * 0.2;
      fVar19 = fVar19 + pfVar2[1] * (fVar14 - fVar27 * param_2) * fVar12 * 0.2;
      fVar21 = fVar21 + pfVar2[2] * (fVar14 - fVar28 * param_2) * fVar15 * 0.2;
      fVar23 = fVar23 + pfVar2[3] * (fVar14 - fVar29 * param_2) * fVar13 * 0.2;
      local_80[0] = local_80[0] - (float)(int)local_80[0];
      fVar19 = fVar19 - (float)(int)fVar19;
      fVar21 = fVar21 - (float)(int)fVar21;
      fVar23 = fVar23 - (float)(int)fVar23;
      auVar30._0_4_ = -(uint)(local_80[0] < 0.0);
      auVar30._4_4_ = -(uint)(fVar19 < 0.0);
      auVar30._8_4_ = -(uint)(fVar21 < 0.0);
      auVar30._12_4_ = -(uint)(fVar23 < 0.0);
      fVar18 = fVar18 + fVar11;
      fVar12 = fVar12 + fVar11;
      fVar15 = fVar15 + fVar11;
      fVar13 = fVar13 + fVar11;
      auVar32._4_4_ = fVar19;
      auVar32._0_4_ = local_80[0];
      auVar32._8_4_ = fVar21;
      auVar32._12_4_ = fVar23;
      auVar4._4_4_ = fVar19 + auVar16._4_4_;
      auVar4._0_4_ = local_80[0] + auVar16._0_4_;
      auVar4._8_4_ = fVar21 + auVar16._8_4_;
      auVar4._12_4_ = fVar23 + auVar16._12_4_;
      auVar31._4_4_ = fVar19;
      auVar31._0_4_ = local_80[0];
      auVar31._8_4_ = fVar21;
      auVar31._12_4_ = fVar23;
      auVar31 = auVar31 ^ (auVar32 ^ auVar4) & auVar30;
      fVar19 = auVar31._0_4_ + auVar17._0_4_;
      fVar21 = auVar31._4_4_ + auVar17._4_4_;
      fVar23 = auVar31._8_4_ + auVar17._8_4_;
      fVar24 = auVar31._12_4_ + auVar17._12_4_;
      fVar26 = fVar26 + auStack_70._0_4_;
      fVar27 = fVar27 + auStack_70._4_4_;
      fVar28 = fVar28 + auStack_70._8_4_;
      fVar29 = fVar29 + auStack_70._12_4_;
      auVar33._0_4_ = -(uint)(fVar19 < 0.0);
      auVar33._4_4_ = -(uint)(fVar21 < 0.0);
      auVar33._8_4_ = -(uint)(fVar23 < 0.0);
      auVar33._12_4_ = -(uint)(fVar24 < 0.0);
      auVar3._4_4_ = fVar21;
      auVar3._0_4_ = fVar19;
      auVar3._8_4_ = fVar23;
      auVar3._12_4_ = fVar24;
      auVar34._4_4_ = fVar21;
      auVar34._0_4_ = fVar19;
      auVar34._8_4_ = fVar23;
      auVar34._12_4_ = fVar24;
      auVar34 = auVar34 ^ (auVar3 ^ auVar31) & auVar33;
      fVar24 = auVar34._0_4_ * 512.0;
      fVar20 = auVar34._4_4_ * 512.0;
      fVar22 = auVar34._8_4_ * 512.0;
      fVar25 = auVar34._12_4_ * 512.0;
      auVar32 = NEON_fcvtzs(auVar34,9,4);
      ((undefined8 *)(param_7 + lVar10))[1] = auVar32._8_8_;
      *(undefined8 *)(param_7 + lVar10) = auVar32._0_8_;
      iVar35 = auVar32._4_4_ + 1;
      iVar36 = auVar32._12_4_ + 1;
      local_80[0] = fVar5 - (float)(int)fVar5;
      fVar19 = fVar6 - (float)(int)fVar6;
      fVar21 = fVar7 - (float)(int)fVar7;
      fVar23 = fVar8 - (float)(int)fVar8;
      ((ulong *)(param_8 + lVar10))[1] =
           (ulong)(CONCAT15((char)((uint)iVar36 >> 8),
                            CONCAT14((char)iVar36,(uint)(auVar32._8_2_ + 1U & 0x1ff))) &
                  0x1ffffffffff);
      *(ulong *)(param_8 + lVar10) =
           (ulong)(CONCAT15((char)((uint)iVar35 >> 8),
                            CONCAT14((char)iVar35,(uint)(auVar32._0_2_ + 1U & 0x1ff))) &
                  0x1ffffffffff);
      ((undefined8 *)(param_9 + lVar10))[1] =
           CONCAT44(fVar25 - (float)(int)fVar25,fVar22 - (float)(int)fVar22);
      *(undefined8 *)(param_9 + lVar10) =
           CONCAT44(fVar20 - (float)(int)fVar20,fVar24 - (float)(int)fVar24);
    } while (uVar1 < param_3);
  }
  *(float *)(param_4 + 0x14) = local_80[0];
  return;
}


