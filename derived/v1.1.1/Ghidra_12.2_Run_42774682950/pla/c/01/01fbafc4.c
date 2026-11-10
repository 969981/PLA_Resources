/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01fbafc4; name: FUN_01fbafc4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01fbafc4(long *param_1,char *param_2,char *param_3,long *param_4,char *param_5,
                 long *param_6,char *param_7,long *param_8,char *param_9,long *param_10,
                 char *param_11,long *param_12,char *param_13,long *param_14)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  size_t sVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  void *pvVar13;
  long *plVar14;
  ulong uVar15;
  string *psVar16;
  long lVar17;
  string *psVar18;
  long lVar19;
  undefined8 uVar20;
  string *psVar21;
  long *plVar22;
  void *pvVar23;
  long lVar24;
  void *pvVar25;
  void *pvVar26;
  undefined8 local_2e0;
  size_t local_2d8;
  void *local_2d0;
  byte local_2c8;
  undefined7 uStack_2c7;
  undefined1 local_2c0;
  undefined7 uStack_2bf;
  void *local_2b8;
  byte local_2b0;
  undefined7 uStack_2af;
  undefined1 local_2a8;
  undefined7 uStack_2a7;
  void *local_2a0;
  undefined7 local_298;
  undefined1 uStack_291;
  undefined7 uStack_290;
  byte local_288;
  undefined7 uStack_287;
  undefined1 local_280;
  undefined7 uStack_27f;
  void *local_278;
  undefined7 local_270;
  undefined1 uStack_269;
  undefined7 uStack_268;
  byte local_260;
  undefined7 uStack_25f;
  undefined1 local_258;
  undefined7 uStack_257;
  void *local_250;
  undefined7 local_248;
  undefined1 uStack_241;
  undefined7 uStack_240;
  byte local_238;
  undefined7 uStack_237;
  undefined1 local_230;
  undefined7 uStack_22f;
  void *local_228;
  undefined7 local_220;
  undefined1 uStack_219;
  undefined7 uStack_218;
  undefined7 local_210;
  undefined1 uStack_209;
  undefined7 uStack_208;
  string local_200;
  undefined7 local_1ff;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  void *local_1f0;
  undefined1 *local_1e8;
  undefined1 *puStack_1e0;
  undefined4 local_1d8;
  byte local_1d0;
  undefined7 local_1cf;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  void *local_1c0;
  undefined1 *local_1b8;
  undefined1 *puStack_1b0;
  undefined4 local_1a8;
  byte local_1a0;
  undefined7 local_19f;
  undefined1 uStack_198;
  undefined7 uStack_197;
  void *local_190;
  undefined1 *local_188;
  undefined1 *puStack_180;
  undefined4 local_178;
  byte local_170;
  undefined7 local_16f;
  undefined1 uStack_168;
  undefined7 uStack_167;
  void *local_160;
  undefined1 *local_158;
  undefined1 *puStack_150;
  undefined4 local_148;
  byte local_140;
  undefined7 local_13f;
  undefined1 uStack_138;
  undefined7 uStack_137;
  void *local_130;
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined4 local_118;
  byte local_110;
  undefined7 local_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  void *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  byte local_e0;
  undefined2 local_df;
  undefined1 local_dd;
  undefined8 local_dc;
  undefined4 local_d4;
  long local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  byte local_b0;
  undefined4 local_af;
  undefined7 local_ab;
  undefined4 uStack_a4;
  long local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined4 local_88;
  string local_80;
  undefined7 uStack_7f;
  undefined1 local_78;
  undefined7 uStack_77;
  void *local_70;
  
  lVar10 = *param_1;
  local_2d8 = 0;
  local_2d0 = (void *)0x0;
  local_2e0 = 0;
  sVar7 = strlen(param_2);
  plVar1 = DAT_043f1798;
  if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar5 = tpidr_el0;
  if (sVar7 < 0x17) {
    local_2e0 = CONCAT71(local_2e0._1_7_,(char)((int)sVar7 << 1));
    pvVar23 = (void *)((ulong)&local_2e0 | 1);
    if (sVar7 != 0) goto LAB_01fbb060;
  }
  else {
    uVar11 = sVar7 + 0x10 & 0xfffffffffffffff0;
    plVar8 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar8 = plVar1;
    }
    pvVar23 = (void *)(**(code **)(*plVar8 + 0x10))(plVar8,uVar11,8);
    local_2e0 = uVar11 | 1;
    local_2d8 = sVar7;
    local_2d0 = pvVar23;
