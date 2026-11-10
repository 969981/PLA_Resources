/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dcd2a4; name: FUN_00dcd2a4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00dcd2a4(long *param_1,char *param_2,char *param_3,long *param_4,char *param_5,
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
  int iVar13;
  size_t sVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  void *pvVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  string *psVar24;
  long lVar25;
  string *psVar26;
  char *pcVar27;
  undefined8 uVar28;
  string *psVar29;
  long *plVar30;
  void *pvVar31;
  long lVar32;
  void *pvVar33;
  void *pvVar34;
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
  
  lVar17 = *param_1;
  local_2e0 = 0;
  local_2d8 = 0;
  local_2d0 = (void *)0x0;
  sVar14 = strlen(param_2);
  plVar1 = DAT_043f1798;
  if (0xffffffffffffffef < sVar14) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar5 = tpidr_el0;
  if (sVar14 < 0x17) {
    local_2e0 = CONCAT71(local_2e0._1_7_,(char)((int)sVar14 << 1));
    pvVar31 = (void *)((ulong)&local_2e0 | 1);
    if (sVar14 != 0) goto LAB_00dcd338;
  }
  else {
    uVar18 = sVar14 + 0x10 & 0xfffffffffffffff0;
    plVar15 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar15 = plVar1;
    }
    pvVar31 = (void *)(**(code **)(*plVar15 + 0x10))(plVar15,uVar18,8);
    local_2e0 = uVar18 | 1;
    local_2d8 = sVar14;
    local_2d0 = pvVar31;
LAB_00dcd338:
    memcpy(pvVar31,param_2,sVar14);
  }
  *(undefined1 *)((long)pvVar31 + sVar14) = 0;
  plVar1 = DAT_043f1798;
  plVar15 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar15 = plVar1;
  }
  plVar15 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0x150,8);
  plVar15[4] = 0;
  plVar15[2] = 0;
  plVar15[3] = 0;
  plVar30 = plVar15 + 1;
  *plVar30 = 0;
  *(undefined4 *)(plVar15 + 5) = 0x3f800000;
  plVar15[6] = (long)FUN_00dcee60;
  plVar15[7] = (long)FUN_00dcef10;
  plVar15[10] = 0;
  *(undefined1 *)(plVar15 + 0xb) = 0;
  *plVar15 = (long)&PTR_FUN_041ee580;
  plVar15[8] = 0;
  plVar15[9] = 0;
  plVar15[0xc] = (long)param_3;
  lVar22 = param_4[1];
  plVar15[0xd] = *param_4;
  plVar15[0xe] = lVar22;
  plVar15[0xf] = (long)param_5;
  lVar22 = param_6[1];
  plVar15[0x10] = *param_6;
  plVar15[0x11] = lVar22;
  plVar15[0x12] = (long)param_7;
  lVar22 = param_8[1];
  plVar15[0x13] = *param_8;
  plVar15[0x14] = lVar22;
  plVar15[0x15] = (long)param_9;
  lVar22 = param_10[1];
  plVar15[0x16] = *param_10;
  plVar15[0x17] = lVar22;
  plVar15[0x18] = (long)param_11;
  lVar22 = *param_12;
  plVar15[0x1a] = param_12[1];
  plVar15[0x1b] = (long)param_13;
  plVar15[0x19] = lVar22;
  lVar22 = *param_14;
  lVar25 = param_14[1];
  plVar15[0x29] = 0;
  plVar15[0x1e] = (long)&DAT_038ca815;
  plVar15[0x1f] = (long)&DAT_0392da3c;
  plVar15[0x20] = 0;
  plVar15[0x21] = 0;
  *(undefined1 *)(plVar15 + 0x28) = 0;
  plVar15[0x1c] = lVar22;
  plVar15[0x1d] = lVar25;
  plVar15[0x22] = (long)FUN_00dcf0a0;
  plVar15[0x23] = (long)&LAB_00dcf380;
  plVar15[0x24] = (long)&LAB_00dcf660;
  plVar15[0x25] = (long)&LAB_00dcf670;
  plVar15[0x26] = 0;
  plVar15[0x27] = 0;
  sVar14 = strlen(param_3);
  plVar1 = DAT_043f1798;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar14) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar14 < 0x17) {
    local_80 = SUB41((int)sVar14 << 1,0);
    pvVar31 = (void *)((ulong)&local_80 | 1);
    if (sVar14 != 0) goto LAB_00dcd4d0;
  }
  else {
    uVar18 = sVar14 + 0x10 & 0xfffffffffffffff0;
    plVar21 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar21 = plVar1;
    }
    pvVar31 = (void *)(**(code **)(*plVar21 + 0x10))(plVar21,uVar18,8);
    local_80 = (string)((byte)uVar18 | 1);
    uStack_7f = (undefined7)(uVar18 >> 8);
    local_78 = (undefined1)sVar14;
    uStack_77 = (undefined7)(sVar14 >> 8);
    local_70 = pvVar31;
