/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02117bc0; name: FUN_02117bc0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02117bc0(long *param_1,char *param_2,char *param_3,long *param_4,char *param_5,
                 long *param_6,char *param_7,long *param_8,char *param_9,long *param_10,
                 char *param_11,long *param_12,char *param_13,long *param_14)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  size_t sVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  void *pvVar18;
  long *plVar19;
  long *plVar20;
  string *psVar21;
  long lVar22;
  ulong uVar23;
  string *psVar24;
  long lVar25;
  char *pcVar26;
  undefined8 uVar27;
  string *psVar28;
  long *plVar29;
  void *pvVar30;
  long lVar31;
  void *pvVar32;
  void *pvVar33;
  undefined8 local_2b0;
  size_t local_2a8;
  void *local_2a0;
  byte local_298;
  undefined7 uStack_297;
  undefined1 local_290;
  undefined7 uStack_28f;
  void *local_288;
  byte local_280;
  undefined7 uStack_27f;
  undefined1 local_278;
  undefined7 uStack_277;
  void *local_270;
  undefined7 local_268;
  undefined1 uStack_261;
  undefined7 uStack_260;
  byte local_258;
  undefined7 uStack_257;
  undefined1 local_250;
  undefined7 uStack_24f;
  void *local_248;
  undefined7 local_240;
  undefined1 uStack_239;
  undefined7 uStack_238;
  byte local_230;
  undefined7 uStack_22f;
  undefined1 local_228;
  undefined7 uStack_227;
  void *local_220;
  undefined7 local_218;
  undefined1 uStack_211;
  undefined7 uStack_210;
  byte local_208;
  undefined7 uStack_207;
  undefined1 local_200;
  undefined7 uStack_1ff;
  void *local_1f8;
  undefined7 local_1f0;
  undefined1 uStack_1e9;
  undefined7 uStack_1e8;
  undefined7 local_1e0;
  undefined1 uStack_1d9;
  undefined7 uStack_1d8;
  string local_1d0;
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
  undefined1 *puStack_f0;
  undefined4 local_e8;
  byte local_e0;
  undefined7 local_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  void *local_d0;
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
  
  lVar16 = *param_1;
  local_2b0 = 0;
  local_2a8 = 0;
  local_2a0 = (void *)0x0;
  sVar13 = strlen(param_2);
  plVar1 = DAT_043f1798;
  if (0xffffffffffffffef < sVar13) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar5 = tpidr_el0;
  if (sVar13 < 0x17) {
    local_2b0 = CONCAT71(local_2b0._1_7_,(char)((int)sVar13 << 1));
    pvVar30 = (void *)((ulong)&local_2b0 | 1);
    if (sVar13 != 0) goto LAB_02117c54;
  }
  else {
    uVar17 = sVar13 + 0x10 & 0xfffffffffffffff0;
    plVar14 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar14 = plVar1;
    }
    pvVar30 = (void *)(**(code **)(*plVar14 + 0x10))(plVar14,uVar17,8);
    local_2b0 = uVar17 | 1;
    local_2a8 = sVar13;
    local_2a0 = pvVar30;
