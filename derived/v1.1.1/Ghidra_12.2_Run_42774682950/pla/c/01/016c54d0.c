/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016c54d0; name: FUN_016c54d0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_016c54d0(long *param_1,char *param_2,char *param_3,long *param_4,long param_5,long *param_6
                 ,char *param_7,long *param_8,char *param_9,long *param_10,char *param_11,
                 long *param_12,char *param_13,long *param_14,char *param_15,long *param_16,
                 char *param_17,long *param_18)

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
  int iVar12;
  int iVar13;
  size_t sVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 uVar20;
  long *plVar21;
  char *pcVar22;
  long lVar23;
  long lVar24;
  void *pvVar25;
  long lVar26;
  undefined8 local_390;
  size_t local_388;
  void *local_380;
  byte local_378;
  undefined7 uStack_377;
  undefined1 local_370;
  undefined7 uStack_36f;
  void *local_368;
  byte local_360;
  undefined7 uStack_35f;
  undefined1 local_358;
  undefined7 uStack_357;
  void *local_350;
  undefined7 local_348;
  undefined1 uStack_341;
  undefined7 uStack_340;
  byte local_338;
  undefined7 uStack_337;
  undefined1 local_330;
  undefined7 uStack_32f;
  void *local_328;
  undefined7 local_320;
  undefined1 uStack_319;
  undefined7 uStack_318;
  byte local_310;
  undefined7 uStack_30f;
  undefined1 local_308;
  undefined7 uStack_307;
  void *local_300;
  undefined7 local_2f8;
  undefined1 uStack_2f1;
  undefined7 uStack_2f0;
  byte local_2e8;
  undefined7 uStack_2e7;
  undefined1 local_2e0;
  undefined7 uStack_2df;
  void *local_2d8;
  undefined7 local_2d0;
  undefined1 uStack_2c9;
  undefined7 uStack_2c8;
  byte local_2c0;
  undefined7 uStack_2bf;
  undefined1 local_2b8;
  undefined7 uStack_2b7;
  void *local_2b0;
  undefined7 local_2a8;
  undefined1 uStack_2a1;
  undefined7 uStack_2a0;
  byte local_298;
  undefined7 uStack_297;
  undefined1 local_290;
  undefined7 uStack_28f;
  void *local_288;
  undefined7 local_280;
  undefined1 uStack_279;
  undefined7 uStack_278;
  undefined7 local_270;
  undefined1 uStack_269;
  undefined7 uStack_268;
  byte local_260;
  undefined7 local_25f;
  undefined1 uStack_258;
  undefined7 uStack_257;
  void *local_250;
  undefined1 *local_248;
  undefined1 *puStack_240;
  undefined4 local_238;
  byte local_230;
  undefined7 local_22f;
  undefined1 uStack_228;
  undefined7 uStack_227;
  void *local_220;
  undefined1 *local_218;
  undefined1 *puStack_210;
  undefined4 local_208;
  byte local_200;
  undefined7 local_1ff;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  void *local_1f0;
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  undefined4 local_1d8;
  byte local_1d0;
  undefined7 local_1cf;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  void *local_1c0;
  undefined1 *local_1b8;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  byte local_1a0;
  undefined7 local_19f;
  undefined1 uStack_198;
  undefined7 uStack_197;
  void *local_190;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined4 local_178;
  byte local_170;
  undefined7 local_16f;
  undefined1 uStack_168;
  undefined7 uStack_167;
  void *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined4 local_148;
  byte local_140;
  undefined7 local_13f;
  undefined1 uStack_138;
  undefined7 uStack_137;
  void *local_130;
  undefined1 *local_128;
  undefined1 *local_120;
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
  
  lVar24 = *param_1;
  local_388 = 0;
  local_380 = (void *)0x0;
  local_390 = 0;
  sVar14 = strlen(param_2);
  plVar2 = DAT_043f1798;
  if (0xffffffffffffffef < sVar14) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar1 = tpidr_el0;
  if (sVar14 < 0x17) {
    local_390 = CONCAT71(local_390._1_7_,(char)((int)sVar14 << 1));
    pvVar25 = (void *)((ulong)&local_390 | 1);
    if (sVar14 != 0) goto LAB_016c5578;
  }
  else {
    uVar18 = sVar14 + 0x10 & 0xfffffffffffffff0;
    plVar15 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar15 = plVar2;
    }
    pvVar25 = (void *)(**(code **)(*plVar15 + 0x10))(plVar15,uVar18,8);
    local_390 = uVar18 | 1;
    local_388 = sVar14;
    local_380 = pvVar25;