LAB_00dcd4d0:
    memcpy(pvVar31,param_3,sVar14);
  }
  local_1f0 = local_70;
  uStack_1f7 = uStack_77;
  uStack_1f8 = local_78;
  local_1ff = uStack_7f;
  local_200 = local_80;
  *(undefined1 *)((long)pvVar31 + sVar14) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_210 = 0;
  uStack_209 = 0;
  uStack_208 = 0;
  local_1e8 = &LAB_00dcf674;
  puStack_1e0 = &LAB_00dcf6bc;
  local_1d8 = 0xffffffff;
  sVar14 = strlen(param_5);
  plVar1 = DAT_043f1798;
  local_238 = 0;
  uStack_237 = 0;
  local_230 = 0;
  uStack_22f = 0;
  local_228 = (void *)0x0;
  if (0xffffffffffffffef < sVar14) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar14 < 0x17) {
    local_238 = (byte)((int)sVar14 << 1);
    pvVar31 = (void *)((ulong)&local_238 | 1);
    if (sVar14 != 0) goto LAB_00dcd570;
  }
  else {
    uVar18 = sVar14 + 0x10 & 0xfffffffffffffff0;
    plVar21 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar21 = plVar1;
    }
    pvVar31 = (void *)(**(code **)(*plVar21 + 0x10))(plVar21,uVar18,8);
    local_238 = (byte)uVar18 | 1;
    uStack_237 = (undefined7)(uVar18 >> 8);
    local_230 = (undefined1)sVar14;
    uStack_22f = (undefined7)(sVar14 >> 8);
    local_228 = pvVar31;
LAB_00dcd570:
    memcpy(pvVar31,param_5,sVar14);
  }
  local_1c0 = local_228;
  uStack_1c7 = uStack_22f;
  uStack_1c8 = local_230;
  local_1cf = uStack_237;
  local_1d0 = local_238;
  *(undefined1 *)((long)pvVar31 + sVar14) = 0;
  local_238 = 0;
  uStack_237 = 0;
  local_230 = 0;
  uStack_22f = 0;
  local_228 = (void *)0x0;
  local_220 = 0;
  uStack_219 = 0;
  uStack_218 = 0;
  local_1a8 = 0xffffffff;
  local_1b8 = &LAB_00dcf704;
  puStack_1b0 = &LAB_00dcf74c;
  sVar14 = strlen(param_7);
  plVar1 = DAT_043f1798;
  local_260 = 0;
  uStack_25f = 0;
  local_258 = 0;
  uStack_257 = 0;
  local_250 = (void *)0x0;
  if (0xffffffffffffffef < sVar14) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar14 < 0x17) {
    local_260 = (byte)((int)sVar14 << 1);
    pvVar33 = (void *)((ulong)&local_260 | 1);
    if (sVar14 != 0) goto LAB_00dcd608;
  }
  else {
    uVar18 = sVar14 + 0x10 & 0xfffffffffffffff0;
    plVar21 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar21 = plVar1;
    }
    pvVar33 = (void *)(**(code **)(*plVar21 + 0x10))(plVar21,uVar18,8);
    local_260 = (byte)uVar18 | 1;
    uStack_25f = (undefined7)(uVar18 >> 8);
    local_258 = (undefined1)sVar14;
    uStack_257 = (undefined7)(sVar14 >> 8);
    local_250 = pvVar33;
