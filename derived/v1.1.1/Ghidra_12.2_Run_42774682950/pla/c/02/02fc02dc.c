/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fc02dc; name: FUN_02fc02dc
 */


void FUN_02fc02dc(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 long param_6,undefined8 *param_7,byte param_8,long param_9,undefined8 param_10)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar6 [16];
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined1 auVar14 [12];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  int iVar18;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 local_150;
  undefined8 uStack_148;
  long local_140 [2];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  long lStack_e8;
  long local_e0;
  undefined8 uStack_d8;
  long local_d0;
  byte local_c8;
  long local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar3 = *(long *)(param_2 + 0x28);
  if (*(char *)(param_3 + 0x30) == '\0') {
    if (*(char *)(param_6 + 0x30) == '\0') {
      auVar6 = NEON_fmov(0x3f800000,4);
      uStack_148 = auVar6._8_8_;
      auVar26._0_8_ = auVar6._0_8_;
      local_80 = auVar26._0_8_;
      uStack_78 = uStack_148;
      (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar3 + 0x18) * 0x200 + 0x18))
                (lVar3,param_7,&local_b0);
      goto LAB_02fc03ac;
    }
    auVar6 = *(undefined1 (*) [16])(param_6 + 0x40);
    auVar26 = NEON_frecpe(auVar6,4);
    auVar16 = NEON_frecps(auVar6,auVar26,4);
    auVar12._0_4_ = auVar26._0_4_ * auVar16._0_4_;
    auVar12._4_4_ = auVar26._4_4_ * auVar16._4_4_;
    auVar12._8_4_ = auVar26._8_4_ * auVar16._8_4_;
    auVar12._12_4_ = auVar26._12_4_ * auVar16._12_4_;
    auVar6 = NEON_frecps(auVar6,auVar12,4);
    fVar4 = auVar12._0_4_ * auVar6._0_4_;
    fVar5 = auVar12._4_4_ * auVar6._4_4_;
    auVar16._0_8_ = CONCAT44(fVar5,fVar4);
    auVar16._8_4_ = auVar12._8_4_ * auVar6._8_4_;
    auVar16._12_4_ = auVar12._12_4_ * auVar6._12_4_;
    fVar4 = ABS(fVar4);
    fVar5 = ABS(fVar5);
    auVar26._0_8_ = CONCAT44(fVar5,fVar4);
    auVar26._8_4_ = ABS(auVar16._8_4_);
    auVar26._12_4_ = ABS(auVar16._12_4_);
    uStack_78 = auVar16._8_8_;
    uStack_148 = auVar26._8_8_;
    local_80 = auVar16._0_8_;
    if ((lVar3 != 0) && ((*(ushort *)(lVar3 + 0x1a) & 1) != 0)) {
      FUN_02fdb1b0(lVar3,param_7,&local_b0);
      local_a0._0_4_ = (float)local_80 * (float)local_a0;
      local_a0._4_4_ = local_80._4_4_ * local_a0._4_4_;
      uStack_98._0_4_ = (float)uStack_78 * (float)uStack_98;
      uStack_98._4_4_ = uStack_78._4_4_ * uStack_98._4_4_;
      fVar8 = (float)local_b0 * (float)local_80;
      fVar7 = local_b0._4_4_ * local_80._4_4_;
      fVar9 = (float)uStack_a8 * (float)uStack_78;
      fVar11 = uStack_a8._4_4_ * uStack_78._4_4_;
      fVar10 = *(float *)(lVar3 + 0x20);
      uVar13 = CONCAT44(fVar5 * fVar10,fVar4 * fVar10);
      uVar13 = NEON_fmaxp(uVar13,uVar13,4);
      uVar13 = NEON_fmax(CONCAT44(auVar26._8_4_ * fVar10,auVar26._8_4_ * fVar10),uVar13,4);
      fVar4 = (float)uVar13;
      fVar5 = (float)((ulong)uVar13 >> 0x20);
      uStack_a8 = CONCAT44((float)((uint)fVar11 ^
                                  ((uint)fVar11 ^ (uint)uStack_98._4_4_) &
                                  -(uint)(uStack_78._4_4_ < 0.0)) - fVar5,
                           (float)((uint)fVar9 ^
                                  ((uint)fVar9 ^ (uint)(float)uStack_98) &
                                  -(uint)((float)uStack_78 < 0.0)) - fVar4);
      local_b0 = CONCAT44((float)((uint)fVar7 ^
                                 ((uint)fVar7 ^ (uint)local_a0._4_4_) &
                                 -(uint)(local_80._4_4_ < 0.0)) - fVar5,
                          (float)((uint)fVar8 ^
                                 ((uint)fVar8 ^ (uint)(float)local_a0) &
                                 -(uint)((float)local_80 < 0.0)) - fVar4);
      uStack_98 = CONCAT44((float)((uint)uStack_98._4_4_ ^
                                  ((uint)uStack_98._4_4_ ^ (uint)fVar11) &
                                  -(uint)(uStack_78._4_4_ < 0.0)) + fVar5,
                           (float)((uint)(float)uStack_98 ^
                                  ((uint)(float)uStack_98 ^ (uint)fVar9) &
                                  -(uint)((float)uStack_78 < 0.0)) + fVar4);
      local_a0 = CONCAT44((float)((uint)local_a0._4_4_ ^
                                 ((uint)local_a0._4_4_ ^ (uint)fVar7) &
                                 -(uint)(local_80._4_4_ < 0.0)) + fVar5,
                          (float)((uint)(float)local_a0 ^
                                 ((uint)(float)local_a0 ^ (uint)fVar8) &
                                 -(uint)((float)local_80 < 0.0)) + fVar4);
      goto LAB_02fc03ac;
    }
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar3 + 0x18) * 0x200 + 0x18))
              (lVar3,param_7,&local_b0);
    fVar4 = (float)local_b0 * (float)local_80;
    fVar5 = local_b0._4_4_ * local_80._4_4_;
    fVar8 = (float)uStack_a8 * (float)uStack_78;
    fVar10 = uStack_a8._4_4_ * uStack_78._4_4_;
    local_a0._0_4_ = (float)local_80 * (float)local_a0;
    local_a0._4_4_ = local_80._4_4_ * local_a0._4_4_;
    uStack_98._0_4_ = (float)uStack_78 * (float)uStack_98;
    uStack_98._4_4_ = uStack_78._4_4_ * uStack_98._4_4_;
    uStack_a8 = CONCAT44((uint)fVar10 ^
                         ((uint)fVar10 ^ (uint)uStack_98._4_4_) & -(uint)(uStack_78._4_4_ < 0.0),
                         (uint)fVar8 ^
                         ((uint)fVar8 ^ (uint)(float)uStack_98) & -(uint)((float)uStack_78 < 0.0));
    local_b0 = CONCAT44((uint)fVar5 ^
                        ((uint)fVar5 ^ (uint)local_a0._4_4_) & -(uint)(local_80._4_4_ < 0.0),
                        (uint)fVar4 ^
                        ((uint)fVar4 ^ (uint)(float)local_a0) & -(uint)((float)local_80 < 0.0));
    uStack_98 = CONCAT44((uint)uStack_98._4_4_ ^
                         ((uint)uStack_98._4_4_ ^ (uint)fVar10) & -(uint)(uStack_78._4_4_ < 0.0),
                         (uint)(float)uStack_98 ^
                         ((uint)(float)uStack_98 ^ (uint)fVar8) & -(uint)((float)uStack_78 < 0.0));
    local_a0 = CONCAT44((uint)local_a0._4_4_ ^
                        ((uint)local_a0._4_4_ ^ (uint)fVar5) & -(uint)(local_80._4_4_ < 0.0),
                        (uint)(float)local_a0 ^
                        ((uint)(float)local_a0 ^ (uint)fVar4) & -(uint)((float)local_80 < 0.0));
    local_150 = auVar26._0_8_;
  }
  else {
    FUN_02fbc3d0(param_3,param_6,local_140,&local_80);
    fVar4 = ABS((float)local_80);
    fVar5 = ABS(local_80._4_4_);
    auVar6._0_8_ = CONCAT44(fVar5,fVar4);
    auVar6._8_4_ = ABS((float)uStack_78);
    auVar6._12_4_ = ABS(uStack_78._4_4_);
    uStack_148 = auVar6._8_8_;
    local_150 = auVar6._0_8_;
    if ((lVar3 == 0) || ((*(ushort *)(lVar3 + 0x1a) & 1) == 0)) {
      (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar3 + 0x18) * 0x200 + 0x18))
                (lVar3,local_140,&local_b0);
    }
    else {
      FUN_02fdb1b0(lVar3,local_140,&local_b0);
      fVar8 = *(float *)(param_3 + 0x38);
      auVar26._0_8_ = CONCAT44(fVar5 * fVar8,fVar4 * fVar8);
      auVar26._0_8_ = NEON_fmaxp(auVar26._0_8_,auVar26._0_8_,4);
      auVar26._0_8_ = NEON_fmax(CONCAT44(auVar6._8_4_ * fVar8,auVar6._8_4_ * fVar8),auVar26._0_8_,4)
      ;
      fVar4 = (float)auVar26._0_8_;
      fVar5 = (float)((ulong)auVar26._0_8_ >> 0x20);
      uStack_a8 = CONCAT44(uStack_a8._4_4_ - fVar5,(float)uStack_a8 - fVar4);
      local_b0 = CONCAT44(local_b0._4_4_ - fVar5,(float)local_b0 - fVar4);
      uStack_98 = CONCAT44(uStack_98._4_4_ + fVar5,(float)uStack_98 + fVar4);
      local_a0 = CONCAT44(local_a0._4_4_ + fVar5,(float)local_a0 + fVar4);
    }
  }
  auVar26._0_8_ = local_150;
