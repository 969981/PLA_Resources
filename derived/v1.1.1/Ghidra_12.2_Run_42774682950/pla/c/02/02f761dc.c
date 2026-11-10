/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f761dc; name: FUN_02f761dc
 */


void FUN_02f761dc(long param_1,long param_2,long param_3,float *param_4,float *param_5)

{
  long lVar1;
  float *pfVar2;
  code *pcVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  float fVar7;
  undefined1 auVar6 [16];
  undefined8 uVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar12 [16];
  int iVar16;
  undefined8 uVar17;
  int iVar21;
  undefined1 auVar18 [16];
  int iVar20;
  int iVar22;
  undefined1 auVar19 [16];
  float fVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar26;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_2 + 0x30) == '\0') {
    pauVar4 = *(undefined1 (**) [16])(param_3 + 0x20);
    puVar5 = *(undefined8 **)(param_2 + 0x20);
    NEON_ext(pauVar4[1],pauVar4[1],8,1);
    NEON_ext(*pauVar4,*pauVar4,8,1);
    NEON_ext(pauVar4[2],pauVar4[2],8,1);
    auVar6 = *pauVar4;
    auVar10 = pauVar4[1];
    auVar12 = pauVar4[2];
    auVar23 = NEON_ext(auVar10,auVar10,8,1);
    auVar18 = NEON_ext(auVar6,auVar6,8,1);
    auVar24 = NEON_ext(auVar12,auVar12,8,1);
    fVar11 = *(float *)(puVar5 + 4);
    fVar13 = *(float *)((long)puVar5 + 0x24);
    fVar15 = *(float *)(puVar5 + 5);
    local_80 = auVar18._0_4_ * fVar15 + auVar6._0_4_ * fVar11 + auVar6._4_4_ * fVar13;
    fStack_7c = auVar23._0_4_ * fVar15 + auVar10._0_4_ * fVar11 + auVar10._4_4_ * fVar13;
    fStack_78 = auVar24._0_4_ * fVar15 + auVar12._0_4_ * fVar11 + auVar12._4_4_ * fVar13;
    fStack_74 = auVar24._4_4_ * fVar15 + auVar12._4_4_ * fVar11 + auVar24._4_4_ * fVar13;
    auVar6 = pauVar4[2];
    auVar18 = NEON_ext(auVar6,auVar6,8,1);
    auVar10 = *pauVar4;
    auVar12 = pauVar4[1];
    auVar23 = NEON_ext(auVar10,auVar10,8,1);
    auVar24 = NEON_ext(auVar12,auVar12,8,1);
    fVar7 = auVar6._4_4_;
    fVar26 = auVar18._4_4_;
    fVar11 = *(float *)(puVar5 + 2);
    fVar13 = *(float *)((long)puVar5 + 0x14);
    fVar15 = *(float *)(puVar5 + 3);
    fVar25 = auVar6._0_4_;
    fVar14 = auVar18._0_4_;
    local_90 = auVar23._0_4_ * fVar15 + auVar10._0_4_ * fVar11 + auVar10._4_4_ * fVar13;
    fStack_8c = auVar24._0_4_ * fVar15 + auVar12._0_4_ * fVar11 + auVar12._4_4_ * fVar13;
    fStack_88 = fVar14 * fVar15 + fVar25 * fVar11 + fVar7 * fVar13;
    fStack_84 = fVar26 * fVar15 + fVar7 * fVar11 + fVar26 * fVar13;
    auVar6 = *pauVar4;
    auVar10 = pauVar4[1];
    auVar18 = NEON_ext(auVar10,auVar10,8,1);
    auVar12 = NEON_ext(auVar6,auVar6,8,1);
    fVar11 = (float)*puVar5;
    fVar13 = (float)((ulong)*puVar5 >> 0x20);
    fVar15 = (float)puVar5[1];
    local_a0 = auVar12._0_4_ * fVar15 + auVar6._0_4_ * fVar11 + auVar6._4_4_ * fVar13;
    fStack_9c = auVar18._0_4_ * fVar15 + auVar10._0_4_ * fVar11 + auVar10._4_4_ * fVar13;
    fStack_98 = fVar14 * fVar15 + fVar25 * fVar11 + fVar7 * fVar13;
    fStack_94 = fVar26 * fVar15 + fVar7 * fVar11 + fVar26 * fVar13;
    fVar11 = *(float *)(puVar5 + 6) - *(float *)pauVar4[3];
    fVar13 = *(float *)((long)puVar5 + 0x34) - *(float *)(pauVar4[3] + 4);
    fVar15 = *(float *)(puVar5 + 7) - *(float *)(pauVar4[3] + 8);
    auVar6 = *pauVar4;
    auVar12 = NEON_ext(auVar6,auVar6,8,1);
    local_70 = auVar12._0_4_ * fVar15 + auVar6._0_4_ * fVar11 + auVar6._4_4_ * fVar13;
    fStack_6c = auVar18._0_4_ * fVar15 + auVar10._0_4_ * fVar11 + auVar10._4_4_ * fVar13;
    fStack_68 = fVar14 * fVar15 + fVar25 * fVar11 + fVar7 * fVar13;
    fStack_64 = fVar26 * fVar15 + fVar7 * fVar11 + fVar26 * fVar13;
    if (*(char *)(param_3 + 0x30) == '\0') {
      auVar6 = NEON_fmov(0x3f800000,4);
      uStack_38 = auVar6._8_8_;
      local_40 = auVar6._0_8_;
      fStack_e8 = auVar6._8_4_;
      local_f0 = auVar6._0_4_;
      fStack_ec = auVar6._4_4_;
      lVar1 = *(long *)(param_1 + 0x28);
      goto LAB_02f76398;
    }
    auVar6 = *(undefined1 (*) [16])(param_3 + 0x40);
    auVar10 = NEON_frecpe(auVar6,4);
    auVar18 = NEON_frecps(auVar6,auVar10,4);
    auVar12._0_4_ = auVar10._0_4_ * auVar18._0_4_;
    auVar12._4_4_ = auVar10._4_4_ * auVar18._4_4_;
    auVar12._8_4_ = auVar10._8_4_ * auVar18._8_4_;
    auVar12._12_4_ = auVar10._12_4_ * auVar18._12_4_;
    auVar6 = NEON_frecps(auVar6,auVar12,4);
    local_f0 = auVar12._0_4_ * auVar6._0_4_;
    fStack_ec = auVar12._4_4_ * auVar6._4_4_;
    fStack_e8 = auVar12._8_4_ * auVar6._8_4_;
    fVar11 = auVar12._12_4_ * auVar6._12_4_;
    _fStack_a8 = CONCAT44(fVar11 * fStack_64,fStack_e8 * fStack_68);
    _local_b0 = CONCAT44(fStack_ec * fStack_6c,local_f0 * local_70);
    uStack_38 = CONCAT44(fVar11,fStack_e8);
    local_40 = CONCAT44(fStack_ec,local_f0);
    _fStack_d8 = CONCAT44(fVar11 * fStack_94,fStack_e8 * fStack_98);
    _local_e0 = CONCAT44(fStack_ec * fStack_9c,local_f0 * local_a0);
    _fStack_c8 = CONCAT44(fVar11 * fStack_84,fStack_e8 * fStack_88);
    _local_d0 = CONCAT44(fStack_ec * fStack_8c,local_f0 * local_90);
    auVar6._0_8_ = CONCAT44(fStack_ec * fStack_7c,local_f0 * local_80);
    auVar6._8_4_ = fStack_e8 * fStack_78;
    auVar6._12_4_ = fVar11 * fStack_74;
    local_f0 = ABS(local_f0);
    fStack_ec = ABS(fStack_ec);
    fStack_e8 = ABS(fStack_e8);
    uStack_b8 = auVar6._8_8_;
    lVar1 = *(long *)(param_1 + 0x28);
    local_c0 = auVar6._0_8_;
    if ((*(byte *)(lVar1 + 0x1a) & 1) == 0) {
      pcVar3 = *(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x18);
      pfVar2 = &local_e0;
      goto LAB_02f763b0;
    }
    FUN_02fdb1b0(lVar1,&local_e0,&local_60);
    fVar11 = *(float *)(*(long *)(param_1 + 0x28) + 0x20);
    uVar17 = CONCAT44(fStack_ec * fVar11,local_f0 * fVar11);
    uVar17 = NEON_fmaxp(uVar17,uVar17,4);
    uVar17 = NEON_fmax(CONCAT44(fStack_e8 * fVar11,fStack_e8 * fVar11),uVar17,4);
    fVar11 = (float)uVar17;
    local_50 = local_50 + fVar11;
    fVar13 = (float)((ulong)uVar17 >> 0x20);
    fStack_4c = fStack_4c + fVar13;
    fStack_48 = fStack_48 + fVar11;
    fStack_44 = fStack_44 + fVar13;
    local_60 = local_60 - fVar11;
    fStack_5c = fStack_5c - fVar13;
    fStack_58 = fStack_58 - fVar11;
    fStack_54 = fStack_54 - fVar13;
  }
  else {
    FUN_02f765b4(param_2,param_3,&local_a0,&local_40);
    local_f0 = ABS((float)local_40);
    fStack_ec = ABS(local_40._4_4_);
    fStack_e8 = ABS((float)uStack_38);
    lVar1 = *(long *)(param_1 + 0x28);
    if ((*(byte *)(lVar1 + 0x1a) & 1) != 0) {
      FUN_02fdb1b0(lVar1,&local_a0,&local_60);
      fVar11 = *(float *)(param_2 + 0x38);
      uVar17 = CONCAT44(fStack_ec,local_f0);
      uVar8 = CONCAT44(fStack_ec * fVar11,local_f0 * fVar11);
      uVar8 = NEON_fmaxp(uVar8,uVar8,4);
      uVar8 = NEON_fmax(CONCAT44(fStack_e8 * fVar11,fStack_e8 * fVar11),uVar8,4);
      fVar11 = (float)uVar8;
      local_50 = local_50 + fVar11;
      fVar13 = (float)((ulong)uVar8 >> 0x20);
      fStack_4c = fStack_4c + fVar13;
      fStack_48 = fStack_48 + fVar11;
      fStack_44 = fStack_44 + fVar13;
      local_60 = local_60 - fVar11;
      fStack_5c = fStack_5c - fVar13;
      fStack_58 = fStack_58 - fVar11;
      fStack_54 = fStack_54 - fVar13;
      goto LAB_02f763bc;
    }
LAB_02f76398:
    pcVar3 = *(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x18);
    pfVar2 = &local_a0;
LAB_02f763b0:
    (*pcVar3)(lVar1,pfVar2,&local_60);
  }
  uVar17 = CONCAT44(fStack_ec,local_f0);