LAB_02117c54:
    memcpy(pvVar30,param_2,sVar13);
  }
  *(undefined1 *)((long)pvVar30 + sVar13) = 0;
  plVar1 = DAT_043f1798;
  plVar14 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar14 = plVar1;
  }
  plVar14 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x148,8);
  plVar14[4] = 0;
  plVar14[2] = 0;
  plVar14[3] = 0;
  plVar29 = plVar14 + 1;
  *plVar29 = 0;
  *(undefined4 *)(plVar14 + 5) = 0x3f800000;
  plVar14[6] = (long)FUN_02119600;
  plVar14[7] = (long)FUN_021196b0;
  plVar14[10] = 0;
  *(undefined1 *)(plVar14 + 0xb) = 0;
  *plVar14 = (long)&PTR_FUN_0425b498;
  plVar14[8] = 0;
  plVar14[9] = 0;
  plVar14[0xc] = (long)param_3;
  lVar22 = param_4[1];
  plVar14[0xd] = *param_4;
  plVar14[0xe] = lVar22;
  plVar14[0xf] = (long)param_5;
  lVar22 = param_6[1];
  plVar14[0x10] = *param_6;
  plVar14[0x11] = lVar22;
  plVar14[0x12] = (long)param_7;
  lVar22 = param_8[1];
  plVar14[0x13] = *param_8;
  plVar14[0x14] = lVar22;
  plVar14[0x15] = (long)param_9;
  lVar22 = param_10[1];
  plVar14[0x16] = *param_10;
  plVar14[0x17] = lVar22;
  plVar14[0x18] = (long)param_11;
  lVar22 = *param_12;
  plVar14[0x1a] = param_12[1];
  plVar14[0x1b] = (long)param_13;
  plVar14[0x19] = lVar22;
  lVar22 = *param_14;
  lVar25 = param_14[1];
  plVar14[0x28] = 0;
  plVar14[0x1e] = (long)&DAT_0392da3c;
  plVar14[0x1f] = 0;
  plVar14[0x20] = 0;
  plVar14[0x21] = (long)FUN_02119840;
  plVar14[0x26] = 0;
  plVar14[0x22] = (long)&LAB_02119b20;
  plVar14[0x23] = (long)&LAB_02119e00;
  *(undefined1 *)(plVar14 + 0x27) = 0;
  plVar14[0x1c] = lVar22;
  plVar14[0x1d] = lVar25;
  plVar14[0x24] = (long)&LAB_02119e10;
  plVar14[0x25] = 0;
  sVar13 = strlen(param_3);
  plVar1 = DAT_043f1798;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar13) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar13 < 0x17) {
    local_80 = SUB41((int)sVar13 << 1,0);
    pvVar30 = (void *)((ulong)&local_80 | 1);
    if (sVar13 != 0) goto LAB_02117de4;
  }
  else {
    uVar17 = sVar13 + 0x10 & 0xfffffffffffffff0;
    plVar20 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar20 = plVar1;
    }
    pvVar30 = (void *)(**(code **)(*plVar20 + 0x10))(plVar20,uVar17,8);
    local_80 = (string)((byte)uVar17 | 1);
    uStack_7f = (undefined7)(uVar17 >> 8);
    local_78 = (undefined1)sVar13;
    uStack_77 = (undefined7)(sVar13 >> 8);
    local_70 = pvVar30;
LAB_02117de4:
    memcpy(pvVar30,param_3,sVar13);
  }
  local_1c0 = local_70;
  uStack_1c7 = uStack_77;
  uStack_1c8 = local_78;
  local_1cf = uStack_7f;
  local_1d0 = local_80;
  *(undefined1 *)((long)pvVar30 + sVar13) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_1e0 = 0;
  uStack_1d9 = 0;
  uStack_1d8 = 0;
  local_1b8 = &LAB_02119e14;
  puStack_1b0 = &LAB_02119e5c;
  local_1a8 = 0xffffffff;
  sVar13 = strlen(param_5);
  plVar1 = DAT_043f1798;
  local_208 = 0;
  uStack_207 = 0;
  local_200 = 0;
  uStack_1ff = 0;
  local_1f8 = (void *)0x0;
  if (0xffffffffffffffef < sVar13) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar13 < 0x17) {
    local_208 = (byte)((int)sVar13 << 1);
    pvVar30 = (void *)((ulong)&local_208 | 1);
    if (sVar13 != 0) goto LAB_02117e84;
  }
  else {
    uVar17 = sVar13 + 0x10 & 0xfffffffffffffff0;
    plVar20 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar20 = plVar1;
    }
    pvVar30 = (void *)(**(code **)(*plVar20 + 0x10))(plVar20,uVar17,8);
    local_208 = (byte)uVar17 | 1;
    uStack_207 = (undefined7)(uVar17 >> 8);
    local_200 = (undefined1)sVar13;
    uStack_1ff = (undefined7)(sVar13 >> 8);
    local_1f8 = pvVar30;
