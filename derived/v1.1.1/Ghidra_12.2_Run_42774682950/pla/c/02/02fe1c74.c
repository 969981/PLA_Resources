/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fe1c74; name: FUN_02fe1c74
 */


void FUN_02fe1c74(int *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float *pfVar1;
  uint uVar2;
  long lVar3;
  float *pfVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar20;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar26;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar32;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  
  uVar2 = param_1[1];
  if (3 < (int)uVar2) {
    auVar8 = ZEXT816(0);
    iVar9 = uVar2 - 4;
    iVar10 = 0;
    do {
      puVar5 = (undefined8 *)((long)param_1 + (long)iVar9 * 0xc + (long)*param_1);
      fVar26 = (float)*param_2;
      fVar13 = (float)*(undefined8 *)((long)puVar5 + 0xc) - fVar26;
      fVar29 = (float)((ulong)*param_2 >> 0x20);
      fVar17 = (float)((ulong)*(undefined8 *)((long)puVar5 + 0xc) >> 0x20) - fVar29;
      fVar30 = (float)param_2[1];
      fVar18 = *(float *)((long)puVar5 + 0x14) - fVar30;
      fVar31 = (float)((ulong)param_2[1] >> 0x20);
      fVar19 = *(float *)((long)puVar5 + 0x14) - fVar31;
      iVar11 = iVar10 + 4;
      fVar32 = (float)*puVar5 - fVar26;
      fVar35 = (float)((ulong)*puVar5 >> 0x20) - fVar29;
      fVar36 = *(float *)(puVar5 + 1) - fVar30;
      fVar37 = *(float *)(puVar5 + 1) - fVar31;
      fVar20 = (float)puVar5[3] - fVar26;
      fVar23 = (float)((ulong)puVar5[3] >> 0x20) - fVar29;
      fVar24 = *(float *)(puVar5 + 4) - fVar30;
      fVar25 = *(float *)(puVar5 + 4) - fVar31;
      auVar33._0_4_ = fVar32 * fVar32;
      auVar33._4_4_ = fVar35 * fVar35;
      auVar33._8_4_ = fVar36 * fVar36;
      auVar33._12_4_ = fVar37 * fVar37;
      auVar16._0_4_ = fVar13 * fVar13;
      auVar16._4_4_ = fVar17 * fVar17;
      auVar16._8_4_ = fVar18 * fVar18;
      auVar16._12_4_ = fVar19 * fVar19;
      fVar26 = (float)*(undefined8 *)((long)puVar5 + 0x24) - fVar26;
      fVar29 = (float)((ulong)*(undefined8 *)((long)puVar5 + 0x24) >> 0x20) - fVar29;
      fVar30 = *(float *)((long)puVar5 + 0x2c) - fVar30;
      fVar31 = *(float *)((long)puVar5 + 0x2c) - fVar31;
      auVar21._0_4_ = fVar20 * fVar20;
      auVar21._4_4_ = fVar23 * fVar23;
      auVar21._8_4_ = fVar24 * fVar24;
      auVar21._12_4_ = fVar25 * fVar25;
      auVar34 = NEON_ext(auVar33,auVar33,8,1);
      auVar27._0_4_ = fVar26 * fVar26;
      auVar27._4_4_ = fVar29 * fVar29;
      auVar27._8_4_ = fVar30 * fVar30;
      auVar27._12_4_ = fVar31 * fVar31;
      auVar15 = NEON_ext(auVar16,auVar16,8,1);
      auVar22 = NEON_ext(auVar21,auVar21,8,1);
      auVar28 = NEON_ext(auVar27,auVar27,8,1);
      auVar34._0_4_ = auVar34._0_4_ + auVar33._0_4_ + auVar33._4_4_;
      auVar34._4_4_ = auVar15._0_4_ + auVar16._0_4_ + auVar16._4_4_;
      auVar34._12_4_ = auVar28._0_4_ + auVar27._0_4_ + auVar27._4_4_;
      auVar34._8_4_ = auVar22._0_4_ + auVar21._0_4_ + auVar21._4_4_;
      auVar8 = NEON_fmax(auVar8,auVar34,4);
      iVar9 = iVar10;
      iVar10 = iVar11;
    } while (iVar11 < (int)uVar2);
    auVar16 = NEON_frsqrte(auVar8,4);
    iVar9 = -(uint)(auVar8._0_4_ <= 0.0);
    iVar10 = -(uint)(auVar8._4_4_ <= 0.0);
    iVar11 = -(uint)(auVar8._8_4_ <= 0.0);
    iVar12 = -(uint)(auVar8._12_4_ <= 0.0);
    fVar26 = auVar16._0_4_;
    auVar15._0_4_ = fVar26 * fVar26;
    fVar29 = auVar16._4_4_;
    auVar15._4_4_ = fVar29 * fVar29;
    fVar30 = auVar16._8_4_;
    auVar15._8_4_ = fVar30 * fVar30;
    fVar31 = auVar16._12_4_;
    auVar15._12_4_ = fVar31 * fVar31;
    auVar16 = NEON_frsqrts(auVar8,auVar15,4);
    fVar26 = fVar26 * auVar16._0_4_;
    fVar29 = fVar29 * auVar16._4_4_;
    fVar30 = fVar30 * auVar16._8_4_;
    fVar31 = fVar31 * auVar16._12_4_;
    auVar22._0_4_ = fVar26 * fVar26;
    auVar22._4_4_ = fVar29 * fVar29;
    auVar22._8_4_ = fVar30 * fVar30;
    auVar22._12_4_ = fVar31 * fVar31;
    auVar16 = NEON_frsqrts(auVar8,auVar22,4);
    fVar26 = auVar8._0_4_ * auVar16._0_4_ * fVar26;
    fVar29 = auVar8._4_4_ * auVar16._4_4_ * fVar29;
    fVar30 = auVar8._8_4_ * auVar16._8_4_ * fVar30;
    fVar31 = auVar8._12_4_ * auVar16._12_4_ * fVar31;
    auVar8[0] = SUB41(fVar26,0) & ~(byte)iVar9;
    auVar8[1] = (byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar9 >> 8);
    auVar8[2] = (byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10);
    auVar8[3] = (byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18);
    auVar8[4] = SUB41(fVar29,0) & ~(byte)iVar10;
    auVar8[5] = (byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar10 >> 8);
    auVar8[6] = (byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10);
    auVar8[7] = (byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18);
    auVar8[8] = SUB41(fVar30,0) & ~(byte)iVar11;
    auVar8[9] = (byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar11 >> 8);
    auVar8[10] = (byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10);
    auVar8[0xb] = (byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18);
    auVar8[0xc] = SUB41(fVar31,0) & ~(byte)iVar12;
    auVar8[0xd] = (byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar12 >> 8);
    auVar8[0xe] = (byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10);
    auVar8[0xf] = (byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18);
    uVar6 = NEON_fmaxnmv(auVar8,4);
    *param_3 = CONCAT44(uVar6,uVar6);
    return;
  }
  if ((int)uVar2 < 1) {
    uVar7 = 0;
  }
  else {
    puVar5 = (undefined8 *)((long)*param_1 + (long)param_1);
    fVar31 = (float)*param_2;
    fVar26 = (float)*puVar5 - fVar31;
    fVar13 = (float)((ulong)*param_2 >> 0x20);
    fVar29 = (float)((ulong)*puVar5 >> 0x20) - fVar13;
    fVar17 = (float)param_2[1];
    fVar26 = fVar26 * fVar26;
    fVar29 = fVar29 * fVar29;
    fVar30 = (*(float *)(puVar5 + 1) - fVar17) * (*(float *)(puVar5 + 1) - fVar17);
    uVar7 = NEON_fmax(CONCAT44(fVar26 + fVar29 + fVar30,fVar26 + fVar29 + fVar30),0,4);
    if ((uVar2 != 1) &&
       (fVar26 = (float)*(undefined8 *)((long)puVar5 + 0xc) - fVar31,
       fVar29 = (float)((ulong)*(undefined8 *)((long)puVar5 + 0xc) >> 0x20) - fVar13,
       fVar30 = *(float *)((long)puVar5 + 0x14) - fVar17, fVar26 = fVar26 * fVar26,
       fVar29 = fVar29 * fVar29, fVar30 = fVar30 * fVar30,
       uVar7 = NEON_fmax(uVar7,CONCAT44(fVar26 + fVar29 + fVar30,fVar26 + fVar29 + fVar30),4),
       uVar2 != 2)) {
      lVar3 = (ulong)uVar2 - 2;
      pfVar4 = (float *)(puVar5 + 4);
      do {
        fVar26 = *pfVar4;
        lVar3 = lVar3 + -1;
        pfVar1 = pfVar4 + -2;
        pfVar4 = pfVar4 + 3;
        fVar29 = (float)*(undefined8 *)pfVar1 - fVar31;
        fVar30 = (float)((ulong)*(undefined8 *)pfVar1 >> 0x20) - fVar13;
        fVar29 = fVar29 * fVar29;
        fVar30 = fVar30 * fVar30;
        fVar26 = (fVar26 - fVar17) * (fVar26 - fVar17);
        uVar7 = NEON_fmax(uVar7,CONCAT44(fVar29 + fVar30 + fVar26,fVar29 + fVar30 + fVar26),4);
      } while (lVar3 != 0);
    }
  }
  uVar14 = NEON_frsqrte(uVar7,4);
  fVar26 = (float)uVar14;
  fVar30 = (float)((ulong)uVar14 >> 0x20);
  uVar14 = NEON_frsqrts(uVar7,CONCAT44(fVar30 * fVar30,fVar26 * fVar26),4);
  fVar26 = fVar26 * (float)uVar14;
  fVar30 = fVar30 * (float)((ulong)uVar14 >> 0x20);
  uVar14 = NEON_frsqrts(uVar7,CONCAT44(fVar30 * fVar30,fVar26 * fVar26),4);
  iVar9 = -(uint)((float)uVar7 <= 0.0);
  fVar29 = (float)((ulong)uVar7 >> 0x20);
  iVar10 = -(uint)(fVar29 <= 0.0);
  fVar26 = (float)uVar7 * (float)uVar14 * fVar26;
  fVar29 = fVar29 * (float)((ulong)uVar14 >> 0x20) * fVar30;
  *param_3 = CONCAT17((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18),
                      CONCAT16((byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10),
                               CONCAT15((byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar10 >> 8),
                                        CONCAT14(SUB41(fVar29,0) & ~(byte)iVar10,
                                                 CONCAT13((byte)((uint)fVar26 >> 0x18) &
                                                          ~(byte)((uint)iVar9 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar26 >> 0x10) &
                                                                   ~(byte)((uint)iVar9 >> 0x10),
                                                                   CONCAT11((byte)((uint)fVar26 >> 8
                                                                                  ) & ~(byte)((uint)
                                                  iVar9 >> 8),SUB41(fVar26,0) & ~(byte)iVar9)))))));
  return;
}


