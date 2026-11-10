/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0018ae54; name: FUN_0018ae54
 */


void FUN_0018ae54(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 long param_6,undefined1 (*param_7) [12],byte param_8,long param_9)

{
  byte bVar1;
  undefined1 (*pauVar2) [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long lVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar22;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar33;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar34;
  float fVar35;
  float fVar38;
  float fVar40;
  undefined1 auVar36 [16];
  float fVar39;
  undefined1 auVar37 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined *local_2d0 [2];
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  long local_280;
  char local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined4 local_240;
  undefined8 local_23c;
  int local_230;
  uint uStack_22c;
  undefined8 local_228;
  undefined8 local_220;
  long local_218;
  long local_210;
  long local_208;
  long local_200;
  undefined8 local_1f8;
  long local_1f0;
  long local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined2 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined2 local_1c0;
  undefined1 local_1be;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  byte local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
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
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  int local_38;
  
  local_120 = param_8 & 1;
  lVar13 = *(long *)(param_4 + 0x48);
  local_210 = 0;
  if ((*(byte *)(*(long *)(param_2 + 0x28) + 0x1a) & 8) != 0) {
    local_210 = *(long *)(param_2 + 0x28);
  }
  uStack_198 = *(undefined8 *)(*param_7 + 8);
  uVar26 = (undefined4)((ulong)uStack_198 >> 0x20);
  local_1a0 = *(undefined8 *)*param_7;
  fVar22 = (float)((ulong)local_1a0 >> 0x20);
  pauVar2 = (undefined1 (*) [12])(param_7[1] + 4);
  uStack_188 = *(undefined8 *)param_7[2];
  uVar28 = (undefined4)((ulong)uStack_188 >> 0x20);
  uStack_190 = *(undefined8 *)*pauVar2;
  fVar24 = (float)uStack_190;
  fVar25 = (float)((ulong)uStack_190 >> 0x20);
  auVar30._12_4_ = uVar28;
  auVar30._0_12_ = *pauVar2;
  auVar3._12_4_ = uVar28;
  auVar3._0_12_ = *pauVar2;
  auVar30 = NEON_ext(auVar30,auVar3,8,1);
  auVar16._12_4_ = uVar26;
  auVar16._0_12_ = *param_7;
  auVar41._12_4_ = uVar26;
  auVar41._0_12_ = *param_7;
  auVar16 = NEON_ext(auVar16,auVar41,8,1);
  fVar23 = auVar16._0_4_;
  fVar15 = auVar30._0_4_;
  local_140 = CONCAT44(fVar15,fVar23);
  auVar16 = *(undefined1 (*) [16])(param_7[2] + 8);
  auVar41 = *(undefined1 (*) [16])(param_7 + 4);
  auVar30 = NEON_ext(auVar16,auVar16,8,1);
  uStack_138 = auVar30._0_8_;
  fVar27 = auVar16._4_4_;
  auVar36._4_12_ = auVar30._4_12_;
  auVar36._0_4_ = fVar27;
  fVar29 = (float)local_1a0;
  local_160 = CONCAT44(fVar24,fVar29);
  uStack_150 = CONCAT44(fVar25,fVar22);
  local_180 = auVar16._0_8_;
  uStack_148 = auVar36._0_8_;
  fVar34 = -auVar41._0_4_;
  fVar38 = -auVar41._4_4_;
  fVar40 = -auVar41._8_4_;
  fVar33 = auVar30._4_4_;
  lVar14 = 0;
  if (lVar13 != 0) {
    lVar14 = lVar13 + param_4 + 0x48;
  }
  bVar1 = *(byte *)(param_9 + 8);
  local_278 = *(char *)(param_3 + 0x30);
  fVar35 = fVar23 * fVar40 + fVar29 * fVar34 + fVar22 * fVar38;
  fVar39 = fVar15 * fVar40 + fVar24 * fVar34 + fVar25 * fVar38;
  auVar37._0_8_ = CONCAT44(fVar39,fVar35);
  auVar37._8_4_ = auVar30._0_4_ * fVar40 + auVar16._0_4_ * fVar34 + fVar27 * fVar38;
  auVar37._12_4_ = fVar33 * fVar40 + fVar27 * fVar34 + fVar33 * fVar38;
  lVar13 = lVar14 + 0x20;
  uStack_22c = bVar1 & 4;
  uStack_178 = auVar16._8_8_;
  uStack_170 = auVar41._0_8_;
  uStack_168 = auVar41._8_8_;
  uStack_128 = auVar37._8_8_;
  local_280 = lVar13;
  local_220 = param_1;
  local_218 = param_2;
  local_208 = param_3;
  local_200 = param_4;
  local_1f8 = param_5;
  local_1f0 = param_6;
  uStack_158 = local_180;
  uStack_130 = auVar37._0_8_;
  if (*(char *)(param_6 + 0x30) == '\0') {
    if (local_278 == '\0') {
      local_1d0 = 0xffff;
      local_290 = 0;
      uStack_288 = 0;
      local_2a0 = 0;
      uStack_298 = 0;
      local_1cc = 0;
      local_1c0 = 1;
      local_1c8 = 0;
      local_1e0 = 0;
      uStack_1d8 = 0;
      local_1be = 0xfb;
      local_1b0 = 0;
      local_2d0[0] = PTR_DAT_04372488 + 0x10;
      local_1a8 = 0;
      local_1b8 = 0;
      local_228 = *(undefined8 *)(param_6 + 0x28);
      if ((bVar1 & 4) == 0) {
        local_278 = *(char *)(lVar14 + 0x5c);
      }
      local_240 = 0;
      local_270 = 0;
      uStack_268 = 0;
      local_260 = 0;
      uStack_258 = 0;
      local_250 = 0;
      uStack_248 = 0;
      local_23c = 0xffffffffffffffff;
      uStack_2b8 = *(undefined8 *)(lVar14 + 0x38);
      local_2c0 = *(undefined8 *)(lVar14 + 0x30);
      local_2b0 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar14 + 0x40) >> 0x20) -
                           (float)((ulong)local_2c0 >> 0x20)) *
                           (float)((ulong)*(undefined8 *)PTR_DAT_04372410 >> 0x20),
                           ((float)*(undefined8 *)(lVar14 + 0x40) - (float)local_2c0) *
                           (float)*(undefined8 *)PTR_DAT_04372410);
      uStack_2a8 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar14 + 0x48) >> 0x20) -
                            (float)((ulong)uStack_2b8 >> 0x20)) *
                            (float)((ulong)*(undefined8 *)(PTR_DAT_04372410 + 8) >> 0x20),
                            ((float)*(undefined8 *)(lVar14 + 0x48) - (float)uStack_2b8) *
                            (float)*(undefined8 *)(PTR_DAT_04372410 + 8));
      local_1e8 = param_9;
      local_230 = 0x20 - *(int *)(lVar14 + 0x54);
      local_50 = 0;
      local_48 = 0x8000000000000000;
      local_38 = 0x40;
      lVar14 = tpidr_el0;
      if (*(long *)(lVar14 + 0x38d490) == 0) {
        lVar12 = FUN_0333d16c(0,1);
        *(long *)(lVar14 + 0x38d490) = lVar12;
        lVar12 = *(long *)(lVar12 + 8);
        if (0xbff < *(ulong *)(lVar12 + 0x10)) goto LAB_0018b558;
LAB_0018b6b4:
        local_40 = FUN_032ce670(lVar12,0xc00);
      }
      else {
        lVar12 = *(long *)(*(long *)(lVar14 + 0x38d490) + 8);
        if (*(ulong *)(lVar12 + 0x10) < 0xc00) goto LAB_0018b6b4;
LAB_0018b558:
        local_40 = *(long *)(lVar12 + 0x18);
        if (*(ulong *)(lVar12 + 0x20) < local_40 + 0xc00U) goto LAB_0018b6b4;
        *(ulong *)(lVar12 + 0x18) = local_40 + 0xc00U;
      }
      local_48 = CONCAT44(0x80000040,(undefined4)local_48);
      local_50 = local_40;
      FUN_001a19ac(lVar13,&local_50,local_2d0);
      if (local_40 == local_50) {
        local_48 = local_48 & 0xffffffff00000000;
      }
    }
    else {
      local_1d0 = 0xffff;
      local_278 = '\0';
      local_290 = 0;
      uStack_288 = 0;
      local_2a0 = 0;
      uStack_298 = 0;
      local_1cc = 0;
      local_1c0 = 1;
      local_1c8 = 0;
      local_1e0 = 0;
      uStack_1d8 = 0;
      local_1be = 0xfb;
      local_1b0 = 0;
      local_2d0[0] = PTR_DAT_04372478 + 0x10;
      local_1a8 = 0;
      local_1b8 = 0;
      local_228 = *(undefined8 *)(param_6 + 0x28);
      if ((bVar1 & 4) == 0) {
        local_278 = *(char *)(lVar14 + 0x5c);
      }
      local_240 = 0;
      local_270 = 0;
      uStack_268 = 0;
      local_260 = 0;
      uStack_258 = 0;
      local_250 = 0;
      uStack_248 = 0;
      local_23c = 0xffffffffffffffff;
      uStack_2b8 = *(undefined8 *)(lVar14 + 0x38);
      local_2c0 = *(undefined8 *)(lVar14 + 0x30);
      local_2b0 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar14 + 0x40) >> 0x20) -
                           (float)((ulong)local_2c0 >> 0x20)) *
                           (float)((ulong)*(undefined8 *)PTR_DAT_04372410 >> 0x20),
                           ((float)*(undefined8 *)(lVar14 + 0x40) - (float)local_2c0) *
                           (float)*(undefined8 *)PTR_DAT_04372410);
      uStack_2a8 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar14 + 0x48) >> 0x20) -
                            (float)((ulong)uStack_2b8 >> 0x20)) *
                            (float)((ulong)*(undefined8 *)(PTR_DAT_04372410 + 8) >> 0x20),
                            ((float)*(undefined8 *)(lVar14 + 0x48) - (float)uStack_2b8) *
                            (float)*(undefined8 *)(PTR_DAT_04372410 + 8));
      local_230 = 0x20 - *(int *)(lVar14 + 0x54);
      local_1e8 = param_9;
      puVar11 = *(undefined8 **)(param_3 + 0x20);
      fVar29 = *(float *)(param_3 + 0x40);
      fVar23 = *(float *)(param_3 + 0x44);
      fVar15 = *(float *)(param_3 + 0x48);
      fVar40 = *(float *)(puVar11 + 2) * fVar23;
      fVar33 = *(float *)((long)puVar11 + 0x14) * fVar23;
      auVar32._0_8_ = CONCAT44(fVar33,fVar40);
      auVar32._8_4_ = *(float *)(puVar11 + 3) * fVar23;
      auVar32._12_4_ = *(float *)((long)puVar11 + 0x1c) * fVar23;
      auVar41 = NEON_ext(auVar32,auVar32,8,1);
      fVar27 = (float)*puVar11 * fVar29;
      fVar34 = (float)((ulong)*puVar11 >> 0x20) * fVar29;
      fVar38 = (float)puVar11[1] * fVar29;
      fVar29 = (float)((ulong)puVar11[1] >> 0x20) * fVar29;
      fVar23 = *(float *)((long)puVar11 + 0x24) * fVar15;
      auVar19._0_8_ = CONCAT44(fVar23,*(float *)(puVar11 + 4) * fVar15);
      auVar19._8_4_ = *(float *)(puVar11 + 5) * fVar15;
      auVar19._12_4_ = *(float *)((long)puVar11 + 0x2c) * fVar15;
      auVar6._4_4_ = fVar34;
      auVar6._0_4_ = fVar27;
      auVar6._8_4_ = fVar38;
      auVar6._12_4_ = fVar29;
      auVar7._4_4_ = fVar34;
      auVar7._0_4_ = fVar27;
      auVar7._8_4_ = fVar38;
      auVar7._12_4_ = fVar29;
      auVar16 = NEON_ext(auVar6,auVar7,8,1);
      auVar30 = NEON_ext(auVar19,auVar19,8,1);
      local_50 = 0;
      local_48 = 0x8000000000000000;
      local_b0 = CONCAT44(auVar41._0_4_,auVar16._0_4_);
      local_38 = 0x40;
      uStack_a8 = auVar30._0_8_;
      auVar43._4_12_ = auVar30._4_12_;
      auVar43._0_4_ = fVar23;
      fVar22 = (float)puVar11[6] + (float)*(undefined8 *)(param_3 + 0x50);
      fVar24 = (float)((ulong)puVar11[6] >> 0x20) +
               (float)((ulong)*(undefined8 *)(param_3 + 0x50) >> 0x20);
      fVar25 = (float)puVar11[7] + (float)*(undefined8 *)(param_3 + 0x58);
      uStack_c0 = CONCAT44(fVar33,fVar34);
      uStack_108 = CONCAT44(fVar29,fVar38);
      local_110 = CONCAT44(fVar34,fVar27);
      uStack_f8 = auVar32._8_8_;
      uStack_b8 = auVar43._0_8_;
      fVar29 = -fVar22;
      fVar38 = -fVar24;
      fVar35 = -fVar25;
      uStack_e8 = auVar19._8_8_;
      uStack_d8 = CONCAT44((float)((ulong)puVar11[7] >> 0x20) +
                           (float)((ulong)*(undefined8 *)(param_3 + 0x58) >> 0x20),fVar25);
      local_e0 = CONCAT44(fVar24,fVar22);
      local_d0 = CONCAT44(fVar40,fVar27);
      auVar20._0_8_ =
           CONCAT44(auVar41._0_4_ * fVar35 + fVar40 * fVar29 + fVar33 * fVar38,
                    auVar16._0_4_ * fVar35 + fVar27 * fVar29 + fVar34 * fVar38);
      auVar20._8_4_ =
           auVar30._0_4_ * fVar35 + *(float *)(puVar11 + 4) * fVar15 * fVar29 + fVar23 * fVar38;
      auVar20._12_4_ = auVar30._4_4_ * fVar35 + fVar23 * fVar29 + auVar30._4_4_ * fVar38;
      uStack_98 = auVar20._8_8_;
      lVar14 = tpidr_el0;
      local_100 = auVar32._0_8_;
      local_f0 = auVar19._0_8_;
      uStack_c8 = auVar19._0_8_;
      uStack_a0 = auVar20._0_8_;
      if (*(long *)(lVar14 + 0x38d490) == 0) {
        lVar12 = FUN_0333d16c(0,1);
        *(long *)(lVar14 + 0x38d490) = lVar12;
        lVar12 = *(long *)(lVar12 + 8);
        if (0xbff < *(ulong *)(lVar12 + 0x10)) goto LAB_0018b264;
LAB_0018b5a4:
        local_40 = FUN_032ce670(lVar12,0xc00);
      }
      else {
        lVar12 = *(long *)(*(long *)(lVar14 + 0x38d490) + 8);
        if (*(ulong *)(lVar12 + 0x10) < 0xc00) goto LAB_0018b5a4;
LAB_0018b264:
        local_40 = *(long *)(lVar12 + 0x18);
        if (*(ulong *)(lVar12 + 0x20) < local_40 + 0xc00U) goto LAB_0018b5a4;
        *(ulong *)(lVar12 + 0x18) = local_40 + 0xc00U;
      }
      local_48 = CONCAT44(0x80000040,(undefined4)local_48);
      local_50 = local_40;
      FUN_001a3b04(lVar13,&local_50,local_2d0);
      if (local_40 == local_50) goto LAB_0018b65c;
    }