LAB_02117e84:
    memcpy(pvVar30,param_5,sVar13);
  }
  local_190 = local_1f8;
  uStack_197 = uStack_1ff;
  uStack_198 = local_200;
  local_19f = uStack_207;
  local_1a0 = local_208;
  *(undefined1 *)((long)pvVar30 + sVar13) = 0;
  local_208 = 0;
  uStack_207 = 0;
  local_200 = 0;
  uStack_1ff = 0;
  local_1f8 = (void *)0x0;
  local_1f0 = 0;
  uStack_1e9 = 0;
  uStack_1e8 = 0;
  local_178 = 0xffffffff;
  local_188 = &LAB_02119ea4;
  puStack_180 = &LAB_02119eec;
  sVar13 = strlen(param_7);
  plVar1 = DAT_043f1798;
  local_230 = 0;
  uStack_22f = 0;
  local_228 = 0;
  uStack_227 = 0;
  local_220 = (void *)0x0;
  if (0xffffffffffffffef < sVar13) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar13 < 0x17) {
    local_230 = (byte)((int)sVar13 << 1);
    pvVar32 = (void *)((ulong)&local_230 | 1);
    if (sVar13 != 0) goto LAB_02117f1c;
  }
  else {
    uVar17 = sVar13 + 0x10 & 0xfffffffffffffff0;
    plVar20 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar20 = plVar1;
    }
    pvVar32 = (void *)(**(code **)(*plVar20 + 0x10))(plVar20,uVar17,8);
    local_230 = (byte)uVar17 | 1;
    uStack_22f = (undefined7)(uVar17 >> 8);
    local_228 = (undefined1)sVar13;
    uStack_227 = (undefined7)(sVar13 >> 8);
    local_220 = pvVar32;
LAB_02117f1c:
    memcpy(pvVar32,param_7,sVar13);
  }
  local_160 = local_220;
  uStack_167 = uStack_227;
  uStack_168 = local_228;
  local_16f = uStack_22f;
  local_170 = local_230;
  *(undefined1 *)((long)pvVar32 + sVar13) = 0;
  local_230 = 0;
  uStack_22f = 0;
  local_228 = 0;
  uStack_227 = 0;
  local_220 = (void *)0x0;
  local_218 = 0;
  uStack_211 = 0;
  uStack_210 = 0;
  local_148 = 0xffffffff;
  local_158 = &LAB_02119f34;
  puStack_150 = &LAB_02119f7c;
  sVar13 = strlen(param_9);
  plVar1 = DAT_043f1798;
  local_258 = 0;
  uStack_257 = 0;
  local_250 = 0;
  uStack_24f = 0;
  local_248 = (void *)0x0;
  if (0xffffffffffffffef < sVar13) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar13 < 0x17) {
    local_258 = (byte)((int)sVar13 << 1);
    pvVar32 = (void *)((ulong)&local_258 | 1);
    if (sVar13 != 0) goto LAB_02117fb4;
  }
  else {
    uVar17 = sVar13 + 0x10 & 0xfffffffffffffff0;
    plVar20 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar20 = plVar1;
    }
    pvVar32 = (void *)(**(code **)(*plVar20 + 0x10))(plVar20,uVar17,8);
    local_258 = (byte)uVar17 | 1;
    uStack_257 = (undefined7)(uVar17 >> 8);
    local_250 = (undefined1)sVar13;
    uStack_24f = (undefined7)(sVar13 >> 8);
    local_248 = pvVar32;