LAB_016c5578:
    memcpy(pvVar25,param_2,sVar14);
  }
  *(undefined1 *)((long)pvVar25 + sVar14) = 0;
  plVar2 = DAT_043f1798;
  plVar15 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar15 = plVar2;
  }
  plVar15 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0x180,8);
  plVar15[4] = 0;
  plVar21 = plVar15 + 1;
  *plVar21 = 0;
  plVar15[2] = 0;
  plVar15[3] = 0;
  *(undefined4 *)(plVar15 + 5) = 0x3f800000;
  plVar15[6] = (long)FUN_016d7350;
  plVar15[7] = (long)FUN_016d73f0;
  plVar15[8] = 0;
  plVar15[9] = 0;
  plVar15[10] = 0;
  *(undefined1 *)(plVar15 + 0xb) = 0;
  *plVar15 = (long)&PTR_FUN_04224df8;
  plVar15[0xc] = (long)param_3;
  lVar26 = param_4[1];
  plVar15[0xd] = *param_4;
  plVar15[0xe] = lVar26;
  plVar15[0xf] = param_5;
  lVar26 = *param_6;
  plVar15[0x11] = param_6[1];
  plVar15[0x12] = (long)param_7;
  plVar15[0x10] = lVar26;
  lVar26 = *param_8;
  plVar15[0x14] = param_8[1];
  plVar15[0x15] = (long)param_9;
  plVar15[0x13] = lVar26;
  lVar26 = *param_10;
  plVar15[0x17] = param_10[1];
  plVar15[0x18] = (long)param_11;
  plVar15[0x16] = lVar26;
  lVar26 = *param_12;
  plVar15[0x1a] = param_12[1];
  plVar15[0x1b] = (long)param_13;
  plVar15[0x19] = lVar26;
  lVar26 = param_14[1];
  plVar15[0x1c] = *param_14;
  plVar15[0x1d] = lVar26;
  plVar15[0x1e] = (long)param_15;
  lVar26 = param_16[1];
  plVar15[0x1f] = *param_16;
  plVar15[0x20] = lVar26;
  plVar15[0x21] = (long)param_17;
  lVar26 = *param_18;
  lVar16 = param_18[1];
  plVar15[0x24] = (long)&DAT_038ca815;
  plVar15[0x25] = (long)&DAT_0392da3c;
  plVar15[0x26] = 0;
  plVar15[0x27] = 0;
  plVar15[0x2f] = 0;
  plVar15[0x28] = (long)FUN_016d7580;
  plVar15[0x29] = (long)&LAB_016d7860;
  *(undefined1 *)(plVar15 + 0x2e) = 0;
  plVar15[0x2c] = 0;
  plVar15[0x2d] = 0;
  plVar15[0x22] = lVar26;
  plVar15[0x23] = lVar16;
  plVar15[0x2a] = (long)&LAB_016c79c0;
  plVar15[0x2b] = (long)&LAB_016c79d0;
  sVar14 = strlen(param_3);
  plVar2 = DAT_043f1798;
  local_80 = 0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar14) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar14 < 0x17) {
    local_80 = (byte)((int)sVar14 << 1);
    pvVar25 = (void *)((ulong)&local_80 | 1);
    if (sVar14 != 0) goto LAB_016c5748;
  }
  else {
    uVar18 = sVar14 + 0x10 & 0xfffffffffffffff0;
    plVar19 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar19 = plVar2;
    }
    pvVar25 = (void *)(**(code **)(*plVar19 + 0x10))(plVar19,uVar18,8);
    local_80 = (byte)uVar18 | 1;
    uStack_7f = (undefined7)(uVar18 >> 8);
    local_78 = (undefined1)sVar14;
    uStack_77 = (undefined7)(sVar14 >> 8);
    local_70 = pvVar25;