LAB_00dcd608:
    memcpy(pvVar33,param_7,sVar14);
  }
  local_190 = local_250;
  uStack_197 = uStack_257;
  uStack_198 = local_258;
  local_19f = uStack_25f;
  local_1a0 = local_260;
  *(undefined1 *)((long)pvVar33 + sVar14) = 0;
  local_260 = 0;
  uStack_25f = 0;
  local_258 = 0;
  uStack_257 = 0;
  local_250 = (void *)0x0;
  local_248 = 0;
  uStack_241 = 0;
  uStack_240 = 0;
  local_178 = 0xffffffff;
  local_188 = &LAB_00dcf794;
  puStack_180 = &LAB_00dcf7dc;
  sVar14 = strlen(param_9);
  plVar1 = DAT_043f1798;
  local_288 = 0;
  uStack_287 = 0;
  local_280 = 0;
  uStack_27f = 0;
  local_278 = (void *)0x0;
  if (0xffffffffffffffef < sVar14) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar14 < 0x17) {
    local_288 = (byte)((int)sVar14 << 1);
    pvVar33 = (void *)((ulong)&local_288 | 1);
    if (sVar14 != 0) goto LAB_00dcd6a0;
  }
  else {
    uVar18 = sVar14 + 0x10 & 0xfffffffffffffff0;
    plVar21 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar21 = plVar1;
    }
    pvVar33 = (void *)(**(code **)(*plVar21 + 0x10))(plVar21,uVar18,8);
    local_288 = (byte)uVar18 | 1;
    uStack_287 = (undefined7)(uVar18 >> 8);
    local_280 = (undefined1)sVar14;
    uStack_27f = (undefined7)(sVar14 >> 8);
    local_278 = pvVar33;
LAB_00dcd6a0:
    memcpy(pvVar33,param_9,sVar14);
  }
  local_160 = local_278;
  uStack_167 = uStack_27f;
  uStack_168 = local_280;
  local_16f = uStack_287;
  local_170 = local_288;
  *(undefined1 *)((long)pvVar33 + sVar14) = 0;
  local_280 = 0;
  uStack_27f = 0;
  local_278 = (void *)0x0;
  local_288 = 0;
  uStack_287 = 0;
  local_270 = 0;
  uStack_269 = 0;
  uStack_268 = 0;
  local_158 = &LAB_00dcf824;
  puStack_150 = &LAB_00dcf86c;
  local_148 = 0xffffffff;
  sVar14 = strlen(param_11);
  plVar1 = DAT_043f1798;
  local_2b0 = 0;
  uStack_2af = 0;
  local_2a8 = 0;
  uStack_2a7 = 0;
  local_2a0 = (void *)0x0;
  if (0xffffffffffffffef < sVar14) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar14 < 0x17) {
    local_2b0 = (byte)((int)sVar14 << 1);
    pvVar33 = (void *)((ulong)&local_2b0 | 1);
    if (sVar14 != 0) goto LAB_00dcd744;
  }
  else {
    uVar18 = sVar14 + 0x10 & 0xfffffffffffffff0;
    plVar21 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar21 = plVar1;
    }
    pvVar33 = (void *)(**(code **)(*plVar21 + 0x10))(plVar21,uVar18,8);
    local_2b0 = (byte)uVar18 | 1;
    uStack_2af = (undefined7)(uVar18 >> 8);
    local_2a8 = (undefined1)sVar14;
    uStack_2a7 = (undefined7)(sVar14 >> 8);
    local_2a0 = pvVar33;