LAB_02117fb4:
    memcpy(pvVar32,param_9,sVar13);
  }
  local_130 = local_248;
  uStack_137 = uStack_24f;
  uStack_138 = local_250;
  local_13f = uStack_257;
  local_140 = local_258;
  *(undefined1 *)((long)pvVar32 + sVar13) = 0;
  local_250 = 0;
  uStack_24f = 0;
  local_248 = (void *)0x0;
  local_258 = 0;
  uStack_257 = 0;
  local_240 = 0;
  uStack_239 = 0;
  uStack_238 = 0;
  local_128 = &LAB_02119fc4;
  puStack_120 = &LAB_0211a00c;
  local_118 = 0xffffffff;
  sVar13 = strlen(param_11);
  plVar1 = DAT_043f1798;
  local_280 = 0;
  uStack_27f = 0;
  local_278 = 0;
  uStack_277 = 0;
  local_270 = (void *)0x0;
  if (0xffffffffffffffef < sVar13) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar13 < 0x17) {
    local_280 = (byte)((int)sVar13 << 1);
    pvVar32 = (void *)((ulong)&local_280 | 1);
    if (sVar13 != 0) goto LAB_02118058;
  }
  else {
    uVar17 = sVar13 + 0x10 & 0xfffffffffffffff0;
    plVar20 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar20 = plVar1;
    }
    pvVar32 = (void *)(**(code **)(*plVar20 + 0x10))(plVar20,uVar17,8);
    local_280 = (byte)uVar17 | 1;
    uStack_27f = (undefined7)(uVar17 >> 8);
    local_278 = (undefined1)sVar13;
    uStack_277 = (undefined7)(sVar13 >> 8);
    local_270 = pvVar32;
LAB_02118058:
    memcpy(pvVar32,param_11,sVar13);
  }
  local_100 = local_270;
  uStack_107 = uStack_277;
  uStack_108 = local_278;
  local_10f = uStack_27f;
  local_110 = local_280;
  *(undefined1 *)((long)pvVar32 + sVar13) = 0;
  local_280 = 0;
  uStack_27f = 0;
  local_278 = 0;
  uStack_277 = 0;
  local_270 = (void *)0x0;
  local_268 = 0;
  uStack_261 = 0;
  uStack_260 = 0;
  local_e8 = 0xffffffff;
  local_f8 = &LAB_0211a054;
  puStack_f0 = &LAB_0211a09c;
  sVar13 = strlen(param_13);
  plVar1 = DAT_043f1798;
  local_298 = 0;
  uStack_297 = 0;
  local_290 = 0;
  uStack_28f = 0;
  local_288 = (void *)0x0;
  if (0xffffffffffffffef < sVar13) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar13 < 0x17) {
    local_298 = (byte)((int)sVar13 << 1);
    pvVar32 = (void *)((ulong)&local_298 | 1);
    if (sVar13 != 0) goto LAB_021180f4;
  }
  else {
    uVar17 = sVar13 + 0x10 & 0xfffffffffffffff0;
    plVar20 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar20 = plVar1;
    }
    pvVar32 = (void *)(**(code **)(*plVar20 + 0x10))(plVar20,uVar17,8);
    local_298 = (byte)uVar17 | 1;
    uStack_297 = (undefined7)(uVar17 >> 8);
    local_290 = (undefined1)sVar13;
    uStack_28f = (undefined7)(sVar13 >> 8);
    local_288 = pvVar32;
