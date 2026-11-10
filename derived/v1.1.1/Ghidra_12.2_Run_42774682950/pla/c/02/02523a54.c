/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02523a54; name: FUN_02523a54
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02523a54(long *param_1,char *param_2,char *param_3,long *param_4,char *param_5,
                 long *param_6,char *param_7,long *param_8,char *param_9,long *param_10,
                 char *param_11,long *param_12,char *param_13,long *param_14,char *param_15,
                 long *param_16,char *param_17,long *param_18,char *param_19,long *param_20)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  size_t sVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  void *pvVar15;
  undefined8 local_3e8;
  size_t local_3e0;
  void *local_3d8;
  byte local_3d0;
  undefined7 uStack_3cf;
  undefined1 local_3c8;
  undefined7 uStack_3c7;
  void *local_3c0;
  byte local_3b8;
  undefined7 uStack_3b7;
  undefined1 local_3b0;
  undefined7 uStack_3af;
  void *local_3a8;
  undefined7 local_3a0;
  undefined1 uStack_399;
  undefined7 uStack_398;
  byte local_390;
  undefined7 uStack_38f;
  undefined1 local_388;
  undefined7 uStack_387;
  void *local_380;
  undefined7 local_378;
  undefined1 uStack_371;
  undefined7 uStack_370;
  byte local_368;
  undefined7 uStack_367;
  undefined1 local_360;
  undefined7 uStack_35f;
  void *local_358;
  undefined7 local_350;
  undefined1 uStack_349;
  undefined7 uStack_348;
  byte local_340;
  undefined7 uStack_33f;
  undefined1 local_338;
  undefined7 uStack_337;
  void *local_330;
  undefined7 local_328;
  undefined1 uStack_321;
  undefined7 uStack_320;
  byte local_318;
  undefined7 uStack_317;
  undefined1 local_310;
  undefined7 uStack_30f;
  void *local_308;
  undefined7 local_300;
  undefined1 uStack_2f9;
  undefined7 uStack_2f8;
  byte local_2f0;
  undefined7 uStack_2ef;
  undefined1 local_2e8;
  undefined7 uStack_2e7;
  void *local_2e0;
  undefined7 local_2d8;
  undefined1 uStack_2d1;
  undefined7 uStack_2d0;
  byte local_2c8;
  undefined7 uStack_2c7;
  undefined1 local_2c0;
  undefined7 uStack_2bf;
  void *local_2b8;
  undefined7 local_2b0;
  undefined1 uStack_2a9;
  undefined7 uStack_2a8;
  undefined7 local_2a0;
  undefined1 uStack_299;
  undefined7 uStack_298;
  byte local_290;
  undefined7 local_28f;
  undefined1 uStack_288;
  undefined7 uStack_287;
  void *local_280;
  undefined1 *local_278;
  undefined1 *puStack_270;
  undefined4 local_268;
  byte local_260;
  undefined7 local_25f;
  undefined1 uStack_258;
  undefined7 uStack_257;
  void *local_250;
  undefined1 *local_248;
  undefined1 *local_240;
  undefined4 local_238;
  byte local_230;
  undefined7 local_22f;
  undefined1 uStack_228;
  undefined7 uStack_227;
  void *local_220;
  undefined1 *local_218;
  undefined1 *local_210;
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
  
  lVar14 = *param_1;
  local_3e0 = 0;
  local_3d8 = (void *)0x0;
  local_3e8 = 0;
  sVar4 = strlen(param_2);
  plVar2 = DAT_043f1798;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar1 = tpidr_el0;
  if (sVar4 < 0x17) {
    local_3e8 = CONCAT71(local_3e8._1_7_,(char)((int)sVar4 << 1));
    pvVar15 = (void *)((ulong)&local_3e8 | 1);
    if (sVar4 != 0) goto LAB_02523b04;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar5 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar5 = plVar2;
    }
    pvVar15 = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar8,8);
    local_3e8 = uVar8 | 1;
    local_3e0 = sVar4;
    local_3d8 = pvVar15;
