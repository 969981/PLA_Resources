/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016fd698; name: FUN_016fd698
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_016fd698(long *param_1,char *param_2,char *param_3,long *param_4,char *param_5,
                 long *param_6,char *param_7,long *param_8,char *param_9,long *param_10,
                 char *param_11,long *param_12,char *param_13,long *param_14)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  size_t sVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  char *pcVar19;
  undefined8 uVar20;
  long *plVar21;
  void *pvVar22;
  long lVar23;
  long lVar24;
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
  byte local_200;
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
  byte local_80;
  undefined7 uStack_7f;
  undefined1 local_78;
  undefined7 uStack_77;
  void *local_70;
  
  lVar17 = *param_1;
  local_2e0 = 0;
  local_2d8 = 0;
  local_2d0 = (void *)0x0;
  sVar12 = strlen(param_2);
  plVar2 = DAT_043f1798;
  if (0xffffffffffffffef < sVar12) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar1 = tpidr_el0;
  if (sVar12 < 0x17) {
    local_2e0 = CONCAT71(local_2e0._1_7_,(char)((int)sVar12 << 1));
    pvVar22 = (void *)((ulong)&local_2e0 | 1);
    if (sVar12 != 0) goto LAB_016fd72c;
  }
  else {
    uVar16 = sVar12 + 0x10 & 0xfffffffffffffff0;
    plVar13 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar13 = plVar2;
    }
    pvVar22 = (void *)(**(code **)(*plVar13 + 0x10))(plVar13,uVar16,8);
    local_2e0 = uVar16 | 1;
    local_2d8 = sVar12;
    local_2d0 = pvVar22;
LAB_016fd72c:
    memcpy(pvVar22,param_2,sVar12);
  }
  *(undefined1 *)((long)pvVar22 + sVar12) = 0;
  plVar2 = DAT_043f1798;
  plVar13 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar13 = plVar2;
  }
  plVar13 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x150,8);
  plVar13[4] = 0;
  plVar13[2] = 0;
  plVar13[3] = 0;
  plVar21 = plVar13 + 1;
  *plVar21 = 0;
  *(undefined4 *)(plVar13 + 5) = 0x3f800000;
  plVar13[6] = (long)FUN_01700370;
  plVar13[7] = (long)FUN_01700420;
  plVar13[10] = 0;
  *(undefined1 *)(plVar13 + 0xb) = 0;
  *plVar13 = (long)&PTR_FUN_04224ec0;
  plVar13[8] = 0;
  plVar13[9] = 0;
  plVar13[0xc] = (long)param_3;
  lVar24 = param_4[1];
  plVar13[0xd] = *param_4;
  plVar13[0xe] = lVar24;
  plVar13[0xf] = (long)param_5;
  lVar24 = param_6[1];
  plVar13[0x10] = *param_6;
  plVar13[0x11] = lVar24;
  plVar13[0x12] = (long)param_7;
  lVar24 = param_8[1];
  plVar13[0x13] = *param_8;
  plVar13[0x14] = lVar24;
  plVar13[0x15] = (long)param_9;
  lVar24 = param_10[1];
  plVar13[0x16] = *param_10;
  plVar13[0x17] = lVar24;
  plVar13[0x18] = (long)param_11;
  lVar24 = *param_12;
  plVar13[0x1a] = param_12[1];
  plVar13[0x1b] = (long)param_13;
  plVar13[0x19] = lVar24;
  lVar24 = *param_14;
  lVar14 = param_14[1];
  plVar13[0x29] = 0;
  plVar13[0x1e] = (long)&DAT_038ca815;
  plVar13[0x1f] = (long)&DAT_0392da3c;
  plVar13[0x20] = 0;
  plVar13[0x21] = 0;
  *(undefined1 *)(plVar13 + 0x28) = 0;
  plVar13[0x1c] = lVar24;
  plVar13[0x1d] = lVar14;
  plVar13[0x22] = (long)FUN_017005f4;
  plVar13[0x23] = (long)&LAB_017008d4;
  plVar13[0x24] = (long)&LAB_01700bb0;
  plVar13[0x25] = (long)&LAB_01700bc0;
  plVar13[0x26] = 0;
  plVar13[0x27] = 0;
  sVar12 = strlen(param_3);
  plVar2 = DAT_043f1798;
  local_80 = 0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar12) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar12 < 0x17) {
    local_80 = (byte)((int)sVar12 << 1);
    pvVar22 = (void *)((ulong)&local_80 | 1);
    if (sVar12 != 0) goto LAB_016fd8c4;
  }
  else {
    uVar16 = sVar12 + 0x10 & 0xfffffffffffffff0;
    plVar18 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar18 = plVar2;
    }
    pvVar22 = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar16,8);
    local_80 = (byte)uVar16 | 1;
    uStack_7f = (undefined7)(uVar16 >> 8);
    local_78 = (undefined1)sVar12;
    uStack_77 = (undefined7)(sVar12 >> 8);
    local_70 = pvVar22;