LAB_01fbb060:
    memcpy(pvVar23,param_2,sVar7);
  }
  *(undefined1 *)((long)pvVar23 + sVar7) = 0;
  plVar1 = DAT_043f1798;
  plVar8 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar8 = plVar1;
  }
  plVar8 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x120,8);
  plVar8[4] = 0;
  plVar22 = plVar8 + 1;
  *plVar22 = 0;
  *(undefined4 *)(plVar8 + 5) = 0x3f800000;
  plVar8[6] = (long)FUN_01fbcac0;
  plVar8[7] = (long)FUN_01fbcb70;
  *plVar8 = (long)&PTR_FUN_0425b100;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  *(undefined1 *)(plVar8 + 0xb) = 0;
  plVar8[0xc] = (long)param_3;
  plVar8[0xd] = *param_4;
  plVar8[0xe] = (long)param_5;
  plVar8[0xf] = *param_6;
  plVar8[0x10] = (long)param_7;
  plVar8[0x11] = *param_8;
  plVar8[0x12] = (long)param_9;
  plVar8[0x13] = *param_10;
  plVar8[0x14] = (long)param_11;
  plVar8[0x15] = *param_12;
  plVar8[0x16] = (long)param_13;
  lVar19 = *param_14;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = (long)FUN_01fbcd44;
  plVar8[0x19] = (long)&DAT_0392da3c;
  plVar8[0x1a] = 0;
  plVar8[0x1d] = (long)&LAB_01fbd024;
  plVar8[0x1e] = (long)&LAB_01fbd300;
  plVar8[0x1f] = (long)&LAB_01fbd310;
  plVar8[0x20] = 0;
  plVar8[0x21] = 0;
  *(undefined1 *)(plVar8 + 0x22) = 1;
  plVar8[0x17] = lVar19;
  plVar8[0x18] = (long)&DAT_038ca815;
  plVar8[0x23] = 0;
  sVar7 = strlen(param_3);
  plVar1 = DAT_043f1798;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar7 < 0x17) {
    local_80 = SUB41((int)sVar7 << 1,0);
    pvVar23 = (void *)((ulong)&local_80 | 1);
    if (sVar7 != 0) goto LAB_01fbb1f8;
  }
  else {
    uVar11 = sVar7 + 0x10 & 0xfffffffffffffff0;
    plVar14 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar14 = plVar1;
    }
    pvVar23 = (void *)(**(code **)(*plVar14 + 0x10))(plVar14,uVar11,8);
    local_80 = (string)((byte)uVar11 | 1);
    uStack_7f = (undefined7)(uVar11 >> 8);
    local_78 = (undefined1)sVar7;
    uStack_77 = (undefined7)(sVar7 >> 8);
    local_70 = pvVar23;