LAB_016c5748:
    memcpy(pvVar25,param_3,sVar14);
  }
  local_250 = local_70;
  uStack_257 = uStack_77;
  uStack_258 = local_78;
  local_25f = uStack_7f;
  local_260 = local_80;
  *(undefined1 *)((long)pvVar25 + sVar14) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = 0;
  uStack_7f = 0;
  local_270 = 0;
  uStack_269 = 0;
  uStack_268 = 0;
  local_248 = &LAB_016d7b3c;
  puStack_240 = &LAB_016d7b84;
  local_238 = 0xffffffff;
  pcVar22 = (char *)plVar15[0xf];
  sVar14 = strlen(pcVar22);
  plVar2 = DAT_043f1798;
  local_298 = 0;
  uStack_297 = 0;
  local_290 = 0;
  uStack_28f = 0;
  local_288 = (void *)0x0;
  if (0xffffffffffffffef < sVar14) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar14 < 0x17) {
    local_298 = (byte)((int)sVar14 << 1);
    pvVar25 = (void *)((ulong)&local_298 | 1);
    if (sVar14 != 0) goto LAB_016c57f0;
  }
  else {
    uVar18 = sVar14 + 0x10 & 0xfffffffffffffff0;
    plVar19 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar19 = plVar2;
    }
    pvVar25 = (void *)(**(code **)(*plVar19 + 0x10))(plVar19,uVar18,8);
    local_298 = (byte)uVar18 | 1;
    uStack_297 = (undefined7)(uVar18 >> 8);
    local_290 = (undefined1)sVar14;
    uStack_28f = (undefined7)(sVar14 >> 8);
    local_288 = pvVar25;
LAB_016c57f0:
    memcpy(pvVar25,pcVar22,sVar14);
  }
  local_220 = local_288;
  uStack_227 = uStack_28f;
  uStack_228 = local_290;
  local_22f = uStack_297;
  local_230 = local_298;
  *(undefined1 *)((long)pvVar25 + sVar14) = 0;
  local_298 = 0;
  uStack_297 = 0;
  local_290 = 0;
  uStack_28f = 0;
  local_288 = (void *)0x0;
  local_280 = 0;
  uStack_279 = 0;
  uStack_278 = 0;
  local_208 = 0xffffffff;
  local_218 = &LAB_016d7bcc;
  puStack_210 = &LAB_016d7c14;
  sVar14 = strlen(param_7);
  plVar2 = DAT_043f1798;
  local_2c0 = 0;
  uStack_2bf = 0;
  local_2b8 = 0;
  uStack_2b7 = 0;
  local_2b0 = (void *)0x0;
  if (0xffffffffffffffef < sVar14) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar14 < 0x17) {
    local_2c0 = (byte)((int)sVar14 << 1);
    pvVar25 = (void *)((ulong)&local_2c0 | 1);
    if (sVar14 != 0) goto LAB_016c5890;
  }
  else {
    uVar18 = sVar14 + 0x10 & 0xfffffffffffffff0;
    plVar19 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar19 = plVar2;
    }
    pvVar25 = (void *)(**(code **)(*plVar19 + 0x10))(plVar19,uVar18,8);
    local_2c0 = (byte)uVar18 | 1;
    uStack_2bf = (undefined7)(uVar18 >> 8);
    local_2b8 = (undefined1)sVar14;
    uStack_2b7 = (undefined7)(sVar14 >> 8);
    local_2b0 = pvVar25;
LAB_016c5890:
    memcpy(pvVar25,param_7,sVar14);
  }
  local_1f0 = local_2b0;
  uStack_1f7 = uStack_2b7;
  uStack_1f8 = local_2b8;
  local_1ff = uStack_2bf;
  local_200 = local_2c0;
  *(undefined1 *)((long)pvVar25 + sVar14) = 0;
  local_2c0 = 0;
  uStack_2bf = 0;
  local_2b8 = 0;
  uStack_2b7 = 0;
  local_2b0 = (void *)0x0;
  local_2a8 = 0;
  uStack_2a1 = 0;
  uStack_2a0 = 0;
  local_1e0 = &LAB_016d7ca4;
  local_1e8 = &LAB_016d7c5c;
  local_1d8 = 0xffffffff;
  sVar14 = strlen(param_9);
  plVar2 = DAT_043f1798;
  local_2e8 = 0;
  uStack_2e7 = 0;
  local_2e0 = 0;
  uStack_2df = 0;
  local_2d8 = (void *)0x0;
  if (0xffffffffffffffef < sVar14) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar14 < 0x17) {
    local_2e8 = (byte)((int)sVar14 << 1);
    pvVar25 = (void *)((ulong)&local_2e8 | 1);
    if (sVar14 != 0) goto LAB_016c592c;
  }
  else {
    uVar18 = sVar14 + 0x10 & 0xfffffffffffffff0;
    plVar19 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar19 = plVar2;
    }
    pvVar25 = (void *)(**(code **)(*plVar19 + 0x10))(plVar19,uVar18,8);
    local_2e8 = (byte)uVar18 | 1;
    uStack_2e7 = (undefined7)(uVar18 >> 8);
    local_2e0 = (undefined1)sVar14;
    uStack_2df = (undefined7)(sVar14 >> 8);
    local_2d8 = pvVar25;