LAB_016fd8c4:
    memcpy(pvVar22,param_3,sVar12);
  }
  local_1f0 = local_70;
  uStack_1f7 = uStack_77;
  uStack_1f8 = local_78;
  local_1ff = uStack_7f;
  local_200 = local_80;
  *(undefined1 *)((long)pvVar22 + sVar12) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = 0;
  uStack_7f = 0;
  local_210 = 0;
  uStack_209 = 0;
  uStack_208 = 0;
  local_1e8 = &LAB_01700bc4;
  puStack_1e0 = &LAB_01700c0c;
  local_1d8 = 0xffffffff;
  sVar12 = strlen(param_5);
  plVar2 = DAT_043f1798;
  local_238 = 0;
  uStack_237 = 0;
  local_230 = 0;
  uStack_22f = 0;
  local_228 = (void *)0x0;
  if (0xffffffffffffffef < sVar12) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar12 < 0x17) {
    local_238 = (byte)((int)sVar12 << 1);
    pvVar22 = (void *)((ulong)&local_238 | 1);
    if (sVar12 != 0) goto LAB_016fd968;
  }
  else {
    uVar16 = sVar12 + 0x10 & 0xfffffffffffffff0;
    plVar18 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar18 = plVar2;
    }
    pvVar22 = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar16,8);
    local_238 = (byte)uVar16 | 1;
    uStack_237 = (undefined7)(uVar16 >> 8);
    local_230 = (undefined1)sVar12;
    uStack_22f = (undefined7)(sVar12 >> 8);
    local_228 = pvVar22;
LAB_016fd968:
    memcpy(pvVar22,param_5,sVar12);
  }
  local_1c0 = local_228;
  uStack_1c7 = uStack_22f;
  uStack_1c8 = local_230;
  local_1cf = uStack_237;
  local_1d0 = local_238;
  *(undefined1 *)((long)pvVar22 + sVar12) = 0;
  local_238 = 0;
  uStack_237 = 0;
  local_230 = 0;
  uStack_22f = 0;
  local_228 = (void *)0x0;
  local_220 = 0;
  uStack_219 = 0;
  uStack_218 = 0;
  local_1a8 = 0xffffffff;
  local_1b8 = &LAB_01700c54;
  puStack_1b0 = &LAB_01700c9c;
  sVar12 = strlen(param_7);
  plVar2 = DAT_043f1798;
  local_260 = 0;
  uStack_25f = 0;
  local_258 = 0;
  uStack_257 = 0;
  local_250 = (void *)0x0;
  if (0xffffffffffffffef < sVar12) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar12 < 0x17) {
    local_260 = (byte)((int)sVar12 << 1);
    pvVar22 = (void *)((ulong)&local_260 | 1);
    if (sVar12 != 0) goto LAB_016fda00;
  }
  else {
    uVar16 = sVar12 + 0x10 & 0xfffffffffffffff0;
    plVar18 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar18 = plVar2;
    }
    pvVar22 = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar16,8);
    local_260 = (byte)uVar16 | 1;
    uStack_25f = (undefined7)(uVar16 >> 8);
    local_258 = (undefined1)sVar12;
    uStack_257 = (undefined7)(sVar12 >> 8);
    local_250 = pvVar22;