LAB_01fbb1f8:
    memcpy(pvVar23,param_3,sVar7);
  }
  local_1f0 = local_70;
  uStack_1f7 = uStack_77;
  uStack_1f8 = local_78;
  local_1ff = uStack_7f;
  local_200 = local_80;
  *(undefined1 *)((long)pvVar23 + sVar7) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_210 = 0;
  uStack_209 = 0;
  uStack_208 = 0;
  local_1e8 = &LAB_01fbd314;
  puStack_1e0 = &LAB_01fbd330;
  local_1d8 = 0xffffffff;
  sVar7 = strlen(param_5);
  plVar1 = DAT_043f1798;
  local_238 = 0;
  uStack_237 = 0;
  local_230 = 0;
  uStack_22f = 0;
  local_228 = (void *)0x0;
  if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar7 < 0x17) {
    local_238 = (byte)((int)sVar7 << 1);
    pvVar23 = (void *)((ulong)&local_238 | 1);
    if (sVar7 != 0) goto LAB_01fbb298;
  }
  else {
    uVar11 = sVar7 + 0x10 & 0xfffffffffffffff0;
    plVar14 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar14 = plVar1;
    }
    pvVar23 = (void *)(**(code **)(*plVar14 + 0x10))(plVar14,uVar11,8);
    local_238 = (byte)uVar11 | 1;
    uStack_237 = (undefined7)(uVar11 >> 8);
    local_230 = (undefined1)sVar7;
    uStack_22f = (undefined7)(sVar7 >> 8);
    local_228 = pvVar23;
LAB_01fbb298:
    memcpy(pvVar23,param_5,sVar7);
  }
  local_1c0 = local_228;
  uStack_1c7 = uStack_22f;
  uStack_1c8 = local_230;
  local_1cf = uStack_237;
  local_1d0 = local_238;
  *(undefined1 *)((long)pvVar23 + sVar7) = 0;
  local_238 = 0;
  uStack_237 = 0;
  local_230 = 0;
  uStack_22f = 0;
  local_228 = (void *)0x0;
  local_220 = 0;
  uStack_219 = 0;
  uStack_218 = 0;
  local_1a8 = 0xffffffff;
  local_1b8 = &LAB_01fbd34c;
  puStack_1b0 = &LAB_01fbd368;
  sVar7 = strlen(param_7);
  plVar1 = DAT_043f1798;
  local_260 = 0;
  uStack_25f = 0;
  local_258 = 0;
  uStack_257 = 0;
  local_250 = (void *)0x0;
  if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar7 < 0x17) {
    local_260 = (byte)((int)sVar7 << 1);
    pvVar25 = (void *)((ulong)&local_260 | 1);
    if (sVar7 != 0) goto LAB_01fbb330;
  }
  else {
    uVar11 = sVar7 + 0x10 & 0xfffffffffffffff0;
    plVar14 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar14 = plVar1;
    }
    pvVar25 = (void *)(**(code **)(*plVar14 + 0x10))(plVar14,uVar11,8);
    local_260 = (byte)uVar11 | 1;
    uStack_25f = (undefined7)(uVar11 >> 8);
    local_258 = (undefined1)sVar7;
    uStack_257 = (undefined7)(sVar7 >> 8);
    local_250 = pvVar25;
LAB_01fbb330:
    memcpy(pvVar25,param_7,sVar7);
  }
  local_190 = local_250;
  uStack_197 = uStack_257;
  uStack_198 = local_258;
  local_19f = uStack_25f;
  local_1a0 = local_260;
  *(undefined1 *)((long)pvVar25 + sVar7) = 0;
  local_260 = 0;
  uStack_25f = 0;
  local_258 = 0;
  uStack_257 = 0;
  local_250 = (void *)0x0;
  local_248 = 0;
  uStack_241 = 0;
  uStack_240 = 0;
  local_178 = 0xffffffff;
  local_188 = &LAB_01fbd384;
  puStack_180 = &LAB_01fbd3a0;
  sVar7 = strlen(param_9);
  plVar1 = DAT_043f1798;
  local_288 = 0;
  uStack_287 = 0;
  local_280 = 0;
  uStack_27f = 0;
  local_278 = (void *)0x0;
  if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar7 < 0x17) {
    local_288 = (byte)((int)sVar7 << 1);
    pvVar25 = (void *)((ulong)&local_288 | 1);
    if (sVar7 != 0) goto LAB_01fbb3c8;
  }
  else {
    uVar11 = sVar7 + 0x10 & 0xfffffffffffffff0;
    plVar14 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar14 = plVar1;
    }
    pvVar25 = (void *)(**(code **)(*plVar14 + 0x10))(plVar14,uVar11,8);
    local_288 = (byte)uVar11 | 1;
    uStack_287 = (undefined7)(uVar11 >> 8);
    local_280 = (undefined1)sVar7;
    uStack_27f = (undefined7)(sVar7 >> 8);
    local_278 = pvVar25;