LAB_021180f4:
    memcpy(pvVar32,param_13,sVar13);
  }
  *(undefined1 *)((long)pvVar32 + sVar13) = 0;
  local_e0 = local_298;
  local_df = uStack_297;
  local_c0 = &LAB_0211a12c;
  local_c8 = &LAB_0211a0e4;
  psVar28 = &local_1d0;
  local_d0 = local_288;
  uStack_d8 = local_290;
  uStack_d7 = uStack_28f;
  plVar1 = plVar14 + 3;
  local_b0 = 8;
  local_b8 = 0xffffffff;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_98 = &LAB_0211a174;
  local_90 = &LAB_0211a1bc;
  local_88 = 0xffffffff;
  local_a0 = 0;
  do {
    uVar17 = *(ulong *)(psVar28 + 8);
    psVar3 = *(string **)(psVar28 + 0x10);
    if (((byte)*psVar28 & 1) == 0) {
      psVar3 = psVar28 + 1;
      uVar17 = (ulong)((byte)*psVar28 >> 1);
    }
    pvVar32 = (void *)FUN_008e8ed4(&local_80,psVar3,uVar17);
    pvVar33 = (void *)plVar14[2];
    if (pvVar33 != (void *)0x0) {
      uVar17 = (long)pvVar33 - ((ulong)pvVar33 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        pvVar30 = (void *)((long)pvVar33 - 1U & (ulong)pvVar32);
      }
      else {
        pvVar30 = pvVar32;
        if (pvVar33 <= pvVar32) {
          uVar23 = 0;
          if (pvVar33 != (void *)0x0) {
            uVar23 = (ulong)pvVar32 / (ulong)pvVar33;
          }
          pvVar30 = (void *)((long)pvVar32 - uVar23 * (long)pvVar33);
        }
      }
      plVar20 = *(long **)(*plVar29 + (long)pvVar30 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        psVar3 = psVar28 + 1;
        sVar13 = (ulong)((byte)*psVar28 >> 1);
        if (((byte)*psVar28 & 1) != 0) {
          psVar3 = *(string **)(psVar28 + 0x10);
          sVar13 = *(size_t *)(psVar28 + 8);
        }
        if (uVar17 < 2) {
          if (sVar13 == 0) {
            do {
              if ((void *)plVar20[1] != pvVar32 &&
                  (void *)((ulong)plVar20[1] & (long)pvVar33 - 1U) != pvVar30) break;
              uVar17 = (ulong)(*(byte *)(plVar20 + 2) >> 1);
              if ((*(byte *)(plVar20 + 2) & 1) != 0) {
                uVar17 = plVar20[3];
              }
              if (uVar17 == 0) goto LAB_02118424;
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
          else {
            do {
              if ((void *)plVar20[1] != pvVar32 &&
                  (void *)((ulong)plVar20[1] & (long)pvVar33 - 1U) != pvVar30) break;
              bVar4 = *(byte *)(plVar20 + 2);
              uVar17 = (ulong)(bVar4 >> 1);
              sVar2 = uVar17;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar20[3];
              }
              if (sVar2 == sVar13) {
                if ((bVar4 & 1) == 0) {
                  psVar21 = (string *)((long)plVar20 + 0x11);
                  psVar24 = psVar3;
                  while (*psVar21 == *psVar24) {
                    uVar17 = uVar17 - 1;
                    psVar21 = psVar21 + 1;
                    psVar24 = psVar24 + 1;
                    if (uVar17 == 0) goto LAB_02118424;
                  }
                }
                else {
                  iVar6 = memcmp((void *)plVar20[4],psVar3,sVar13);
                  if (iVar6 == 0) goto LAB_02118424;
                }
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
        else if (sVar13 == 0) {
          do {
            pvVar18 = (void *)plVar20[1];
            if (pvVar18 != pvVar32) {
              if (pvVar33 <= pvVar18) {
                uVar17 = 0;
                if (pvVar33 != (void *)0x0) {
                  uVar17 = (ulong)pvVar18 / (ulong)pvVar33;
                }
                pvVar18 = (void *)((long)pvVar18 - uVar17 * (long)pvVar33);
              }
              if (pvVar18 != pvVar30) break;
            }
            uVar17 = (ulong)(*(byte *)(plVar20 + 2) >> 1);
            if ((*(byte *)(plVar20 + 2) & 1) != 0) {
              uVar17 = plVar20[3];
            }
            if (uVar17 == 0) goto LAB_02118424;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            pvVar18 = (void *)plVar20[1];
            if (pvVar18 != pvVar32) {
              if (pvVar33 <= pvVar18) {
                uVar17 = 0;
                if (pvVar33 != (void *)0x0) {
                  uVar17 = (ulong)pvVar18 / (ulong)pvVar33;
                }
                pvVar18 = (void *)((long)pvVar18 - uVar17 * (long)pvVar33);
              }
              if (pvVar18 != pvVar30) break;
            }
            bVar4 = *(byte *)(plVar20 + 2);
            uVar17 = (ulong)(bVar4 >> 1);
            sVar2 = uVar17;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar20[3];
            }
            if (sVar2 == sVar13) {
              if ((bVar4 & 1) == 0) {
                psVar21 = (string *)((long)plVar20 + 0x11);
                psVar24 = psVar3;
                while (*psVar21 == *psVar24) {
                  uVar17 = uVar17 - 1;
                  psVar21 = psVar21 + 1;
                  psVar24 = psVar24 + 1;
                  if (uVar17 == 0) goto LAB_02118424;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar20[4],psVar3,sVar13);
                if (iVar6 == 0) goto LAB_02118424;
              }
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    plVar20 = DAT_043f1798;
    plVar19 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar19 = plVar20;
    }
    plVar20 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x40,8);
    std::string::string((string *)(plVar20 + 2),psVar28);
    lVar22 = *(long *)(psVar28 + 0x18);
    lVar25 = *(long *)(psVar28 + 0x28);
    plVar20[6] = *(long *)(psVar28 + 0x20);
    plVar20[7] = lVar25;
    plVar20[5] = lVar22;
    *plVar20 = 0;
    plVar20[1] = (long)pvVar32;
    if ((pvVar33 == (void *)0x0) ||
       (*(float *)(plVar14 + 5) * (float)pvVar33 < (float)(plVar14[4] + 1))) {
      uVar17 = (ulong)(pvVar33 < (void *)0x3 || ((ulong)pvVar33 & (long)pvVar33 - 1U) != 0) |
               (long)pvVar33 << 1;
      uVar23 = (ulong)((float)(plVar14[4] + 1) / *(float *)(plVar14 + 5));
      if (uVar23 <= uVar17) {
        uVar23 = uVar17;
      }
      FUN_008e9ae4(plVar29,uVar23);
      pvVar33 = (void *)plVar14[2];
      if (((ulong)pvVar33 & (long)pvVar33 - 1U) == 0) {
        pvVar30 = (void *)((long)pvVar33 - 1U & (ulong)pvVar32);
      }
      else if (pvVar32 < pvVar33) {
        pvVar30 = pvVar32;
      }
      else {
        uVar17 = 0;
        if (pvVar33 != (void *)0x0) {
          uVar17 = (ulong)pvVar32 / (ulong)pvVar33;
        }
        pvVar30 = (void *)((long)pvVar32 - uVar17 * (long)pvVar33);
      }
    }
    lVar22 = *plVar29;
    plVar19 = *(long **)(lVar22 + (long)pvVar30 * 8);
    if (plVar19 == (long *)0x0) {
      *plVar20 = *plVar1;
      *plVar1 = (long)plVar20;
      *(long **)(lVar22 + (long)pvVar30 * 8) = plVar1;
      if (*plVar20 != 0) {
        pvVar32 = *(void **)(*plVar20 + 8);
        if (((ulong)pvVar33 & (long)pvVar33 - 1U) == 0) {
          pvVar32 = (void *)((ulong)pvVar32 & (long)pvVar33 - 1U);
        }
        else if (pvVar33 <= pvVar32) {
          uVar17 = 0;
          if (pvVar33 != (void *)0x0) {
            uVar17 = (ulong)pvVar32 / (ulong)pvVar33;
          }
          pvVar32 = (void *)((long)pvVar32 - uVar17 * (long)pvVar33);
        }
        plVar19 = (long *)(*plVar29 + (long)pvVar32 * 8);
        goto LAB_02118414;
      }
    }
    else {
      *plVar20 = *plVar19;
LAB_02118414:
      *plVar19 = (long)plVar20;
    }
    plVar14[4] = plVar14[4] + 1;
LAB_02118424:
    psVar28 = psVar28 + 0x30;
  } while (psVar28 != &local_80);
  lVar25 = FUN_008cca50();
  lVar22 = 0;
  do {
    lVar15 = FUN_008e8c90(plVar29,lVar25 + lVar22);
    if (lVar15 != 0) {
      FUN_008f2aec(&local_80,plVar29,lVar15);
      plVar1 = DAT_043f1798;
      lVar15 = CONCAT71(uStack_7f,local_80);
      local_80 = (string)0x0;
      uStack_7f = 0;
      if (lVar15 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar15 + 0x10) & 1) != 0)) &&
           (lVar31 = *(long *)(lVar15 + 0x20), lVar31 != 0)) {
          plVar20 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar20 = plVar1;
          }
          uVar17 = (**(code **)(*plVar20 + 0xc0))(plVar20);
          if ((uVar17 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar20,lVar31,0,8);
              goto LAB_02118970;
            }
          }
          (**(code **)(*plVar20 + 0x18))(plVar20,lVar31,0,8);
        }
LAB_02118970:
        plVar1 = DAT_043f1798;
        plVar20 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar20 = plVar1;
        }
        uVar17 = (**(code **)(*plVar20 + 0xc0))(plVar20);
        if ((uVar17 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar20,lVar15,0,8);
            goto LAB_02118928;
          }
        }
        (**(code **)(*plVar20 + 0x18))(plVar20,lVar15,0,8);
      }
    }