LAB_016c592c:
    memcpy(pvVar25,param_9,sVar14);
  }
  local_1c0 = local_2d8;
  uStack_1c7 = uStack_2df;
  uStack_1c8 = local_2e0;
  local_1cf = uStack_2e7;
  local_1d0 = local_2e8;
  *(undefined1 *)((long)pvVar25 + sVar14) = 0;
  local_2e8 = 0;
  uStack_2e7 = 0;
  local_2e0 = 0;
  uStack_2df = 0;
  local_2d8 = (void *)0x0;
  local_2d0 = 0;
  uStack_2c9 = 0;
  uStack_2c8 = 0;
  local_1b0 = &LAB_016d7d34;
  local_1b8 = &LAB_016d7cec;
  local_1a8 = 0xffffffff;
  sVar14 = strlen(param_11);
  plVar2 = DAT_043f1798;
  local_310 = 0;
  uStack_30f = 0;
  local_308 = 0;
  uStack_307 = 0;
  local_300 = (void *)0x0;
  if (0xffffffffffffffef < sVar14) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar14 < 0x17) {
    local_310 = (byte)((int)sVar14 << 1);
    pvVar25 = (void *)((ulong)&local_310 | 1);
    if (sVar14 != 0) goto LAB_016c59d0;
  }
  else {
    uVar18 = sVar14 + 0x10 & 0xfffffffffffffff0;
    plVar19 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar19 = plVar2;
    }
    pvVar25 = (void *)(**(code **)(*plVar19 + 0x10))(plVar19,uVar18,8);
    local_310 = (byte)uVar18 | 1;
    uStack_30f = (undefined7)(uVar18 >> 8);
    local_308 = (undefined1)sVar14;
    uStack_307 = (undefined7)(sVar14 >> 8);
    local_300 = pvVar25;
LAB_016c59d0:
    memcpy(pvVar25,param_11,sVar14);
  }
  local_190 = local_300;
  uStack_197 = uStack_307;
  uStack_198 = local_308;
  local_19f = uStack_30f;
  local_1a0 = local_310;
  *(undefined1 *)((long)pvVar25 + sVar14) = 0;
  local_310 = 0;
  uStack_30f = 0;
  local_308 = 0;
  uStack_307 = 0;
  local_300 = (void *)0x0;
  local_2f8 = 0;
  uStack_2f1 = 0;
  uStack_2f0 = 0;
  local_178 = 0xffffffff;
  local_180 = &LAB_016d7dc4;
  local_188 = &LAB_016d7d7c;
  sVar14 = strlen(param_13);
  plVar2 = DAT_043f1798;
  local_338 = 0;
  uStack_337 = 0;
  local_330 = 0;
  uStack_32f = 0;
  local_328 = (void *)0x0;
  if (0xffffffffffffffef < sVar14) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar14 < 0x17) {
    local_338 = (byte)((int)sVar14 << 1);
    pvVar25 = (void *)((ulong)&local_338 | 1);
    if (sVar14 != 0) goto LAB_016c5a74;
  }
  else {
    uVar18 = sVar14 + 0x10 & 0xfffffffffffffff0;
    plVar19 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar19 = plVar2;
    }
    pvVar25 = (void *)(**(code **)(*plVar19 + 0x10))(plVar19,uVar18,8);
    local_338 = (byte)uVar18 | 1;
    uStack_337 = (undefined7)(uVar18 >> 8);
    local_330 = (undefined1)sVar14;
    uStack_32f = (undefined7)(sVar14 >> 8);
    local_328 = pvVar25;