LAB_01fbb3c8:
    memcpy(pvVar25,param_9,sVar7);
  }
  local_160 = local_278;
  uStack_167 = uStack_27f;
  uStack_168 = local_280;
  local_16f = uStack_287;
  local_170 = local_288;
  *(undefined1 *)((long)pvVar25 + sVar7) = 0;
  local_280 = 0;
  uStack_27f = 0;
  local_278 = (void *)0x0;
  local_288 = 0;
  uStack_287 = 0;
  local_270 = 0;
  uStack_269 = 0;
  uStack_268 = 0;
  local_158 = &LAB_01fbd3bc;
  puStack_150 = &LAB_01fbd3d8;
  local_148 = 0xffffffff;
  sVar7 = strlen(param_11);
  plVar1 = DAT_043f1798;
  local_2b0 = 0;
  uStack_2af = 0;
  local_2a8 = 0;
  uStack_2a7 = 0;
  local_2a0 = (void *)0x0;
  if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar7 < 0x17) {
    local_2b0 = (byte)((int)sVar7 << 1);
    pvVar25 = (void *)((ulong)&local_2b0 | 1);
    if (sVar7 != 0) goto LAB_01fbb46c;
  }
  else {
    uVar11 = sVar7 + 0x10 & 0xfffffffffffffff0;
    plVar14 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar14 = plVar1;
    }
    pvVar25 = (void *)(**(code **)(*plVar14 + 0x10))(plVar14,uVar11,8);
    local_2b0 = (byte)uVar11 | 1;
    uStack_2af = (undefined7)(uVar11 >> 8);
    local_2a8 = (undefined1)sVar7;
    uStack_2a7 = (undefined7)(sVar7 >> 8);
    local_2a0 = pvVar25;
LAB_01fbb46c:
    memcpy(pvVar25,param_11,sVar7);
  }
  local_130 = local_2a0;
  uStack_137 = uStack_2a7;
  uStack_138 = local_2a8;
  local_13f = uStack_2af;
  local_140 = local_2b0;
  *(undefined1 *)((long)pvVar25 + sVar7) = 0;
  local_2b0 = 0;
  uStack_2af = 0;
  local_2a8 = 0;
  uStack_2a7 = 0;
  local_2a0 = (void *)0x0;
  local_298 = 0;
  uStack_291 = 0;
  uStack_290 = 0;
  local_118 = 0xffffffff;
  local_128 = &LAB_01fbd3f4;
  puStack_120 = &LAB_01fbd410;
  sVar7 = strlen(param_13);
  plVar1 = DAT_043f1798;
  local_2c8 = 0;
  uStack_2c7 = 0;
  local_2c0 = 0;
  uStack_2bf = 0;
  local_2b8 = (void *)0x0;
  if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar7 < 0x17) {
    local_2c8 = (byte)((int)sVar7 << 1);
    pvVar25 = (void *)((ulong)&local_2c8 | 1);
    if (sVar7 != 0) goto LAB_01fbb508;
  }
  else {
    uVar11 = sVar7 + 0x10 & 0xfffffffffffffff0;
    plVar14 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar14 = plVar1;
    }
    pvVar25 = (void *)(**(code **)(*plVar14 + 0x10))(plVar14,uVar11,8);
    local_2c8 = (byte)uVar11 | 1;
    uStack_2c7 = (undefined7)(uVar11 >> 8);
    local_2c0 = (undefined1)sVar7;
    uStack_2bf = (undefined7)(sVar7 >> 8);
    local_2b8 = pvVar25;