LAB_0018b6f8:
    lVar13 = *(long *)(lVar14 + 0x38d490);
    lVar12 = local_40;
  }
  else {
    if (local_278 == '\0') {
      local_1d0 = 0xffff;
      local_290 = 0;
      uStack_288 = 0;
      local_2a0 = 0;
      uStack_298 = 0;
      local_1cc = 0;
      local_1c0 = 1;
      local_1c8 = 0;
      local_1e0 = 0;
      uStack_1d8 = 0;
      local_1be = 0xfb;
      local_1b0 = 0;
      local_2d0[0] = PTR_DAT_04372480 + 0x10;
      local_1a8 = 0;
      local_1b8 = 0;
      local_228 = *(undefined8 *)(param_6 + 0x28);
      if ((bVar1 & 4) == 0) {
        local_278 = *(char *)(lVar14 + 0x5c);
      }
      local_240 = 0;
      local_270 = 0;
      uStack_268 = 0;
      local_260 = 0;
      uStack_258 = 0;
      local_250 = 0;
      uStack_248 = 0;
      local_23c = 0xffffffffffffffff;
      uStack_2b8 = *(undefined8 *)(lVar14 + 0x38);
      local_2c0 = *(undefined8 *)(lVar14 + 0x30);
      local_2b0 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar14 + 0x40) >> 0x20) -
                           (float)((ulong)local_2c0 >> 0x20)) *
                           (float)((ulong)*(undefined8 *)PTR_DAT_04372410 >> 0x20),
                           ((float)*(undefined8 *)(lVar14 + 0x40) - (float)local_2c0) *
                           (float)*(undefined8 *)PTR_DAT_04372410);
      uStack_2a8 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar14 + 0x48) >> 0x20) -
                            (float)((ulong)uStack_2b8 >> 0x20)) *
                            (float)((ulong)*(undefined8 *)(PTR_DAT_04372410 + 8) >> 0x20),
                            ((float)*(undefined8 *)(lVar14 + 0x48) - (float)uStack_2b8) *
                            (float)*(undefined8 *)(PTR_DAT_04372410 + 8));
      local_1e8 = param_9;
      local_230 = 0x20 - *(int *)(lVar14 + 0x54);
      fVar40 = (float)*(undefined8 *)(param_6 + 0x48);
      fVar34 = (float)*(undefined8 *)(param_6 + 0x40);
      fVar38 = (float)((ulong)*(undefined8 *)(param_6 + 0x40) >> 0x20);
      uStack_108 = CONCAT44(fVar27 * fVar34,auVar16._0_4_ * fVar34);
      local_110 = CONCAT44(fVar24 * fVar34,fVar29 * fVar34);
      uStack_f8 = CONCAT44(fVar33 * fVar38,fVar27 * fVar38);
      local_100 = CONCAT44(fVar25 * fVar38,fVar22 * fVar38);
      uStack_e8 = CONCAT44(fVar33 * fVar40,auVar30._0_4_ * fVar40);
      local_f0 = CONCAT44(fVar15 * fVar40,fVar23 * fVar40);
      auVar21._0_8_ =
           CONCAT44(fVar39 + *(float *)(param_6 + 0x54),fVar35 + *(float *)(param_6 + 0x50));
      auVar21._8_4_ = auVar37._8_4_ + *(float *)(param_6 + 0x58);
      auVar21._12_4_ = auVar37._12_4_ + *(float *)(param_6 + 0x5c);
      local_50 = 0;
      local_48 = 0x8000000000000000;
      local_38 = 0x40;
      uStack_d8 = auVar21._8_8_;
      lVar14 = tpidr_el0;
      local_e0 = auVar21._0_8_;
      if (*(long *)(lVar14 + 0x38d490) == 0) {
        lVar12 = FUN_0333d16c(0,1);
        *(long *)(lVar14 + 0x38d490) = lVar12;
        lVar12 = *(long *)(lVar12 + 8);
        if (0xbff < *(ulong *)(lVar12 + 0x10)) goto LAB_0018b3b4;
LAB_0018b61c:
        local_40 = FUN_032ce670(lVar12,0xc00);
      }
      else {
        lVar12 = *(long *)(*(long *)(lVar14 + 0x38d490) + 8);
        if (*(ulong *)(lVar12 + 0x10) < 0xc00) goto LAB_0018b61c;
LAB_0018b3b4:
        local_40 = *(long *)(lVar12 + 0x18);
        if (*(ulong *)(lVar12 + 0x20) < local_40 + 0xc00U) goto LAB_0018b61c;
        *(ulong *)(lVar12 + 0x18) = local_40 + 0xc00U;
      }
      local_48 = CONCAT44(0x80000040,(undefined4)local_48);
      local_50 = local_40;
      FUN_001a46cc(lVar13,&local_50,local_2d0);
      if (local_40 != local_50) goto LAB_0018b6f8;
    }
    else {
      local_1d0 = 0xffff;
      local_278 = '\0';
      local_290 = 0;
      uStack_288 = 0;
      local_2a0 = 0;
      uStack_298 = 0;
      local_1cc = 0;
      local_1c0 = 1;
      local_1c8 = 0;
      local_1e0 = 0;
      uStack_1d8 = 0;
      local_1be = 0xfb;
      local_1b0 = 0;
      local_2d0[0] = PTR_DAT_04372470 + 0x10;
      local_1a8 = 0;
      local_1b8 = 0;
      local_228 = *(undefined8 *)(param_6 + 0x28);
      if ((bVar1 & 4) == 0) {
        local_278 = *(char *)(lVar14 + 0x5c);
      }
      local_240 = 0;
      local_270 = 0;
      uStack_268 = 0;
      local_260 = 0;
      uStack_258 = 0;
      local_250 = 0;
      uStack_248 = 0;
      local_23c = 0xffffffffffffffff;
      uStack_2b8 = *(undefined8 *)(lVar14 + 0x38);
      local_2c0 = *(undefined8 *)(lVar14 + 0x30);
      local_2b0 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar14 + 0x40) >> 0x20) -
                           (float)((ulong)local_2c0 >> 0x20)) *
                           (float)((ulong)*(undefined8 *)PTR_DAT_04372410 >> 0x20),
                           ((float)*(undefined8 *)(lVar14 + 0x40) - (float)local_2c0) *
                           (float)*(undefined8 *)PTR_DAT_04372410);
      uStack_2a8 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar14 + 0x48) >> 0x20) -
                            (float)((ulong)uStack_2b8 >> 0x20)) *
                            (float)((ulong)*(undefined8 *)(PTR_DAT_04372410 + 8) >> 0x20),
                            ((float)*(undefined8 *)(lVar14 + 0x48) - (float)uStack_2b8) *
                            (float)*(undefined8 *)(PTR_DAT_04372410 + 8));
      local_230 = 0x20 - *(int *)(lVar14 + 0x54);
      local_1e8 = param_9;
      puVar11 = *(undefined8 **)(param_3 + 0x20);
      fVar29 = *(float *)(param_3 + 0x40);
      fVar23 = *(float *)(param_3 + 0x44);
      fVar15 = *(float *)(param_3 + 0x48);
      fVar40 = *(float *)(puVar11 + 2) * fVar23;
      fVar33 = *(float *)((long)puVar11 + 0x14) * fVar23;
      auVar31._0_8_ = CONCAT44(fVar33,fVar40);
      auVar31._8_4_ = *(float *)(puVar11 + 3) * fVar23;
      auVar31._12_4_ = *(float *)((long)puVar11 + 0x1c) * fVar23;
      auVar41 = NEON_ext(auVar31,auVar31,8,1);
      fVar27 = (float)*puVar11 * fVar29;
      fVar34 = (float)((ulong)*puVar11 >> 0x20) * fVar29;
      fVar38 = (float)puVar11[1] * fVar29;
      fVar29 = (float)((ulong)puVar11[1] >> 0x20) * fVar29;
      fVar22 = *(float *)((long)puVar11 + 0x24) * fVar15;
      auVar17._0_8_ = CONCAT44(fVar22,*(float *)(puVar11 + 4) * fVar15);
      auVar17._8_4_ = *(float *)(puVar11 + 5) * fVar15;
      auVar17._12_4_ = *(float *)((long)puVar11 + 0x2c) * fVar15;
      auVar4._4_4_ = fVar34;
      auVar4._0_4_ = fVar27;
      auVar4._8_4_ = fVar38;
      auVar4._12_4_ = fVar29;
      auVar5._4_4_ = fVar34;
      auVar5._0_4_ = fVar27;
      auVar5._8_4_ = fVar38;
      auVar5._12_4_ = fVar29;
      auVar16 = NEON_ext(auVar4,auVar5,8,1);
      auVar30 = NEON_ext(auVar17,auVar17,8,1);
      local_b0 = CONCAT44(auVar41._0_4_,auVar16._0_4_);
      uStack_a8 = auVar30._0_8_;
      auVar42._4_12_ = auVar30._4_12_;
      auVar42._0_4_ = fVar22;
      fVar23 = (float)puVar11[6] + (float)*(undefined8 *)(param_3 + 0x50);
      fVar24 = (float)((ulong)puVar11[6] >> 0x20) +
               (float)((ulong)*(undefined8 *)(param_3 + 0x50) >> 0x20);
      fVar25 = (float)puVar11[7] + (float)*(undefined8 *)(param_3 + 0x58);
      uStack_c0 = CONCAT44(fVar33,fVar34);
      uStack_108 = CONCAT44(fVar29,fVar38);
      local_110 = CONCAT44(fVar34,fVar27);
      uStack_f8 = auVar31._8_8_;
      uStack_e8 = auVar17._8_8_;
      uStack_d8 = CONCAT44((float)((ulong)puVar11[7] >> 0x20) +
                           (float)((ulong)*(undefined8 *)(param_3 + 0x58) >> 0x20),fVar25);
      local_e0 = CONCAT44(fVar24,fVar23);
      uStack_b8 = auVar42._0_8_;
      fVar23 = -fVar23;
      fVar24 = -fVar24;
      fVar25 = -fVar25;
      local_d0 = CONCAT44(fVar40,fVar27);
      uStack_98 = CONCAT44(auVar30._4_4_ * fVar25 + fVar22 * fVar23 + auVar30._4_4_ * fVar24,
                           auVar30._0_4_ * fVar25 +
                           *(float *)(puVar11 + 4) * fVar15 * fVar23 + fVar22 * fVar24);
      uStack_a0 = CONCAT44(auVar41._0_4_ * fVar25 + fVar40 * fVar23 + fVar33 * fVar24,
                           auVar16._0_4_ * fVar25 + fVar27 * fVar23 + fVar34 * fVar24);
      puVar11 = *(undefined8 **)(param_6 + 0x20);
      fVar29 = *(float *)(param_6 + 0x40);
      fVar23 = *(float *)(param_6 + 0x44);
      fStack_64 = *(float *)(param_6 + 0x48);
      uStack_88 = CONCAT44((float)((ulong)puVar11[1] >> 0x20) * fVar29,(float)puVar11[1] * fVar29);
      local_90 = CONCAT44((float)((ulong)*puVar11 >> 0x20) * fVar29,(float)*puVar11 * fVar29);
      uStack_78 = CONCAT44((float)((ulong)puVar11[3] >> 0x20) * fVar23,(float)puVar11[3] * fVar23);
      local_80 = CONCAT44((float)((ulong)puVar11[2] >> 0x20) * fVar23,(float)puVar11[2] * fVar23);
      local_70 = (float)puVar11[4] * fStack_64;
      fStack_6c = (float)((ulong)puVar11[4] >> 0x20) * fStack_64;
      fStack_68 = (float)puVar11[5] * fStack_64;
      fStack_64 = (float)((ulong)puVar11[5] >> 0x20) * fStack_64;
      local_50 = 0;
      local_48 = 0x8000000000000000;
      local_38 = 0x40;
      auVar18._0_8_ =
           CONCAT44(*(float *)((long)puVar11 + 0x34) +
                    (float)((ulong)*(undefined8 *)(param_6 + 0x50) >> 0x20),
                    *(float *)(puVar11 + 6) + (float)*(undefined8 *)(param_6 + 0x50));
      auVar18._8_4_ = *(float *)(puVar11 + 7) + (float)*(undefined8 *)(param_6 + 0x58);
      auVar18._12_4_ =
           *(float *)((long)puVar11 + 0x3c) +
           (float)((ulong)*(undefined8 *)(param_6 + 0x58) >> 0x20);
      uStack_58 = auVar18._8_8_;
      lVar14 = tpidr_el0;
      local_100 = auVar31._0_8_;
      local_f0 = auVar17._0_8_;
      uStack_c8 = auVar17._0_8_;
      local_60 = auVar18._0_8_;
      if (*(long *)(lVar14 + 0x38d490) == 0) {
        lVar12 = FUN_0333d16c(0,1);
        *(long *)(lVar14 + 0x38d490) = lVar12;
        lVar12 = *(long *)(lVar12 + 8);
        if (0xbff < *(ulong *)(lVar12 + 0x10)) goto LAB_0018b0c0;
LAB_0018b400:
        local_40 = FUN_032ce670(lVar12,0xc00);
      }
      else {
        lVar12 = *(long *)(*(long *)(lVar14 + 0x38d490) + 8);
        if (*(ulong *)(lVar12 + 0x10) < 0xc00) goto LAB_0018b400;
LAB_0018b0c0:
        local_40 = *(long *)(lVar12 + 0x18);
        if (*(ulong *)(lVar12 + 0x20) < local_40 + 0xc00U) goto LAB_0018b400;
        *(ulong *)(lVar12 + 0x18) = local_40 + 0xc00U;
      }
      local_48 = CONCAT44(0x80000040,(undefined4)local_48);
      local_50 = local_40;
      FUN_001a5238(lVar13,&local_50,local_2d0);
      if (local_40 != local_50) goto LAB_0018b6f8;
    }