LAB_02523b04:
    memcpy(pvVar15,param_2,sVar4);
  }
  *(undefined1 *)((long)pvVar15 + sVar4) = 0;
  plVar2 = DAT_043f1798;
  plVar5 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar5 = plVar2;
  }
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x150,8);
  plVar5[4] = 0;
  plVar12 = plVar5 + 1;
  *plVar12 = 0;
  *(undefined4 *)(plVar5 + 5) = 0x3f800000;
  plVar5[6] = (long)FUN_02526f50;
  plVar5[7] = (long)FUN_02527000;
  *plVar5 = (long)&PTR_FUN_0425c4a0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar5[8] = 0;
  plVar5[9] = 0;
  plVar5[10] = 0;
  *(undefined1 *)(plVar5 + 0xb) = 0;
  plVar5[0xc] = (long)param_3;
  plVar5[0xd] = *param_4;
  plVar5[0xe] = (long)param_5;
  plVar5[0xf] = *param_6;
  plVar5[0x10] = (long)param_7;
  plVar5[0x11] = *param_8;
  plVar5[0x12] = (long)param_9;
  plVar5[0x13] = *param_10;
  plVar5[0x14] = (long)param_11;
  plVar5[0x15] = *param_12;
  plVar5[0x16] = (long)param_13;
  plVar5[0x17] = *param_14;
  plVar5[0x18] = (long)param_15;
  plVar5[0x19] = *param_16;
  plVar5[0x1a] = (long)param_17;
  plVar5[0x1b] = *param_18;
  plVar5[0x1c] = (long)param_19;
  lVar10 = *param_20;
  plVar5[0x23] = (long)&LAB_02527470;
  plVar5[0x24] = (long)&LAB_02527750;
  plVar5[0x1f] = (long)&DAT_0392da3c;
  plVar5[0x20] = 0;
  plVar5[0x25] = (long)&LAB_02527760;
  plVar5[0x21] = 0;
  plVar5[0x22] = (long)FUN_02527190;
  plVar5[0x29] = 0;
  plVar5[0x26] = 0;
  plVar5[0x27] = 0;
  *(undefined1 *)(plVar5 + 0x28) = 1;
  plVar5[0x1d] = lVar10;
  plVar5[0x1e] = (long)&DAT_038ca815;
  sVar4 = strlen(param_3);
  plVar2 = DAT_043f1798;
  local_80 = 0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_80 = (byte)((int)sVar4 << 1);
    pvVar15 = (void *)((ulong)&local_80 | 1);
    if (sVar4 != 0) goto LAB_02523ce8;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    pvVar15 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar8,8);
    local_80 = (byte)uVar8 | 1;
    uStack_7f = (undefined7)(uVar8 >> 8);
    local_78 = (undefined1)sVar4;
    uStack_77 = (undefined7)(sVar4 >> 8);
    local_70 = pvVar15;
LAB_02523ce8:
    memcpy(pvVar15,param_3,sVar4);
  }
  local_280 = local_70;
  uStack_287 = uStack_77;
  uStack_288 = local_78;
  local_28f = uStack_7f;
  local_290 = local_80;
  *(undefined1 *)((long)pvVar15 + sVar4) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = 0;
  uStack_7f = 0;
  local_2a0 = 0;
  uStack_299 = 0;
  uStack_298 = 0;
  local_278 = &LAB_02527764;
  puStack_270 = &LAB_02527780;
  local_268 = 0xffffffff;
  sVar4 = strlen(param_5);
  plVar2 = DAT_043f1798;
  local_2c8 = 0;
  uStack_2c7 = 0;
  local_2c0 = 0;
  uStack_2bf = 0;
  local_2b8 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_2c8 = (byte)((int)sVar4 << 1);
    pvVar15 = (void *)((ulong)&local_2c8 | 1);
    if (sVar4 != 0) goto LAB_02523d8c;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    pvVar15 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar8,8);
    local_2c8 = (byte)uVar8 | 1;
    uStack_2c7 = (undefined7)(uVar8 >> 8);
    local_2c0 = (undefined1)sVar4;
    uStack_2bf = (undefined7)(sVar4 >> 8);
    local_2b8 = pvVar15;
