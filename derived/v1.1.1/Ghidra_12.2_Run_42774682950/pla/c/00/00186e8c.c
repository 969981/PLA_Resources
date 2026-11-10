/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00186e8c; name: FUN_00186e8c
 */


void FUN_00186e8c(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 long param_6,undefined1 (*param_7) [12],byte param_8,long param_9)

{
  byte bVar1;
  undefined1 (*pauVar2) [12];
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar23;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar24;
  float fVar25;
  float fVar29;
  float fVar31;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar30;
  undefined1 auVar28 [16];
  float fVar32;
  float fVar33;
  undefined *local_260 [2];
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  long lStack_210;
  undefined1 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  long local_180;
  undefined1 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  int local_130;
  int local_12c;
  undefined8 local_128;
  long lStack_120;
  long local_118;
  long lStack_110;
  long local_108;
  long lStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  byte local_70;
  long local_68;
  long local_60;
  undefined8 local_58;
  long local_50;
  int local_48;
  
  local_118 = *(long *)(param_2 + 0x28);
  lVar8 = *(long *)(local_118 + 0x48);
  lVar6 = 0;
  if (lVar8 != 0) {
    lVar6 = lVar8 + local_118 + 0x48;
  }
  lVar9 = *(long *)(param_4 + 0x48);
  uStack_e8 = *(undefined8 *)(*param_7 + 8);
  uVar17 = (undefined4)((ulong)uStack_e8 >> 0x20);
  local_f0 = *(undefined8 *)*param_7;
  fVar15 = (float)local_f0;
  fVar16 = (float)((ulong)local_f0 >> 0x20);
  pauVar2 = (undefined1 (*) [12])(param_7[1] + 4);
  uStack_d8 = *(undefined8 *)param_7[2];
  uVar20 = (undefined4)((ulong)uStack_d8 >> 0x20);
  uStack_e0 = *(undefined8 *)*pauVar2;
  fVar18 = (float)uStack_e0;
  fVar19 = (float)((ulong)uStack_e0 >> 0x20);
  auVar21._12_4_ = uVar20;
  auVar21._0_12_ = *pauVar2;
  auVar3._12_4_ = uVar20;
  auVar3._0_12_ = *pauVar2;
  auVar21 = NEON_ext(auVar21,auVar3,8,1);
  auVar13._12_4_ = uVar17;
  auVar13._0_12_ = *param_7;
  auVar26._12_4_ = uVar17;
  auVar26._0_12_ = *param_7;
  auVar13 = NEON_ext(auVar13,auVar26,8,1);
  fVar11 = auVar13._0_4_;
  fVar12 = auVar21._0_4_;
  local_90 = CONCAT44(fVar12,fVar11);
  auVar13 = *(undefined1 (*) [16])(param_7[2] + 8);
  uStack_b8 = *(undefined8 *)(param_7[4] + 8);
  uStack_c0 = *(undefined8 *)param_7[4];
  auVar26 = NEON_ext(auVar13,auVar13,8,1);
  uStack_88 = auVar26._0_8_;
  fVar23 = auVar13._4_4_;
  auVar27._4_12_ = auVar26._4_12_;
  auVar27._0_4_ = fVar23;
  local_d0 = auVar13._0_8_;
  bVar1 = *(byte *)(param_9 + 8);
  uStack_98 = auVar27._0_8_;
  fVar24 = -(float)uStack_c0;
  fVar29 = -(float)((ulong)uStack_c0 >> 0x20);
  fVar31 = -(float)uStack_b8;
  lVar8 = 0;
  if (lVar9 != 0) {
    lVar8 = lVar9 + param_4 + 0x48;
  }
  fVar32 = auVar26._4_4_;
  fVar25 = fVar11 * fVar31 + fVar15 * fVar24 + fVar16 * fVar29;
  fVar30 = fVar12 * fVar31 + fVar18 * fVar24 + fVar19 * fVar29;
  auVar28._0_8_ = CONCAT44(fVar30,fVar25);
  auVar28._8_4_ = auVar26._0_4_ * fVar31 + auVar13._0_4_ * fVar24 + fVar23 * fVar29;
  auVar28._12_4_ = fVar32 * fVar31 + fVar23 * fVar24 + fVar32 * fVar29;
  local_70 = param_8 & 1;
  lVar9 = lVar6 + 0x20;
  lVar10 = lVar8 + 0x20;
  uStack_c8 = auVar13._8_8_;
  lStack_210 = lVar9;
  local_180 = lVar10;
  local_128 = param_1;
  lStack_120 = param_2;
  lStack_110 = param_3;
  local_108 = param_4;
  lStack_100 = param_6;
  local_f8 = param_5;
  if ((*(char *)(param_3 + 0x30) == '\0') && (*(char *)(param_6 + 0x30) == '\0')) {
    local_218 = 0;
    local_228 = 0;
    uStack_220 = 0;
    uStack_230 = 0;
    local_1a0 = 0;
    uStack_198 = 0;
    local_190 = 0;
    uStack_188 = 0;
    local_260[0] = PTR_DAT_04372448 + 0x10;
    if ((bVar1 >> 2 & 1) == 0) {
      local_208 = *(undefined1 *)(lVar6 + 0x5c);
    }
    else {
      local_208 = 0;
    }
    local_178 = 0;
    local_200 = 0;
    uStack_1f8 = 0;
    local_1d0 = 0;
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_1e0 = 0;
    uStack_1d8 = 0;
    local_1cc = 0xffffffffffffffff;
    uStack_248 = *(undefined8 *)(lVar6 + 0x38);
    local_250 = *(undefined8 *)(lVar6 + 0x30);
    fVar11 = (float)*(undefined8 *)PTR_DAT_04372410;
    fVar12 = (float)((ulong)*(undefined8 *)PTR_DAT_04372410 >> 0x20);
    uStack_240 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar6 + 0x40) >> 0x20) -
                          (float)((ulong)local_250 >> 0x20)) * fVar12,
                          ((float)*(undefined8 *)(lVar6 + 0x40) - (float)local_250) * fVar11);
    fVar23 = (float)*(undefined8 *)(PTR_DAT_04372410 + 8);
    fVar24 = (float)((ulong)*(undefined8 *)(PTR_DAT_04372410 + 8) >> 0x20);
    local_238 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar6 + 0x48) >> 0x20) -
                         (float)((ulong)uStack_248 >> 0x20)) * fVar24,
                         ((float)*(undefined8 *)(lVar6 + 0x48) - (float)uStack_248) * fVar23);
    if ((bVar1 >> 2 & 1) == 0) {
      local_178 = *(undefined1 *)(lVar8 + 0x5c);
    }
    local_170 = 0;
    uStack_168 = 0;
    local_150 = 0;
    local_140 = 0;
    local_160 = 0;
    uStack_158 = 0;
    local_148 = 0;
    local_13c = 0xffffffffffffffff;
    local_1b0 = CONCAT44(fVar12 * ((float)((ulong)*(undefined8 *)(lVar8 + 0x40) >> 0x20) -
                                  (float)((ulong)*(undefined8 *)(lVar8 + 0x30) >> 0x20)),
                         fVar11 * ((float)*(undefined8 *)(lVar8 + 0x40) -
                                  (float)*(undefined8 *)(lVar8 + 0x30)));
    uStack_1a8 = CONCAT44(fVar24 * ((float)((ulong)*(undefined8 *)(lVar8 + 0x48) >> 0x20) -
                                   (float)((ulong)*(undefined8 *)(lVar8 + 0x38) >> 0x20)),
                          fVar23 * ((float)*(undefined8 *)(lVar8 + 0x48) -
                                   (float)*(undefined8 *)(lVar8 + 0x38)));
    uStack_1b8 = *(undefined8 *)(lVar8 + 0x38);
    local_1c0 = *(undefined8 *)(lVar8 + 0x30);
    local_130 = 0x20 - *(int *)(lVar6 + 0x54);
    local_68 = param_9;
    local_12c = 0x20 - *(int *)(lVar8 + 0x54);
    local_60 = 0;
    local_58 = 0x8000000000000000;
    local_48 = 0x40;
    local_b0 = CONCAT44(fVar18,fVar15);
    uStack_a0 = CONCAT44(fVar19,fVar16);
    uStack_78 = auVar28._8_8_;
    lVar6 = tpidr_el0;
    lVar8 = *(long *)(lVar6 + 0x38d490);
    uStack_a8 = local_d0;
    local_80 = auVar28._0_8_;
    if (lVar8 == 0) {
      lVar8 = FUN_0333d16c(0,1);
      *(long *)(lVar6 + 0x38d490) = lVar8;
    }
    lVar8 = *(long *)(lVar8 + 8);
    if (*(ulong *)(lVar8 + 0x10) >> 0xb < 3) {
LAB_00187390:
      local_50 = FUN_032ce670(lVar8,0x1800);
    }
    else {
      local_50 = *(long *)(lVar8 + 0x18);
      if (*(ulong *)(lVar8 + 0x20) < local_50 + 0x1800U) goto LAB_00187390;
      *(ulong *)(lVar8 + 0x18) = local_50 + 0x1800U;
    }
    local_58 = CONCAT44(0x80000040,(undefined4)local_58);
    local_60 = local_50;
    FUN_0018f958(0,lVar9,lVar10,&local_60,local_260,0,0);
    lVar8 = local_50;
    if (local_50 == local_60) {
      local_58 = local_58 & 0xffffffff00000000;
    }
    lVar10 = (long)local_48;
    lVar9 = *(long *)(lVar6 + 0x38d490);
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar6 + 0x38d490) = lVar9;
    }
    lVar6 = *(long *)(lVar9 + 8);
    uVar7 = lVar10 * 0x60 + 0x7fU & 0xffffffffffffff80;
    if ((uVar7 <= *(ulong *)(lVar6 + 0x10)) && (*(long *)(lVar6 + 0x18) == uVar7 + lVar8)) {
LAB_00187184:
      if (*(long *)(lVar6 + 0x28) != lVar8) {
        *(long *)(lVar6 + 0x18) = lVar8;
        uVar4 = local_58._4_4_;
        goto joined_r0x0018719c;
      }
    }
  }
  else {
    local_218 = 0;
    local_228 = 0;
    uStack_220 = 0;
    uStack_230 = 0;
    local_1a0 = 0;
    uStack_198 = 0;
    local_190 = 0;
    uStack_188 = 0;
    local_260[0] = PTR_DAT_04372440 + 0x10;
    if ((bVar1 >> 2 & 1) == 0) {
      local_208 = *(undefined1 *)(lVar6 + 0x5c);
    }
    else {
      local_208 = 0;
    }
    local_178 = 0;
    local_200 = 0;
    uStack_1f8 = 0;
    local_1d0 = 0;
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_1e0 = 0;
    uStack_1d8 = 0;
    local_1cc = 0xffffffffffffffff;
    uStack_248 = *(undefined8 *)(lVar6 + 0x38);
    local_250 = *(undefined8 *)(lVar6 + 0x30);
    fVar24 = (float)*(undefined8 *)PTR_DAT_04372410;
    fVar29 = (float)((ulong)*(undefined8 *)PTR_DAT_04372410 >> 0x20);
    uStack_240 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar6 + 0x40) >> 0x20) -
                          (float)((ulong)local_250 >> 0x20)) * fVar29,
                          ((float)*(undefined8 *)(lVar6 + 0x40) - (float)local_250) * fVar24);
    fVar31 = (float)*(undefined8 *)(PTR_DAT_04372410 + 8);
    fVar33 = (float)((ulong)*(undefined8 *)(PTR_DAT_04372410 + 8) >> 0x20);
    local_238 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar6 + 0x48) >> 0x20) -
                         (float)((ulong)uStack_248 >> 0x20)) * fVar33,
                         ((float)*(undefined8 *)(lVar6 + 0x48) - (float)uStack_248) * fVar31);
    if ((bVar1 >> 2 & 1) == 0) {
      local_178 = *(undefined1 *)(lVar8 + 0x5c);
    }
    local_170 = 0;
    uStack_168 = 0;
    local_150 = 0;
    local_140 = 0;
    local_160 = 0;
    uStack_158 = 0;
    local_148 = 0;
    local_13c = 0xffffffffffffffff;
    local_1b0 = CONCAT44(fVar29 * ((float)((ulong)*(undefined8 *)(lVar8 + 0x40) >> 0x20) -
                                  (float)((ulong)*(undefined8 *)(lVar8 + 0x30) >> 0x20)),
                         fVar24 * ((float)*(undefined8 *)(lVar8 + 0x40) -
                                  (float)*(undefined8 *)(lVar8 + 0x30)));
    uStack_1a8 = CONCAT44(fVar33 * ((float)((ulong)*(undefined8 *)(lVar8 + 0x48) >> 0x20) -
                                   (float)((ulong)*(undefined8 *)(lVar8 + 0x38) >> 0x20)),
                          fVar31 * ((float)*(undefined8 *)(lVar8 + 0x48) -
                                   (float)*(undefined8 *)(lVar8 + 0x38)));
    uStack_1b8 = *(undefined8 *)(lVar8 + 0x38);
    local_1c0 = *(undefined8 *)(lVar8 + 0x30);
    local_130 = 0x20 - *(int *)(lVar6 + 0x54);
    local_12c = 0x20 - *(int *)(lVar8 + 0x54);
    fVar31 = (float)*(undefined8 *)(param_6 + 0x48);
    fVar24 = (float)*(undefined8 *)(param_6 + 0x40);
    fVar29 = (float)((ulong)*(undefined8 *)(param_6 + 0x40) >> 0x20);
    auVar22._0_8_ = CONCAT44(fVar19 * fVar29,fVar16 * fVar29);
    auVar22._8_4_ = fVar23 * fVar29;
    auVar22._12_4_ = fVar32 * fVar29;
    uStack_a8 = CONCAT44(fVar23 * fVar24,auVar13._0_4_ * fVar24);
    local_b0 = CONCAT44(fVar18 * fVar24,fVar15 * fVar24);
    uStack_98 = auVar22._8_8_;
    uStack_88 = CONCAT44(fVar32 * fVar31,auVar26._0_4_ * fVar31);
    local_90 = CONCAT44(fVar12 * fVar31,fVar11 * fVar31);
    local_68 = param_9;
    local_60 = 0;
    local_58 = 0x8000000000000000;
    local_48 = 0x40;
    auVar14._0_8_ =
         CONCAT44(fVar30 + *(float *)(param_6 + 0x54),fVar25 + *(float *)(param_6 + 0x50));
    auVar14._8_4_ = auVar28._8_4_ + *(float *)(param_6 + 0x58);
    auVar14._12_4_ = auVar28._12_4_ + *(float *)(param_6 + 0x5c);
    uStack_78 = auVar14._8_8_;
    lVar6 = tpidr_el0;
    lVar8 = *(long *)(lVar6 + 0x38d490);
    uStack_a0 = auVar22._0_8_;
    local_80 = auVar14._0_8_;
    if (lVar8 == 0) {
      lVar8 = FUN_0333d16c(0,1);
      *(long *)(lVar6 + 0x38d490) = lVar8;
    }
    lVar8 = *(long *)(lVar8 + 8);
    if (*(ulong *)(lVar8 + 0x10) >> 0xb < 3) {
LAB_001870e8:
      local_50 = FUN_032ce670(lVar8,0x1800);
    }
    else {
      local_50 = *(long *)(lVar8 + 0x18);
      if (*(ulong *)(lVar8 + 0x20) < local_50 + 0x1800U) goto LAB_001870e8;
      *(ulong *)(lVar8 + 0x18) = local_50 + 0x1800U;
    }
    local_58 = CONCAT44(0x80000040,(undefined4)local_58);
    local_60 = local_50;
    FUN_00197560(0,lVar9,lVar10,&local_60,local_260,0,0);
    iVar5 = local_48;
    lVar8 = local_50;
    if (local_50 == local_60) {
      local_58 = local_58 & 0xffffffff00000000;
      lVar9 = *(long *)(lVar6 + 0x38d490);
    }
    else {
      lVar9 = *(long *)(lVar6 + 0x38d490);
    }
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar6 + 0x38d490) = lVar9;
    }
    lVar6 = *(long *)(lVar9 + 8);
    uVar7 = (long)iVar5 * 0x60 + 0x7fU & 0xffffffffffffff80;
    if ((uVar7 <= *(ulong *)(lVar6 + 0x10)) && (*(long *)(lVar6 + 0x18) == uVar7 + lVar8))
    goto LAB_00187184;
  }
  FUN_032cedf0(lVar6,lVar8);
  uVar4 = local_58._4_4_;
joined_r0x0018719c:
  if ((-1 < (long)local_58) && (local_58 = (ulong)uVar4 << 0x20, local_60 != 0)) {
    FUN_032cf244(*(undefined8 *)PTR_PTR_04372408,local_60,0x60,uVar4 & 0x3fffffff);
  }
  return;
}