LAB_016fda00:
    memcpy(pvVar22,param_7,sVar12);
  }
  local_190 = local_250;
  uStack_197 = uStack_257;
  uStack_198 = local_258;
  local_19f = uStack_25f;
  local_1a0 = local_260;
  *(undefined1 *)((long)pvVar22 + sVar12) = 0;
  local_260 = 0;
  uStack_25f = 0;
  local_258 = 0;
  uStack_257 = 0;
  local_250 = (void *)0x0;
  local_248 = 0;
  uStack_241 = 0;
  uStack_240 = 0;
  local_178 = 0xffffffff;
  local_188 = &LAB_01700ce4;
  puStack_180 = &LAB_01700d2c;
  sVar12 = strlen(param_9);
  plVar2 = DAT_043f1798;
  local_288 = 0;
  uStack_287 = 0;
  local_280 = 0;
  uStack_27f = 0;
  local_278 = (void *)0x0;
  if (0xffffffffffffffef < sVar12) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar12 < 0x17) {
    local_288 = (byte)((int)sVar12 << 1);
    pvVar22 = (void *)((ulong)&local_288 | 1);
    if (sVar12 != 0) goto LAB_016fda9c;
  }
  else {
    uVar16 = sVar12 + 0x10 & 0xfffffffffffffff0;
    plVar18 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar18 = plVar2;
    }
    pvVar22 = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar16,8);
    local_288 = (byte)uVar16 | 1;
    uStack_287 = (undefined7)(uVar16 >> 8);
    local_280 = (undefined1)sVar12;
    uStack_27f = (undefined7)(sVar12 >> 8);
    local_278 = pvVar22;
LAB_016fda9c:
    memcpy(pvVar22,param_9,sVar12);
  }
  local_160 = local_278;
  uStack_167 = uStack_27f;
  uStack_168 = local_280;
  local_16f = uStack_287;
  local_170 = local_288;
  *(undefined1 *)((long)pvVar22 + sVar12) = 0;
  local_280 = 0;
  uStack_27f = 0;
  local_278 = (void *)0x0;
  local_288 = 0;
  uStack_287 = 0;
  local_270 = 0;
  uStack_269 = 0;
  uStack_268 = 0;
  local_158 = &LAB_01700d74;
  puStack_150 = &LAB_01700dbc;
  local_148 = 0xffffffff;
  sVar12 = strlen(param_11);
  plVar2 = DAT_043f1798;
  local_2b0 = 0;
  uStack_2af = 0;
  local_2a8 = 0;
  uStack_2a7 = 0;
  local_2a0 = (void *)0x0;
  if (0xffffffffffffffef < sVar12) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar12 < 0x17) {
    local_2b0 = (byte)((int)sVar12 << 1);
    pvVar22 = (void *)((ulong)&local_2b0 | 1);
    if (sVar12 != 0) goto LAB_016fdb40;
  }
  else {
    uVar16 = sVar12 + 0x10 & 0xfffffffffffffff0;
    plVar18 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar18 = plVar2;
    }
    pvVar22 = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar16,8);
    local_2b0 = (byte)uVar16 | 1;
    uStack_2af = (undefined7)(uVar16 >> 8);
    local_2a8 = (undefined1)sVar12;
    uStack_2a7 = (undefined7)(sVar12 >> 8);
    local_2a0 = pvVar22;
LAB_016fdb40:
    memcpy(pvVar22,param_11,sVar12);
  }
  local_130 = local_2a0;
  uStack_137 = uStack_2a7;
  uStack_138 = local_2a8;
  local_13f = uStack_2af;
  local_140 = local_2b0;
  *(undefined1 *)((long)pvVar22 + sVar12) = 0;
  local_2b0 = 0;
  uStack_2af = 0;
  local_2a8 = 0;
  uStack_2a7 = 0;
  local_2a0 = (void *)0x0;
  local_298 = 0;
  uStack_291 = 0;
  uStack_290 = 0;
  local_118 = 0xffffffff;
  local_128 = &LAB_01700e04;
  puStack_120 = &LAB_01700e4c;
  sVar12 = strlen(param_13);
  plVar2 = DAT_043f1798;
  local_2c8 = 0;
  uStack_2c7 = 0;
  local_2c0 = 0;
  uStack_2bf = 0;
  local_2b8 = (void *)0x0;
  if (0xffffffffffffffef < sVar12) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar12 < 0x17) {
    local_2c8 = (byte)((int)sVar12 << 1);
    pvVar22 = (void *)((ulong)&local_2c8 | 1);
    if (sVar12 != 0) goto LAB_016fdbdc;
  }
  else {
    uVar16 = sVar12 + 0x10 & 0xfffffffffffffff0;
    plVar18 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar18 = plVar2;
    }
    pvVar22 = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar16,8);
    local_2c8 = (byte)uVar16 | 1;
    uStack_2c7 = (undefined7)(uVar16 >> 8);
    local_2c0 = (undefined1)sVar12;
    uStack_2bf = (undefined7)(sVar12 >> 8);
    local_2b8 = pvVar22;