LAB_02523d8c:
    memcpy(pvVar15,param_5,sVar4);
  }
  local_250 = local_2b8;
  uStack_257 = uStack_2bf;
  uStack_258 = local_2c0;
  local_25f = uStack_2c7;
  local_260 = local_2c8;
  *(undefined1 *)((long)pvVar15 + sVar4) = 0;
  local_2c8 = 0;
  uStack_2c7 = 0;
  local_2c0 = 0;
  uStack_2bf = 0;
  local_2b8 = (void *)0x0;
  local_2b0 = 0;
  uStack_2a9 = 0;
  uStack_2a8 = 0;
  local_240 = &LAB_025277b8;
  local_248 = &LAB_0252779c;
  local_238 = 0xffffffff;
  sVar4 = strlen(param_7);
  plVar2 = DAT_043f1798;
  local_2f0 = 0;
  uStack_2ef = 0;
  local_2e8 = 0;
  uStack_2e7 = 0;
  local_2e0 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_2f0 = (byte)((int)sVar4 << 1);
    pvVar15 = (void *)((ulong)&local_2f0 | 1);
    if (sVar4 != 0) goto LAB_02523e34;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    pvVar15 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar8,8);
    local_2f0 = (byte)uVar8 | 1;
    uStack_2ef = (undefined7)(uVar8 >> 8);
    local_2e8 = (undefined1)sVar4;
    uStack_2e7 = (undefined7)(sVar4 >> 8);
    local_2e0 = pvVar15;
LAB_02523e34:
    memcpy(pvVar15,param_7,sVar4);
  }
  local_220 = local_2e0;
  uStack_227 = uStack_2e7;
  uStack_228 = local_2e8;
  local_22f = uStack_2ef;
  local_230 = local_2f0;
  *(undefined1 *)((long)pvVar15 + sVar4) = 0;
  local_2f0 = 0;
  uStack_2ef = 0;
  local_2e8 = 0;
  uStack_2e7 = 0;
  local_2e0 = (void *)0x0;
  local_2d8 = 0;
  uStack_2d1 = 0;
  uStack_2d0 = 0;
  local_210 = &LAB_025277f0;
  local_218 = &LAB_025277d4;
  local_208 = 0xffffffff;
  sVar4 = strlen(param_9);
  plVar2 = DAT_043f1798;
  local_318 = 0;
  uStack_317 = 0;
  local_310 = 0;
  uStack_30f = 0;
  local_308 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_318 = (byte)((int)sVar4 << 1);
    pvVar15 = (void *)((ulong)&local_318 | 1);
    if (sVar4 != 0) goto LAB_02523ed8;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    pvVar15 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar8,8);
    local_318 = (byte)uVar8 | 1;
    uStack_317 = (undefined7)(uVar8 >> 8);
    local_310 = (undefined1)sVar4;
    uStack_30f = (undefined7)(sVar4 >> 8);
    local_308 = pvVar15;
LAB_02523ed8:
    memcpy(pvVar15,param_9,sVar4);
  }
  local_1f0 = local_308;
  uStack_1f7 = uStack_30f;
  uStack_1f8 = local_310;
  local_1ff = uStack_317;
  local_200 = local_318;
  *(undefined1 *)((long)pvVar15 + sVar4) = 0;
  local_318 = 0;
  uStack_317 = 0;
  local_310 = 0;
  uStack_30f = 0;
  local_308 = (void *)0x0;
  local_300 = 0;
  uStack_2f9 = 0;
  uStack_2f8 = 0;
  local_1e0 = &LAB_02527828;
  local_1e8 = &LAB_0252780c;
  local_1d8 = 0xffffffff;
  sVar4 = strlen(param_11);
  plVar2 = DAT_043f1798;
  local_340 = 0;
  uStack_33f = 0;
  local_338 = 0;
  uStack_337 = 0;
  local_330 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_340 = (byte)((int)sVar4 << 1);
    pvVar15 = (void *)((ulong)&local_340 | 1);
    if (sVar4 != 0) goto LAB_02523f80;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    pvVar15 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar8,8);
    local_340 = (byte)uVar8 | 1;
    uStack_33f = (undefined7)(uVar8 >> 8);
    local_338 = (undefined1)sVar4;
    uStack_337 = (undefined7)(sVar4 >> 8);
    local_330 = pvVar15;
LAB_02523f80:
    memcpy(pvVar15,param_11,sVar4);
  }
  local_1c0 = local_330;
  uStack_1c7 = uStack_337;
  uStack_1c8 = local_338;
  local_1cf = uStack_33f;
  local_1d0 = local_340;
  *(undefined1 *)((long)pvVar15 + sVar4) = 0;
  local_340 = 0;
  uStack_33f = 0;
  local_338 = 0;
  uStack_337 = 0;
  local_330 = (void *)0x0;
  local_328 = 0;
  uStack_321 = 0;
  uStack_320 = 0;
  local_1b0 = &LAB_02527860;
  local_1b8 = &LAB_02527844;
  local_1a8 = 0xffffffff;
  sVar4 = strlen(param_13);
  plVar2 = DAT_043f1798;
  local_368 = 0;
  uStack_367 = 0;
  local_360 = 0;
  uStack_35f = 0;
  local_358 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_368 = (byte)((int)sVar4 << 1);
    pvVar15 = (void *)((ulong)&local_368 | 1);
    if (sVar4 != 0) goto LAB_02524024;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    pvVar15 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar8,8);
    local_368 = (byte)uVar8 | 1;
    uStack_367 = (undefined7)(uVar8 >> 8);
    local_360 = (undefined1)sVar4;
    uStack_35f = (undefined7)(sVar4 >> 8);
    local_358 = pvVar15;