LAB_016c5a74:
    memcpy(pvVar25,param_13,sVar14);
  }
  local_160 = local_328;
  uStack_167 = uStack_32f;
  uStack_168 = local_330;
  local_16f = uStack_337;
  local_170 = local_338;
  *(undefined1 *)((long)pvVar25 + sVar14) = 0;
  local_330 = 0;
  uStack_32f = 0;
  local_328 = (void *)0x0;
  local_338 = 0;
  uStack_337 = 0;
  local_150 = &LAB_016d7e54;
  local_320 = 0;
  uStack_319 = 0;
  uStack_318 = 0;
  local_158 = &LAB_016d7e0c;
  local_148 = 0xffffffff;
  sVar14 = strlen(param_15);
  plVar2 = DAT_043f1798;
  local_360 = 0;
  uStack_35f = 0;
  local_358 = 0;
  uStack_357 = 0;
  local_350 = (void *)0x0;
  if (0xffffffffffffffef < sVar14) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar14 < 0x17) {
    local_360 = (byte)((int)sVar14 << 1);
    pvVar25 = (void *)((ulong)&local_360 | 1);
    if (sVar14 != 0) goto LAB_016c5b1c;
  }
  else {
    uVar18 = sVar14 + 0x10 & 0xfffffffffffffff0;
    plVar19 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar19 = plVar2;
    }
    pvVar25 = (void *)(**(code **)(*plVar19 + 0x10))(plVar19,uVar18,8);
    local_360 = (byte)uVar18 | 1;
    uStack_35f = (undefined7)(uVar18 >> 8);
    local_358 = (undefined1)sVar14;
    uStack_357 = (undefined7)(sVar14 >> 8);
    local_350 = pvVar25;
LAB_016c5b1c:
    memcpy(pvVar25,param_15,sVar14);
  }
  local_130 = local_350;
  uStack_137 = uStack_357;
  uStack_138 = local_358;
  *(undefined1 *)((long)pvVar25 + sVar14) = 0;
  local_140 = local_360;
  local_358 = 0;
  uStack_357 = 0;
  local_350 = (void *)0x0;
  local_13f = uStack_35f;
  local_128 = &LAB_016d7e9c;
  local_360 = 0;
  uStack_35f = 0;
  local_348 = 0;
  uStack_341 = 0;
  uStack_340 = 0;
  local_118 = 0xffffffff;
  local_120 = &LAB_016d7ee4;
  sVar14 = strlen(param_17);
  plVar2 = DAT_043f1798;
  local_378 = 0;
  uStack_377 = 0;
  local_370 = 0;
  uStack_36f = 0;
  local_368 = (void *)0x0;
  if (0xffffffffffffffef < sVar14) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar14 < 0x17) {
    local_378 = (byte)((int)sVar14 << 1);
    pvVar25 = (void *)((ulong)&local_378 | 1);
    if (sVar14 != 0) goto LAB_016c5bc8;
  }
  else {
    uVar18 = sVar14 + 0x10 & 0xfffffffffffffff0;
    plVar19 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar19 = plVar2;
    }
    pvVar25 = (void *)(**(code **)(*plVar19 + 0x10))(plVar19,uVar18,8);
    local_378 = (byte)uVar18 | 1;
    uStack_377 = (undefined7)(uVar18 >> 8);
    local_370 = (undefined1)sVar14;
    uStack_36f = (undefined7)(sVar14 >> 8);
    local_368 = pvVar25;
LAB_016c5bc8:
    memcpy(pvVar25,param_17,sVar14);
  }
  *(undefined1 *)((long)pvVar25 + sVar14) = 0;
  local_110 = local_378;
  local_10f = uStack_377;
  local_f8 = &LAB_016d7f2c;
  local_e0 = 6;
  local_100 = local_368;
  local_f0 = &LAB_016d7f74;
  uStack_108 = local_370;
  uStack_107 = uStack_36f;
  local_e8 = 0xffffffff;
  local_df = 0x656e;
  local_dd = 0x77;
  local_dc = 0;
  local_d4 = 0;
  local_c0 = &LAB_016d8004;
  local_d0 = 0;
  local_c8 = &LAB_016d7fbc;
  local_b0 = 8;
  local_b8 = 0xffffffff;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_a0 = 0;
  local_90 = &LAB_016d8094;
  local_98 = &LAB_016d804c;
  local_88 = 0xffffffff;
  FUN_016c7bfc(plVar21,&local_260,10);
  lVar16 = FUN_008cca50();
  lVar26 = 0;
  do {
    lVar17 = FUN_008e8c90(plVar21,lVar16 + lVar26);
    if (lVar17 != 0) {
      FUN_008f2aec(&local_80,plVar21,lVar17);
      plVar2 = DAT_043f1798;
      lVar17 = CONCAT71(uStack_7f,local_80);
      local_80 = 0;
      uStack_7f = 0;
      if (lVar17 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar17 + 0x10) & 1) != 0)) &&
           (lVar23 = *(long *)(lVar17 + 0x20), lVar23 != 0)) {
          plVar19 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar19 = plVar2;
          }
          uVar18 = (**(code **)(*plVar19 + 0xc0))(plVar19);
          if ((uVar18 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar19,lVar23,0,8);
              goto LAB_016c6168;
            }
          }
          (**(code **)(*plVar19 + 0x18))(plVar19,lVar23,0,8);
        }
