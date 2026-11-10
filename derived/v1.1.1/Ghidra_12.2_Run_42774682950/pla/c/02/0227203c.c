/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0227203c; name: FUN_0227203c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0227203c(long *param_1,char *param_2,char *param_3,long *param_4,char *param_5,
                 long *param_6,char *param_7,long *param_8,char *param_9,long *param_10,
                 char *param_11,long *param_12,char *param_13,long *param_14,char *param_15,
                 long *param_16,char *param_17,long *param_18)

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
  
  lVar14 = *param_1;
  local_388 = 0;
  local_380 = (void *)0x0;
  local_390 = 0;
  sVar4 = strlen(param_2);
  plVar2 = DAT_043f1798;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar1 = tpidr_el0;
  if (sVar4 < 0x17) {
    local_390 = CONCAT71(local_390._1_7_,(char)((int)sVar4 << 1));
    pvVar15 = (void *)((ulong)&local_390 | 1);
    if (sVar4 != 0) goto LAB_022720e8;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar5 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar5 = plVar2;
    }
    pvVar15 = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar8,8);
    local_390 = uVar8 | 1;
    local_388 = sVar4;
    local_380 = pvVar15;
LAB_022720e8:
    memcpy(pvVar15,param_2,sVar4);
  }
  *(undefined1 *)((long)pvVar15 + sVar4) = 0;
  plVar2 = DAT_043f1798;
  plVar5 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar5 = plVar2;
  }
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x140,8);
  plVar5[4] = 0;
  plVar12 = plVar5 + 1;
  *plVar12 = 0;
  plVar5[6] = (long)FUN_02279040;
  plVar5[7] = (long)FUN_022790f0;
  *plVar5 = (long)&PTR_FUN_0425b920;
  plVar5[2] = 0;
  plVar5[3] = 0;
  *(undefined4 *)(plVar5 + 5) = 0x3f800000;
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
  lVar10 = *param_18;
  plVar5[0x23] = (long)&LAB_02274430;
  plVar5[0x21] = (long)&LAB_02279560;
  plVar5[0x22] = (long)&LAB_02274420;
  plVar5[0x1d] = (long)&DAT_0392da3c;
  plVar5[0x1e] = 0;
  *(undefined1 *)(plVar5 + 0x26) = 1;
  plVar5[0x1f] = 0;
  plVar5[0x20] = (long)FUN_02279280;
  plVar5[0x27] = 0;
  plVar5[0x24] = 0;
  plVar5[0x25] = 0;
  plVar5[0x1b] = lVar10;
  plVar5[0x1c] = (long)&DAT_038ca815;
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
    if (sVar4 != 0) goto LAB_022722ac;
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
LAB_022722ac:
    memcpy(pvVar15,param_3,sVar4);
  }
  local_250 = local_70;
  uStack_257 = uStack_77;
  uStack_258 = local_78;
  local_25f = uStack_7f;
  local_260 = local_80;
  *(undefined1 *)((long)pvVar15 + sVar4) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = 0;
  uStack_7f = 0;
  local_270 = 0;
  uStack_269 = 0;
  uStack_268 = 0;
  local_248 = &LAB_0227983c;
  puStack_240 = &LAB_02279858;
  local_238 = 0xffffffff;
  sVar4 = strlen(param_5);
  plVar2 = DAT_043f1798;
  local_298 = 0;
  uStack_297 = 0;
  local_290 = 0;
  uStack_28f = 0;
  local_288 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_298 = (byte)((int)sVar4 << 1);
    pvVar15 = (void *)((ulong)&local_298 | 1);
    if (sVar4 != 0) goto LAB_0227234c;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    pvVar15 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar8,8);
    local_298 = (byte)uVar8 | 1;
    uStack_297 = (undefined7)(uVar8 >> 8);
    local_290 = (undefined1)sVar4;
    uStack_28f = (undefined7)(sVar4 >> 8);
    local_288 = pvVar15;