LAB_0018b65c:
    local_48 = local_48 & 0xffffffff00000000;
    lVar13 = *(long *)(lVar14 + 0x38d490);
    lVar12 = local_40;
  }
  lVar8 = (long)local_38;
  local_40 = lVar12;
  if (lVar13 == 0) {
    lVar13 = FUN_0333d16c(0,1);
    *(long *)(lVar14 + 0x38d490) = lVar13;
  }
  lVar13 = *(long *)(lVar13 + 8);
  uVar10 = lVar8 * 0x30 + 0x7fU & 0xffffffffffffff80;
  if (((*(ulong *)(lVar13 + 0x10) < uVar10) || (*(long *)(lVar13 + 0x18) != uVar10 + lVar12)) ||
     (*(long *)(lVar13 + 0x28) == lVar12)) {
    FUN_032cedf0(lVar13,lVar12);
    uVar9 = local_48._4_4_;
  }
  else {
    *(long *)(lVar13 + 0x18) = lVar12;
    uVar9 = local_48._4_4_;
  }
  if ((-1 < (long)local_48) && (local_48 = (ulong)uVar9 << 0x20, local_50 != 0)) {
    FUN_032cf244(*(undefined8 *)PTR_PTR_04372408,local_50,0x30,uVar9 & 0x3fffffff);
  }
  return;
}