LAB_01fbb508:
    memcpy(pvVar25,param_13,sVar7);
  }
  *(undefined1 *)((long)pvVar25 + sVar7) = 0;
  local_110 = local_2c8;
  local_10f = uStack_2c7;
  local_f0 = &LAB_01fbd448;
  local_f8 = &LAB_01fbd42c;
  psVar21 = &local_200;
  local_100 = local_2b8;
  uStack_108 = local_2c0;
  uStack_107 = uStack_2bf;
  plVar1 = plVar8 + 3;
  local_e0 = 6;
  local_e8 = 0xffffffff;
  local_df = 0x656e;
  local_dd = 0x77;
  local_dc = 0;
  local_d4 = 0;
  local_c8 = &LAB_01fbd464;
  local_c0 = &LAB_01fbd4ac;
  local_b0 = 8;
  local_d0 = 0;
  local_b8 = 0xffffffff;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_90 = &LAB_01fbd53c;
  local_98 = &LAB_01fbd4f4;
  local_88 = 0xffffffff;
  local_a0 = 0;
  do {
    uVar11 = *(ulong *)(psVar21 + 8);
    psVar3 = *(string **)(psVar21 + 0x10);
    if (((byte)*psVar21 & 1) == 0) {
      psVar3 = psVar21 + 1;
      uVar11 = (ulong)((byte)*psVar21 >> 1);
    }
    pvVar25 = (void *)FUN_008e8ed4(&local_80,psVar3,uVar11);
    pvVar26 = (void *)plVar8[2];
    if (pvVar26 != (void *)0x0) {
      uVar11 = (long)pvVar26 - ((ulong)pvVar26 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        pvVar23 = (void *)((long)pvVar26 - 1U & (ulong)pvVar25);
      }
      else {
        pvVar23 = pvVar25;
        if (pvVar26 <= pvVar25) {
          uVar15 = 0;
          if (pvVar26 != (void *)0x0) {
            uVar15 = (ulong)pvVar25 / (ulong)pvVar26;
          }
          pvVar23 = (void *)((long)pvVar25 - uVar15 * (long)pvVar26);
        }
      }
      plVar14 = *(long **)(*plVar22 + (long)pvVar23 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        psVar3 = psVar21 + 1;
        sVar7 = (ulong)((byte)*psVar21 >> 1);
        if (((byte)*psVar21 & 1) != 0) {
          psVar3 = *(string **)(psVar21 + 0x10);
          sVar7 = *(size_t *)(psVar21 + 8);
        }
        if (uVar11 < 2) {
          if (sVar7 == 0) {
            do {
              if ((void *)plVar14[1] != pvVar25 &&
                  (void *)((ulong)plVar14[1] & (long)pvVar26 - 1U) != pvVar23) break;
              uVar11 = (ulong)(*(byte *)(plVar14 + 2) >> 1);
              if ((*(byte *)(plVar14 + 2) & 1) != 0) {
                uVar11 = plVar14[3];
              }
              if (uVar11 == 0) goto LAB_01fbb764;
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
          else {
            do {
              if ((void *)plVar14[1] != pvVar25 &&
                  (void *)((ulong)plVar14[1] & (long)pvVar26 - 1U) != pvVar23) break;
              bVar4 = *(byte *)(plVar14 + 2);
              uVar11 = (ulong)(bVar4 >> 1);
              sVar2 = uVar11;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar14[3];
              }
              if (sVar2 == sVar7) {
                if ((bVar4 & 1) == 0) {
                  psVar16 = (string *)((long)plVar14 + 0x11);
                  psVar18 = psVar3;
                  while (*psVar16 == *psVar18) {
                    uVar11 = uVar11 - 1;
                    psVar16 = psVar16 + 1;
                    psVar18 = psVar18 + 1;
                    if (uVar11 == 0) goto LAB_01fbb764;
                  }
                }
                else {
                  iVar6 = memcmp((void *)plVar14[4],psVar3,sVar7);
                  if (iVar6 == 0) goto LAB_01fbb764;
                }
              }
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
        }
        else if (sVar7 == 0) {
          do {
            pvVar13 = (void *)plVar14[1];
            if (pvVar13 != pvVar25) {
              if (pvVar26 <= pvVar13) {
                uVar11 = 0;
                if (pvVar26 != (void *)0x0) {
                  uVar11 = (ulong)pvVar13 / (ulong)pvVar26;
                }
                pvVar13 = (void *)((long)pvVar13 - uVar11 * (long)pvVar26);
              }
              if (pvVar13 != pvVar23) break;
            }
            uVar11 = (ulong)(*(byte *)(plVar14 + 2) >> 1);
            if ((*(byte *)(plVar14 + 2) & 1) != 0) {
              uVar11 = plVar14[3];
            }
            if (uVar11 == 0) goto LAB_01fbb764;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            pvVar13 = (void *)plVar14[1];
            if (pvVar13 != pvVar25) {
              if (pvVar26 <= pvVar13) {
                uVar11 = 0;
                if (pvVar26 != (void *)0x0) {
                  uVar11 = (ulong)pvVar13 / (ulong)pvVar26;
                }
                pvVar13 = (void *)((long)pvVar13 - uVar11 * (long)pvVar26);
              }
              if (pvVar13 != pvVar23) break;
            }
            bVar4 = *(byte *)(plVar14 + 2);
            uVar11 = (ulong)(bVar4 >> 1);
            sVar2 = uVar11;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar14[3];
            }
            if (sVar2 == sVar7) {
              if ((bVar4 & 1) == 0) {
                psVar16 = (string *)((long)plVar14 + 0x11);
                psVar18 = psVar3;
                while (*psVar16 == *psVar18) {
                  uVar11 = uVar11 - 1;
                  psVar16 = psVar16 + 1;
                  psVar18 = psVar18 + 1;
                  if (uVar11 == 0) goto LAB_01fbb764;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar14[4],psVar3,sVar7);
                if (iVar6 == 0) goto LAB_01fbb764;
              }
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    plVar14 = DAT_043f1798;
    plVar12 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar12 = plVar14;
    }
    plVar14 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x40,8);
    std::string::string((string *)(plVar14 + 2),psVar21);
    lVar19 = *(long *)(psVar21 + 0x18);
    lVar17 = *(long *)(psVar21 + 0x28);
    plVar14[6] = *(long *)(psVar21 + 0x20);
    plVar14[7] = lVar17;
    plVar14[5] = lVar19;
    *plVar14 = 0;
    plVar14[1] = (long)pvVar25;
    if ((pvVar26 == (void *)0x0) ||
       (*(float *)(plVar8 + 5) * (float)pvVar26 < (float)(plVar8[4] + 1))) {
      uVar11 = (ulong)(pvVar26 < (void *)0x3 || ((ulong)pvVar26 & (long)pvVar26 - 1U) != 0) |
               (long)pvVar26 << 1;
      uVar15 = (ulong)((float)(plVar8[4] + 1) / *(float *)(plVar8 + 5));
      if (uVar15 <= uVar11) {
        uVar15 = uVar11;
      }
      FUN_008e9ae4(plVar22,uVar15);
      pvVar26 = (void *)plVar8[2];
      if (((ulong)pvVar26 & (long)pvVar26 - 1U) == 0) {
        pvVar23 = (void *)((long)pvVar26 - 1U & (ulong)pvVar25);
      }
      else if (pvVar25 < pvVar26) {
        pvVar23 = pvVar25;
      }
      else {
        uVar11 = 0;
        if (pvVar26 != (void *)0x0) {
          uVar11 = (ulong)pvVar25 / (ulong)pvVar26;
        }
        pvVar23 = (void *)((long)pvVar25 - uVar11 * (long)pvVar26);
      }
    }
    lVar19 = *plVar22;
    plVar12 = *(long **)(lVar19 + (long)pvVar23 * 8);
    if (plVar12 == (long *)0x0) {
      *plVar14 = *plVar1;
      *plVar1 = (long)plVar14;
      *(long **)(lVar19 + (long)pvVar23 * 8) = plVar1;
      if (*plVar14 != 0) {
        pvVar25 = *(void **)(*plVar14 + 8);
        if (((ulong)pvVar26 & (long)pvVar26 - 1U) == 0) {
          pvVar25 = (void *)((ulong)pvVar25 & (long)pvVar26 - 1U);
        }
        else if (pvVar26 <= pvVar25) {
          uVar11 = 0;
          if (pvVar26 != (void *)0x0) {
            uVar11 = (ulong)pvVar25 / (ulong)pvVar26;
          }
          pvVar25 = (void *)((long)pvVar25 - uVar11 * (long)pvVar26);
        }
        plVar12 = (long *)(*plVar22 + (long)pvVar25 * 8);
        goto LAB_01fbb754;
      }
    }
    else {
      *plVar14 = *plVar12;
LAB_01fbb754:
      *plVar12 = (long)plVar14;
    }
    plVar8[4] = plVar8[4] + 1;
LAB_01fbb764:
    psVar21 = psVar21 + 0x30;
  } while (psVar21 != &local_80);
  lVar17 = FUN_008cca50();
  lVar19 = 0;
  do {
    lVar9 = FUN_008e8c90(plVar22,lVar17 + lVar19);
    if (lVar9 != 0) {
      FUN_008f2aec(&local_80,plVar22,lVar9);
      plVar1 = DAT_043f1798;
      lVar9 = CONCAT71(uStack_7f,local_80);
      local_80 = (string)0x0;
      uStack_7f = 0;
      if (lVar9 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar9 + 0x10) & 1) != 0)) &&
           (lVar24 = *(long *)(lVar9 + 0x20), lVar24 != 0)) {
          plVar14 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar14 = plVar1;
          }
          uVar11 = (**(code **)(*plVar14 + 0xc0))(plVar14);
          if ((uVar11 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar14,lVar24,0,8);
              goto LAB_01fbbdac;
            }
          }
          (**(code **)(*plVar14 + 0x18))(plVar14,lVar24,0,8);
        }
LAB_01fbbdac:
        plVar1 = DAT_043f1798;
        plVar14 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar14 = plVar1;
        }
        uVar11 = (**(code **)(*plVar14 + 0xc0))(plVar14);
        if ((uVar11 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar14,lVar9,0,8);
            goto LAB_01fbbd64;
          }
        }
        (**(code **)(*plVar14 + 0x18))(plVar14,lVar9,0,8);
      }
    }
