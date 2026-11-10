/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dfee10; name: FUN_02dfee10
 */


void FUN_02dfee10(uint param_1,long param_2,long param_3,long param_4,long param_5)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulong uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  undefined1 auVar19 [12];
  int iVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  int iVar25;
  int iVar26;
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 local_90 [16];
  undefined1 auStack_80 [16];
  float local_70 [4];
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  
  FUN_02dfebd0(param_2,&local_50,auStack_60,local_70,auStack_80,local_90);
  if (param_1 != 0) {
    fVar13 = *(float *)(param_2 + 0x30) * 0.01;
    fVar9 = fVar13 + *(float *)(param_2 + 0x38) * 0.01;
    fVar11 = fVar9 + fVar13;
    fVar10 = *(float *)(param_2 + 0x30) * 0.04;
    fVar12 = fVar11 + fVar13;
    fVar16 = local_70[2];
    fVar17 = local_70[3];
    fVar15 = local_70[1];
    fVar13 = fVar12 + fVar13;
    auVar14 = NEON_fmov(0x3f800000,4);
    uVar7 = 0;
    do {
      bVar2 = fVar9 <= local_70[0];
      bVar3 = fVar11 <= fVar15;
      auVar20._0_8_ = CONCAT44(-(uint)bVar3,-(uint)bVar2);
      auVar20._8_4_ = -(uint)(fVar12 <= fVar16);
      auVar20._12_4_ = -(uint)(fVar13 <= fVar17);
      fVar30 = auVar14._4_4_ - fVar11;
      fVar31 = auVar14._8_4_ - fVar12;
      fVar32 = auVar14._12_4_ - fVar13;
      lVar8 = uVar7 * 4;
      uVar1 = (int)uVar7 + 4;
      uVar7 = (ulong)uVar1;
      auVar27._8_8_ = auVar20._8_8_;
      auVar27._0_8_ = auVar20._0_8_;
      auVar22._4_4_ = fVar11;
      auVar22._0_4_ = fVar9;
      auVar22._8_4_ = fVar12;
      auVar22._12_4_ = fVar13;
      auVar5[4] = SUB41(fVar30,0);
      auVar5._0_4_ = auVar14._0_4_ - fVar9;
      auVar5[5] = (char)((uint)fVar30 >> 8);
      auVar5[6] = (char)((uint)fVar30 >> 0x10);
      auVar5[7] = (char)((uint)fVar30 >> 0x18);
      auVar5[8] = SUB41(fVar31,0);
      auVar5[9] = (char)((uint)fVar31 >> 8);
      auVar5[10] = (char)((uint)fVar31 >> 0x10);
      auVar5[0xb] = (char)((uint)fVar31 >> 0x18);
      auVar5[0xc] = SUB41(fVar32,0);
      auVar5[0xd] = (char)((uint)fVar32 >> 8);
      auVar5[0xe] = (char)((uint)fVar32 >> 0x10);
      auVar5[0xf] = (char)((uint)fVar32 >> 0x18);
      auVar21._4_4_ = fVar11;
      auVar21._0_4_ = fVar9;
      auVar21._8_4_ = fVar12;
      auVar21._12_4_ = fVar13;
      auVar21 = auVar21 ^ (auVar22 ^ auVar5) & auVar20;
      fVar30 = local_70[0] - fVar9;
      fVar31 = fVar15 - fVar11;
      fVar32 = fVar16 - fVar12;
      fVar33 = fVar17 - fVar13;
      fVar9 = fVar9 + fVar10;
      fVar11 = fVar11 + fVar10;
      fVar12 = fVar12 + fVar10;
      fVar13 = fVar13 + fVar10;
      auVar29._4_4_ = fVar15;
      auVar29._0_4_ = local_70[0];
      auVar29._8_4_ = fVar16;
      auVar29._12_4_ = fVar17;
      auVar6[4] = SUB41(fVar31,0);
      auVar6._0_4_ = fVar30;
      auVar6[5] = (char)((uint)fVar31 >> 8);
      auVar6[6] = (char)((uint)fVar31 >> 0x10);
      auVar6[7] = (char)((uint)fVar31 >> 0x18);
      auVar6[8] = SUB41(fVar32,0);
      auVar6[9] = (char)((uint)fVar32 >> 8);
      auVar6[10] = (char)((uint)fVar32 >> 0x10);
      auVar6[0xb] = (char)((uint)fVar32 >> 0x18);
      auVar6[0xc] = SUB41(fVar33,0);
      auVar6[0xd] = (char)((uint)fVar33 >> 8);
      auVar6[0xe] = (char)((uint)fVar33 >> 0x10);
      auVar6[0xf] = (char)((uint)fVar33 >> 0x18);
      auVar28._4_4_ = fVar15;
      auVar28._0_4_ = local_70[0];
      auVar28._8_4_ = fVar16;
      auVar28._12_4_ = fVar17;
      auVar28 = auVar28 ^ (auVar29 ^ auVar6) & auVar27;
      auVar29 = NEON_frecpe(auVar21,4);
      auVar22 = NEON_frecps(auVar21,auVar29,4);
      fVar30 = (float)local_50;
      fVar31 = (float)((ulong)local_50 >> 0x20);
      local_50 = CONCAT44(fVar31 + auStack_60._4_4_,fVar30 + auStack_60._0_4_);
      fVar32 = (float)uStack_48;
      fVar33 = (float)((ulong)uStack_48 >> 0x20);
      uStack_48 = CONCAT44(fVar33 + auStack_60._12_4_,fVar32 + auStack_60._8_4_);
      local_70[0] = local_70[0] + local_90._0_4_ + auStack_80._0_4_ * fVar30;
      fVar15 = fVar15 + local_90._4_4_ + auStack_80._4_4_ * fVar31;
      fVar16 = fVar16 + local_90._8_4_ + auStack_80._8_4_ * fVar32;
      fVar17 = fVar17 + local_90._12_4_ + auStack_80._12_4_ * fVar33;
      fVar30 = (float)((uint)((byte)(-(uint)bVar2 >> 0x18) & 0x3f) << 0x18) +
               auVar22._0_4_ * auVar29._0_4_ * auVar28._0_4_ * 0.5;
      fVar31 = (float)((uint)((byte)(-(uint)bVar3 >> 0x18) & 0x3f) << 0x18) +
               auVar22._4_4_ * auVar29._4_4_ * auVar28._4_4_ * 0.5;
      fVar32 = (float)((uint)((byte)((uint)auVar20._8_4_ >> 0x18) & 0x3f) << 0x18) +
               auVar22._8_4_ * auVar29._8_4_ * auVar28._8_4_ * 0.5;
      fVar33 = (float)((uint)((byte)((uint)auVar20._12_4_ >> 0x18) & 0x3f) << 0x18) +
               auVar22._12_4_ * auVar29._12_4_ * auVar28._12_4_ * 0.5;
      local_70[0] = local_70[0] - (float)(int)local_70[0];
      fVar15 = fVar15 - (float)(int)fVar15;
      fVar16 = fVar16 - (float)(int)fVar16;
      fVar17 = fVar17 - (float)(int)fVar17;
      iVar18 = -(uint)(fVar30 < auVar14._0_4_);
      iVar24 = -(uint)(fVar31 < auVar14._4_4_);
      iVar25 = -(uint)(fVar32 < auVar14._8_4_);
      iVar26 = -(uint)(fVar33 < auVar14._12_4_);
      fVar30 = fVar30 * 512.0;
      fVar31 = fVar31 * 512.0;
      fVar32 = fVar32 * 512.0;
      fVar33 = fVar33 * 512.0;
      fVar30 = (float)CONCAT13((byte)((uint)fVar30 >> 0x18) & (byte)((uint)iVar18 >> 0x18),
                               CONCAT12((byte)((uint)fVar30 >> 0x10) & (byte)((uint)iVar18 >> 0x10),
                                        CONCAT11((byte)((uint)fVar30 >> 8) &
                                                 (byte)((uint)iVar18 >> 8),
                                                 SUB41(fVar30,0) & (byte)iVar18)));
      auVar19._0_8_ =
           CONCAT17((byte)((uint)fVar31 >> 0x18) & (byte)((uint)iVar24 >> 0x18),
                    CONCAT16((byte)((uint)fVar31 >> 0x10) & (byte)((uint)iVar24 >> 0x10),
                             CONCAT15((byte)((uint)fVar31 >> 8) & (byte)((uint)iVar24 >> 8),
                                      CONCAT14(SUB41(fVar31,0) & (byte)iVar24,fVar30))));
      auVar19[8] = SUB41(fVar32,0) & (byte)iVar25;
      auVar19[9] = (byte)((uint)fVar32 >> 8) & (byte)((uint)iVar25 >> 8);
      auVar19[10] = (byte)((uint)fVar32 >> 0x10) & (byte)((uint)iVar25 >> 0x10);
      auVar19[0xb] = (byte)((uint)fVar32 >> 0x18) & (byte)((uint)iVar25 >> 0x18);
      auVar23[0xc] = SUB41(fVar33,0) & (byte)iVar26;
      auVar23._0_12_ = auVar19;
      auVar23[0xd] = (byte)((uint)fVar33 >> 8) & (byte)((uint)iVar26 >> 8);
      auVar23[0xe] = (byte)((uint)fVar33 >> 0x10) & (byte)((uint)iVar26 >> 0x10);
      auVar23[0xf] = (byte)((uint)fVar33 >> 0x18) & (byte)((uint)iVar26 >> 0x18);
      fVar31 = (float)((ulong)auVar19._0_8_ >> 0x20);
      iVar18 = (int)fVar31;
      fVar32 = auVar19._8_4_;
      fVar33 = auVar23._12_4_;
      iVar24 = (int)fVar33;
      ((undefined8 *)(param_3 + lVar8))[1] =
           CONCAT17((char)((uint)iVar24 >> 0x18),
                    CONCAT16((char)((uint)iVar24 >> 0x10),
                             CONCAT15((char)((uint)iVar24 >> 8),CONCAT14((char)iVar24,(int)fVar32)))
                   );
      *(undefined8 *)(param_3 + lVar8) =
           CONCAT17((char)((uint)iVar18 >> 0x18),
                    CONCAT16((char)((uint)iVar18 >> 0x10),
                             CONCAT15((char)((uint)iVar18 >> 8),CONCAT14((char)iVar18,(int)fVar30)))
                   );
      ((ulong *)(param_4 + lVar8))[1] =
           (ulong)(CONCAT15((char)((uint)(iVar24 + 1) >> 8),
                            CONCAT14((char)(iVar24 + 1),(uint)((short)(int)fVar32 + 1U & 0x1ff))) &
                  0x1ffffffffff);
      *(ulong *)(param_4 + lVar8) =
           (ulong)(CONCAT15((char)((uint)(iVar18 + 1) >> 8),
                            CONCAT14((char)(iVar18 + 1),(uint)((short)(int)fVar30 + 1U & 0x1ff))) &
                  0x1ffffffffff);
      pfVar4 = (float *)(param_5 + lVar8);
      pfVar4[2] = fVar32 - (float)(int)fVar32;
      pfVar4[3] = fVar33 - (float)(int)fVar33;
      *pfVar4 = fVar30 - (float)(int)fVar30;
      pfVar4[1] = fVar31 - (float)(int)fVar31;
    } while (uVar1 < param_1);
  }
  *(float *)(param_2 + 0x14) = local_70[0];
  return;
}