LAB_00dcd744:
    memcpy(pvVar33,param_11,sVar14);
  }
  local_130 = local_2a0;
  uStack_137 = uStack_2a7;
  uStack_138 = local_2a8;
  local_13f = uStack_2af;
  local_140 = local_2b0;
  *(undefined1 *)((long)pvVar33 + sVar14) = 0;
  local_2b0 = 0;
  uStack_2af = 0;
  local_2a8 = 0;
  uStack_2a7 = 0;
  local_2a0 = (void *)0x0;
  local_298 = 0;
  uStack_291 = 0;
  uStack_290 = 0;
  local_118 = 0xffffffff;
  local_128 = &LAB_00dcf8b4;
  puStack_120 = &LAB_00dcf8fc;
  sVar14 = strlen(param_13);
  plVar1 = DAT_043f1798;
  local_2c8 = 0;
  uStack_2c7 = 0;
  local_2c0 = 0;
  uStack_2bf = 0;
  local_2b8 = (void *)0x0;
  if (0xffffffffffffffef < sVar14) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar14 < 0x17) {
    local_2c8 = (byte)((int)sVar14 << 1);
    pvVar33 = (void *)((ulong)&local_2c8 | 1);
    if (sVar14 != 0) goto LAB_00dcd7e0;
  }
  else {
    uVar18 = sVar14 + 0x10 & 0xfffffffffffffff0;
    plVar21 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar21 = plVar1;
    }
    pvVar33 = (void *)(**(code **)(*plVar21 + 0x10))(plVar21,uVar18,8);
    local_2c8 = (byte)uVar18 | 1;
    uStack_2c7 = (undefined7)(uVar18 >> 8);
    local_2c0 = (undefined1)sVar14;
    uStack_2bf = (undefined7)(sVar14 >> 8);
    local_2b8 = pvVar33;