LAB_0227234c:
    memcpy(pvVar15,param_5,sVar4);
  }
  local_220 = local_288;
  uStack_227 = uStack_28f;
  uStack_228 = local_290;
  local_22f = uStack_297;
  local_230 = local_298;
  *(undefined1 *)((long)pvVar15 + sVar4) = 0;
  local_298 = 0;
  uStack_297 = 0;
  local_290 = 0;
  uStack_28f = 0;
  local_288 = (void *)0x0;
  local_280 = 0;
  uStack_279 = 0;
  uStack_278 = 0;
  local_208 = 0xffffffff;
  local_218 = &LAB_02279874;
  puStack_210 = &LAB_02279890;
  sVar4 = strlen(param_7);
  plVar2 = DAT_043f1798;
  local_2c0 = 0;
  uStack_2bf = 0;
  local_2b8 = 0;
  uStack_2b7 = 0;
  local_2b0 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_2c0 = (byte)((int)sVar4 << 1);
    pvVar15 = (void *)((ulong)&local_2c0 | 1);
    if (sVar4 != 0) goto LAB_022723e8;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    pvVar15 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar8,8);
    local_2c0 = (byte)uVar8 | 1;
    uStack_2bf = (undefined7)(uVar8 >> 8);
    local_2b8 = (undefined1)sVar4;
    uStack_2b7 = (undefined7)(sVar4 >> 8);
    local_2b0 = pvVar15;
LAB_022723e8:
    memcpy(pvVar15,param_7,sVar4);
  }
  local_1f0 = local_2b0;
  uStack_1f7 = uStack_2b7;
  uStack_1f8 = local_2b8;
  local_1ff = uStack_2bf;
  local_200 = local_2c0;
  *(undefined1 *)((long)pvVar15 + sVar4) = 0;
  local_2c0 = 0;
  uStack_2bf = 0;
  local_2b8 = 0;
  uStack_2b7 = 0;
  local_2b0 = (void *)0x0;
  local_2a8 = 0;
  uStack_2a1 = 0;
  uStack_2a0 = 0;
  local_1e0 = &LAB_022798c8;
  local_1e8 = &LAB_022798ac;
  local_1d8 = 0xffffffff;
  sVar4 = strlen(param_9);
  plVar2 = DAT_043f1798;
  local_2e8 = 0;
  uStack_2e7 = 0;
  local_2e0 = 0;
  uStack_2df = 0;
  local_2d8 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_2e8 = (byte)((int)sVar4 << 1);
    pvVar15 = (void *)((ulong)&local_2e8 | 1);
    if (sVar4 != 0) goto LAB_02272484;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    pvVar15 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar8,8);
    local_2e8 = (byte)uVar8 | 1;
    uStack_2e7 = (undefined7)(uVar8 >> 8);
    local_2e0 = (undefined1)sVar4;
    uStack_2df = (undefined7)(sVar4 >> 8);
    local_2d8 = pvVar15;
LAB_02272484:
    memcpy(pvVar15,param_9,sVar4);
  }
  local_1c0 = local_2d8;
  uStack_1c7 = uStack_2df;
  uStack_1c8 = local_2e0;
  local_1cf = uStack_2e7;
  local_1d0 = local_2e8;
  *(undefined1 *)((long)pvVar15 + sVar4) = 0;
  local_2e8 = 0;
  uStack_2e7 = 0;
  local_2e0 = 0;
  uStack_2df = 0;
  local_2d8 = (void *)0x0;
  local_2d0 = 0;
  uStack_2c9 = 0;
  uStack_2c8 = 0;
  local_1b0 = &LAB_02279900;
  local_1b8 = &LAB_022798e4;
  local_1a8 = 0xffffffff;
  sVar4 = strlen(param_11);
  plVar2 = DAT_043f1798;
  local_310 = 0;
  uStack_30f = 0;
  local_308 = 0;
  uStack_307 = 0;
  local_300 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_310 = (byte)((int)sVar4 << 1);
    pvVar15 = (void *)((ulong)&local_310 | 1);
    if (sVar4 != 0) goto LAB_02272528;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    pvVar15 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar8,8);
    local_310 = (byte)uVar8 | 1;
    uStack_30f = (undefined7)(uVar8 >> 8);
    local_308 = (undefined1)sVar4;
    uStack_307 = (undefined7)(sVar4 >> 8);
    local_300 = pvVar15;