LAB_016c6168:
        plVar2 = DAT_043f1798;
        plVar19 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar19 = plVar2;
        }
        uVar18 = (**(code **)(*plVar19 + 0xc0))(plVar19);
        if ((uVar18 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar19,lVar17,0,8);
            goto LAB_016c6120;
          }
        }
        (**(code **)(*plVar19 + 0x18))(plVar19,lVar17,0,8);
      }
    }
LAB_016c6120:
    lVar26 = lVar26 + 0x18;
  } while (lVar26 != 0x300);
  pcVar22 = (char *)plVar15[0xc];
  sVar14 = strlen(pcVar22);
  iVar4 = FUN_008f2c60(sVar14,pcVar22);
  pcVar22 = (char *)plVar15[0xf];
  sVar14 = strlen(pcVar22);
  iVar5 = FUN_008f2c60(sVar14,pcVar22);
  pcVar22 = (char *)plVar15[0x12];
  sVar14 = strlen(pcVar22);
  iVar6 = FUN_008f2c60(sVar14,pcVar22);
  pcVar22 = (char *)plVar15[0x15];
  sVar14 = strlen(pcVar22);
  iVar7 = FUN_008f2c60(sVar14,pcVar22);
  pcVar22 = (char *)plVar15[0x18];
  sVar14 = strlen(pcVar22);
  iVar8 = FUN_008f2c60(sVar14,pcVar22);
  pcVar22 = (char *)plVar15[0x1b];
  sVar14 = strlen(pcVar22);
  iVar9 = FUN_008f2c60(sVar14,pcVar22);
  pcVar22 = (char *)plVar15[0x1e];
  sVar14 = strlen(pcVar22);
  iVar10 = FUN_008f2c60(sVar14,pcVar22);
  pcVar22 = (char *)plVar15[0x21];
  sVar14 = strlen(pcVar22);
  iVar11 = FUN_008f2c60(sVar14,pcVar22);
  pcVar22 = (char *)plVar15[0x24];
  sVar14 = strlen(pcVar22);
  iVar12 = FUN_008f2c60(sVar14,pcVar22);
  pcVar22 = (char *)plVar15[0x25];
  sVar14 = strlen(pcVar22);
  iVar13 = FUN_008f2c60(sVar14,pcVar22);
  lVar16 = local_a0;
  *(bool *)(plVar15 + 0xb) =
       ((((((((iVar5 != 0 || iVar4 != 0) || iVar6 != 0) || iVar7 != 0) || iVar8 != 0) || iVar9 != 0)
         || iVar10 != 0) || iVar11 != 0) || iVar12 != 0) || iVar13 != 0;
  plVar2 = DAT_043f1798;
  lVar26 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar21 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar21 = plVar2;
    }
    uVar18 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar21,lVar16,0,8);
        plVar2 = DAT_043f1798;
        lVar26 = local_d0;
        goto joined_r0x016c63a0;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,lVar16,0,8);
    plVar2 = DAT_043f1798;
    lVar26 = local_d0;
  }
joined_r0x016c63a0:
  pvVar25 = local_100;
  local_d0 = lVar26;
  if (((local_e0 & 1) != 0) && (lVar26 != 0)) {
    plVar21 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar21 = plVar2;
    }
    uVar18 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar21,lVar26,0,8);
        plVar2 = DAT_043f1798;
        pvVar25 = local_100;
        goto joined_r0x016c6c30;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,lVar26,0,8);
    plVar2 = DAT_043f1798;
    pvVar25 = local_100;
  }
joined_r0x016c6c30:
  pvVar3 = local_130;
  local_100 = pvVar25;
  if (((local_110 & 1) != 0) && (pvVar25 != (void *)0x0)) {
    plVar21 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar21 = plVar2;
    }
    uVar18 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar21,pvVar25,0,8);
        plVar2 = DAT_043f1798;
        pvVar3 = local_130;
        goto joined_r0x016c6508;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,pvVar25,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_130;
  }