LAB_00dcd7e0:
    memcpy(pvVar33,param_13,sVar14);
  }
  *(undefined1 *)((long)pvVar33 + sVar14) = 0;
  local_110 = local_2c8;
  local_10f = uStack_2c7;
  local_f0 = &LAB_00dcf98c;
  local_f8 = &LAB_00dcf944;
  psVar29 = &local_200;
  local_100 = local_2b8;
  uStack_108 = local_2c0;
  uStack_107 = uStack_2bf;
  local_e8 = 0xffffffff;
  local_e0 = 6;
  local_df = 0x656e;
  local_dd = 0x77;
  local_dc = 0;
  local_d4 = 0;
  local_c8 = &LAB_00dcf9d4;
  local_c0 = &LAB_00dcfa1c;
  local_b0 = 8;
  local_d0 = 0;
  local_b8 = 0xffffffff;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_98 = &LAB_00dcfa64;
  plVar1 = plVar15 + 3;
  local_90 = &LAB_00dcfaac;
  local_88 = 0xffffffff;
  local_a0 = 0;
  do {
    uVar18 = *(ulong *)(psVar29 + 8);
    psVar3 = *(string **)(psVar29 + 0x10);
    if (((byte)*psVar29 & 1) == 0) {
      psVar3 = psVar29 + 1;
      uVar18 = (ulong)((byte)*psVar29 >> 1);
    }
    pvVar33 = (void *)FUN_008e8ed4(&local_80,psVar3,uVar18);
    pvVar34 = (void *)plVar15[2];
    if (pvVar34 != (void *)0x0) {
      uVar18 = (long)pvVar34 - ((ulong)pvVar34 >> 1 & 0x5555555555555555);
      uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
      uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar18 < 2) {
        pvVar31 = (void *)((long)pvVar34 - 1U & (ulong)pvVar33);
      }
      else {
        pvVar31 = pvVar33;
        if (pvVar34 <= pvVar33) {
          uVar23 = 0;
          if (pvVar34 != (void *)0x0) {
            uVar23 = (ulong)pvVar33 / (ulong)pvVar34;
          }
          pvVar31 = (void *)((long)pvVar33 - uVar23 * (long)pvVar34);
        }
      }
      plVar21 = *(long **)(*plVar30 + (long)pvVar31 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        psVar3 = psVar29 + 1;
        sVar14 = (ulong)((byte)*psVar29 >> 1);
        if (((byte)*psVar29 & 1) != 0) {
          psVar3 = *(string **)(psVar29 + 0x10);
          sVar14 = *(size_t *)(psVar29 + 8);
        }
        if (uVar18 < 2) {
          if (sVar14 == 0) {
            do {
              if ((void *)plVar21[1] != pvVar33 &&
                  (void *)((ulong)plVar21[1] & (long)pvVar34 - 1U) != pvVar31) break;
              uVar18 = (ulong)(*(byte *)(plVar21 + 2) >> 1);
              if ((*(byte *)(plVar21 + 2) & 1) != 0) {
                uVar18 = plVar21[3];
              }
              if (uVar18 == 0) goto LAB_00dcdae0;
              plVar21 = (long *)*plVar21;
            } while (plVar21 != (long *)0x0);
          }
          else {
            do {
              if ((void *)plVar21[1] != pvVar33 &&
                  (void *)((ulong)plVar21[1] & (long)pvVar34 - 1U) != pvVar31) break;
              bVar4 = *(byte *)(plVar21 + 2);
              uVar18 = (ulong)(bVar4 >> 1);
              sVar2 = uVar18;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar21[3];
              }
              if (sVar2 == sVar14) {
                if ((bVar4 & 1) == 0) {
                  psVar24 = (string *)((long)plVar21 + 0x11);
                  psVar26 = psVar3;
                  while (*psVar24 == *psVar26) {
                    uVar18 = uVar18 - 1;
                    psVar24 = psVar24 + 1;
                    psVar26 = psVar26 + 1;
                    if (uVar18 == 0) goto LAB_00dcdae0;
                  }
                }
                else {
                  iVar6 = memcmp((void *)plVar21[4],psVar3,sVar14);
                  if (iVar6 == 0) goto LAB_00dcdae0;
                }
              }
              plVar21 = (long *)*plVar21;
            } while (plVar21 != (long *)0x0);
          }
        }
        else if (sVar14 == 0) {
          do {
            pvVar19 = (void *)plVar21[1];
            if (pvVar19 != pvVar33) {
              if (pvVar34 <= pvVar19) {
                uVar18 = 0;
                if (pvVar34 != (void *)0x0) {
                  uVar18 = (ulong)pvVar19 / (ulong)pvVar34;
                }
                pvVar19 = (void *)((long)pvVar19 - uVar18 * (long)pvVar34);
              }
              if (pvVar19 != pvVar31) break;
            }
            uVar18 = (ulong)(*(byte *)(plVar21 + 2) >> 1);
            if ((*(byte *)(plVar21 + 2) & 1) != 0) {
              uVar18 = plVar21[3];
            }
            if (uVar18 == 0) goto LAB_00dcdae0;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            pvVar19 = (void *)plVar21[1];
            if (pvVar19 != pvVar33) {
              if (pvVar34 <= pvVar19) {
                uVar18 = 0;
                if (pvVar34 != (void *)0x0) {
                  uVar18 = (ulong)pvVar19 / (ulong)pvVar34;
                }
                pvVar19 = (void *)((long)pvVar19 - uVar18 * (long)pvVar34);
              }
              if (pvVar19 != pvVar31) break;
            }
            bVar4 = *(byte *)(plVar21 + 2);
            uVar18 = (ulong)(bVar4 >> 1);
            sVar2 = uVar18;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar21[3];
            }
            if (sVar2 == sVar14) {
              if ((bVar4 & 1) == 0) {
                psVar24 = (string *)((long)plVar21 + 0x11);
                psVar26 = psVar3;
                while (*psVar24 == *psVar26) {
                  uVar18 = uVar18 - 1;
                  psVar24 = psVar24 + 1;
                  psVar26 = psVar26 + 1;
                  if (uVar18 == 0) goto LAB_00dcdae0;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar21[4],psVar3,sVar14);
                if (iVar6 == 0) goto LAB_00dcdae0;
              }
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    plVar21 = DAT_043f1798;
    plVar20 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar20 = plVar21;
    }
    plVar21 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x40,8);
    std::string::string((string *)(plVar21 + 2),psVar29);
    lVar22 = *(long *)(psVar29 + 0x18);
    lVar25 = *(long *)(psVar29 + 0x28);
    plVar21[6] = *(long *)(psVar29 + 0x20);
    plVar21[7] = lVar25;
    plVar21[5] = lVar22;
    *plVar21 = 0;
    plVar21[1] = (long)pvVar33;
    if ((pvVar34 == (void *)0x0) ||
       (*(float *)(plVar15 + 5) * (float)pvVar34 < (float)(plVar15[4] + 1))) {
      uVar18 = (ulong)(pvVar34 < (void *)0x3 || ((ulong)pvVar34 & (long)pvVar34 - 1U) != 0) |
               (long)pvVar34 << 1;
      uVar23 = (ulong)((float)(plVar15[4] + 1) / *(float *)(plVar15 + 5));
      if (uVar23 <= uVar18) {
        uVar23 = uVar18;
      }
      FUN_008e9ae4(plVar30,uVar23);
      pvVar34 = (void *)plVar15[2];
      if (((ulong)pvVar34 & (long)pvVar34 - 1U) == 0) {
        pvVar31 = (void *)((long)pvVar34 - 1U & (ulong)pvVar33);
      }
      else if (pvVar33 < pvVar34) {
        pvVar31 = pvVar33;
      }
      else {
        uVar18 = 0;
        if (pvVar34 != (void *)0x0) {
          uVar18 = (ulong)pvVar33 / (ulong)pvVar34;
        }
        pvVar31 = (void *)((long)pvVar33 - uVar18 * (long)pvVar34);
      }
    }
    lVar22 = *plVar30;
    plVar20 = *(long **)(lVar22 + (long)pvVar31 * 8);
    if (plVar20 == (long *)0x0) {
      *plVar21 = *plVar1;
      *plVar1 = (long)plVar21;
      *(long **)(lVar22 + (long)pvVar31 * 8) = plVar1;
      if (*plVar21 != 0) {
        pvVar33 = *(void **)(*plVar21 + 8);
        if (((ulong)pvVar34 & (long)pvVar34 - 1U) == 0) {
          pvVar33 = (void *)((ulong)pvVar33 & (long)pvVar34 - 1U);
        }
        else if (pvVar34 <= pvVar33) {
          uVar18 = 0;
          if (pvVar34 != (void *)0x0) {
            uVar18 = (ulong)pvVar33 / (ulong)pvVar34;
          }
          pvVar33 = (void *)((long)pvVar33 - uVar18 * (long)pvVar34);
        }
        plVar20 = (long *)(*plVar30 + (long)pvVar33 * 8);
        goto LAB_00dcdad0;
      }
    }
    else {
      *plVar21 = *plVar20;
LAB_00dcdad0:
      *plVar20 = (long)plVar21;
    }
    plVar15[4] = plVar15[4] + 1;
LAB_00dcdae0:
    psVar29 = psVar29 + 0x30;
  } while (psVar29 != &local_80);
  lVar25 = FUN_008cca50();
  lVar22 = 0;
  do {
    lVar16 = FUN_008e8c90(plVar30,lVar25 + lVar22);
    if (lVar16 != 0) {
      FUN_008f2aec(&local_80,plVar30,lVar16);
      plVar1 = DAT_043f1798;
      lVar16 = CONCAT71(uStack_7f,local_80);
      local_80 = (string)0x0;
      uStack_7f = 0;
      if (lVar16 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar16 + 0x10) & 1) != 0)) &&
           (lVar32 = *(long *)(lVar16 + 0x20), lVar32 != 0)) {
          plVar21 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar21 = plVar1;
          }
          uVar18 = (**(code **)(*plVar21 + 0xc0))(plVar21);
          if ((uVar18 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar21,lVar32,0,8);
              goto LAB_00dce090;
            }
          }
          (**(code **)(*plVar21 + 0x18))(plVar21,lVar32,0,8);
        }