LAB_02524024:
    memcpy(pvVar15,param_13,sVar4);
  }
  local_190 = local_358;
  uStack_197 = uStack_35f;
  uStack_198 = local_360;
  local_19f = uStack_367;
  local_1a0 = local_368;
  *(undefined1 *)((long)pvVar15 + sVar4) = 0;
  local_360 = 0;
  uStack_35f = 0;
  local_358 = (void *)0x0;
  local_368 = 0;
  uStack_367 = 0;
  local_350 = 0;
  uStack_349 = 0;
  uStack_348 = 0;
  local_178 = 0xffffffff;
  local_180 = &LAB_02527898;
  local_188 = &LAB_0252787c;
  sVar4 = strlen(param_15);
  plVar2 = DAT_043f1798;
  local_390 = 0;
  uStack_38f = 0;
  local_388 = 0;
  uStack_387 = 0;
  local_380 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_390 = (byte)((int)sVar4 << 1);
    pvVar15 = (void *)((ulong)&local_390 | 1);
    if (sVar4 != 0) goto LAB_025240d0;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    pvVar15 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar8,8);
    local_390 = (byte)uVar8 | 1;
    uStack_38f = (undefined7)(uVar8 >> 8);
    local_388 = (undefined1)sVar4;
    uStack_387 = (undefined7)(sVar4 >> 8);
    local_380 = pvVar15;
LAB_025240d0:
    memcpy(pvVar15,param_15,sVar4);
  }
  local_160 = local_380;
  uStack_167 = uStack_387;
  uStack_168 = local_388;
  *(undefined1 *)((long)pvVar15 + sVar4) = 0;
  local_170 = local_390;
  local_388 = 0;
  uStack_387 = 0;
  local_380 = (void *)0x0;
  local_16f = uStack_38f;
  local_158 = &LAB_025278b4;
  local_390 = 0;
  uStack_38f = 0;
  local_378 = 0;
  uStack_371 = 0;
  uStack_370 = 0;
  local_148 = 0xffffffff;
  local_150 = &LAB_025278d0;
  sVar4 = strlen(param_17);
  plVar2 = DAT_043f1798;
  local_3b8 = 0;
  uStack_3b7 = 0;
  local_3b0 = 0;
  uStack_3af = 0;
  local_3a8 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_3b8 = (byte)((int)sVar4 << 1);
    pvVar15 = (void *)((ulong)&local_3b8 | 1);
    if (sVar4 != 0) goto LAB_0252417c;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    pvVar15 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar8,8);
    local_3b8 = (byte)uVar8 | 1;
    uStack_3b7 = (undefined7)(uVar8 >> 8);
    local_3b0 = (undefined1)sVar4;
    uStack_3af = (undefined7)(sVar4 >> 8);
    local_3a8 = pvVar15;
LAB_0252417c:
    memcpy(pvVar15,param_17,sVar4);
  }
  local_130 = local_3a8;
  uStack_137 = uStack_3af;
  uStack_138 = local_3b0;
  *(undefined1 *)((long)pvVar15 + sVar4) = 0;
  local_140 = local_3b8;
  local_3b0 = 0;
  uStack_3af = 0;
  local_3a8 = (void *)0x0;
  local_13f = uStack_3b7;
  local_128 = &LAB_025278ec;
  local_3b8 = 0;
  uStack_3b7 = 0;
  local_3a0 = 0;
  uStack_399 = 0;
  uStack_398 = 0;
  local_118 = 0xffffffff;
  local_120 = &LAB_02527908;
  sVar4 = strlen(param_19);
  plVar2 = DAT_043f1798;
  local_3d0 = 0;
  uStack_3cf = 0;
  local_3c8 = 0;
  uStack_3c7 = 0;
  local_3c0 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_3d0 = (byte)((int)sVar4 << 1);
    pvVar15 = (void *)((ulong)&local_3d0 | 1);
    if (sVar4 != 0) goto LAB_02524228;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    pvVar15 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar8,8);
    local_3d0 = (byte)uVar8 | 1;
    uStack_3cf = (undefined7)(uVar8 >> 8);
    local_3c8 = (undefined1)sVar4;
    uStack_3c7 = (undefined7)(sVar4 >> 8);
    local_3c0 = pvVar15;