LAB_01fbbd64:
    lVar9 = local_a0;
    lVar19 = lVar19 + 0x18;
  } while (lVar19 != 0x300);
  *(undefined1 *)(plVar8 + 0xb) = 1;
  plVar1 = DAT_043f1798;
  lVar19 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar22 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar22 = plVar1;
    }
    uVar11 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar22,lVar9,0,8);
        plVar1 = DAT_043f1798;
        lVar19 = local_d0;
        goto joined_r0x01fbbefc;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,lVar9,0,8);
    plVar1 = DAT_043f1798;
    lVar19 = local_d0;
  }
joined_r0x01fbbefc:
  pvVar23 = local_100;
  local_d0 = lVar19;
  if (((local_e0 & 1) != 0) && (lVar19 != 0)) {
    plVar22 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar22 = plVar1;
    }
    uVar11 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar22,lVar19,0,8);
        plVar1 = DAT_043f1798;
        pvVar23 = local_100;
        goto joined_r0x01fbc62c;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,lVar19,0,8);
    plVar1 = DAT_043f1798;
    pvVar23 = local_100;
  }
joined_r0x01fbc62c:
  pvVar25 = local_130;
  local_100 = pvVar23;
  if (((local_110 & 1) != 0) && (pvVar23 != (void *)0x0)) {
    plVar22 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar22 = plVar1;
    }
    uVar11 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar22,pvVar23,0,8);
        plVar1 = DAT_043f1798;
        pvVar25 = local_130;
        goto joined_r0x01fbc064;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,pvVar23,0,8);
    plVar1 = DAT_043f1798;
    pvVar25 = local_130;
  }