LAB_00dce090:
        plVar1 = DAT_043f1798;
        plVar21 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar21 = plVar1;
        }
        uVar18 = (**(code **)(*plVar21 + 0xc0))(plVar21);
        if ((uVar18 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar21,lVar16,0,8);
            goto LAB_00dce048;
          }
        }
        (**(code **)(*plVar21 + 0x18))(plVar21,lVar16,0,8);
      }
    }
LAB_00dce048:
    lVar22 = lVar22 + 0x18;
  } while (lVar22 != 0x300);
  pcVar27 = (char *)plVar15[0xc];
  sVar14 = strlen(pcVar27);
  iVar6 = FUN_008f2c60(sVar14,pcVar27);
  pcVar27 = (char *)plVar15[0xf];
  sVar14 = strlen(pcVar27);
  iVar7 = FUN_008f2c60(sVar14,pcVar27);
  pcVar27 = (char *)plVar15[0x12];
  sVar14 = strlen(pcVar27);
  iVar8 = FUN_008f2c60(sVar14,pcVar27);
  pcVar27 = (char *)plVar15[0x15];
  sVar14 = strlen(pcVar27);
  iVar9 = FUN_008f2c60(sVar14,pcVar27);
  pcVar27 = (char *)plVar15[0x18];
  sVar14 = strlen(pcVar27);
  iVar10 = FUN_008f2c60(sVar14,pcVar27);
  pcVar27 = (char *)plVar15[0x1b];
  sVar14 = strlen(pcVar27);
  iVar11 = FUN_008f2c60(sVar14,pcVar27);
  pcVar27 = (char *)plVar15[0x1e];
  sVar14 = strlen(pcVar27);
  iVar12 = FUN_008f2c60(sVar14,pcVar27);
  pcVar27 = (char *)plVar15[0x1f];
  sVar14 = strlen(pcVar27);
  iVar13 = FUN_008f2c60(sVar14,pcVar27);
  lVar25 = local_a0;
  *(bool *)(plVar15 + 0xb) =
       ((((((iVar7 != 0 || iVar6 != 0) || iVar8 != 0) || iVar9 != 0) || iVar10 != 0) || iVar11 != 0)
       || iVar12 != 0) || iVar13 != 0;
  plVar1 = DAT_043f1798;
  lVar22 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar30 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar30 = plVar1;
    }
    uVar18 = (**(code **)(*plVar30 + 0xc0))(plVar30);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar30,lVar25,0,8);
        plVar1 = DAT_043f1798;
        lVar22 = local_d0;
        goto joined_r0x00dce2a4;
      }
    }
    (**(code **)(*plVar30 + 0x18))(plVar30,lVar25,0,8);
    plVar1 = DAT_043f1798;
    lVar22 = local_d0;
  }
