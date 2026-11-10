/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00187480; name: FUN_00187480
 */


void FUN_00187480(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 long param_6,undefined8 *param_7,byte param_8,long param_9)

{
  float *pfVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  long *plVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar18;
  float fVar20;
  undefined1 auVar16 [16];
  float fVar19;
  undefined1 auVar17 [16];
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uVar24;
  float fVar26;
  undefined1 auVar25 [16];
  float fVar27;
  undefined8 local_ea0;
  undefined8 uStack_e98;
  undefined8 local_e90;
  float fStack_e88;
  float fStack_e84;
  float local_e80;
  float fStack_e7c;
  float fStack_e78;
  float fStack_e74;
  undefined8 local_e70;
  undefined8 uStack_e68;
  undefined *local_e60 [2];
  undefined8 local_e50;
  undefined8 uStack_e48;
  undefined8 local_e40;
  undefined8 uStack_e38;
  undefined8 local_e30;
  undefined8 uStack_e28;
  undefined8 local_e20;
  undefined8 uStack_e18;
  long local_e10;
  undefined1 local_e08;
  undefined8 local_e00;
  undefined8 uStack_df8;
  undefined8 local_df0;
  undefined8 uStack_de8;
  undefined8 local_de0;
  undefined8 uStack_dd8;
  undefined4 local_dd0;
  undefined8 local_dcc;
  int local_dc0;
  uint local_dbc;
  undefined8 local_db8;
  undefined8 uStack_db0;
  long local_da8;
  undefined4 *puStack_da0;
  long local_d98;
  long lStack_d90;
  long local_d88;
  undefined8 uStack_d80;
  undefined8 local_d78;
  undefined8 local_d70;
  undefined8 uStack_d68;
  undefined8 local_d60;
  undefined8 uStack_d58;
  undefined8 local_d50;
  undefined8 uStack_d48;
  undefined8 local_d40;
  undefined8 uStack_d38;
  byte local_d30;
  long local_d28;
  float local_d20;
  float fStack_d1c;
  float fStack_d18;
  float fStack_d14;
  float local_d10;
  float fStack_d0c;
  float fStack_d08;
  float fStack_d04;
  float local_d00;
  float fStack_cfc;
  float fStack_cf8;
  float fStack_cf4;
  undefined8 local_cf0;
  undefined8 uStack_ce8;
  undefined1 auStack_ce0 [48];
  undefined8 local_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined1 local_c90 [8];
  float local_c88 [754];
  undefined4 local_c0 [2];
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_80;
  undefined8 uStack_78;
  
  param_8 = param_8 & 1;
  lVar13 = 0;
  if ((*(ushort *)(*(long *)(param_2 + 0x28) + 0x1a) & 1) != 0) {
    lVar13 = *(long *)(param_2 + 0x28);
  }
  plVar12 = (long *)(param_4 + 0x48);
  local_b8 = (undefined1 *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_c0[0] = 7;
  lVar9 = 0;
  if (*plVar12 != 0) {
    lVar9 = *plVar12 + (long)plVar12;
  }
  lVar10 = lVar9 + 0x20;
  iVar5 = (**(code **)(*(long *)PTR_DAT_043723b0 + (ulong)*(byte *)(lVar13 + 0x18) * 0x200 + 0xa8))
                    (lVar13,local_c0,local_c90,local_c0);
  if ((-1 < iVar5) && (*(char *)(param_3 + 0x30) != '\0')) {
    uVar7 = local_b0 & 0xffffffff;
    if (0 < (int)local_b0) {
      auVar16 = *(undefined1 (*) [16])(param_3 + 0x40);
      fVar20 = *(float *)(param_3 + 0x50);
      fVar14 = *(float *)(param_3 + 0x54);
      fVar18 = *(float *)(param_3 + 0x58);
      pfVar8 = local_c88;
      pfVar11 = (float *)(local_b8 + 8);
      do {
        fVar15 = *pfVar11;
        uVar7 = uVar7 - 1;
        pfVar1 = pfVar11 + -2;
        pfVar11 = pfVar11 + 3;
        *(ulong *)(pfVar8 + -2) =
             CONCAT44(fVar14 + auVar16._4_4_ * (float)((ulong)*(undefined8 *)pfVar1 >> 0x20),
                      fVar20 + auVar16._0_4_ * (float)*(undefined8 *)pfVar1);
        *pfVar8 = fVar18 + auVar16._8_4_ * fVar15;
        pfVar8 = pfVar8 + 3;
      } while (uVar7 != 0);
    }
    local_b8 = local_c90;
    local_b0 = CONCAT44(*(undefined4 *)(param_3 + 0x38),(int)local_b0);
    local_a8 = 0;
    uStack_a0 = 0;
  }
  bVar2 = *(byte *)(param_9 + 8);
  local_dbc = bVar2 & 4;
  lVar13 = 0;
  if (*plVar12 != 0) {
    lVar13 = *plVar12 + (long)plVar12;
  }
  cVar3 = *(char *)(lVar13 + 0x108);
  local_e10 = lVar10;
  uStack_db0 = param_1;
  local_da8 = param_2;
  local_d98 = param_3;
  lStack_d90 = param_4;
  local_d88 = param_6;
  uStack_d80 = param_5;
  local_d30 = param_8;
  if (cVar3 != '\0' || *(char *)(param_6 + 0x30) == '\0') {
    lVar13 = *(long *)(param_2 + 0x28);
    if (*(char *)(param_3 + 0x30) == '\0') {
      if (*(char *)(param_6 + 0x30) == '\0') {
        uVar21 = SUB168(*(undefined1 (*) [16])(PTR_DAT_04372370 + 0x60),8);
        auVar16._0_8_ = SUB168(*(undefined1 (*) [16])(PTR_DAT_04372370 + 0x60),0);
        local_80 = auVar16._0_8_;
        uStack_78 = uVar21;
        (**(code **)(*(long *)PTR_DAT_043723b0 + (ulong)*(byte *)(lVar13 + 0x18) * 0x200 + 0x18))
                  (lVar13,param_7,&local_ea0);
      }
      else {
        auVar16 = *(undefined1 (*) [16])(param_6 + 0x40);
        auVar22 = NEON_frecpe(auVar16,4);
        auVar25 = NEON_frecps(auVar16,auVar22,4);
        auVar23._0_4_ = auVar22._0_4_ * auVar25._0_4_;
        auVar23._4_4_ = auVar22._4_4_ * auVar25._4_4_;
        auVar23._8_4_ = auVar22._8_4_ * auVar25._8_4_;
        auVar23._12_4_ = auVar22._12_4_ * auVar25._12_4_;
        auVar16 = NEON_frecps(auVar16,auVar23,4);
        fVar20 = auVar23._0_4_ * auVar16._0_4_;
        fVar14 = auVar23._4_4_ * auVar16._4_4_;
        auVar22._0_8_ = CONCAT44(fVar14,fVar20);
        auVar22._8_4_ = auVar23._8_4_ * auVar16._8_4_;
        auVar22._12_4_ = auVar23._12_4_ * auVar16._12_4_;
        fVar20 = ABS(fVar20);
        fVar14 = ABS(fVar14);
        auVar16._0_8_ = CONCAT44(fVar14,fVar20);
        auVar16._8_4_ = ABS(auVar22._8_4_);
        auVar16._12_4_ = ABS(auVar22._12_4_);
        uStack_78 = auVar22._8_8_;
        uVar21 = auVar16._8_8_;
        local_80 = auVar22._0_8_;
        if ((lVar13 == 0) || ((*(ushort *)(lVar13 + 0x1a) & 1) == 0)) {
          (**(code **)(*(long *)PTR_DAT_043723b0 + (ulong)*(byte *)(lVar13 + 0x18) * 0x200 + 0x18))
                    (lVar13,param_7,&local_ea0);
          fVar18 = (float)local_ea0 * (float)local_80;
          fVar15 = local_ea0._4_4_ * local_80._4_4_;
          uStack_e98._0_4_ = (float)uStack_e98 * (float)uStack_78;
          uStack_e98._4_4_ = uStack_e98._4_4_ * uStack_78._4_4_;
          local_e90._0_4_ = (float)local_80 * (float)local_e90;
          local_e90._4_4_ = local_80._4_4_ * local_e90._4_4_;
          fVar20 = (float)uStack_78 * fStack_e88;
          fVar14 = uStack_78._4_4_ * fStack_e84;
          fStack_e88 = (float)((uint)fVar20 ^
                              ((uint)fVar20 ^ (uint)(float)uStack_e98) &
                              -(uint)((float)uStack_78 < 0.0));
          fStack_e84 = (float)((uint)fVar14 ^
                              ((uint)fVar14 ^ (uint)uStack_e98._4_4_) &
                              -(uint)(uStack_78._4_4_ < 0.0));
          uStack_e98 = CONCAT44((uint)uStack_e98._4_4_ ^
                                ((uint)uStack_e98._4_4_ ^ (uint)fVar14) &
                                -(uint)(uStack_78._4_4_ < 0.0),
                                (uint)(float)uStack_e98 ^
                                ((uint)(float)uStack_e98 ^ (uint)fVar20) &
                                -(uint)((float)uStack_78 < 0.0));
          local_ea0 = CONCAT44((uint)fVar15 ^
                               ((uint)fVar15 ^ (uint)local_e90._4_4_) &
                               -(uint)(local_80._4_4_ < 0.0),
                               (uint)fVar18 ^
                               ((uint)fVar18 ^ (uint)(float)local_e90) &
                               -(uint)((float)local_80 < 0.0));
          local_e90 = CONCAT44((uint)local_e90._4_4_ ^
                               ((uint)local_e90._4_4_ ^ (uint)fVar15) &
                               -(uint)(local_80._4_4_ < 0.0),
                               (uint)(float)local_e90 ^
                               ((uint)(float)local_e90 ^ (uint)fVar18) &
                               -(uint)((float)local_80 < 0.0));
        }
        else {
          FUN_02fdb1b0(lVar13,param_7,&local_ea0);
          local_e90._0_4_ = (float)local_80 * (float)local_e90;
          local_e90._4_4_ = local_80._4_4_ * local_e90._4_4_;
          fVar26 = (float)uStack_78 * fStack_e88;
          fVar27 = uStack_78._4_4_ * fStack_e84;
          fVar18 = (float)local_ea0 * (float)local_80;
          fVar19 = local_ea0._4_4_ * local_80._4_4_;
          uStack_e98._0_4_ = (float)uStack_e98 * (float)uStack_78;
          uStack_e98._4_4_ = uStack_e98._4_4_ * uStack_78._4_4_;
          fVar15 = *(float *)(lVar13 + 0x20);
          uVar24 = CONCAT44(fVar14 * fVar15,fVar20 * fVar15);
          uVar24 = NEON_fmaxp(uVar24,uVar24,4);
          uVar24 = NEON_fmax(CONCAT44(auVar16._8_4_ * fVar15,auVar16._8_4_ * fVar15),uVar24,4);
          fVar20 = (float)uVar24;
          fVar14 = (float)((ulong)uVar24 >> 0x20);
          fStack_e88 = (float)((uint)fVar26 ^
                              ((uint)fVar26 ^ (uint)(float)uStack_e98) &
                              -(uint)((float)uStack_78 < 0.0)) + fVar20;
          fStack_e84 = (float)((uint)fVar27 ^
                              ((uint)fVar27 ^ (uint)uStack_e98._4_4_) &
                              -(uint)(uStack_78._4_4_ < 0.0)) + fVar14;
          uStack_e98 = CONCAT44((float)((uint)uStack_e98._4_4_ ^
                                       ((uint)uStack_e98._4_4_ ^ (uint)fVar27) &
                                       -(uint)(uStack_78._4_4_ < 0.0)) - fVar14,
                                (float)((uint)(float)uStack_e98 ^
                                       ((uint)(float)uStack_e98 ^ (uint)fVar26) &
                                       -(uint)((float)uStack_78 < 0.0)) - fVar20);
          local_ea0 = CONCAT44((float)((uint)fVar19 ^
                                      ((uint)fVar19 ^ (uint)local_e90._4_4_) &
                                      -(uint)(local_80._4_4_ < 0.0)) - fVar14,
                               (float)((uint)fVar18 ^
                                      ((uint)fVar18 ^ (uint)(float)local_e90) &
                                      -(uint)((float)local_80 < 0.0)) - fVar20);
          local_e90 = CONCAT44((float)((uint)local_e90._4_4_ ^
                                      ((uint)local_e90._4_4_ ^ (uint)fVar19) &
                                      -(uint)(local_80._4_4_ < 0.0)) + fVar14,
                               (float)((uint)(float)local_e90 ^
                                      ((uint)(float)local_e90 ^ (uint)fVar18) &
                                      -(uint)((float)local_80 < 0.0)) + fVar20);
        }
      }
      fVar20 = (float)uVar21;
    }
    else {
      FUN_02fbc3d0(param_3,param_6,local_e60,&local_80);
      fVar14 = ABS((float)local_80);
      fVar18 = ABS(local_80._4_4_);
      auVar16._0_8_ = CONCAT44(fVar18,fVar14);
      fVar20 = ABS((float)uStack_78);
      if ((lVar13 == 0) || ((*(ushort *)(lVar13 + 0x1a) & 1) == 0)) {
        (**(code **)(*(long *)PTR_DAT_043723b0 + (ulong)*(byte *)(lVar13 + 0x18) * 0x200 + 0x18))
                  (lVar13,local_e60,&local_ea0);
      }
      else {
        FUN_02fdb1b0(lVar13,local_e60,&local_ea0);
        fVar15 = *(float *)(param_3 + 0x38);
        uVar21 = CONCAT44(fVar18 * fVar15,fVar14 * fVar15);
        uVar21 = NEON_fmaxp(uVar21,uVar21,4);
        uVar21 = NEON_fmax(CONCAT44(fVar20 * fVar15,fVar20 * fVar15),uVar21,4);
        fVar14 = (float)uVar21;
        fVar18 = (float)((ulong)uVar21 >> 0x20);
        fStack_e88 = fStack_e88 + fVar14;
        fStack_e84 = fStack_e84 + fVar18;
        uStack_e98 = CONCAT44(uStack_e98._4_4_ - fVar18,(float)uStack_e98 - fVar14);
        local_ea0 = CONCAT44(local_ea0._4_4_ - fVar18,(float)local_ea0 - fVar14);
        local_e90 = CONCAT44(local_e90._4_4_ + fVar18,(float)local_e90 + fVar14);
      }
    }
    uStack_c98 = CONCAT44(fStack_e84,fStack_e88);
    uStack_ca8 = uStack_e98;
    local_cb0 = local_ea0;
    uStack_ca0 = local_e90;
    local_e20 = 0;
    uStack_e18 = 0;
    auVar16._0_8_ = NEON_fmaxp(auVar16._0_8_,auVar16._0_8_,4);
    local_e30 = 0;
    uStack_e28 = 0;
    local_d78 = NEON_fmax(CONCAT44(fVar20,fVar20),auVar16._0_8_,4);
    local_e60[0] = PTR_DAT_04372458 + 0x10;
    local_db8 = *(undefined8 *)(param_6 + 0x28);
    if ((bVar2 & 4) == 0) {
      local_e08 = *(undefined1 *)(lVar9 + 0x5c);
    }
    else {
      local_e08 = 0;
    }
    local_e00 = 0;
    uStack_df8 = 0;
    local_dd0 = 0;
    local_df0 = 0;
    uStack_de8 = 0;
    local_de0 = 0;
    uStack_dd8 = 0;
    local_dcc = 0xffffffffffffffff;
    local_e50 = *(undefined8 *)(lVar9 + 0x30);
    uStack_e48 = *(undefined8 *)(lVar9 + 0x38);
    auVar16 = *(undefined1 (*) [16])PTR_DAT_04372410;
    uStack_e38 = CONCAT44((*(float *)(lVar9 + 0x4c) - *(float *)(lVar9 + 0x3c)) * auVar16._12_4_,
                          (*(float *)(lVar9 + 0x48) - *(float *)(lVar9 + 0x38)) * auVar16._8_4_);
    local_e40 = CONCAT44((*(float *)(lVar9 + 0x44) - *(float *)(lVar9 + 0x34)) * auVar16._4_4_,
                         (*(float *)(lVar9 + 0x40) - *(float *)(lVar9 + 0x30)) * auVar16._0_4_);
    puStack_da0 = local_c0;
    local_dc0 = 0x20 - *(int *)(lVar9 + 0x54);
    local_d70 = *param_7;
    uStack_d68 = param_7[1];
    local_d60 = param_7[2];
    uStack_d58 = param_7[3];
    local_d50 = param_7[4];
    uStack_d48 = param_7[5];
    local_d40 = param_7[6];
    uStack_d38 = param_7[7];
    local_d28 = param_9;
    auVar16._0_8_ =
         NEON_fmax(*(undefined8 *)(PTR_DAT_04372370 + 0x50),*(undefined8 *)(param_9 + 0x10),4);
    fVar20 = (float)local_d78 * (float)auVar16._0_8_;
    fVar14 = (float)((ulong)local_d78 >> 0x20) * (float)((ulong)auVar16._0_8_ >> 0x20);
    local_ea0 = NEON_fmin(*(undefined8 *)(PTR_DAT_04372370 + 0x240),
                          CONCAT44(fVar14 * fVar14,fVar20 * fVar20),4);
    if (cVar3 == '\0') {
      FUN_0018ac34(lVar10,&local_cb0,local_e60,&local_ea0);
      return;
    }
    lVar13 = 0;
    if (*plVar12 != 0) {
      lVar13 = *plVar12 + (long)plVar12;
    }
    if ((*(byte *)(param_9 + 8) & 0x41) == 0) {
      FUN_001893b8(lVar13 + 0xc0,&local_cb0,&local_ea0,local_e60,1);
      return;
    }
    FUN_00187c50();
    return;
  }
  local_e20 = 0;
  uStack_e18 = 0;
  local_e30 = 0;
  uStack_e28 = 0;
  local_e60[0] = PTR_DAT_04372450 + 0x10;
  local_db8 = *(undefined8 *)(param_6 + 0x28);
  if ((bVar2 & 4) == 0) {
    local_e08 = *(undefined1 *)(lVar9 + 0x5c);
  }
  else {
    local_e08 = 0;
  }
  local_e00 = 0;
  uStack_df8 = 0;
  local_dd0 = 0;
  local_df0 = 0;
  uStack_de8 = 0;
  local_de0 = 0;
  uStack_dd8 = 0;
  local_dcc = 0xffffffffffffffff;
  local_e50 = *(undefined8 *)(lVar9 + 0x30);
  uStack_e48 = *(undefined8 *)(lVar9 + 0x38);
  auVar16 = *(undefined1 (*) [16])PTR_DAT_04372410;
  uStack_e38 = CONCAT44((*(float *)(lVar9 + 0x4c) - *(float *)(lVar9 + 0x3c)) * auVar16._12_4_,
                        (*(float *)(lVar9 + 0x48) - *(float *)(lVar9 + 0x38)) * auVar16._8_4_);
  local_e40 = CONCAT44((*(float *)(lVar9 + 0x44) - *(float *)(lVar9 + 0x34)) * auVar16._4_4_,
                       (*(float *)(lVar9 + 0x40) - *(float *)(lVar9 + 0x30)) * auVar16._0_4_);
  puStack_da0 = local_c0;
  local_dc0 = 0x20 - *(int *)(lVar9 + 0x54);
  local_d70 = *param_7;
  uStack_d68 = param_7[1];
  local_d60 = param_7[2];
  uStack_d58 = param_7[3];
  local_d50 = param_7[4];
  uStack_d48 = param_7[5];
  local_d40 = param_7[6];
  uStack_d38 = param_7[7];
  local_d28 = param_9;
  pfVar8 = *(float **)(param_3 + 0x20);
  fVar20 = *(float *)(param_3 + 0x40);
  fVar14 = *(float *)(param_3 + 0x44);
  fStack_e74 = *(float *)(param_3 + 0x48);
  uStack_e98 = CONCAT44(pfVar8[3] * fVar20,pfVar8[2] * fVar20);
  local_ea0 = CONCAT44(pfVar8[1] * fVar20,*pfVar8 * fVar20);
  fStack_e88 = pfVar8[6] * fVar14;
  fStack_e84 = pfVar8[7] * fVar14;
  local_e90 = CONCAT44(pfVar8[5] * fVar14,pfVar8[4] * fVar14);
  local_e80 = pfVar8[8] * fStack_e74;
  fStack_e7c = pfVar8[9] * fStack_e74;
  fStack_e78 = pfVar8[10] * fStack_e74;
  fStack_e74 = pfVar8[0xb] * fStack_e74;
  auVar16 = *(undefined1 (*) [16])(param_3 + 0x50);
  auVar25._0_8_ = CONCAT44(pfVar8[0xd] + auVar16._4_4_,pfVar8[0xc] + auVar16._0_4_);
  auVar25._8_4_ = pfVar8[0xe] + auVar16._8_4_;
  auVar25._12_4_ = pfVar8[0xf] + auVar16._12_4_;
  uStack_e68 = auVar25._8_8_;
  local_e70 = auVar25._0_8_;
  (**(code **)(*(long *)PTR_DAT_043723b0 +
               (ulong)*(byte *)(*(long *)(param_2 + 0x28) + 0x18) * 0x200 + 0x18))
            (*(long *)(param_2 + 0x28),&local_ea0,auStack_ce0);
  pfVar8 = *(float **)(param_6 + 0x20);
  fStack_d14 = *(float *)(param_6 + 0x40);
  fStack_d04 = *(float *)(param_6 + 0x44);
  fStack_cf4 = *(float *)(param_6 + 0x48);
  local_d20 = *pfVar8 * fStack_d14;
  fStack_d1c = pfVar8[1] * fStack_d14;
  fStack_d18 = pfVar8[2] * fStack_d14;
  fStack_d14 = pfVar8[3] * fStack_d14;
  local_d10 = pfVar8[4] * fStack_d04;
  fStack_d0c = pfVar8[5] * fStack_d04;
  fStack_d08 = pfVar8[6] * fStack_d04;
  fStack_d04 = pfVar8[7] * fStack_d04;
  local_d00 = pfVar8[8] * fStack_cf4;
  fStack_cfc = pfVar8[9] * fStack_cf4;
  fStack_cf8 = pfVar8[10] * fStack_cf4;
  fStack_cf4 = pfVar8[0xb] * fStack_cf4;
  auVar16 = *(undefined1 (*) [16])(param_6 + 0x50);
  local_ea0 = 0;
  uStack_e98 = 0x8000000000000000;
  fStack_e88 = 8.96831e-44;
  auVar17._0_8_ = CONCAT44(pfVar8[0xd] + auVar16._4_4_,pfVar8[0xc] + auVar16._0_4_);
  auVar17._8_4_ = pfVar8[0xe] + auVar16._8_4_;
  auVar17._12_4_ = pfVar8[0xf] + auVar16._12_4_;
  uStack_ce8 = auVar17._8_8_;
  lVar13 = tpidr_el0;
  local_cf0 = auVar17._0_8_;
  if (*(long *)(lVar13 + 0x38d490) == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar13 + 0x38d490) = lVar9;
    lVar9 = *(long *)(lVar9 + 8);
    uVar7 = *(ulong *)(lVar9 + 0x10);
  }
  else {
    lVar9 = *(long *)(*(long *)(lVar13 + 0x38d490) + 8);
    uVar7 = *(ulong *)(lVar9 + 0x10);
  }
  if (0xbff < uVar7) {
    lVar6 = *(long *)(lVar9 + 0x18);
    if (lVar6 + 0xc00U <= *(ulong *)(lVar9 + 0x20)) {
      *(ulong *)(lVar9 + 0x18) = lVar6 + 0xc00U;
      goto LAB_001878e0;
    }
  }
  lVar6 = FUN_032ce670(lVar9,0xc00);
LAB_001878e0:
  uStack_e98._4_4_ = -8.96831e-44;
  local_ea0 = lVar6;
  local_e90 = lVar6;
  FUN_0019f984(lVar10,&local_ea0,local_e60);
  fVar20 = fStack_e88;
  lVar9 = local_e90;
  if (local_e90 == local_ea0) {
    uStack_e98._0_4_ = 0.0;
    lVar10 = *(long *)(lVar13 + 0x38d490);
  }
  else {
    lVar10 = *(long *)(lVar13 + 0x38d490);
  }
  if (lVar10 == 0) {
    lVar10 = FUN_0333d16c(0,1);
    *(long *)(lVar13 + 0x38d490) = lVar10;
  }
  lVar13 = *(long *)(lVar10 + 8);
  uVar7 = (long)(int)fVar20 * 0x30 + 0x7fU & 0xffffffffffffff80;
  if (((*(ulong *)(lVar13 + 0x10) < uVar7) || (*(long *)(lVar13 + 0x18) != uVar7 + lVar9)) ||
     (*(long *)(lVar13 + 0x28) == lVar9)) {
    FUN_032cedf0(lVar13,lVar9);
    uVar4 = (uint)uStack_e98._4_4_;
  }
  else {
    *(long *)(lVar13 + 0x18) = lVar9;
    uVar4 = (uint)uStack_e98._4_4_;
  }
  if ((-1 < (int)uVar4) && (uStack_e98 = (ulong)uVar4 << 0x20, local_ea0 != 0)) {
    FUN_032cf244(*(undefined8 *)PTR_PTR_04372408,local_ea0,0x30,uVar4 & 0x3fffffff);
  }
  return;
}


