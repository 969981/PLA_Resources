/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dfef90; name: FUN_02dfef90
 */


void FUN_02dfef90(undefined1 param_1 [16],float param_2,uint param_3,long param_4,float *param_5,
                 long param_6,long param_7,long param_8,long param_9)

{
  uint uVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  float fVar17;
  undefined1 auVar15 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  int iVar23;
  int iVar27;
  int iVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  int iVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  ulong uVar33;
  ulong uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar39 [12];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 local_a0 [16];
  undefined1 auStack_90 [16];
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined1 auStack_70 [16];
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  
  FUN_02dfebd0(param_4,&local_60,auStack_70,&local_80,auStack_90,local_a0);
  if (param_3 != 0) {
    fVar20 = *(float *)(param_4 + 0x30) * 0.01;
    fVar10 = *param_5;
    fVar19 = fVar10 + param_5[2];
    fVar6 = fVar10 * 4.0;
    fVar12 = fVar19 + fVar10;
    fVar7 = fVar20 + *(float *)(param_4 + 0x38) * 0.01;
    fVar9 = fVar7 + fVar20;
    fVar13 = fVar12 + fVar10;
    fVar22 = fVar9 + fVar20;
    fVar8 = *(float *)(param_4 + 0x30) * 0.04;
    fVar20 = fVar22 + fVar20;
    fVar10 = fVar13 + fVar10;
    fVar11 = param_2 * 20000.0;
    auVar15 = NEON_fmov(0x3f800000,4);
    auVar21 = NEON_fmov(0xbf800000,4);
    uVar4 = 0;
    do {
      lVar5 = uVar4 * 4;
      pfVar2 = (float *)(param_6 + lVar5);
      uVar1 = (int)uVar4 + 4;
      uVar4 = (ulong)uVar1;
      fVar35 = local_80 + local_a0._0_4_ + auStack_90._0_4_ * local_60;
      fVar36 = fStack_7c + local_a0._4_4_ + auStack_90._4_4_ * fStack_5c;
      fVar37 = fStack_78 + local_a0._8_4_ + auStack_90._8_4_ * fStack_58;
      fVar38 = fStack_74 + local_a0._12_4_ + auStack_90._12_4_ * fStack_54;
      local_80 = local_80 + *pfVar2 * (fVar11 - local_60 * param_2) * fVar19 * 0.2;
      fStack_7c = fStack_7c + pfVar2[1] * (fVar11 - fStack_5c * param_2) * fVar12 * 0.2;
      fStack_78 = fStack_78 + pfVar2[2] * (fVar11 - fStack_58 * param_2) * fVar13 * 0.2;
      fStack_74 = fStack_74 + pfVar2[3] * (fVar11 - fStack_54 * param_2) * fVar10 * 0.2;
      auVar41._0_4_ = local_80 - (float)(int)local_80;
      auVar41._4_4_ = fStack_7c - (float)(int)fStack_7c;
      auVar41._8_4_ = fStack_78 - (float)(int)fStack_78;
      auVar41._12_4_ = fStack_74 - (float)(int)fStack_74;
      fVar14 = auVar15._0_4_;
      auVar30._0_4_ = auVar41._0_4_ + fVar14;
      fVar16 = auVar15._4_4_;
      auVar30._4_4_ = auVar41._4_4_ + fVar16;
      fVar17 = auVar15._8_4_;
      auVar30._8_4_ = auVar41._8_4_ + fVar17;
      fVar18 = auVar15._12_4_;
      auVar30._12_4_ = auVar41._12_4_ + fVar18;
      auVar40._0_4_ = -(uint)(auVar41._0_4_ < 0.0);
      auVar40._4_4_ = -(uint)(auVar41._4_4_ < 0.0);
      auVar40._8_4_ = -(uint)(auVar41._8_4_ < 0.0);
      auVar40._12_4_ = -(uint)(auVar41._12_4_ < 0.0);
      fVar19 = fVar19 + fVar6;
      fVar12 = fVar12 + fVar6;
      fVar13 = fVar13 + fVar6;
      fVar10 = fVar10 + fVar6;
      auVar41 = auVar41 ^ (auVar41 ^ auVar30) & auVar40;
      auVar32._0_4_ = auVar41._0_4_ + auVar21._0_4_;
      auVar32._4_4_ = auVar41._4_4_ + auVar21._4_4_;
      auVar32._8_4_ = auVar41._8_4_ + auVar21._8_4_;
      auVar32._12_4_ = auVar41._12_4_ + auVar21._12_4_;
      auVar31._0_4_ = -(uint)(auVar32._0_4_ < 0.0);
      auVar31._4_4_ = -(uint)(auVar32._4_4_ < 0.0);
      auVar31._8_4_ = -(uint)(auVar32._8_4_ < 0.0);
      auVar31._12_4_ = -(uint)(auVar32._12_4_ < 0.0);
      auVar32 = auVar32 ^ (auVar32 ^ auVar41) & auVar31;
      auVar42._0_4_ = fVar14 - fVar7;
      auVar42._4_4_ = fVar16 - fVar9;
      auVar42._8_4_ = fVar17 - fVar22;
      auVar42._12_4_ = fVar18 - fVar20;
      iVar23 = -(uint)(fVar7 <= auVar32._0_4_);
      iVar27 = -(uint)(fVar9 <= auVar32._4_4_);
      auVar24._0_8_ = CONCAT44(iVar27,iVar23);
      auVar24._8_4_ = -(uint)(fVar22 <= auVar32._8_4_);
      auVar24._12_4_ = -(uint)(fVar20 <= auVar32._12_4_);
      auVar44._8_8_ = auVar24._8_8_;
      auVar44._0_8_ = auVar24._0_8_;
      auVar26._4_4_ = fVar9;
      auVar26._0_4_ = fVar7;
      auVar26._8_4_ = fVar22;
      auVar26._12_4_ = fVar20;
      auVar25._4_4_ = fVar9;
      auVar25._0_4_ = fVar7;
      auVar25._8_4_ = fVar22;
      auVar25._12_4_ = fVar20;
      auVar25 = auVar25 ^ (auVar26 ^ auVar42) & auVar24;
      auVar41 = NEON_frecpe(auVar25,4);
      fVar45 = auVar32._0_4_ - fVar7;
      fVar46 = auVar32._4_4_ - fVar9;
      fVar47 = auVar32._8_4_ - fVar22;
      fVar48 = auVar32._12_4_ - fVar20;
      fVar7 = fVar7 + fVar8;
      fVar9 = fVar9 + fVar8;
      fVar22 = fVar22 + fVar8;
      fVar20 = fVar20 + fVar8;
      auVar26 = NEON_frecps(auVar25,auVar41,4);
      auVar3._4_4_ = fVar46;
      auVar3._0_4_ = fVar45;
      auVar3._8_4_ = fVar47;
      auVar3._12_4_ = fVar48;
      auVar32 = auVar32 ^ (auVar32 ^ auVar3) & auVar44;
      fVar45 = (float)((uint)((byte)((uint)iVar23 >> 0x18) & 0x3f) << 0x18) +
               auVar32._0_4_ * auVar41._0_4_ * 0.5 * auVar26._0_4_;
      fVar46 = (float)((uint)((byte)((uint)iVar27 >> 0x18) & 0x3f) << 0x18) +
               auVar32._4_4_ * auVar41._4_4_ * 0.5 * auVar26._4_4_;
      fVar47 = (float)((uint)((byte)((uint)auVar24._8_4_ >> 0x18) & 0x3f) << 0x18) +
               auVar32._8_4_ * auVar41._8_4_ * 0.5 * auVar26._8_4_;
      fVar48 = (float)((uint)((byte)((uint)auVar24._12_4_ >> 0x18) & 0x3f) << 0x18) +
               auVar32._12_4_ * auVar41._12_4_ * 0.5 * auVar26._12_4_;
      local_60 = local_60 + auStack_70._0_4_;
      fStack_5c = fStack_5c + auStack_70._4_4_;
      fStack_58 = fStack_58 + auStack_70._8_4_;
      fStack_54 = fStack_54 + auStack_70._12_4_;
      iVar23 = -(uint)(fVar45 < fVar14);
      iVar27 = -(uint)(fVar46 < fVar16);
      iVar28 = -(uint)(fVar47 < fVar17);
      iVar29 = -(uint)(fVar48 < fVar18);
      fVar45 = fVar45 * 512.0;
      fVar46 = fVar46 * 512.0;
      fVar47 = fVar47 * 512.0;
      fVar48 = fVar48 * 512.0;
      fVar45 = (float)CONCAT13((byte)((uint)fVar45 >> 0x18) & (byte)((uint)iVar23 >> 0x18),
                               CONCAT12((byte)((uint)fVar45 >> 0x10) & (byte)((uint)iVar23 >> 0x10),
                                        CONCAT11((byte)((uint)fVar45 >> 8) &
                                                 (byte)((uint)iVar23 >> 8),
                                                 SUB41(fVar45,0) & (byte)iVar23)));
      auVar39._0_8_ =
           CONCAT17((byte)((uint)fVar46 >> 0x18) & (byte)((uint)iVar27 >> 0x18),
                    CONCAT16((byte)((uint)fVar46 >> 0x10) & (byte)((uint)iVar27 >> 0x10),
                             CONCAT15((byte)((uint)fVar46 >> 8) & (byte)((uint)iVar27 >> 8),
                                      CONCAT14(SUB41(fVar46,0) & (byte)iVar27,fVar45))));
      auVar39[8] = SUB41(fVar47,0) & (byte)iVar28;
      auVar39[9] = (byte)((uint)fVar47 >> 8) & (byte)((uint)iVar28 >> 8);
      auVar39[10] = (byte)((uint)fVar47 >> 0x10) & (byte)((uint)iVar28 >> 0x10);
      auVar39[0xb] = (byte)((uint)fVar47 >> 0x18) & (byte)((uint)iVar28 >> 0x18);
      auVar43[0xc] = SUB41(fVar48,0) & (byte)iVar29;
      auVar43._0_12_ = auVar39;
      auVar43[0xd] = (byte)((uint)fVar48 >> 8) & (byte)((uint)iVar29 >> 8);
      auVar43[0xe] = (byte)((uint)fVar48 >> 0x10) & (byte)((uint)iVar29 >> 0x10);
      auVar43[0xf] = (byte)((uint)fVar48 >> 0x18) & (byte)((uint)iVar29 >> 0x18);
      fVar46 = (float)((ulong)auVar39._0_8_ >> 0x20);
      iVar23 = (int)fVar46;
      fVar47 = auVar39._8_4_;
      fVar48 = auVar43._12_4_;
      iVar27 = (int)fVar48;
      local_80 = fVar35 - (float)(int)fVar35;
      fStack_7c = fVar36 - (float)(int)fVar36;
      fStack_78 = fVar37 - (float)(int)fVar37;
      fStack_74 = fVar38 - (float)(int)fVar38;
      iVar28 = (int)fVar45 + 1;
      iVar29 = (int)fVar47 + 1;
      uVar33 = CONCAT62((int6)(CONCAT44(iVar23 + 1,iVar28) >> 0x10),(short)iVar28) &
               0xffffffffffff01ff;
      uVar34 = CONCAT62((int6)(CONCAT44(iVar27 + 1,iVar29) >> 0x10),(short)iVar29) &
               0xffffffffffff01ff;
      ((undefined8 *)(param_7 + lVar5))[1] =
           CONCAT17((char)((uint)iVar27 >> 0x18),
                    CONCAT16((char)((uint)iVar27 >> 0x10),
                             CONCAT15((char)((uint)iVar27 >> 8),CONCAT14((char)iVar27,(int)fVar47)))
                   );
      *(undefined8 *)(param_7 + lVar5) =
           CONCAT17((char)((uint)iVar23 >> 0x18),
                    CONCAT16((char)((uint)iVar23 >> 0x10),
                             CONCAT15((char)((uint)iVar23 >> 8),CONCAT14((char)iVar23,(int)fVar45)))
                   );
      ((ulong *)(param_8 + lVar5))[1] =
           (ulong)CONCAT15((char)(uVar34 >> 0x28),
                           CONCAT14((char)(uVar34 >> 0x20),(uint)(ushort)uVar34)) & 0x1ffffffffff;
      *(ulong *)(param_8 + lVar5) =
           (ulong)CONCAT15((char)(uVar33 >> 0x28),
                           CONCAT14((char)(uVar33 >> 0x20),(uint)(ushort)uVar33)) & 0x1ffffffffff;
      ((undefined8 *)(param_9 + lVar5))[1] =
           CONCAT44(fVar48 - (float)(int)fVar48,fVar47 - (float)(int)fVar47);
      *(undefined8 *)(param_9 + lVar5) =
           CONCAT44(fVar46 - (float)(int)fVar46,fVar45 - (float)(int)fVar45);
    } while (uVar1 < param_3);
  }
  *(float *)(param_4 + 0x14) = local_80;
  return;
}