LAB_016fdbdc:
    memcpy(pvVar22,param_13,sVar12);
  }
  *(undefined1 *)((long)pvVar22 + sVar12) = 0;
  local_110 = local_2c8;
  local_10f = uStack_2c7;
  local_100 = local_2b8;
  uStack_108 = local_2c0;
  uStack_107 = uStack_2bf;
  local_f8 = &LAB_01700e94;
  local_f0 = &LAB_01700edc;
  local_e0 = 6;
  local_e8 = 0xffffffff;
  local_df = 0x656e;
  local_dd = 0x77;
  local_dc = 0;
  local_d4 = 0;
  local_c8 = &LAB_01700f24;
  local_c0 = &LAB_01700f6c;
  local_b0 = 8;
  local_d0 = 0;
  local_b8 = 0xffffffff;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_a0 = 0;
  local_90 = &LAB_01700ffc;
  local_98 = &LAB_01700fb4;
  local_88 = 0xffffffff;
  FUN_01701044(plVar21,&local_200,8);
  lVar14 = FUN_008cca50();
  lVar24 = 0;
  do {
    lVar15 = FUN_008e8c90(plVar21,lVar14 + lVar24);
    if (lVar15 != 0) {
      FUN_008f2aec(&local_80,plVar21,lVar15);
      plVar2 = DAT_043f1798;
      lVar15 = CONCAT71(uStack_7f,local_80);
      local_80 = 0;
      uStack_7f = 0;
      if (lVar15 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar15 + 0x10) & 1) != 0)) &&
           (lVar23 = *(long *)(lVar15 + 0x20), lVar23 != 0)) {
          plVar18 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar18 = plVar2;
          }
          uVar16 = (**(code **)(*plVar18 + 0xc0))(plVar18);
          if ((uVar16 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar18,lVar23,0,8);
              goto LAB_016fe080;
            }
          }
          (**(code **)(*plVar18 + 0x18))(plVar18,lVar23,0,8);
        }
LAB_016fe080:
        plVar2 = DAT_043f1798;
        plVar18 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar18 = plVar2;
        }
        uVar16 = (**(code **)(*plVar18 + 0xc0))(plVar18);
        if ((uVar16 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar18,lVar15,0,8);
            goto LAB_016fe038;
          }
        }
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar15,0,8);
      }
    }
LAB_016fe038:
    lVar24 = lVar24 + 0x18;
  } while (lVar24 != 0x300);
  pcVar19 = (char *)plVar13[0xc];
  sVar12 = strlen(pcVar19);
  iVar4 = FUN_008f2c60(sVar12,pcVar19);
  pcVar19 = (char *)plVar13[0xf];
  sVar12 = strlen(pcVar19);
  iVar5 = FUN_008f2c60(sVar12,pcVar19);
  pcVar19 = (char *)plVar13[0x12];
  sVar12 = strlen(pcVar19);
  iVar6 = FUN_008f2c60(sVar12,pcVar19);
  pcVar19 = (char *)plVar13[0x15];
  sVar12 = strlen(pcVar19);
  iVar7 = FUN_008f2c60(sVar12,pcVar19);
  pcVar19 = (char *)plVar13[0x18];
  sVar12 = strlen(pcVar19);
  iVar8 = FUN_008f2c60(sVar12,pcVar19);
  pcVar19 = (char *)plVar13[0x1b];
  sVar12 = strlen(pcVar19);
  iVar9 = FUN_008f2c60(sVar12,pcVar19);
  pcVar19 = (char *)plVar13[0x1e];
  sVar12 = strlen(pcVar19);
  iVar10 = FUN_008f2c60(sVar12,pcVar19);
  pcVar19 = (char *)plVar13[0x1f];
  sVar12 = strlen(pcVar19);
  iVar11 = FUN_008f2c60(sVar12,pcVar19);
  lVar14 = local_a0;
  *(bool *)(plVar13 + 0xb) =
       ((((((iVar5 != 0 || iVar4 != 0) || iVar6 != 0) || iVar7 != 0) || iVar8 != 0) || iVar9 != 0)
       || iVar10 != 0) || iVar11 != 0;
  plVar2 = DAT_043f1798;
  lVar24 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar21 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar21 = plVar2;
    }
    uVar16 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar21,lVar14,0,8);
        plVar2 = DAT_043f1798;
        lVar24 = local_d0;
        goto joined_r0x016fe288;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,lVar14,0,8);
    plVar2 = DAT_043f1798;
    lVar24 = local_d0;
  }