LAB_02524228:
    memcpy(pvVar15,param_19,sVar4);
  }
  *(undefined1 *)((long)pvVar15 + sVar4) = 0;
  local_110 = local_3d0;
  local_10f = uStack_3cf;
  local_f8 = &LAB_02527924;
  local_e0 = 6;
  local_100 = local_3c0;
  local_f0 = &LAB_02527940;
  uStack_108 = local_3c8;
  uStack_107 = uStack_3c7;
  local_e8 = 0xffffffff;
  local_df = 0x656e;
  local_dd = 0x77;
  local_dc = 0;
  local_d4 = 0;
  local_c0 = &LAB_025279a4;
  local_d0 = 0;
  local_c8 = &LAB_0252795c;
  local_b0 = 8;
  local_b8 = 0xffffffff;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_98 = &LAB_025279ec;
  local_a0 = 0;
  local_90 = &LAB_02527a34;
  local_88 = 0xffffffff;
  FUN_02527a7c(plVar12,&local_290,0xb);
  lVar6 = FUN_008cca50();
  lVar10 = 0;
  do {
    lVar7 = FUN_008e8c90(plVar12,lVar6 + lVar10);
    if (lVar7 != 0) {
      FUN_008f2aec(&local_80,plVar12,lVar7);
      plVar2 = DAT_043f1798;
      lVar7 = CONCAT71(uStack_7f,local_80);
      local_80 = 0;
      uStack_7f = 0;
      if (lVar7 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar7 + 0x10) & 1) != 0)) &&
           (lVar13 = *(long *)(lVar7 + 0x20), lVar13 != 0)) {
          plVar9 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar9 = plVar2;
          }
          uVar8 = (**(code **)(*plVar9 + 0xc0))(plVar9);
          if ((uVar8 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar9,lVar13,0,8);
              goto LAB_02524828;
            }
          }
          (**(code **)(*plVar9 + 0x18))(plVar9,lVar13,0,8);
        }
LAB_02524828:
        plVar2 = DAT_043f1798;
        plVar9 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar9 = plVar2;
        }
        uVar8 = (**(code **)(*plVar9 + 0xc0))(plVar9);
        if ((uVar8 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar9,lVar7,0,8);
            goto LAB_025247e0;
          }
        }
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar7,0,8);
      }
    }
LAB_025247e0:
    lVar7 = local_a0;
    lVar10 = lVar10 + 0x18;
  } while (lVar10 != 0x300);
  *(undefined1 *)(plVar5 + 0xb) = 1;
  plVar2 = DAT_043f1798;
  lVar10 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar12 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar12 = plVar2;
    }
    uVar8 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar12,lVar7,0,8);
        plVar2 = DAT_043f1798;
        lVar10 = local_d0;
        goto joined_r0x02524970;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,lVar7,0,8);
    plVar2 = DAT_043f1798;
    lVar10 = local_d0;
  }
joined_r0x02524970:
  pvVar15 = local_100;
  local_d0 = lVar10;
  if (((local_e0 & 1) != 0) && (lVar10 != 0)) {
    plVar12 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar12 = plVar2;
    }
    uVar8 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar12,lVar10,0,8);
        plVar2 = DAT_043f1798;
        pvVar15 = local_100;
        goto joined_r0x025252b0;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,lVar10,0,8);
    plVar2 = DAT_043f1798;
    pvVar15 = local_100;
  }
joined_r0x025252b0:
  pvVar3 = local_130;
  local_100 = pvVar15;
  if (((local_110 & 1) != 0) && (pvVar15 != (void *)0x0)) {
    plVar12 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar12 = plVar2;
    }
    uVar8 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar12,pvVar15,0,8);
        plVar2 = DAT_043f1798;
        pvVar3 = local_130;
        goto joined_r0x02524ad8;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,pvVar15,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_130;
  }