LAB_02118928:
    lVar22 = lVar22 + 0x18;
  } while (lVar22 != 0x300);
  pcVar26 = (char *)plVar14[0xc];
  sVar13 = strlen(pcVar26);
  iVar6 = FUN_008f2c60(sVar13,pcVar26);
  pcVar26 = (char *)plVar14[0xf];
  sVar13 = strlen(pcVar26);
  iVar7 = FUN_008f2c60(sVar13,pcVar26);
  pcVar26 = (char *)plVar14[0x12];
  sVar13 = strlen(pcVar26);
  iVar8 = FUN_008f2c60(sVar13,pcVar26);
  pcVar26 = (char *)plVar14[0x15];
  sVar13 = strlen(pcVar26);
  iVar9 = FUN_008f2c60(sVar13,pcVar26);
  pcVar26 = (char *)plVar14[0x18];
  sVar13 = strlen(pcVar26);
  iVar10 = FUN_008f2c60(sVar13,pcVar26);
  pcVar26 = (char *)plVar14[0x1b];
  sVar13 = strlen(pcVar26);
  iVar11 = FUN_008f2c60(sVar13,pcVar26);
  pcVar26 = (char *)plVar14[0x1e];
  sVar13 = strlen(pcVar26);
  iVar12 = FUN_008f2c60(sVar13,pcVar26);
  lVar22 = local_a0;
  *(bool *)(plVar14 + 0xb) =
       (((((iVar7 != 0 || iVar6 != 0) || iVar8 != 0) || iVar9 != 0) || iVar10 != 0) || iVar11 != 0)
       || iVar12 != 0;
  plVar1 = DAT_043f1798;
  pvVar30 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar29 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar29 = plVar1;
    }
    uVar17 = (**(code **)(*plVar29 + 0xc0))(plVar29);
    if ((uVar17 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar29,lVar22,0,8);
        plVar1 = DAT_043f1798;
        pvVar30 = local_d0;
        goto joined_r0x02118b74;
      }
    }
    (**(code **)(*plVar29 + 0x18))(plVar29,lVar22,0,8);
    plVar1 = DAT_043f1798;
    pvVar30 = local_d0;
  }