joined_r0x01fbc064:
  pvVar23 = local_160;
  local_130 = pvVar25;
  if (((local_140 & 1) != 0) && (pvVar25 != (void *)0x0)) {
    plVar22 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar22 = plVar1;
    }
    uVar11 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar22,pvVar25,0,8);
        plVar1 = DAT_043f1798;
        pvVar23 = local_160;
        goto joined_r0x01fbc66c;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,pvVar25,0,8);
    plVar1 = DAT_043f1798;
    pvVar23 = local_160;
  }
joined_r0x01fbc66c:
  pvVar25 = local_190;
  local_160 = pvVar23;
  if (((local_170 & 1) != 0) && (pvVar23 != (void *)0x0)) {
    plVar22 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar22 = plVar1;
    }
    uVar11 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar22,pvVar23,0,8);
        plVar1 = DAT_043f1798;
        pvVar25 = local_190;
        goto joined_r0x01fbc1cc;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,pvVar23,0,8);
    plVar1 = DAT_043f1798;
    pvVar25 = local_190;
  }
joined_r0x01fbc1cc:
  pvVar23 = local_1c0;
  local_190 = pvVar25;
  if (((local_1a0 & 1) != 0) && (pvVar25 != (void *)0x0)) {
    plVar22 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar22 = plVar1;
    }
    uVar11 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar22,pvVar25,0,8);
        plVar1 = DAT_043f1798;
        pvVar23 = local_1c0;
        goto joined_r0x01fbc6ac;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,pvVar25,0,8);
    plVar1 = DAT_043f1798;
    pvVar23 = local_1c0;
  }