joined_r0x02524ad8:
  pvVar15 = local_160;
  local_130 = pvVar3;
  if (((local_140 & 1) != 0) && (pvVar3 != (void *)0x0)) {
    plVar12 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar12 = plVar2;
    }
    uVar8 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar12,pvVar3,0,8);
        plVar2 = DAT_043f1798;
        pvVar15 = local_160;
        goto joined_r0x025252f0;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,pvVar3,0,8);
    plVar2 = DAT_043f1798;
    pvVar15 = local_160;
  }
joined_r0x025252f0:
  pvVar3 = local_190;
  local_160 = pvVar15;
  if (((local_170 & 1) != 0) && (pvVar15 != (void *)0x0)) {
    plVar12 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar12 = plVar2;
    }
    uVar8 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar12,pvVar15,0,8);
        plVar2 = DAT_043f1798;
        pvVar3 = local_190;
        goto joined_r0x02524c40;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,pvVar15,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_190;
  }
joined_r0x02524c40:
  pvVar15 = local_1c0;
  local_190 = pvVar3;
  if (((local_1a0 & 1) != 0) && (pvVar3 != (void *)0x0)) {
    plVar12 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar12 = plVar2;
    }
    uVar8 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar12,pvVar3,0,8);
        plVar2 = DAT_043f1798;
        pvVar15 = local_1c0;
        goto joined_r0x02525330;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,pvVar3,0,8);
    plVar2 = DAT_043f1798;
    pvVar15 = local_1c0;
  }
joined_r0x02525330:
  pvVar3 = local_1f0;
  local_1c0 = pvVar15;
  if (((local_1d0 & 1) != 0) && (pvVar15 != (void *)0x0)) {
    plVar12 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar12 = plVar2;
    }
    uVar8 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar12,pvVar15,0,8);
        plVar2 = DAT_043f1798;
        pvVar3 = local_1f0;
        goto joined_r0x02524da8;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,pvVar15,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_1f0;
  }
joined_r0x02524da8:
  pvVar15 = local_220;
  local_1f0 = pvVar3;
  if (((local_200 & 1) != 0) && (pvVar3 != (void *)0x0)) {
    plVar12 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar12 = plVar2;
    }
    uVar8 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar12,pvVar3,0,8);
        plVar2 = DAT_043f1798;
        pvVar15 = local_220;
        goto joined_r0x02525370;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,pvVar3,0,8);
    plVar2 = DAT_043f1798;
    pvVar15 = local_220;
  }
joined_r0x02525370:
  pvVar3 = local_250;
  local_220 = pvVar15;
  if (((local_230 & 1) != 0) && (pvVar15 != (void *)0x0)) {
    plVar12 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar12 = plVar2;
    }
    uVar8 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar12,pvVar15,0,8);
        plVar2 = DAT_043f1798;
        pvVar3 = local_250;
        goto joined_r0x02524f10;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,pvVar15,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_250;
  }
joined_r0x02524f10:
  pvVar15 = local_280;
  local_250 = pvVar3;
  if (((local_260 & 1) != 0) && (pvVar3 != (void *)0x0)) {
    plVar12 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar12 = plVar2;
    }
    uVar8 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar12,pvVar3,0,8);
        plVar2 = DAT_043f1798;
        pvVar15 = local_280;
        goto joined_r0x025253b0;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,pvVar3,0,8);
    plVar2 = DAT_043f1798;
    pvVar15 = local_280;
  }
joined_r0x025253b0:
  DAT_043f1798 = plVar2;
  local_280 = pvVar15;
  if (((local_290 & 1) != 0) && (pvVar15 != (void *)0x0)) {
    plVar12 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar12 = plVar2;
    }
    uVar8 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar12,pvVar15,0,8);
        goto LAB_02525074;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,pvVar15,0,8);
  }
LAB_02525074:
  uVar11 = *(undefined8 *)(lVar14 + 0x20);
  FUN_0014fef0(uVar11);
  (**(code **)*plVar5)(plVar5,uVar11);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  pvVar15 = local_3d8;
  if ((local_3e8 & 1) == 0) {
    pvVar15 = (void *)((long)&local_3e8 + 1);
  }
  FUN_001522a0(uVar11,pvVar15);
  pvVar15 = local_3d8;
  plVar2 = DAT_043f1798;
  if (((local_3e8 & 1) != 0) && (local_3d8 != (void *)0x0)) {
    plVar5 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar5 = plVar2;
    }
    uVar8 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar5,pvVar15,0,8);
        return;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,pvVar15,0,8);
  }
  return;
}