LAB_02272528:
    memcpy(pvVar15,param_11,sVar4);
  }
  local_190 = local_300;
  uStack_197 = uStack_307;
  uStack_198 = local_308;
  local_19f = uStack_30f;
  local_1a0 = local_310;
  *(undefined1 *)((long)pvVar15 + sVar4) = 0;
  local_310 = 0;
  uStack_30f = 0;
  local_308 = 0;
  uStack_307 = 0;
  local_300 = (void *)0x0;
  local_2f8 = 0;
  uStack_2f1 = 0;
  uStack_2f0 = 0;
  local_180 = &LAB_02279938;
  local_188 = &LAB_0227991c;
  local_178 = 0xffffffff;
  sVar4 = strlen(param_13);
  plVar2 = DAT_043f1798;
  local_338 = 0;
  uStack_337 = 0;
  local_330 = 0;
  uStack_32f = 0;
  local_328 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_338 = (byte)((int)sVar4 << 1);
    pvVar15 = (void *)((ulong)&local_338 | 1);
    if (sVar4 != 0) goto LAB_022725c8;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    pvVar15 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar8,8);
    local_338 = (byte)uVar8 | 1;
    uStack_337 = (undefined7)(uVar8 >> 8);
    local_330 = (undefined1)sVar4;
    uStack_32f = (undefined7)(sVar4 >> 8);
    local_328 = pvVar15;
LAB_022725c8:
    memcpy(pvVar15,param_13,sVar4);
  }
  local_160 = local_328;
  uStack_167 = uStack_32f;
  uStack_168 = local_330;
  local_16f = uStack_337;
  local_170 = local_338;
  *(undefined1 *)((long)pvVar15 + sVar4) = 0;
  local_330 = 0;
  uStack_32f = 0;
  local_328 = (void *)0x0;
  local_338 = 0;
  uStack_337 = 0;
  local_320 = 0;
  uStack_319 = 0;
  uStack_318 = 0;
  local_150 = &LAB_02279970;
  local_158 = &LAB_02279954;
  local_148 = 0xffffffff;
  sVar4 = strlen(param_15);
  plVar2 = DAT_043f1798;
  local_360 = 0;
  uStack_35f = 0;
  local_358 = 0;
  uStack_357 = 0;
  local_350 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_360 = (byte)((int)sVar4 << 1);
    pvVar15 = (void *)((ulong)&local_360 | 1);
    if (sVar4 != 0) goto LAB_02272674;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    pvVar15 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar8,8);
    local_360 = (byte)uVar8 | 1;
    uStack_35f = (undefined7)(uVar8 >> 8);
    local_358 = (undefined1)sVar4;
    uStack_357 = (undefined7)(sVar4 >> 8);
    local_350 = pvVar15;
LAB_02272674:
    memcpy(pvVar15,param_15,sVar4);
  }
  local_130 = local_350;
  uStack_137 = uStack_357;
  uStack_138 = local_358;
  *(undefined1 *)((long)pvVar15 + sVar4) = 0;
  local_140 = local_360;
  local_358 = 0;
  uStack_357 = 0;
  local_350 = (void *)0x0;
  local_13f = uStack_35f;
  local_128 = &LAB_0227998c;
  local_360 = 0;
  uStack_35f = 0;
  local_348 = 0;
  uStack_341 = 0;
  uStack_340 = 0;
  local_118 = 0xffffffff;
  local_120 = &LAB_022799a8;
  sVar4 = strlen(param_17);
  plVar2 = DAT_043f1798;
  local_378 = 0;
  uStack_377 = 0;
  local_370 = 0;
  uStack_36f = 0;
  local_368 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_378 = (byte)((int)sVar4 << 1);
    pvVar15 = (void *)((ulong)&local_378 | 1);
    if (sVar4 != 0) goto LAB_02272720;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    pvVar15 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar8,8);
    local_378 = (byte)uVar8 | 1;
    uStack_377 = (undefined7)(uVar8 >> 8);
    local_370 = (undefined1)sVar4;
    uStack_36f = (undefined7)(sVar4 >> 8);
    local_368 = pvVar15;