joined_r0x01fbc6ac:
  pvVar25 = local_1f0;
  local_1c0 = pvVar23;
  if (((local_1d0 & 1) != 0) && (pvVar23 != (void *)0x0)) {
    plVar22 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar22 = plVar1;
    }
    uVar11 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar22,pvVar23,0,8);
        plVar1 = DAT_043f1798;
        pvVar25 = local_1f0;
        goto joined_r0x01fbc334;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,pvVar23,0,8);
    plVar1 = DAT_043f1798;
    pvVar25 = local_1f0;
  }
joined_r0x01fbc334:
  DAT_043f1798 = plVar1;
  local_1f0 = pvVar25;
  if ((((byte)local_200 & 1) != 0) && (pvVar25 != (void *)0x0)) {
    plVar22 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar22 = plVar1;
    }
    uVar11 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar22,pvVar25,0,8);
        goto LAB_01fbc3e4;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,pvVar25,0,8);
  }
LAB_01fbc3e4:
  uVar20 = *(undefined8 *)(lVar10 + 0x20);
  FUN_0014fef0(uVar20);
  (**(code **)*plVar8)(plVar8,uVar20);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  pvVar23 = local_2d0;
  if ((local_2e0 & 1) == 0) {
    pvVar23 = (void *)((long)&local_2e0 + 1);
  }
  FUN_001522a0(uVar20,pvVar23);
  pvVar23 = local_2d0;
  plVar1 = DAT_043f1798;
  if (((local_2e0 & 1) != 0) && (local_2d0 != (void *)0x0)) {
    plVar8 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar8 = plVar1;
    }
    uVar11 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar8,pvVar23,0,8);
        return;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,pvVar23,0,8);
  }
  return;
}