joined_r0x02118b74:
  pvVar32 = local_100;
  local_d0 = pvVar30;
  if (((local_e0 & 1) != 0) && (pvVar30 != (void *)0x0)) {
    plVar29 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar29 = plVar1;
    }
    uVar17 = (**(code **)(*plVar29 + 0xc0))(plVar29);
    if ((uVar17 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar29,pvVar30,0,8);
        plVar1 = DAT_043f1798;
        pvVar32 = local_100;
        goto joined_r0x021191e8;
      }
    }
    (**(code **)(*plVar29 + 0x18))(plVar29,pvVar30,0,8);
    plVar1 = DAT_043f1798;
    pvVar32 = local_100;
  }
joined_r0x021191e8:
  pvVar30 = local_130;
  local_100 = pvVar32;
  if (((local_110 & 1) != 0) && (pvVar32 != (void *)0x0)) {
    plVar29 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar29 = plVar1;
    }
    uVar17 = (**(code **)(*plVar29 + 0xc0))(plVar29);
    if ((uVar17 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar29,pvVar32,0,8);
        plVar1 = DAT_043f1798;
        pvVar30 = local_130;
        goto joined_r0x02118cdc;
      }
    }
    (**(code **)(*plVar29 + 0x18))(plVar29,pvVar32,0,8);
    plVar1 = DAT_043f1798;
    pvVar30 = local_130;
  }