LAB_02f763bc:
  uVar17 = NEON_fmaxp(uVar17,uVar17,4);
  fVar11 = *(float *)(param_1 + 0x9c) + *(float *)(param_1 + 100);
  uVar17 = NEON_fmax(CONCAT44(fStack_e8,fStack_e8),uVar17,4);
  if (fVar11 <= *(float *)(param_1 + 0x68)) {
    fVar11 = *(float *)(param_1 + 0x68);
  }
  fVar13 = (float)uVar17 * fVar11;
  fVar11 = (float)((ulong)uVar17 >> 0x20) * fVar11;
  local_40._0_4_ = *(float *)(param_1 + 0x40) * (float)local_40;
  local_40._4_4_ = *(float *)(param_1 + 0x44) * local_40._4_4_;
  uStack_38._0_4_ = *(float *)(param_1 + 0x48) * (float)uStack_38;
  auVar6 = ZEXT816(0x3f800000);
  iVar16 = -(uint)((float)local_40 == 0.0);
  iVar20 = -(uint)(local_40._4_4_ == 0.0);
  iVar21 = -(uint)((float)uStack_38 == 0.0);
  iVar22 = -(uint)(auVar6._0_4_ == 0.0);
  fVar15 = (float)CONCAT13((byte)((uint)(float)local_40 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                           CONCAT12((byte)((uint)(float)local_40 >> 0x10) &
                                    ~(byte)((uint)iVar16 >> 0x10),
                                    CONCAT11((byte)((uint)(float)local_40 >> 8) &
                                             ~(byte)((uint)iVar16 >> 8),
                                             SUB41((float)local_40,0) & ~(byte)iVar16)));
  auVar9._0_8_ = CONCAT17((byte)((uint)local_40._4_4_ >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                          CONCAT16((byte)((uint)local_40._4_4_ >> 0x10) &
                                   ~(byte)((uint)iVar20 >> 0x10),
                                   CONCAT15((byte)((uint)local_40._4_4_ >> 8) &
                                            ~(byte)((uint)iVar20 >> 8),
                                            CONCAT14(SUB41(local_40._4_4_,0) & ~(byte)iVar20,fVar15)
                                           )));
  auVar9[8] = SUB41((float)uStack_38,0) & ~(byte)iVar21;
  auVar9[9] = (byte)((uint)(float)uStack_38 >> 8) & ~(byte)((uint)iVar21 >> 8);
  auVar9[10] = (byte)((uint)(float)uStack_38 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10);
  auVar9[0xb] = (byte)((uint)(float)uStack_38 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18);
  auVar10._12_2_ = 0;
  auVar10._0_12_ = auVar9;
  auVar10[0xe] = auVar6[2] & ~(byte)((uint)iVar22 >> 0x10);
  auVar10[0xf] = auVar6[3] & ~(byte)((uint)iVar22 >> 0x18);
  auVar6 = NEON_frecpe(auVar10,4);
  iVar16 = -(uint)(fVar15 == 0.0);
  iVar20 = -(uint)((float)((ulong)auVar9._0_8_ >> 0x20) == 0.0);
  iVar21 = -(uint)(auVar9._8_4_ == 0.0);
  iVar22 = -(uint)(auVar10._12_4_ == 0.0);
  auVar12 = NEON_frecps(auVar10,auVar6,4);
  auVar19._0_4_ = auVar6._0_4_ * auVar12._0_4_;
  auVar19._4_4_ = auVar6._4_4_ * auVar12._4_4_;
  auVar19._8_4_ = auVar6._8_4_ * auVar12._8_4_;
  auVar19._12_4_ = auVar6._12_4_ * auVar12._12_4_;
  auVar23._8_4_ = 0x7f7fffee;
  auVar23._0_8_ = 0x7f7fffee7f7fffee;
  auVar23._12_4_ = 0x7f7fffee;
  auVar6 = NEON_frecps(auVar10,auVar19,4);
  auVar24._0_4_ = auVar19._0_4_ * auVar6._0_4_;
  auVar24._4_4_ = auVar19._4_4_ * auVar6._4_4_;
  auVar24._8_4_ = auVar19._8_4_ * auVar6._8_4_;
  auVar24._12_4_ = auVar19._12_4_ * auVar6._12_4_;
  param_4[2] = ((fStack_58 - fVar13) + fStack_48 + fVar13) * 0.5;
  param_4[3] = ((fStack_54 - fVar11) + fStack_44 + fVar11) * 0.5;
  *param_4 = ((local_60 - fVar13) + local_50 + fVar13) * 0.5;
  param_4[1] = ((fStack_5c - fVar11) + fStack_4c + fVar11) * 0.5;
  *(long *)(param_4 + 6) = auVar10._8_8_;
  *(undefined8 *)(param_4 + 4) = auVar9._0_8_;
  auVar18[0] = ~(byte)iVar16;
  auVar18[1] = ~(byte)((uint)iVar16 >> 8);
  auVar18[2] = ~(byte)((uint)iVar16 >> 0x10);
  auVar18[3] = ~(byte)((uint)iVar16 >> 0x18);
  auVar18[4] = ~(byte)iVar20;
  auVar18[5] = ~(byte)((uint)iVar20 >> 8);
  auVar18[6] = ~(byte)((uint)iVar20 >> 0x10);
  auVar18[7] = ~(byte)((uint)iVar20 >> 0x18);
  auVar18[8] = ~(byte)iVar21;
  auVar18[9] = ~(byte)((uint)iVar21 >> 8);
  auVar18[10] = ~(byte)((uint)iVar21 >> 0x10);
  auVar18[0xb] = ~(byte)((uint)iVar21 >> 0x18);
  auVar18[0xc] = ~(byte)iVar22;
  auVar18[0xd] = ~(byte)((uint)iVar22 >> 8);
  auVar18[0xe] = ~(byte)((uint)iVar22 >> 0x10);
  auVar18[0xf] = ~(byte)((uint)iVar22 >> 0x18);
  auVar23 = auVar23 ^ (auVar23 ^ auVar24) & auVar18;
  *(long *)(param_4 + 10) = auVar23._8_8_;
  *(long *)(param_4 + 8) = auVar23._0_8_;
  param_5[2] = ((fStack_48 + fVar13) - (fStack_58 - fVar13)) * 0.5;
  param_5[3] = ((fStack_44 + fVar11) - (fStack_54 - fVar11)) * 0.5;
  *param_5 = ((local_50 + fVar13) - (local_60 - fVar13)) * 0.5;
  param_5[1] = ((fStack_4c + fVar11) - (fStack_5c - fVar11)) * 0.5;
  return;
}