LAB_02fc03ac:
  fVar4 = *(float *)(param_2 + 0x9c) + *(float *)(param_2 + 100);
  auVar26._0_8_ = NEON_fmaxp(auVar26._0_8_,auVar26._0_8_,4);
  if (fVar4 <= *(float *)(param_2 + 0x68)) {
    fVar4 = *(float *)(param_2 + 0x68);
  }
  auVar26._0_8_ = NEON_fmax(CONCAT44((int)uStack_148,(int)uStack_148),auVar26._0_8_,4);
  fVar5 = (float)auVar26._0_8_ * fVar4;
  fVar4 = (float)((ulong)auVar26._0_8_ >> 0x20) * fVar4;
  fVar8 = (float)uStack_a8 - fVar5;
  fVar10 = uStack_a8._4_4_ - fVar4;
  local_c0 = param_9;
  local_80._0_4_ = (float)local_80 * *(float *)(param_2 + 0x40);
  local_80._4_4_ = local_80._4_4_ * *(float *)(param_2 + 0x44);
  uStack_78._0_4_ = (float)uStack_78 * *(float *)(param_2 + 0x48);
  auVar6 = ZEXT816(0x3f800000);
  auVar17._0_8_ =
       CONCAT44(((local_b0._4_4_ - fVar4) + local_a0._4_4_ + fVar4) * 0.5,
                (((float)local_b0 - fVar5) + (float)local_a0 + fVar5) * 0.5);
  auVar17._8_4_ = (fVar8 + (float)uStack_98 + fVar5) * 0.5;
  auVar17._12_4_ = (fVar10 + uStack_98._4_4_ + fVar4) * 0.5;
  iVar18 = -(uint)((float)local_80 == 0.0);
  iVar21 = -(uint)(local_80._4_4_ == 0.0);
  iVar22 = -(uint)((float)uStack_78 == 0.0);
  iVar23 = -(uint)(auVar6._0_4_ == 0.0);
  fVar7 = (float)CONCAT13((byte)((uint)(float)local_80 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                          CONCAT12((byte)((uint)(float)local_80 >> 0x10) &
                                   ~(byte)((uint)iVar18 >> 0x10),
                                   CONCAT11((byte)((uint)(float)local_80 >> 8) &
                                            ~(byte)((uint)iVar18 >> 8),
                                            SUB41((float)local_80,0) & ~(byte)iVar18)));
  auVar14._0_8_ =
       CONCAT17((byte)((uint)local_80._4_4_ >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                CONCAT16((byte)((uint)local_80._4_4_ >> 0x10) & ~(byte)((uint)iVar21 >> 0x10),
                         CONCAT15((byte)((uint)local_80._4_4_ >> 8) & ~(byte)((uint)iVar21 >> 8),
                                  CONCAT14(SUB41(local_80._4_4_,0) & ~(byte)iVar21,fVar7))));
  auVar14[8] = SUB41((float)uStack_78,0) & ~(byte)iVar22;
  auVar14[9] = (byte)((uint)(float)uStack_78 >> 8) & ~(byte)((uint)iVar22 >> 8);
  auVar14[10] = (byte)((uint)(float)uStack_78 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10);
  auVar14[0xb] = (byte)((uint)(float)uStack_78 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18);
  auVar15._12_2_ = 0;
  auVar15._0_12_ = auVar14;
  auVar15[0xe] = auVar6[2] & ~(byte)((uint)iVar23 >> 0x10);
  auVar15[0xf] = auVar6[3] & ~(byte)((uint)iVar23 >> 0x18);
  auVar6 = NEON_frecpe(auVar15,4);
  iVar18 = -(uint)(fVar7 == 0.0);
  iVar21 = -(uint)((float)((ulong)auVar14._0_8_ >> 0x20) == 0.0);
  iVar22 = -(uint)(auVar14._8_4_ == 0.0);
  iVar23 = -(uint)(auVar15._12_4_ == 0.0);
  auVar19[0] = ~(byte)iVar18;
  auVar19[1] = ~(byte)((uint)iVar18 >> 8);
  auVar19[2] = ~(byte)((uint)iVar18 >> 0x10);
  auVar19[3] = ~(byte)((uint)iVar18 >> 0x18);
  auVar19[4] = ~(byte)iVar21;
  auVar19[5] = ~(byte)((uint)iVar21 >> 8);
  auVar19[6] = ~(byte)((uint)iVar21 >> 0x10);
  auVar19[7] = ~(byte)((uint)iVar21 >> 0x18);
  auVar19[8] = ~(byte)iVar22;
  auVar19[9] = ~(byte)((uint)iVar22 >> 8);
  auVar19[10] = ~(byte)((uint)iVar22 >> 0x10);
  auVar19[0xb] = ~(byte)((uint)iVar22 >> 0x18);
  auVar19[0xc] = ~(byte)iVar23;
  auVar19[0xd] = ~(byte)((uint)iVar23 >> 8);
  auVar19[0xe] = ~(byte)((uint)iVar23 >> 0x10);
  auVar19[0xf] = ~(byte)((uint)iVar23 >> 0x18);
  auVar26 = NEON_frecps(auVar15,auVar6,4);
  uStack_a8 = auVar17._8_8_;
  uStack_78 = CONCAT44(((uStack_98._4_4_ + fVar4) - fVar10) * 0.5,
                       (((float)uStack_98 + fVar5) - fVar8) * 0.5);
  local_80 = CONCAT44(((local_a0._4_4_ + fVar4) - (local_b0._4_4_ - fVar4)) * 0.5,
                      (((float)local_a0 + fVar5) - ((float)local_b0 - fVar5)) * 0.5);
  auVar24._0_4_ = auVar6._0_4_ * auVar26._0_4_;
  auVar24._4_4_ = auVar6._4_4_ * auVar26._4_4_;
  auVar24._8_4_ = auVar6._8_4_ * auVar26._8_4_;
  auVar24._12_4_ = auVar6._12_4_ * auVar26._12_4_;
  auVar6 = NEON_frecps(auVar15,auVar24,4);
  auVar25._0_4_ = auVar24._0_4_ * auVar6._0_4_;
  auVar25._4_4_ = auVar24._4_4_ * auVar6._4_4_;
  auVar25._8_4_ = auVar24._8_4_ * auVar6._8_4_;
  auVar25._12_4_ = auVar24._12_4_ * auVar6._12_4_;
  auVar20._8_4_ = 0x7f7fffee;
  auVar20._0_8_ = 0x7f7fffee7f7fffee;
  auVar20._12_4_ = 0x7f7fffee;
  local_c8 = param_8 & 1;
  auVar20 = auVar20 ^ (auVar20 ^ auVar25) & auVar19;
  uStack_98 = auVar15._8_8_;
  uStack_88 = auVar20._8_8_;
  uStack_90 = auVar20._0_8_;
  local_130 = *param_7;
  uStack_128 = param_7[1];
  local_120 = param_7[2];
  uStack_118 = param_7[3];
  local_110 = param_7[4];
  uStack_108 = param_7[5];
  local_100 = param_7[6];
  uStack_f8 = param_7[7];
  lVar2 = *(long *)(param_4 + 0x58);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = lVar2 + param_4 + 0x58;
  }
  plVar1 = (long *)(lVar3 + 0x50);
  lVar2 = *plVar1;
  auVar6 = *(undefined1 (*) [16])((long)plVar1 + lVar2 + 0x90);
  local_140[0] = param_4;
  local_f0 = param_1;
  lStack_e8 = param_2;
  local_e0 = param_3;
  uStack_d8 = param_5;
  local_d0 = param_6;
  uStack_b8 = param_10;
  local_b0 = auVar17._0_8_;
  local_a0 = auVar14._0_8_;
  if (((auVar6._0_4_ < *(float *)((long)plVar1 + lVar2 + 0x80) &&
       auVar6._4_4_ < *(float *)((long)plVar1 + lVar2 + 0x84)) &&
      auVar6._8_4_ < *(float *)((long)plVar1 + lVar2 + 0x88)) &&
      auVar6._12_4_ < *(float *)((long)plVar1 + lVar2 + 0x8c)) {
    FUN_02fc0fa4(lVar3 + 0x20,&local_b0,&local_80,local_140);
  }
  else {
    FUN_02fc06bc(plVar1,&local_b0,&local_80,local_140,(*(byte *)(param_9 + 8) & 0x41) == 0);
  }
  return;
}