joined_r0x016c6508:
  pvVar25 = local_160;
  local_130 = pvVar3;
  if (((local_140 & 1) != 0) && (pvVar3 != (void *)0x0)) {
    plVar21 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar21 = plVar2;
    }
    uVar18 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar21,pvVar3,0,8);
        plVar2 = DAT_043f1798;
        pvVar25 = local_160;
        goto joined_r0x016c6c70;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,pvVar3,0,8);
    plVar2 = DAT_043f1798;
    pvVar25 = local_160;
  }
joined_r0x016c6c70:
  pvVar3 = local_190;
  local_160 = pvVar25;
  if (((local_170 & 1) != 0) && (pvVar25 != (void *)0x0)) {
    plVar21 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar21 = plVar2;
    }
    uVar18 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar21,pvVar25,0,8);
        plVar2 = DAT_043f1798;
        pvVar3 = local_190;
        goto joined_r0x016c6670;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,pvVar25,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_190;
  }
joined_r0x016c6670:
  pvVar25 = local_1c0;
  local_190 = pvVar3;
  if (((local_1a0 & 1) != 0) && (pvVar3 != (void *)0x0)) {
    plVar21 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar21 = plVar2;
    }
    uVar18 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar21,pvVar3,0,8);
        plVar2 = DAT_043f1798;
        pvVar25 = local_1c0;
        goto joined_r0x016c6cb0;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,pvVar3,0,8);
    plVar2 = DAT_043f1798;
    pvVar25 = local_1c0;
  }
joined_r0x016c6cb0:
  pvVar3 = local_1f0;
  local_1c0 = pvVar25;
  if (((local_1d0 & 1) != 0) && (pvVar25 != (void *)0x0)) {
    plVar21 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar21 = plVar2;
    }
    uVar18 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar21,pvVar25,0,8);
        plVar2 = DAT_043f1798;
        pvVar3 = local_1f0;
        goto joined_r0x016c67d8;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,pvVar25,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_1f0;
  }
joined_r0x016c67d8:
  pvVar25 = local_220;
  local_1f0 = pvVar3;
  if (((local_200 & 1) != 0) && (pvVar3 != (void *)0x0)) {
    plVar21 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar21 = plVar2;
    }
    uVar18 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar21,pvVar3,0,8);
        plVar2 = DAT_043f1798;
        pvVar25 = local_220;
        goto joined_r0x016c6cf0;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,pvVar3,0,8);
    plVar2 = DAT_043f1798;
    pvVar25 = local_220;
  }
joined_r0x016c6cf0:
  pvVar3 = local_250;
  local_220 = pvVar25;
  if (((local_230 & 1) != 0) && (pvVar25 != (void *)0x0)) {
    plVar21 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar21 = plVar2;
    }
    uVar18 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar21,pvVar25,0,8);
        plVar2 = DAT_043f1798;
        pvVar3 = local_250;
        goto joined_r0x016c6940;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,pvVar25,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_250;
  }
joined_r0x016c6940:
  DAT_043f1798 = plVar2;
  local_250 = pvVar3;
  if (((local_260 & 1) != 0) && (pvVar3 != (void *)0x0)) {
    plVar21 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar21 = plVar2;
    }
    uVar18 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar21,pvVar3,0,8);
        goto LAB_016c69f0;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,pvVar3,0,8);
  }
LAB_016c69f0:
  uVar20 = *(undefined8 *)(lVar24 + 0x20);
  FUN_0014fef0(uVar20);
  (**(code **)*plVar15)(plVar15,uVar20);
  (**(code **)(*plVar15 + 0x10))(plVar15);
  pvVar25 = local_380;
  if ((local_390 & 1) == 0) {
    pvVar25 = (void *)((long)&local_390 + 1);
  }
  FUN_001522a0(uVar20,pvVar25);
  pvVar25 = local_380;
  plVar2 = DAT_043f1798;
  if (((local_390 & 1) != 0) && (local_380 != (void *)0x0)) {
    plVar15 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar15 = plVar2;
    }
    uVar18 = (**(code **)(*plVar15 + 0xc0))(plVar15);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar15,pvVar25,0,8);
        return;
      }
    }
    (**(code **)(*plVar15 + 0x18))(plVar15,pvVar25,0,8);
  }
  return;
}