joined_r0x00dce2a4:
  pvVar31 = local_100;
  local_d0 = lVar22;
  if (((local_e0 & 1) != 0) && (lVar22 != 0)) {
    plVar30 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar30 = plVar1;
    }
    uVar18 = (**(code **)(*plVar30 + 0xc0))(plVar30);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar30,lVar22,0,8);
        plVar1 = DAT_043f1798;
        pvVar31 = local_100;
        goto joined_r0x00dce9d4;
      }
    }
    (**(code **)(*plVar30 + 0x18))(plVar30,lVar22,0,8);
    plVar1 = DAT_043f1798;
    pvVar31 = local_100;
  }
joined_r0x00dce9d4:
  pvVar33 = local_130;
  local_100 = pvVar31;
  if (((local_110 & 1) != 0) && (pvVar31 != (void *)0x0)) {
    plVar30 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar30 = plVar1;
    }
    uVar18 = (**(code **)(*plVar30 + 0xc0))(plVar30);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar30,pvVar31,0,8);
        plVar1 = DAT_043f1798;
        pvVar33 = local_130;
        goto joined_r0x00dce40c;
      }
    }
    (**(code **)(*plVar30 + 0x18))(plVar30,pvVar31,0,8);
    plVar1 = DAT_043f1798;
    pvVar33 = local_130;
  }