joined_r0x02118cdc:
  pvVar32 = local_160;
  local_130 = pvVar30;
  if (((local_140 & 1) != 0) && (pvVar30 != (void *)0x0)) {
    plVar29 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar29 = plVar1;
    }
    uVar17 = (**(code **)(*plVar29 + 0xc0))(plVar29);
    if ((uVar17 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar29,pvVar30,0,8);
        plVar1 = DAT_043f1798;
        pvVar32 = local_160;
        goto joined_r0x02119228;
      }
    }
    (**(code **)(*plVar29 + 0x18))(plVar29,pvVar30,0,8);
    plVar1 = DAT_043f1798;
    pvVar32 = local_160;
  }
joined_r0x02119228:
  pvVar30 = local_190;
  local_160 = pvVar32;
  if (((local_170 & 1) != 0) && (pvVar32 != (void *)0x0)) {
    plVar29 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar29 = plVar1;
    }
    uVar17 = (**(code **)(*plVar29 + 0xc0))(plVar29);
    if ((uVar17 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar29,pvVar32,0,8);
        plVar1 = DAT_043f1798;
        pvVar30 = local_190;
        goto joined_r0x02118e44;
      }
    }
    (**(code **)(*plVar29 + 0x18))(plVar29,pvVar32,0,8);
    plVar1 = DAT_043f1798;
    pvVar30 = local_190;
  }
joined_r0x02118e44:
  pvVar32 = local_1c0;
  local_190 = pvVar30;
  if (((local_1a0 & 1) != 0) && (pvVar30 != (void *)0x0)) {
    plVar29 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar29 = plVar1;
    }
    uVar17 = (**(code **)(*plVar29 + 0xc0))(plVar29);
    if ((uVar17 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar29,pvVar30,0,8);
        plVar1 = DAT_043f1798;
        pvVar32 = local_1c0;
        goto joined_r0x02119268;
      }
    }
    (**(code **)(*plVar29 + 0x18))(plVar29,pvVar30,0,8);
    plVar1 = DAT_043f1798;
    pvVar32 = local_1c0;
  }
joined_r0x02119268:
  DAT_043f1798 = plVar1;
  local_1c0 = pvVar32;
  if ((((byte)local_1d0 & 1) != 0) && (pvVar32 != (void *)0x0)) {
    plVar29 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar29 = plVar1;
    }
    uVar17 = (**(code **)(*plVar29 + 0xc0))(plVar29);
    if ((uVar17 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar29,pvVar32,0,8);
        goto LAB_02118fa8;
      }
    }
    (**(code **)(*plVar29 + 0x18))(plVar29,pvVar32,0,8);
  }
LAB_02118fa8:
  uVar27 = *(undefined8 *)(lVar16 + 0x20);
  FUN_0014fef0(uVar27);
  (**(code **)*plVar14)(plVar14,uVar27);
  (**(code **)(*plVar14 + 0x10))(plVar14);
  pvVar30 = local_2a0;
  if ((local_2b0 & 1) == 0) {
    pvVar30 = (void *)((long)&local_2b0 + 1);
  }
  FUN_001522a0(uVar27,pvVar30);
  pvVar30 = local_2a0;
  plVar1 = DAT_043f1798;
  if (((local_2b0 & 1) != 0) && (local_2a0 != (void *)0x0)) {
    plVar14 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar14 = plVar1;
    }
    uVar17 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar17 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar14,pvVar30,0,8);
        return;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,pvVar30,0,8);
  }
  return;
}