LAB_02272720:
    memcpy(pvVar15,param_17,sVar4);
  }
  *(undefined1 *)((long)pvVar15 + sVar4) = 0;
  local_110 = local_378;
  local_10f = uStack_377;
  local_f8 = &LAB_022799c4;
  local_e0 = 6;
  local_100 = local_368;
  local_f0 = &LAB_022799e0;
  uStack_108 = local_370;
  uStack_107 = uStack_36f;
  local_e8 = 0xffffffff;
  local_df = 0x656e;
  local_dd = 0x77;
  local_dc = 0;
  local_d4 = 0;
  local_c0 = &LAB_02279a44;
  local_d0 = 0;
  local_c8 = &LAB_022799fc;
  local_b0 = 8;
  local_b8 = 0xffffffff;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_a0 = 0;
  local_90 = &LAB_02279ad4;
  local_98 = &LAB_02279a8c;
  local_88 = 0xffffffff;
  FUN_0227466c(plVar12,&local_260,10);
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
              goto LAB_02272cf8;
            }
          }
          (**(code **)(*plVar9 + 0x18))(plVar9,lVar13,0,8);
        }
LAB_02272cf8:
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
            goto LAB_02272cb0;
          }
        }
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar7,0,8);
      }
    }
LAB_02272cb0:
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
        goto joined_r0x02272e3c;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,lVar7,0,8);
    plVar2 = DAT_043f1798;
    lVar10 = local_d0;
  }
joined_r0x02272e3c:
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
        goto joined_r0x022736cc;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,lVar10,0,8);
    plVar2 = DAT_043f1798;
    pvVar15 = local_100;
  }
joined_r0x022736cc:
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
        goto joined_r0x02272fa4;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,pvVar15,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_130;
  }
joined_r0x02272fa4:
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
        goto joined_r0x0227370c;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,pvVar3,0,8);
    plVar2 = DAT_043f1798;
    pvVar15 = local_160;
  }
joined_r0x0227370c:
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
        goto joined_r0x0227310c;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,pvVar15,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_190;
  }
joined_r0x0227310c:
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
        goto joined_r0x0227374c;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,pvVar3,0,8);
    plVar2 = DAT_043f1798;
    pvVar15 = local_1c0;
  }
joined_r0x0227374c:
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
        goto joined_r0x02273274;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,pvVar15,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_1f0;
  }
joined_r0x02273274:
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
        goto joined_r0x0227378c;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,pvVar3,0,8);
    plVar2 = DAT_043f1798;
    pvVar15 = local_220;
  }
joined_r0x0227378c:
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
        goto joined_r0x022733dc;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,pvVar15,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_250;
  }
joined_r0x022733dc:
  DAT_043f1798 = plVar2;
  local_250 = pvVar3;
  if (((local_260 & 1) != 0) && (pvVar3 != (void *)0x0)) {
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
        FUN_02bcc824(plVar12,pvVar3,0,8);
        goto LAB_0227348c;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,pvVar3,0,8);
  }
LAB_0227348c:
  uVar11 = *(undefined8 *)(lVar14 + 0x20);
  FUN_0014fef0(uVar11);
  (**(code **)*plVar5)(plVar5,uVar11);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  pvVar15 = local_380;
  if ((local_390 & 1) == 0) {
    pvVar15 = (void *)((long)&local_390 + 1);
  }
  FUN_001522a0(uVar11,pvVar15);
  pvVar15 = local_380;
  plVar2 = DAT_043f1798;
  if (((local_390 & 1) != 0) && (local_380 != (void *)0x0)) {
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