joined_r0x00dce40c:
  pvVar31 = local_160;
  local_130 = pvVar33;
  if (((local_140 & 1) != 0) && (pvVar33 != (void *)0x0)) {
    plVar30 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar30 = plVar1;
    }
    uVar18 = (**(code **)(*plVar30 + 0xc0))(plVar30);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar30,pvVar33,0,8);
        plVar1 = DAT_043f1798;
        pvVar31 = local_160;
        goto joined_r0x00dcea14;
      }
    }
    (**(code **)(*plVar30 + 0x18))(plVar30,pvVar33,0,8);
    plVar1 = DAT_043f1798;
    pvVar31 = local_160;
  }
joined_r0x00dcea14:
  pvVar33 = local_190;
  local_160 = pvVar31;
  if (((local_170 & 1) != 0) && (pvVar31 != (void *)0x0)) {
    plVar30 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar30 = plVar1;
    }
    uVar18 = (**(code **)(*plVar30 + 0xc0))(plVar30);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar30,pvVar31,0,8);
        plVar1 = DAT_043f1798;
        pvVar33 = local_190;
        goto joined_r0x00dce574;
      }
    }
    (**(code **)(*plVar30 + 0x18))(plVar30,pvVar31,0,8);
    plVar1 = DAT_043f1798;
    pvVar33 = local_190;
  }
joined_r0x00dce574:
  pvVar31 = local_1c0;
  local_190 = pvVar33;
  if (((local_1a0 & 1) != 0) && (pvVar33 != (void *)0x0)) {
    plVar30 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar30 = plVar1;
    }
    uVar18 = (**(code **)(*plVar30 + 0xc0))(plVar30);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar30,pvVar33,0,8);
        plVar1 = DAT_043f1798;
        pvVar31 = local_1c0;
        goto joined_r0x00dcea54;
      }
    }
    (**(code **)(*plVar30 + 0x18))(plVar30,pvVar33,0,8);
    plVar1 = DAT_043f1798;
    pvVar31 = local_1c0;
  }
joined_r0x00dcea54:
  pvVar33 = local_1f0;
  local_1c0 = pvVar31;
  if (((local_1d0 & 1) != 0) && (pvVar31 != (void *)0x0)) {
    plVar30 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar30 = plVar1;
    }
    uVar18 = (**(code **)(*plVar30 + 0xc0))(plVar30);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar30,pvVar31,0,8);
        plVar1 = DAT_043f1798;
        pvVar33 = local_1f0;
        goto joined_r0x00dce6dc;
      }
    }
    (**(code **)(*plVar30 + 0x18))(plVar30,pvVar31,0,8);
    plVar1 = DAT_043f1798;
    pvVar33 = local_1f0;
  }
joined_r0x00dce6dc:
  DAT_043f1798 = plVar1;
  local_1f0 = pvVar33;
  if ((((byte)local_200 & 1) != 0) && (pvVar33 != (void *)0x0)) {
    plVar30 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar30 = plVar1;
    }
    uVar18 = (**(code **)(*plVar30 + 0xc0))(plVar30);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar30,pvVar33,0,8);
        goto LAB_00dce78c;
      }
    }
    (**(code **)(*plVar30 + 0x18))(plVar30,pvVar33,0,8);
  }
LAB_00dce78c:
  uVar28 = *(undefined8 *)(lVar17 + 0x20);
  FUN_0014fef0(uVar28);
  (**(code **)*plVar15)(plVar15,uVar28);
  (**(code **)(*plVar15 + 0x10))(plVar15);
  pvVar31 = local_2d0;
  if ((local_2e0 & 1) == 0) {
    pvVar31 = (void *)((long)&local_2e0 + 1);
  }
  FUN_001522a0(uVar28,pvVar31);
  pvVar31 = local_2d0;
  plVar1 = DAT_043f1798;
  if (((local_2e0 & 1) != 0) && (local_2d0 != (void *)0x0)) {
    plVar15 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar15 = plVar1;
    }
    uVar18 = (**(code **)(*plVar15 + 0xc0))(plVar15);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar15,pvVar31,0,8);
        return;
      }
    }
    (**(code **)(*plVar15 + 0x18))(plVar15,pvVar31,0,8);
  }
  return;
}


