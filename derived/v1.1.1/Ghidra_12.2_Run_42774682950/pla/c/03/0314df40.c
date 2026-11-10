/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0314df40; name: FUN_0314df40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0314df40(float *param_1,long param_2,long param_3,float *param_4)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uVar24;
  float fVar28;
  float fVar29;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStack_1fc [4];
  undefined8 local_1f8;
  undefined1 local_1f0 [16];
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float local_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float local_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float local_190;
  float local_18c;
  float local_188 [26];
  undefined1 local_120 [16];
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float local_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  
  uVar6 = *(undefined8 *)(param_3 + 0x30);
  lVar1 = param_3 + 0xd0;
  FUN_0314ead0(lVar1,uVar6,param_3,param_3 + 0x20,local_1f0);
  local_188[5] = fStack_1c4 + *(float *)(param_2 + 0x6c);
  local_188[4] = 1.0 / local_188[5];
  FUN_0314ead0(lVar1,uVar6,param_3,param_3 + 0x10);
  local_188[2] = fStack_1a4;
  local_188[3] = fStack_194;
  lVar3 = *(long *)(param_3 + 0x38);
  fVar7 = *(float *)(param_3 + 0x160) - *(float *)(lVar3 + 0x10);
  fVar16 = *(float *)(param_3 + 0x164) - *(float *)(lVar3 + 0x14);
  fVar17 = *(float *)(param_3 + 0x168) - *(float *)(lVar3 + 0x18);
  fVar18 = *(float *)(param_3 + 0x16c) - *(float *)(lVar3 + 0x1c);
  auVar30._0_4_ =
       *(float *)(param_3 + 0x170) * local_1e0 + *(float *)(lVar3 + 0x20) * local_1d0 +
       fVar7 * local_1f0._0_4_;
  auVar30._4_4_ =
       *(float *)(param_3 + 0x174) * fStack_1dc + *(float *)(lVar3 + 0x24) * fStack_1cc +
       fVar16 * local_1f0._4_4_;
  auVar30._8_4_ =
       *(float *)(param_3 + 0x178) * fStack_1d8 + *(float *)(lVar3 + 0x28) * fStack_1c8 +
       fVar17 * local_1f0._8_4_;
  auVar30._12_4_ =
       *(float *)(param_3 + 0x17c) * fStack_1d4 + *(float *)(lVar3 + 0x2c) * fStack_1c4 +
       fVar18 * local_1f0._12_4_;
  auVar33 = NEON_ext(auVar30,auVar30,8,1);
  auVar25._0_4_ =
       *(float *)(param_3 + 0x170) * local_1b0 + *(float *)(lVar3 + 0x20) * local_1a0 +
       fVar7 * local_1c0;
  auVar25._4_4_ =
       *(float *)(param_3 + 0x174) * fStack_1ac + *(float *)(lVar3 + 0x24) * fStack_19c +
       fVar16 * fStack_1bc;
  auVar25._8_4_ =
       *(float *)(param_3 + 0x178) * fStack_1a8 + *(float *)(lVar3 + 0x28) * fStack_198 +
       fVar17 * fStack_1b8;
  auVar25._12_4_ =
       *(float *)(param_3 + 0x17c) * fStack_1a4 + *(float *)(lVar3 + 0x2c) * fStack_194 +
       fVar18 * fStack_1b4;
  auVar21 = NEON_ext(auVar25,auVar25,8,1);
  param_4[5] = param_4[5] + auVar25._0_4_ + auVar25._4_4_ + auVar21._0_4_;
  param_4[6] = auVar30._0_4_ + auVar30._4_4_ + auVar33._0_4_ + param_4[6];
  uVar6 = *(undefined8 *)(param_3 + 0x90);
  FUN_0314ead0(lVar1,uVar6,param_3 + 0x60,param_3 + 0x80,local_188 + 0xe);
  local_d4 = local_188[0x19] + *(float *)(param_2 + 0xd0);
  local_d8 = 1.0 / local_d4;
  FUN_0314ead0(lVar1,uVar6,param_3 + 0x60,param_3 + 0x70,local_120);
  fVar16 = fStack_f4;
  fVar7 = local_188[3];
  local_e0 = local_104;
  local_dc = fStack_f4;
  lVar3 = *(long *)(param_3 + 0x98);
  fVar17 = *(float *)(param_3 + 0x160) - *(float *)(lVar3 + 0x10);
  fVar18 = *(float *)(param_3 + 0x164) - *(float *)(lVar3 + 0x14);
  fVar28 = *(float *)(param_3 + 0x168) - *(float *)(lVar3 + 0x18);
  fVar29 = *(float *)(param_3 + 0x16c) - *(float *)(lVar3 + 0x1c);
  auVar33._0_4_ =
       *(float *)(param_3 + 0x170) * local_188[0x12] + *(float *)(lVar3 + 0x20) * local_188[0x16] +
       fVar17 * local_188[0xe];
  auVar33._4_4_ =
       *(float *)(param_3 + 0x174) * local_188[0x13] + *(float *)(lVar3 + 0x24) * local_188[0x17] +
       fVar18 * local_188[0xf];
  auVar33._8_4_ =
       *(float *)(param_3 + 0x178) * local_188[0x14] + *(float *)(lVar3 + 0x28) * local_188[0x18] +
       fVar28 * local_188[0x10];
  auVar33._12_4_ =
       *(float *)(param_3 + 0x17c) * local_188[0x15] + *(float *)(lVar3 + 0x2c) * local_188[0x19] +
       fVar29 * local_188[0x11];
  auVar30 = NEON_ext(auVar33,auVar33,8,1);
  auVar21._0_4_ =
       *(float *)(param_3 + 0x170) * fStack_110 + *(float *)(lVar3 + 0x20) * local_100 +
       fVar17 * local_120._0_4_;
  auVar21._4_4_ =
       *(float *)(param_3 + 0x174) * fStack_10c + *(float *)(lVar3 + 0x24) * fStack_fc +
       fVar18 * local_120._4_4_;
  auVar21._8_4_ =
       *(float *)(param_3 + 0x178) * fStack_108 + *(float *)(lVar3 + 0x28) * fStack_f8 +
       fVar28 * local_120._8_4_;
  auVar21._12_4_ =
       *(float *)(param_3 + 0x17c) * local_104 + *(float *)(lVar3 + 0x2c) * fStack_f4 +
       fVar29 * local_120._12_4_;
  auVar25 = NEON_ext(auVar21,auVar21,8,1);
  param_4[0xe] = param_4[0xe] + auVar21._0_4_ + auVar21._4_4_ + auVar25._0_4_;
  param_4[0xf] = auVar33._0_4_ + auVar33._4_4_ + auVar30._0_4_ + param_4[0xf];
  lVar3 = *(long *)(param_3 + 0x30);
  fVar17 = local_1c0 * local_120._0_4_;
  fVar18 = fStack_1bc * local_120._4_4_;
  fVar28 = fStack_1b8 * local_120._8_4_;
  fVar29 = fStack_1b4 * local_120._12_4_;
  if (lVar3 == *(long *)(param_3 + 0x90)) {
    auVar25 = *(undefined1 (*) [16])(param_3 + 0x100);
    fVar19 = auVar25._12_4_;
    fVar8 = (float)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20);
    auVar26._0_4_ = fVar17 * fVar19 + fVar17 * fVar8;
    auVar26._4_4_ = fVar18 * fVar19 + fVar18 * fVar8;
    auVar26._8_4_ = fVar28 * fVar19 + fVar28 * fVar8;
    auVar26._12_4_ = fVar29 * fVar19 + fVar29 * fVar8;
    fVar17 = local_1b0 * fStack_110 * auVar25._0_4_ +
             local_1a0 * local_100 * (float)*(undefined8 *)(lVar3 + 0x30);
    fVar18 = fStack_1ac * fStack_10c * auVar25._4_4_ +
             fStack_19c * fStack_fc * (float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20);
    fVar28 = fStack_1a8 * fStack_108 * auVar25._8_4_ +
             fStack_198 * fStack_f8 * (float)*(undefined8 *)(lVar3 + 0x38);
    fVar19 = fStack_1a4 * local_104 * fVar19 + fStack_194 * fStack_f4 * fVar8;
  }
  else {
    fVar19 = *(float *)(param_3 + 0x10c);
    auVar26._0_4_ = fVar17 * fVar19;
    auVar26._4_4_ = fVar18 * fVar19;
    auVar26._8_4_ = fVar28 * fVar19;
    auVar26._12_4_ = fVar29 * fVar19;
    fVar17 = local_1b0 * fStack_110 * *(float *)(param_3 + 0x100);
    fVar18 = fStack_1ac * fStack_10c * *(float *)(param_3 + 0x104);
    fVar28 = fStack_1a8 * fStack_108 * *(float *)(param_3 + 0x108);
    fVar19 = fStack_1a4 * local_104 * fVar19;
  }
  auVar11._0_4_ = fVar17 + auVar26._0_4_;
  auVar11._4_4_ = fVar18 + auVar26._4_4_;
  auVar11._8_4_ = fVar28 + auVar26._8_4_;
  auVar11._12_4_ = fVar19 + auVar26._12_4_;
  auVar25 = NEON_ext(auVar11,auVar11,8,1);
  fVar17 = param_4[4];
  local_1f8 = CONCAT44(fVar17,fVar17);
  if (fVar17 != 0.0) {
    FUN_0314ebc0(&local_1f8,local_1f0,lVar1);
  }
  fVar17 = param_4[0xd];
  local_1f8 = CONCAT44(fVar17,fVar17);
  if (fVar17 != 0.0) {
    FUN_0314ebc0(&local_1f8,local_188 + 0xe,lVar1,*(undefined8 *)(param_3 + 0x90));
  }
  fVar17 = *(float *)(param_3 + 0x4c) + *(float *)(param_3 + 0xac);
  local_188[1] = *(float *)(param_3 + 0x4c) * *(float *)(param_2 + 0x7c) +
                 fVar17 * *(float *)(param_2 + 0x80);
  fVar19 = *(float *)(param_3 + 0xac) * *(float *)(param_2 + 0xe0) +
           fVar17 * *(float *)(param_2 + 0xe4);
  param_4[2] = 0.0;
  param_4[0xb] = 0.0;
  lVar3 = *(long *)(param_3 + 0x30);
  auVar31._0_4_ =
       *(float *)(param_3 + 0xf0) * local_1e0 + *(float *)(lVar3 + 0x20) * local_1d0 +
       (*(float *)(param_3 + 0xe0) - *(float *)(lVar3 + 0x10)) * local_1f0._0_4_;
  auVar31._4_4_ =
       *(float *)(param_3 + 0xf4) * fStack_1dc + *(float *)(lVar3 + 0x24) * fStack_1cc +
       (*(float *)(param_3 + 0xe4) - *(float *)(lVar3 + 0x14)) * local_1f0._4_4_;
  auVar31._8_4_ =
       *(float *)(param_3 + 0xf8) * fStack_1d8 + *(float *)(lVar3 + 0x28) * fStack_1c8 +
       (*(float *)(param_3 + 0xe8) - *(float *)(lVar3 + 0x18)) * local_1f0._8_4_;
  auVar31._12_4_ =
       *(float *)(param_3 + 0xfc) * fStack_1d4 + *(float *)(lVar3 + 0x2c) * fStack_1c4 +
       (*(float *)(param_3 + 0xec) - *(float *)(lVar3 + 0x1c)) * local_1f0._12_4_;
  auVar30 = NEON_ext(auVar31,auVar31,8,1);
  fVar29 = auVar31._0_4_ + auVar31._4_4_ + auVar30._0_4_;
  auVar22._0_4_ =
       *(float *)(param_3 + 0xf0) * local_1b0 + *(float *)(lVar3 + 0x20) * local_1a0 +
       (*(float *)(param_3 + 0xe0) - *(float *)(lVar3 + 0x10)) * local_1c0;
  auVar22._4_4_ =
       *(float *)(param_3 + 0xf4) * fStack_1ac + *(float *)(lVar3 + 0x24) * fStack_19c +
       (*(float *)(param_3 + 0xe4) - *(float *)(lVar3 + 0x14)) * fStack_1bc;
  auVar22._8_4_ =
       *(float *)(param_3 + 0xf8) * fStack_1a8 + *(float *)(lVar3 + 0x28) * fStack_198 +
       (*(float *)(param_3 + 0xe8) - *(float *)(lVar3 + 0x18)) * fStack_1b8;
  auVar22._12_4_ =
       *(float *)(param_3 + 0xfc) * fStack_1a4 + *(float *)(lVar3 + 0x2c) * fStack_194 +
       (*(float *)(param_3 + 0xec) - *(float *)(lVar3 + 0x1c)) * fStack_1b4;
  auVar21 = NEON_ext(auVar22,auVar22,8,1);
  fVar18 = param_4[5] * 0.25 + auVar22._0_4_ + auVar22._4_4_ + auVar21._0_4_;
  local_190 = fVar29;
  local_188[0] = fVar18;
  local_e4 = fVar19;
  fVar17 = (float)FUN_032c8ef0();
  fVar28 = *param_1;
  if (*(char *)(param_3 + 0x58) == '\0') {
    local_18c = *param_4;
    fVar8 = *(float *)(param_3 + 0x50);
    param_4[6] = 0.0;
  }
  else {
    fVar36 = local_188[2] * local_188[5] * (fVar29 + param_4[6] * 0.5) * 0.5;
    fVar37 = local_188[5] * fVar17 * fVar28 * *(float *)(param_3 + 0x40);
    local_18c = -fVar29;
    fVar8 = (float)FUN_032c8ef0(fVar36);
    local_18c = fVar36;
    if (fVar37 < fVar8) {
      local_18c = fVar37;
      if (fVar36 <= 0.0) {
        local_18c = -fVar37;
      }
    }
    local_18c = -fVar29 - local_18c;
    fVar8 = 0.0;
  }
  fVar37 = local_18c;
  fVar36 = *(float *)(param_3 + 0x40);
  if (*(float *)(param_3 + 0x44) != 0.0) {
    fVar9 = (float)FUN_032c8ed0();
    fVar36 = fVar36 + fVar9 * *(float *)(param_3 + 0x44);
    if (*(float *)(param_3 + 0x48) <= fVar36) {
      fVar36 = *(float *)(param_3 + 0x48);
    }
    if (fVar36 <= 0.0) {
      fVar36 = 0.0;
    }
  }
  local_188[8] = fVar17 * fVar28 * fVar36;
  fVar9 = 1.0 / (local_188[8] + 1.4210855e-14);
  fVar17 = fVar37 * local_188[4] + fVar8 * *param_1;
  lVar3 = *(long *)(param_3 + 0x90);
  fVar36 = auVar11._0_4_ + auVar11._4_4_ + auVar25._0_4_;
  auVar27._0_4_ =
       *(float *)(param_3 + 0xf0) * local_188[0x12] + *(float *)(lVar3 + 0x20) * local_188[0x16] +
       (*(float *)(param_3 + 0xe0) - *(float *)(lVar3 + 0x10)) * local_188[0xe];
  auVar27._4_4_ =
       *(float *)(param_3 + 0xf4) * local_188[0x13] + *(float *)(lVar3 + 0x24) * local_188[0x17] +
       (*(float *)(param_3 + 0xe4) - *(float *)(lVar3 + 0x14)) * local_188[0xf];
  auVar27._8_4_ =
       *(float *)(param_3 + 0xf8) * local_188[0x14] + *(float *)(lVar3 + 0x28) * local_188[0x18] +
       (*(float *)(param_3 + 0xe8) - *(float *)(lVar3 + 0x18)) * local_188[0x10];
  auVar27._12_4_ =
       *(float *)(param_3 + 0xfc) * local_188[0x15] + *(float *)(lVar3 + 0x2c) * local_188[0x19] +
       (*(float *)(param_3 + 0xec) - *(float *)(lVar3 + 0x1c)) * local_188[0x11];
  auVar25 = NEON_ext(auVar27,auVar27,8,1);
  fVar8 = auVar27._0_4_ + auVar27._4_4_ + auVar25._0_4_;
  auVar12._0_4_ =
       *(float *)(param_3 + 0xf0) * fStack_110 + *(float *)(lVar3 + 0x20) * local_100 +
       (*(float *)(param_3 + 0xe0) - *(float *)(lVar3 + 0x10)) * local_120._0_4_;
  auVar12._4_4_ =
       *(float *)(param_3 + 0xf4) * fStack_10c + *(float *)(lVar3 + 0x24) * fStack_fc +
       (*(float *)(param_3 + 0xe4) - *(float *)(lVar3 + 0x14)) * local_120._4_4_;
  auVar12._8_4_ =
       *(float *)(param_3 + 0xf8) * fStack_108 + *(float *)(lVar3 + 0x28) * fStack_f8 +
       (*(float *)(param_3 + 0xe8) - *(float *)(lVar3 + 0x18)) * local_120._8_4_;
  auVar12._12_4_ =
       *(float *)(param_3 + 0xfc) * local_104 + *(float *)(lVar3 + 0x2c) * fStack_f4 +
       (*(float *)(param_3 + 0xec) - *(float *)(lVar3 + 0x1c)) * local_120._12_4_;
  auVar25 = NEON_ext(auVar12,auVar12,8,1);
  fVar37 = param_4[0xe] * 0.25 + auVar12._0_4_ + auVar12._4_4_ + auVar25._0_4_;
  local_188[6] = fVar17;
  local_188[9] = fVar9;
  local_188[10] = local_188[8];
  local_188[0xb] = fVar9;
  local_f0 = fVar8;
  local_e8 = fVar37;
  fVar28 = (float)FUN_032c8ef0(fVar19);
  fVar19 = *param_1;
  if (*(char *)(param_3 + 0xb8) == '\0') {
    local_ec = param_4[9];
    fVar8 = *(float *)(param_3 + 0xb0);
    param_4[0xf] = 0.0;
  }
  else {
    fVar35 = local_e0 * local_d4 * (fVar8 + param_4[0xf] * 0.5) * 0.5;
    fVar38 = local_d4 * fVar28 * fVar19 * *(float *)(param_3 + 0xa0);
    local_ec = -fVar8;
    fVar10 = (float)FUN_032c8ef0(fVar35);
    local_ec = fVar35;
    if (fVar38 < fVar10) {
      local_ec = fVar38;
      if (fVar35 <= 0.0) {
        local_ec = -fVar38;
      }
    }
    local_ec = -fVar8 - local_ec;
    fVar8 = 0.0;
  }
  fVar35 = local_ec;
  fVar10 = *(float *)(param_3 + 0xa0);
  if (*(float *)(param_3 + 0xa4) != 0.0) {
    fVar38 = (float)FUN_032c8ed0();
    fVar10 = fVar10 + fVar38 * *(float *)(param_3 + 0xa4);
    if (*(float *)(param_3 + 0xa8) <= fVar10) {
      fVar10 = *(float *)(param_3 + 0xa8);
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
  }
  local_c8 = fVar28 * fVar19 * fVar10;
  fVar19 = 1.0 / (local_c8 + 1.4210855e-14);
  fVar28 = fVar35 * local_d8 + fVar8 * *param_1;
  local_d0 = fVar28;
  local_c4 = fVar19;
  local_c0 = local_c8;
  local_bc = fVar19;
  if (*(float *)(param_3 + 0x54) + *(float *)(param_3 + 0xb4) <= 0.0) {
    auVar32._4_4_ = fVar36;
    auVar32._0_4_ = fVar7;
    auVar32._8_4_ = fVar36;
    auVar32._12_4_ = fVar16;
  }
  else {
    fVar8 = (float)FUN_032c8ef0();
    fVar10 = (float)FUN_032c8ef0();
    fVar8 = (fVar8 + fVar10) * *(float *)(param_2 + 0x1c) * *param_1;
    if (fVar8 == 0.0) {
      fVar38 = 10000.0;
      fVar35 = fVar38;
    }
    else {
      fVar10 = *(float *)(param_3 + 0x54);
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      fVar35 = 1.0;
      if (fVar8 < fVar10) {
        fVar35 = fVar10 / fVar8;
      }
      fVar10 = *(float *)(param_3 + 0xb4);
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      fVar38 = 1.0;
      if (fVar8 < fVar10) {
        fVar38 = fVar10 / fVar8;
      }
      if (10000.0 < fVar35) {
        fVar35 = 10000.0;
      }
      if (10000.0 < fVar38) {
        fVar38 = 10000.0;
      }
    }
    fVar8 = (float)FUN_032c8ed0();
    auVar32._4_4_ = fVar36 * fVar8;
    auVar32._0_4_ = fVar7 * fVar35;
    auVar32._8_4_ = fVar36 * fVar8;
    auVar32._12_4_ = fVar38 * fVar16;
    local_188[2] = local_188[2] / fVar35;
    local_188[3] = fVar35 * local_188[3];
    local_e0 = local_e0 / fVar38;
    local_dc = fVar38 * local_dc;
  }
  auVar34._4_4_ = auVar31._0_4_ + auVar31._4_4_ + auVar30._4_4_;
  auVar34._0_4_ = fVar29;
  auVar34._8_8_ = 0;
  auVar13._8_8_ = _UNK_0388a538;
  auVar13._0_8_ = _DAT_0388a530;
  auVar25 = a64_TBL(ZEXT816(0),auVar32,auVar13);
  fVar7 = auVar32._0_4_ * auVar25._0_4_;
  fVar29 = auVar32._4_4_;
  fVar16 = fVar29 * auVar25._4_4_;
  if (ABS(fVar7 - fVar16) <= 0.0) {
    auVar15._8_8_ = _UNK_0388a3c8;
    auVar15._0_8_ = _DAT_0388a3c0;
  }
  else {
    uVar6 = CONCAT44(fVar7 - fVar16,fVar7 - fVar16);
    uVar20 = NEON_frecpe(uVar6,4);
    uVar24 = NEON_frecps(uVar6,uVar20,4);
    fVar7 = (float)uVar20 * (float)uVar24;
    fVar16 = (float)((ulong)uVar20 >> 0x20) * (float)((ulong)uVar24 >> 0x20);
    auVar25 = NEON_ext(auVar32,auVar32,4,1);
    auVar21 = NEON_ext(auVar25,auVar25,8,1);
    uVar6 = NEON_frecps(uVar6,CONCAT44(fVar16,fVar7),4);
    fVar7 = fVar7 * (float)uVar6;
    fVar16 = fVar16 * (float)((ulong)uVar6 >> 0x20);
    auVar23._8_8_ = _UNK_03889e58;
    auVar23._0_8_ = _DAT_03889e50;
    auVar14._0_4_ = -auVar25._0_4_ * fVar7;
    auVar14._4_4_ = -auVar25._4_4_ * fVar16;
    auVar14._8_4_ = auVar21._0_4_ * fVar7;
    auVar14._12_4_ = auVar21._4_4_ * fVar16;
    auVar15 = a64_TBL(ZEXT816(0),auVar14,auVar23);
  }
  local_188[7] = -(fVar18 * auVar15._0_4_ + fVar37 * auVar15._4_4_);
  fVar17 = fVar9 * fVar17;
  fVar9 = fVar9 * local_188[7];
  local_cc = -(fVar18 * auVar15._8_4_ + fVar37 * auVar15._12_4_);
  fVar16 = fVar19 * fVar28;
  fVar8 = fVar19 * local_cc;
  fVar36 = fVar17 * fVar17 + fVar9 * fVar9;
  fVar7 = (float)FUN_032c8ef0(auVar34);
  if (*(float *)(param_3 + 0xc0) <= fVar7) {
    param_4[5] = 0.0;
    param_4[6] = 0.0;
    param_4[0xe] = 0.0;
    param_4[0xf] = 0.0;
  }
  fVar7 = fVar16 * fVar16 + fVar8 * fVar8;
  if (fVar36 <= 1.0) {
    if (fVar7 <= 1.0) {
      if (1.0 <= fVar36) {
        FUN_0314ed80(fVar9,fVar17,param_2 + 0x20,&local_1f8,auStack_1fc);
        fVar16 = (float)FUN_032c8ef0();
        fVar7 = fVar16;
        if (local_188[7] <= fVar16) {
          fVar7 = local_188[7];
        }
        bVar2 = -fVar16 <= local_188[7];
        local_188[7] = -fVar16;
        if (bVar2) {
          local_188[7] = fVar7;
        }
        fVar16 = local_d0 * local_c4;
        fVar8 = local_cc * local_bc;
        fVar7 = fVar8 * fVar8 + fVar16 * fVar16;
        fVar19 = local_bc;
        fVar28 = local_d0;
      }
      else {
        local_188[7] = -(fVar18 * local_188[2]);
        local_e8 = fVar37;
      }
      local_e8 = local_e8 + fVar29 * local_188[7];
      if (1.0 <= fVar7) {
        FUN_0314ed80(fVar8,fVar16,param_2 + 0x84,&local_1f8,auStack_1fc);
        fVar16 = (float)FUN_032c8ef0();
        fVar7 = fVar16;
        if (local_cc <= fVar16) {
          fVar7 = local_cc;
        }
        bVar2 = -fVar16 <= local_cc;
        local_cc = -fVar16;
        if (bVar2) {
          local_cc = fVar7;
        }
        fVar16 = local_d0 * local_c4;
        fVar19 = local_bc;
        fVar28 = local_d0;
      }
      else {
        local_cc = -(local_e8 * local_e0);
      }
      local_e8 = local_e8 + fVar29 * local_cc;
      param_4[7] = local_188[7] * local_188[0xb];
      param_4[0x10] = fVar19 * local_cc;
      param_4[0x11] = fVar16;
      param_4[9] = 0.0;
      param_4[10] = 0.0;
      param_4[8] = local_188[6] * local_188[9];
      param_4[0] = 0.0;
      param_4[1] = 0.0;
      goto LAB_0314e7fc;
    }
  }
  else {
    param_4[5] = (1.0 / fVar36) * param_4[5];
    param_4[6] = (1.0 / fVar36) * param_4[6];
  }
  if (1.0 < fVar7) {
    param_4[0xe] = (1.0 / fVar7) * param_4[0xe];
    param_4[0xf] = (1.0 / fVar7) * param_4[0xf];
  }
  fVar16 = local_188[(ulong)(fVar36 <= fVar7) * 0x28];
  iVar5 = 2;
  uVar4 = (ulong)(fVar36 <= fVar7);
  do {
    local_188[uVar4 * 0x28 + 7] = -(fVar16 * local_188[uVar4 * 0x28 + 2]);
    FUN_0314ec30(local_1f0 + uVar4 * 0xa0,param_2 + uVar4 * 100 + 0x20,param_4 + uVar4 * 9);
    fVar16 = local_188[(ulong)(fVar7 < fVar36) * 0x28] + fVar29 * local_188[uVar4 * 0x28 + 7];
    iVar5 = iVar5 + -1;
    local_188[(ulong)(fVar7 < fVar36) * 0x28] = fVar16;
    uVar4 = (ulong)(fVar7 < fVar36);
  } while (iVar5 != 0);
  *param_4 = local_188[0xc] * local_188[5];
  param_4[9] = local_b8 * local_d4;
  param_4[1] = local_188[0];
  param_4[10] = local_e8;
  fVar28 = local_d0;
LAB_0314e7fc:
  param_4[4] = local_188[6];
  param_4[0xd] = fVar28;
  param_4[3] = local_188[7] * param_1[1];
  local_1f8 = CONCAT44(local_188[7],local_188[7]);
  param_4[0xc] = local_cc * param_1[1];
  FUN_0314ebc0(&local_1f8,&local_1c0,lVar1,*(undefined8 *)(param_3 + 0x30));
  local_1f8 = CONCAT44(local_cc,local_cc);
  FUN_0314ebc0(&local_1f8,local_120,lVar1,*(undefined8 *)(param_3 + 0x90));
  return;
}


