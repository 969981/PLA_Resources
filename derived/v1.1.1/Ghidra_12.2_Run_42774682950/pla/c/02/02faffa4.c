/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02faffa4; name: FUN_02faffa4
 */


void FUN_02faffa4(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 long param_6,undefined8 *param_7,byte param_8,long param_9,undefined8 param_10)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [12];
  float fVar20;
  float fVar21;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  int iVar32;
  undefined1 auVar33 [12];
  int iVar37;
  int iVar38;
  int iVar39;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar40 [12];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  float local_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float local_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined **local_270 [2];
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  long local_220;
  undefined1 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined4 local_1e0;
  undefined8 local_1dc;
  int local_1d0;
  uint local_1cc;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  long lStack_178;
  long local_170;
  undefined8 uStack_168;
  long local_160;
  long lStack_158;
  byte local_150;
  long local_148;
  undefined8 uStack_140;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  int local_88;
  
  fVar12 = *(float *)(param_2 + 0x9c) + *(float *)(param_2 + 100);
  plVar10 = (long *)(param_4 + 0x48);
  if (fVar12 <= *(float *)(param_2 + 0x68)) {
    fVar12 = *(float *)(param_2 + 0x68);
  }
  lVar6 = 0;
  if (*plVar10 != 0) {
    lVar6 = *plVar10 + (long)plVar10;
  }
  cVar2 = *(char *)(lVar6 + 0x108);
  lVar1 = lVar6 + 0x20;
  local_220 = lVar1;
  local_180 = param_1;
  lStack_178 = param_2;
  local_170 = param_3;
  uStack_168 = param_5;
  local_160 = param_6;
  lStack_158 = param_4;
  if (cVar2 != '\0' || *(char *)(param_6 + 0x30) == '\0') {
    lVar11 = *(long *)(param_2 + 0x28);
    if (*(char *)(param_3 + 0x30) == '\0') {
      if (*(char *)(param_6 + 0x30) == '\0') {
        auVar15 = NEON_fmov(0x3f800000,4);
        uStack_98 = auVar15._8_8_;
        local_a0 = auVar15._0_8_;
        (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar11 + 0x18) * 0x200 + 0x18))
                  (lVar11,param_7,&local_2b0);
        auVar40 = auVar15._0_12_;
        goto LAB_02fb00d8;
      }
      auVar15 = *(undefined1 (*) [16])(param_6 + 0x40);
      auVar41 = NEON_frecpe(auVar15,4);
      auVar26 = NEON_frecps(auVar15,auVar41,4);
      auVar30._0_4_ = auVar41._0_4_ * auVar26._0_4_;
      auVar30._4_4_ = auVar41._4_4_ * auVar26._4_4_;
      auVar30._8_4_ = auVar41._8_4_ * auVar26._8_4_;
      auVar30._12_4_ = auVar41._12_4_ * auVar26._12_4_;
      auVar15 = NEON_frecps(auVar15,auVar30,4);
      local_2e0 = auVar30._0_4_ * auVar15._0_4_;
      fStack_2dc = auVar30._4_4_ * auVar15._4_4_;
      auVar41._0_8_ = CONCAT44(fStack_2dc,local_2e0);
      auVar41._8_4_ = auVar30._8_4_ * auVar15._8_4_;
      auVar41._12_4_ = auVar30._12_4_ * auVar15._12_4_;
      local_2e0 = ABS(local_2e0);
      fStack_2dc = ABS(fStack_2dc);
      fStack_2d8 = ABS(auVar41._8_4_);
      uStack_98 = auVar41._8_8_;
      local_a0 = auVar41._0_8_;
      if ((lVar11 != 0) && ((*(ushort *)(lVar11 + 0x1a) & 1) != 0)) {
        FUN_02fdb1b0(lVar11,param_7,&local_2b0);
        auVar40._4_4_ = fStack_2dc;
        auVar40._0_4_ = local_2e0;
        auVar40._8_4_ = fStack_2d8;
        local_2a0._0_4_ = (float)local_a0 * (float)local_2a0;
        local_2a0._4_4_ = local_a0._4_4_ * local_2a0._4_4_;
        uStack_298._0_4_ = (float)uStack_98 * (float)uStack_298;
        uStack_298._4_4_ = uStack_98._4_4_ * uStack_298._4_4_;
        fVar13 = (float)local_2b0 * (float)local_a0;
        fVar20 = local_2b0._4_4_ * local_a0._4_4_;
        fVar21 = (float)uStack_2a8 * (float)uStack_98;
        fVar22 = uStack_2a8._4_4_ * uStack_98._4_4_;
        fVar23 = *(float *)(lVar11 + 0x20);
        uVar24 = CONCAT44(fStack_2dc * fVar23,local_2e0 * fVar23);
        uVar24 = NEON_fmaxp(uVar24,uVar24,4);
        uVar24 = NEON_fmax(CONCAT44(fStack_2d8 * fVar23,fStack_2d8 * fVar23),uVar24,4);
        fVar23 = (float)uVar24;
        fVar31 = (float)((ulong)uVar24 >> 0x20);
        uStack_2a8 = CONCAT44((float)((uint)fVar22 ^
                                     ((uint)fVar22 ^ (uint)uStack_298._4_4_) &
                                     -(uint)(uStack_98._4_4_ < 0.0)) - fVar31,
                              (float)((uint)fVar21 ^
                                     ((uint)fVar21 ^ (uint)(float)uStack_298) &
                                     -(uint)((float)uStack_98 < 0.0)) - fVar23);
        local_2b0 = CONCAT44((float)((uint)fVar20 ^
                                    ((uint)fVar20 ^ (uint)local_2a0._4_4_) &
                                    -(uint)(local_a0._4_4_ < 0.0)) - fVar31,
                             (float)((uint)fVar13 ^
                                    ((uint)fVar13 ^ (uint)(float)local_2a0) &
                                    -(uint)((float)local_a0 < 0.0)) - fVar23);
        uStack_298 = CONCAT44((float)((uint)uStack_298._4_4_ ^
                                     ((uint)uStack_298._4_4_ ^ (uint)fVar22) &
                                     -(uint)(uStack_98._4_4_ < 0.0)) + fVar31,
                              (float)((uint)(float)uStack_298 ^
                                     ((uint)(float)uStack_298 ^ (uint)fVar21) &
                                     -(uint)((float)uStack_98 < 0.0)) + fVar23);
        local_2a0 = CONCAT44((float)((uint)local_2a0._4_4_ ^
                                    ((uint)local_2a0._4_4_ ^ (uint)fVar20) &
                                    -(uint)(local_a0._4_4_ < 0.0)) + fVar31,
                             (float)((uint)(float)local_2a0 ^
                                    ((uint)(float)local_2a0 ^ (uint)fVar13) &
                                    -(uint)((float)local_a0 < 0.0)) + fVar23);
        goto LAB_02fb00d8;
      }
      (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar11 + 0x18) * 0x200 + 0x18))
                (lVar11,param_7,&local_2b0);
      fVar13 = (float)local_2b0 * (float)local_a0;
      fVar23 = local_2b0._4_4_ * local_a0._4_4_;
      fVar20 = (float)uStack_2a8 * (float)uStack_98;
      fVar31 = uStack_2a8._4_4_ * uStack_98._4_4_;
      local_2a0._0_4_ = (float)local_a0 * (float)local_2a0;
      local_2a0._4_4_ = local_a0._4_4_ * local_2a0._4_4_;
      uStack_298._0_4_ = (float)uStack_98 * (float)uStack_298;
      uStack_298._4_4_ = uStack_98._4_4_ * uStack_298._4_4_;
      uStack_2a8 = CONCAT44((uint)fVar31 ^
                            ((uint)fVar31 ^ (uint)uStack_298._4_4_) & -(uint)(uStack_98._4_4_ < 0.0)
                            ,(uint)fVar20 ^
                             ((uint)fVar20 ^ (uint)(float)uStack_298) &
                             -(uint)((float)uStack_98 < 0.0));
      local_2b0 = CONCAT44((uint)fVar23 ^
                           ((uint)fVar23 ^ (uint)local_2a0._4_4_) & -(uint)(local_a0._4_4_ < 0.0),
                           (uint)fVar13 ^
                           ((uint)fVar13 ^ (uint)(float)local_2a0) & -(uint)((float)local_a0 < 0.0))
      ;
      uStack_298 = CONCAT44((uint)uStack_298._4_4_ ^
                            ((uint)uStack_298._4_4_ ^ (uint)fVar31) & -(uint)(uStack_98._4_4_ < 0.0)
                            ,(uint)(float)uStack_298 ^
                             ((uint)(float)uStack_298 ^ (uint)fVar20) &
                             -(uint)((float)uStack_98 < 0.0));
      local_2a0 = CONCAT44((uint)local_2a0._4_4_ ^
                           ((uint)local_2a0._4_4_ ^ (uint)fVar23) & -(uint)(local_a0._4_4_ < 0.0),
                           (uint)(float)local_2a0 ^
                           ((uint)(float)local_2a0 ^ (uint)fVar13) & -(uint)((float)local_a0 < 0.0))
      ;
    }
    else {
      FUN_02fbc3d0(param_3,param_6,local_270,&local_a0);
      local_2e0 = ABS((float)local_a0);
      fStack_2dc = ABS(local_a0._4_4_);
      fStack_2d8 = ABS((float)uStack_98);
      if ((lVar11 == 0) || ((*(ushort *)(lVar11 + 0x1a) & 1) == 0)) {
        (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar11 + 0x18) * 0x200 + 0x18))
                  (lVar11,local_270,&local_2b0);
      }
      else {
        FUN_02fdb1b0(lVar11,local_270,&local_2b0);
        fVar13 = *(float *)(param_3 + 0x38);
        uVar24 = CONCAT44(fStack_2dc * fVar13,local_2e0 * fVar13);
        uVar24 = NEON_fmaxp(uVar24,uVar24,4);
        uVar24 = NEON_fmax(CONCAT44(fStack_2d8 * fVar13,fStack_2d8 * fVar13),uVar24,4);
        fVar13 = (float)uVar24;
        fVar23 = (float)((ulong)uVar24 >> 0x20);
        uStack_2a8 = CONCAT44(uStack_2a8._4_4_ - fVar23,(float)uStack_2a8 - fVar13);
        local_2b0 = CONCAT44(local_2b0._4_4_ - fVar23,(float)local_2b0 - fVar13);
        uStack_298 = CONCAT44(uStack_298._4_4_ + fVar23,(float)uStack_298 + fVar13);
        local_2a0 = CONCAT44(local_2a0._4_4_ + fVar23,(float)local_2a0 + fVar13);
      }
    }
    auVar40._4_4_ = fStack_2dc;
    auVar40._0_4_ = local_2e0;
    auVar40._8_4_ = fStack_2d8;