joined_r0x016fe288:
  pvVar22 = local_100;
  local_d0 = lVar24;
  if (((local_e0 & 1) != 0) && (lVar24 != 0)) {
    plVar21 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar21 = plVar2;
    }
    uVar16 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar21,lVar24,0,8);
        plVar2 = DAT_043f1798;
        pvVar22 = local_100;
        goto joined_r0x016fe9b0;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,lVar24,0,8);
    plVar2 = DAT_043f1798;
    pvVar22 = local_100;
  }
joined_r0x016fe9b0:
  pvVar3 = local_130;
  local_100 = pvVar22;
  if (((local_110 & 1) != 0) && (pvVar22 != (void *)0x0)) {
    plVar21 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar21 = plVar2;
    }
    uVar16 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar21,pvVar22,0,8);
        plVar2 = DAT_043f1798;
        pvVar3 = local_130;
        goto joined_r0x016fe3f0;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,pvVar22,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_130;
  }
joined_r0x016fe3f0:
  pvVar22 = local_160;
  local_130 = pvVar3;
  if (((local_140 & 1) != 0) && (pvVar3 != (void *)0x0)) {
    plVar21 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar21 = plVar2;
    }
    uVar16 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar21,pvVar3,0,8);
        plVar2 = DAT_043f1798;
        pvVar22 = local_160;
        goto joined_r0x016fe9f0;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,pvVar3,0,8);
    plVar2 = DAT_043f1798;
    pvVar22 = local_160;
  }
joined_r0x016fe9f0:
  pvVar3 = local_190;
  local_160 = pvVar22;
  if (((local_170 & 1) != 0) && (pvVar22 != (void *)0x0)) {
    plVar21 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar21 = plVar2;
    }
    uVar16 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar21,pvVar22,0,8);
        plVar2 = DAT_043f1798;
        pvVar3 = local_190;
        goto joined_r0x016fe558;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,pvVar22,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_190;
  }
joined_r0x016fe558:
  pvVar22 = local_1c0;
  local_190 = pvVar3;
  if (((local_1a0 & 1) != 0) && (pvVar3 != (void *)0x0)) {
    plVar21 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar21 = plVar2;
    }
    uVar16 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar21,pvVar3,0,8);
        plVar2 = DAT_043f1798;
        pvVar22 = local_1c0;
        goto joined_r0x016fea30;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,pvVar3,0,8);
    plVar2 = DAT_043f1798;
    pvVar22 = local_1c0;
  }
joined_r0x016fea30:
  pvVar3 = local_1f0;
  local_1c0 = pvVar22;
  if (((local_1d0 & 1) != 0) && (pvVar22 != (void *)0x0)) {
    plVar21 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar21 = plVar2;
    }
    uVar16 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar21,pvVar22,0,8);
        plVar2 = DAT_043f1798;
        pvVar3 = local_1f0;
        goto joined_r0x016fe6c0;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,pvVar22,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_1f0;
  }
joined_r0x016fe6c0:
  DAT_043f1798 = plVar2;
  local_1f0 = pvVar3;
  if (((local_200 & 1) != 0) && (pvVar3 != (void *)0x0)) {
    plVar21 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar21 = plVar2;
    }
    uVar16 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar21,pvVar3,0,8);
        goto LAB_016fe770;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,pvVar3,0,8);
  }
LAB_016fe770:
  uVar20 = *(undefined8 *)(lVar17 + 0x20);
  FUN_0014fef0(uVar20);
  (**(code **)*plVar13)(plVar13,uVar20);
  (**(code **)(*plVar13 + 0x10))(plVar13);
  pvVar22 = local_2d0;
  if ((local_2e0 & 1) == 0) {
    pvVar22 = (void *)((long)&local_2e0 + 1);
  }
  FUN_001522a0(uVar20,pvVar22);
  pvVar22 = local_2d0;
  plVar2 = DAT_043f1798;
  if (((local_2e0 & 1) != 0) && (local_2d0 != (void *)0x0)) {
    plVar13 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar13 = plVar2;
    }
    uVar16 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar13,pvVar22,0,8);
        return;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,pvVar22,0,8);
  }
  return;
}