LAB_02fb00d8:
    uVar24 = NEON_fmaxp(auVar40._0_8_,auVar40._0_8_,4);
    local_230 = 0;
    uStack_228 = 0;
    local_240 = 0;
    uStack_238 = 0;
    uVar24 = NEON_fmax(CONCAT44(auVar40._8_4_,auVar40._8_4_),uVar24,4);
    local_a0._0_4_ = (float)local_a0 * *(float *)(param_2 + 0x40);
    local_a0._4_4_ = local_a0._4_4_ * *(float *)(param_2 + 0x44);
    uStack_98._0_4_ = (float)uStack_98 * *(float *)(param_2 + 0x48);
    auVar15 = ZEXT816(0x3f800000);
    fVar23 = fVar12 * (float)uVar24;
    fVar12 = fVar12 * (float)((ulong)uVar24 >> 0x20);
    local_150 = param_8 & 1;
    iVar32 = -(uint)((float)local_a0 == 0.0);
    iVar37 = -(uint)(local_a0._4_4_ == 0.0);
    iVar38 = -(uint)((float)uStack_98 == 0.0);
    iVar39 = -(uint)(auVar15._0_4_ == 0.0);
    fVar13 = (float)CONCAT13((byte)((uint)(float)local_a0 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                             CONCAT12((byte)((uint)(float)local_a0 >> 0x10) &
                                      ~(byte)((uint)iVar32 >> 0x10),
                                      CONCAT11((byte)((uint)(float)local_a0 >> 8) &
                                               ~(byte)((uint)iVar32 >> 8),
                                               SUB41((float)local_a0,0) & ~(byte)iVar32)));
    auVar14._0_8_ =
         CONCAT17((byte)((uint)local_a0._4_4_ >> 0x18) & ~(byte)((uint)iVar37 >> 0x18),
                  CONCAT16((byte)((uint)local_a0._4_4_ >> 0x10) & ~(byte)((uint)iVar37 >> 0x10),
                           CONCAT15((byte)((uint)local_a0._4_4_ >> 8) & ~(byte)((uint)iVar37 >> 8),
                                    CONCAT14(SUB41(local_a0._4_4_,0) & ~(byte)iVar37,fVar13))));
    auVar14[8] = SUB41((float)uStack_98,0) & ~(byte)iVar38;
    auVar14[9] = (byte)((uint)(float)uStack_98 >> 8) & ~(byte)((uint)iVar38 >> 8);
    auVar14[10] = (byte)((uint)(float)uStack_98 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10);
    auVar14[0xb] = (byte)((uint)(float)uStack_98 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18);
    auVar16._12_2_ = 0;
    auVar16._0_12_ = auVar14;
    auVar16[0xe] = auVar15[2] & ~(byte)((uint)iVar39 >> 0x10);
    auVar16[0xf] = auVar15[3] & ~(byte)((uint)iVar39 >> 0x18);
    auVar15 = NEON_frecpe(auVar16,4);
    auVar41 = NEON_frecps(auVar16,auVar15,4);
    local_270[0] = &PTR_LAB_042b06c8;
    uStack_98 = CONCAT44(((uStack_298._4_4_ + fVar12) - (uStack_2a8._4_4_ - fVar12)) * 0.5,
                         (((float)uStack_298 + fVar23) - ((float)uStack_2a8 - fVar23)) * 0.5);
    local_a0 = CONCAT44(((local_2a0._4_4_ + fVar12) - (local_2b0._4_4_ - fVar12)) * 0.5,
                        (((float)local_2a0 + fVar23) - ((float)local_2b0 - fVar23)) * 0.5);
    auVar34._0_4_ = auVar15._0_4_ * auVar41._0_4_;
    auVar34._4_4_ = auVar15._4_4_ * auVar41._4_4_;
    auVar34._8_4_ = auVar15._8_4_ * auVar41._8_4_;
    auVar34._12_4_ = auVar15._12_4_ * auVar41._12_4_;
    auVar42._0_8_ =
         CONCAT44(((local_2b0._4_4_ - fVar12) + local_2a0._4_4_ + fVar12) * 0.5,
                  (((float)local_2b0 - fVar23) + (float)local_2a0 + fVar23) * 0.5);
    auVar42._8_4_ = (((float)uStack_2a8 - fVar23) + (float)uStack_298 + fVar23) * 0.5;
    auVar42._12_4_ = ((uStack_2a8._4_4_ - fVar12) + uStack_298._4_4_ + fVar12) * 0.5;
    auVar15 = NEON_frecps(auVar16,auVar34,4);
    iVar32 = -(uint)(fVar13 == 0.0);
    iVar37 = -(uint)((float)((ulong)auVar14._0_8_ >> 0x20) == 0.0);
    iVar38 = -(uint)(auVar14._8_4_ == 0.0);
    iVar39 = -(uint)(auVar16._12_4_ == 0.0);
    auVar25[0] = ~(byte)iVar32;
    auVar25[1] = ~(byte)((uint)iVar32 >> 8);
    auVar25[2] = ~(byte)((uint)iVar32 >> 0x10);
    auVar25[3] = ~(byte)((uint)iVar32 >> 0x18);
    auVar25[4] = ~(byte)iVar37;
    auVar25[5] = ~(byte)((uint)iVar37 >> 8);
    auVar25[6] = ~(byte)((uint)iVar37 >> 0x10);
    auVar25[7] = ~(byte)((uint)iVar37 >> 0x18);
    auVar25[8] = ~(byte)iVar38;
    auVar25[9] = ~(byte)((uint)iVar38 >> 8);
    auVar25[10] = ~(byte)((uint)iVar38 >> 0x10);
    auVar25[0xb] = ~(byte)((uint)iVar38 >> 0x18);
    auVar25[0xc] = ~(byte)iVar39;
    auVar25[0xd] = ~(byte)((uint)iVar39 >> 8);
    auVar25[0xe] = ~(byte)((uint)iVar39 >> 0x10);
    auVar25[0xf] = ~(byte)((uint)iVar39 >> 0x18);
    uStack_2a8 = auVar42._8_8_;
    uStack_298 = auVar16._8_8_;
    auVar35._0_4_ = auVar34._0_4_ * auVar15._0_4_;
    auVar35._4_4_ = auVar34._4_4_ * auVar15._4_4_;
    auVar35._8_4_ = auVar34._8_4_ * auVar15._8_4_;
    auVar35._12_4_ = auVar34._12_4_ * auVar15._12_4_;
    auVar15._8_4_ = 0x7f7fffee;
    auVar15._0_8_ = 0x7f7fffee7f7fffee;
    auVar15._12_4_ = 0x7f7fffee;
    auVar26._8_4_ = 0x7f7fffee;
    auVar26._0_8_ = 0x7f7fffee7f7fffee;
    auVar26._12_4_ = 0x7f7fffee;
    auVar26 = auVar26 ^ (auVar15 ^ auVar35) & auVar25;
    uStack_288 = auVar26._8_8_;
    local_290 = auVar26._0_8_;
    bVar3 = *(byte *)(param_9 + 8);
    local_1c8 = *(undefined8 *)(param_6 + 0x28);
    local_1cc = bVar3 & 4;
    if ((bVar3 >> 2 & 1) == 0) {
      local_218 = *(undefined1 *)(lVar6 + 0x5c);
    }
    else {
      local_218 = 0;
    }
    local_210 = 0;
    uStack_208 = 0;
    local_1e0 = 0;
    local_200 = 0;
    uStack_1f8 = 0;
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_1dc = 0xffffffffffffffff;
    local_260 = *(undefined8 *)(lVar6 + 0x30);
    uStack_258 = *(undefined8 *)(lVar6 + 0x38);
    auVar15 = *(undefined1 (*) [16])PTR_DAT_04372410;
    auVar27._0_8_ =
         CONCAT44((*(float *)(lVar6 + 0x44) - *(float *)(lVar6 + 0x34)) * auVar15._4_4_,
                  (*(float *)(lVar6 + 0x40) - *(float *)(lVar6 + 0x30)) * auVar15._0_4_);
    auVar27._8_4_ = (*(float *)(lVar6 + 0x48) - *(float *)(lVar6 + 0x38)) * auVar15._8_4_;
    auVar27._12_4_ = (*(float *)(lVar6 + 0x4c) - *(float *)(lVar6 + 0x3c)) * auVar15._12_4_;
    uStack_248 = auVar27._8_8_;
    local_1d0 = 0x20 - *(int *)(lVar6 + 0x54);
    local_148 = param_9;
    uStack_140 = param_10;
    local_1c0 = *param_7;
    uStack_1b8 = param_7[1];
    local_1b0 = param_7[2];
    uStack_1a8 = param_7[3];
    local_1a0 = param_7[4];
    uStack_198 = param_7[5];
    uStack_188 = SUB168(*(undefined1 (*) [16])(param_7 + 6),8);
    local_190 = SUB168(*(undefined1 (*) [16])(param_7 + 6),0);
    local_2b0 = auVar42._0_8_;
    local_2a0 = auVar14._0_8_;
    local_250 = auVar27._0_8_;
    if (cVar2 == '\0') {
      FUN_02fb2320(lVar1,&local_2b0,&local_a0,local_270);
      return;
    }
    lVar6 = 0;
    if (*plVar10 != 0) {
      lVar6 = *plVar10 + (long)plVar10;
    }
    FUN_02fb078c(lVar6 + 0xc0,&local_2b0,&local_a0,local_270,(bVar3 & 0x41) == 0);
    return;
  }
  local_270[0] = &PTR_LAB_042b0718;
  local_230 = 0;
  uStack_228 = 0;
  local_150 = param_8 & 1;
  local_240 = 0;
  uStack_238 = 0;
  local_1c8 = *(undefined8 *)(param_6 + 0x28);
  local_1cc = *(byte *)(param_9 + 8) & 4;
  if ((*(byte *)(param_9 + 8) >> 2 & 1) == 0) {
    local_218 = *(undefined1 *)(lVar6 + 0x5c);
  }
  else {
    local_218 = 0;
  }
  local_210 = 0;
  uStack_208 = 0;
  local_1e0 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1dc = 0xffffffffffffffff;
  local_260 = *(undefined8 *)(lVar6 + 0x30);
  uStack_258 = *(undefined8 *)(lVar6 + 0x38);
  auVar15 = *(undefined1 (*) [16])PTR_DAT_04372410;
  uStack_248 = CONCAT44((*(float *)(lVar6 + 0x4c) - *(float *)(lVar6 + 0x3c)) * auVar15._12_4_,
                        (*(float *)(lVar6 + 0x48) - *(float *)(lVar6 + 0x38)) * auVar15._8_4_);
  local_250 = CONCAT44((*(float *)(lVar6 + 0x44) - *(float *)(lVar6 + 0x34)) * auVar15._4_4_,
                       (*(float *)(lVar6 + 0x40) - *(float *)(lVar6 + 0x30)) * auVar15._0_4_);
  local_1d0 = 0x20 - *(int *)(lVar6 + 0x54);
  local_148 = param_9;
  uStack_140 = param_10;
  local_1c0 = *param_7;
  uStack_1b8 = param_7[1];
  local_1b0 = param_7[2];
  uStack_1a8 = param_7[3];
  local_1a0 = param_7[4];
  uStack_198 = param_7[5];
  local_190 = param_7[6];
  uStack_188 = param_7[7];
  pfVar8 = *(float **)(param_3 + 0x20);
  fVar13 = *(float *)(param_3 + 0x40);
  fVar23 = *(float *)(param_3 + 0x44);
  fVar20 = *(float *)(param_3 + 0x48);
  uStack_2a8 = CONCAT44(pfVar8[3] * fVar13,pfVar8[2] * fVar13);
  local_2b0 = CONCAT44(pfVar8[1] * fVar13,*pfVar8 * fVar13);
  uStack_298 = CONCAT44(pfVar8[7] * fVar23,pfVar8[6] * fVar23);
  local_2a0 = CONCAT44(pfVar8[5] * fVar23,pfVar8[4] * fVar23);
  uStack_288 = CONCAT44(pfVar8[0xb] * fVar20,pfVar8[10] * fVar20);
  local_290 = CONCAT44(pfVar8[9] * fVar20,pfVar8[8] * fVar20);
  auVar15 = *(undefined1 (*) [16])(param_3 + 0x50);
  auVar17._0_8_ = CONCAT44(pfVar8[0xd] + auVar15._4_4_,pfVar8[0xc] + auVar15._0_4_);
  auVar17._8_4_ = pfVar8[0xe] + auVar15._8_4_;
  auVar17._12_4_ = pfVar8[0xf] + auVar15._12_4_;
  uStack_278 = auVar17._8_8_;
  local_280 = auVar17._0_8_;
  (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(*(long *)(param_2 + 0x28) + 0x18) * 0x200 + 0x18))
            (*(long *)(param_2 + 0x28),&local_2b0,&local_2d0);
  fStack_2c0 = fVar12 + fStack_2c0;
  fStack_2bc = fVar12 + fStack_2bc;
  fStack_2b8 = fVar12 + fStack_2b8;
  fStack_2b4 = fVar12 + fStack_2b4;
  local_2d0 = local_2d0 - fVar12;
  fStack_2cc = fStack_2cc - fVar12;
  fStack_2c8 = fStack_2c8 - fVar12;
  fStack_2c4 = fStack_2c4 - fVar12;
  local_100 = (fStack_2c0 - local_2d0) * 0.5;
  fStack_fc = (fStack_2bc - fStack_2cc) * 0.5;
  fStack_f8 = (fStack_2b8 - fStack_2c8) * 0.5;
  fStack_f4 = (fStack_2b4 - fStack_2c4) * 0.5;
  pfVar8 = *(float **)(param_6 + 0x20);
  fVar12 = *(float *)(param_2 + 0x40);
  fVar13 = *(float *)(param_2 + 0x44);
  fVar23 = *(float *)(param_2 + 0x48);
  fVar44 = (float)*(undefined8 *)(pfVar8 + 6);
  fVar21 = (float)*(undefined8 *)(pfVar8 + 4);
  fVar22 = (float)((ulong)*(undefined8 *)(pfVar8 + 4) >> 0x20);
  fVar46 = (float)*(undefined8 *)(pfVar8 + 8);
  fVar47 = (float)((ulong)*(undefined8 *)(pfVar8 + 8) >> 0x20);
  fVar48 = (float)*(undefined8 *)(pfVar8 + 10);
  local_130 = (fStack_2c0 + local_2d0) * 0.5;
  fStack_12c = (fStack_2bc + fStack_2cc) * 0.5;
  fStack_128 = (fStack_2b8 + fStack_2c8) * 0.5;
  fStack_124 = (fStack_2b4 + fStack_2c4) * 0.5;
  fVar20 = fVar46 * fVar23 + *pfVar8 * fVar12 + fVar21 * fVar13;
  fVar31 = fVar47 * fVar23 + pfVar8[1] * fVar12 + fVar22 * fVar13;
  fVar12 = fVar48 * fVar23 + pfVar8[2] * fVar12 + fVar44 * fVar13;
  auVar15 = ZEXT816(0x3f800000);
  iVar32 = -(uint)(fVar20 == 0.0);
  iVar37 = -(uint)(fVar31 == 0.0);
  iVar38 = -(uint)(fVar12 == 0.0);
  iVar39 = -(uint)(auVar15._0_4_ == 0.0);
  fVar23 = (float)CONCAT13((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                           CONCAT12((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10),
                                    CONCAT11((byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar32 >> 8),
                                             SUB41(fVar20,0) & ~(byte)iVar32)));
  auVar33._0_8_ =
       CONCAT17((byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18),
                CONCAT16((byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar37 >> 0x10),
                         CONCAT15((byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar37 >> 8),
                                  CONCAT14(SUB41(fVar31,0) & ~(byte)iVar37,fVar23))));
  auVar33[8] = SUB41(fVar12,0) & ~(byte)iVar38;
  auVar33[9] = (byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar38 >> 8);
  auVar33[10] = (byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10);
  auVar33[0xb] = (byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18);
  auVar36._12_2_ = 0;
  auVar36._0_12_ = auVar33;
  auVar36[0xe] = auVar15[2] & ~(byte)((uint)iVar39 >> 0x10);
  auVar36[0xf] = auVar15[3] & ~(byte)((uint)iVar39 >> 0x18);
  auVar15 = NEON_frecpe(auVar36,4);
  auVar41 = NEON_frecps(auVar36,auVar15,4);
  auVar28._0_4_ = auVar15._0_4_ * auVar41._0_4_;
  auVar28._4_4_ = auVar15._4_4_ * auVar41._4_4_;
  auVar28._8_4_ = auVar15._8_4_ * auVar41._8_4_;
  auVar28._12_4_ = auVar15._12_4_ * auVar41._12_4_;
  fStack_e4 = *(float *)(param_6 + 0x40);
  fVar12 = *(float *)(param_6 + 0x44);
  fVar13 = *(float *)(param_6 + 0x48);
  auVar15 = *(undefined1 (*) [16])(param_6 + 0x50);
  uStack_118 = auVar36._8_8_;
  auVar41 = NEON_frecps(auVar36,auVar28,4);
  local_f0 = *pfVar8 * fStack_e4;
  fStack_ec = pfVar8[1] * fStack_e4;
  fStack_e8 = pfVar8[2] * fStack_e4;
  fStack_e4 = pfVar8[3] * fStack_e4;
  auVar43._0_8_ = CONCAT44(fVar22 * fVar12,fVar21 * fVar12);
  auVar43._8_4_ = fVar44 * fVar12;
  auVar43._12_4_ = (float)((ulong)*(undefined8 *)(pfVar8 + 6) >> 0x20) * fVar12;
  uStack_d8 = auVar43._8_8_;
  iVar32 = -(uint)(fVar23 == 0.0);
  iVar37 = -(uint)((float)((ulong)auVar33._0_8_ >> 0x20) == 0.0);
  iVar38 = -(uint)(auVar33._8_4_ == 0.0);
  iVar39 = -(uint)(auVar36._12_4_ == 0.0);
  auVar18[0] = ~(byte)iVar32;
  auVar18[1] = ~(byte)((uint)iVar32 >> 8);
  auVar18[2] = ~(byte)((uint)iVar32 >> 0x10);
  auVar18[3] = ~(byte)((uint)iVar32 >> 0x18);
  auVar18[4] = ~(byte)iVar37;
  auVar18[5] = ~(byte)((uint)iVar37 >> 8);
  auVar18[6] = ~(byte)((uint)iVar37 >> 0x10);
  auVar18[7] = ~(byte)((uint)iVar37 >> 0x18);
  auVar18[8] = ~(byte)iVar38;
  auVar18[9] = ~(byte)((uint)iVar38 >> 8);
  auVar18[10] = ~(byte)((uint)iVar38 >> 0x10);
  auVar18[0xb] = ~(byte)((uint)iVar38 >> 0x18);
  auVar18[0xc] = ~(byte)iVar39;
  auVar18[0xd] = ~(byte)((uint)iVar39 >> 8);
  auVar18[0xe] = ~(byte)((uint)iVar39 >> 0x10);
  auVar18[0xf] = ~(byte)((uint)iVar39 >> 0x18);
  auVar29._0_4_ = auVar28._0_4_ * auVar41._0_4_;
  auVar29._4_4_ = auVar28._4_4_ * auVar41._4_4_;
  auVar29._8_4_ = auVar28._8_4_ * auVar41._8_4_;
  auVar29._12_4_ = auVar28._12_4_ * auVar41._12_4_;
  auVar45._0_8_ =
       CONCAT44((float)((ulong)*(undefined8 *)(pfVar8 + 0xc) >> 0x20) + auVar15._4_4_,
                (float)*(undefined8 *)(pfVar8 + 0xc) + auVar15._0_4_);
  auVar45._8_4_ = (float)*(undefined8 *)(pfVar8 + 0xe) + auVar15._8_4_;
  auVar45._12_4_ = (float)((ulong)*(undefined8 *)(pfVar8 + 0xe) >> 0x20) + auVar15._12_4_;
  auVar4._8_4_ = 0x7f7fffee;
  auVar4._0_8_ = 0x7f7fffee7f7fffee;
  auVar4._12_4_ = 0x7f7fffee;
  auVar19._8_4_ = 0x7f7fffee;
  auVar19._0_8_ = 0x7f7fffee7f7fffee;
  auVar19._12_4_ = 0x7f7fffee;
  auVar19 = auVar19 ^ (auVar4 ^ auVar29) & auVar18;
  local_a0 = 0;
  uStack_98 = 0x8000000000000000;
  uStack_c8 = CONCAT44((float)((ulong)*(undefined8 *)(pfVar8 + 10) >> 0x20) * fVar13,fVar48 * fVar13
                      );
  local_d0 = CONCAT44(fVar47 * fVar13,fVar46 * fVar13);
  uStack_b8 = auVar45._8_8_;
  local_88 = 0x40;
  uStack_108 = auVar19._8_8_;
  local_110 = auVar19._0_8_;
  lVar6 = tpidr_el0;
  lVar11 = *(long *)(lVar6 + 0x38d490);
  uStack_120 = auVar33._0_8_;
  uStack_e0 = auVar43._0_8_;
  uStack_c0 = auVar45._0_8_;
  if (lVar11 == 0) {
    lVar11 = FUN_0333d16c(0,1);
    *(long *)(lVar6 + 0x38d490) = lVar11;
  }
  lVar11 = *(long *)(lVar11 + 8);
  if (0xbff < *(ulong *)(lVar11 + 0x10)) {
    local_90 = *(long *)(lVar11 + 0x18);
    if (local_90 + 0xc00U <= *(ulong *)(lVar11 + 0x20)) {
      *(ulong *)(lVar11 + 0x18) = local_90 + 0xc00U;
      goto LAB_02fb049c;
    }
  }
  local_90 = FUN_032ce670(lVar11,0xc00);
LAB_02fb049c:
  uStack_98._4_4_ = -8.96831e-44;
  local_a0 = local_90;
  FUN_02fba26c(lVar1,&local_a0,local_270);
  lVar1 = local_90;
  if (local_90 == local_a0) {
    uStack_98._0_4_ = 0.0;
  }
  lVar9 = (long)local_88;
  lVar11 = *(long *)(lVar6 + 0x38d490);
  if (lVar11 == 0) {
    lVar11 = FUN_0333d16c(0,1);
    *(long *)(lVar6 + 0x38d490) = lVar11;
  }
  lVar6 = *(long *)(lVar11 + 8);
  uVar7 = lVar9 * 0x30 + 0x7fU & 0xffffffffffffff80;
  if (((*(ulong *)(lVar6 + 0x10) < uVar7) || (*(long *)(lVar6 + 0x18) != uVar7 + lVar1)) ||
     (*(long *)(lVar6 + 0x28) == lVar1)) {
    FUN_032cedf0(lVar6,lVar1);
  }
  else {
    *(long *)(lVar6 + 0x18) = lVar1;
  }
  uVar5 = (uint)uStack_98._4_4_;
  uStack_98 = (ulong)(uint)uStack_98._4_4_ << 0x20;
  if ((-1 < (int)uVar5) && (local_a0 != 0)) {
    FUN_032cf244(PTR_PTR_0434a080,local_a0,0x30,uVar5 & 0x3fffffff);
  }
  return;
}


