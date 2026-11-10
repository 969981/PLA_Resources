/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02542454; name: FUN_02542454
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02542454(long *param_1,char *param_2,char *param_3,long *param_4,char *param_5,
                 long *param_6,char *param_7,long *param_8,char *param_9,long *param_10,
                 char *param_11,long *param_12,char *param_13,long *param_14,char *param_15,
                 long *param_16)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  size_t sVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  void *pvVar14;
  long lVar15;
  undefined8 local_338;
  size_t local_330;
  void *local_328;
  byte local_320;
  undefined7 uStack_31f;
  undefined1 local_318;
  undefined7 uStack_317;
  void *local_310;
  byte local_308;
  undefined7 uStack_307;
  undefined1 local_300;
  undefined7 uStack_2ff;
  void *local_2f8;
  undefined7 local_2f0;
  undefined1 uStack_2e9;
  undefined7 uStack_2e8;
  byte local_2e0;
  undefined7 uStack_2df;
  undefined1 local_2d8;
  undefined7 uStack_2d7;
  void *local_2d0;
  undefined7 local_2c8;
  undefined1 uStack_2c1;
  undefined7 uStack_2c0;
  byte local_2b8;
  undefined7 uStack_2b7;
  undefined1 local_2b0;
  undefined7 uStack_2af;
  void *local_2a8;
  undefined7 local_2a0;
  undefined1 uStack_299;
  undefined7 uStack_298;
  byte local_290;
  undefined7 uStack_28f;
  undefined1 local_288;
  undefined7 uStack_287;
  void *local_280;
  undefined7 local_278;
  undefined1 uStack_271;
  undefined7 uStack_270;
  byte local_268;
  undefined7 uStack_267;
  undefined1 local_260;
  undefined7 uStack_25f;
  void *local_258;
  undefined7 local_250;
  undefined1 uStack_249;
  undefined7 uStack_248;
  undefined7 local_240;
  undefined1 uStack_239;
  undefined7 uStack_238;
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
  
  lVar9 = *param_1;
  local_330 = 0;
  local_328 = (void *)0x0;
  local_338 = 0;
  sVar4 = strlen(param_2);
  plVar2 = DAT_043f1798;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar1 = tpidr_el0;
  if (sVar4 < 0x17) {
    local_338 = CONCAT71(local_338._1_7_,(char)((int)sVar4 << 1));
    pvVar14 = (void *)((ulong)&local_338 | 1);
    if (sVar4 != 0) goto LAB_025424f4;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar5 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar5 = plVar2;
    }
    pvVar14 = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar8,8);
    local_338 = uVar8 | 1;
    local_330 = sVar4;
    local_328 = pvVar14;
LAB_025424f4:
    memcpy(pvVar14,param_2,sVar4);
  }
  *(undefined1 *)((long)pvVar14 + sVar4) = 0;
  plVar2 = DAT_043f1798;
  plVar5 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar5 = plVar2;
  }
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x130,8);
  plVar5[4] = 0;
  plVar13 = plVar5 + 1;
  *plVar13 = 0;
  *(undefined4 *)(plVar5 + 5) = 0x3f800000;
  plVar5[6] = (long)FUN_02544c50;
  plVar5[7] = (long)FUN_02544d00;
  *plVar5 = (long)&PTR_FUN_0425c540;
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
  lVar11 = *param_16;
  plVar5[0x1f] = (long)&LAB_025451b4;
  plVar5[0x20] = (long)&LAB_02545490;
  plVar5[0x1b] = (long)&DAT_0392da3c;
  plVar5[0x1c] = 0;
  plVar5[0x21] = (long)&LAB_025454a0;
  plVar5[0x1d] = 0;
  plVar5[0x1e] = (long)FUN_02544ed4;
  plVar5[0x25] = 0;
  plVar5[0x22] = 0;
  plVar5[0x23] = 0;
  *(undefined1 *)(plVar5 + 0x24) = 1;
  plVar5[0x19] = lVar11;
  plVar5[0x1a] = (long)&DAT_038ca815;
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
    pvVar14 = (void *)((ulong)&local_80 | 1);
    if (sVar4 != 0) goto LAB_025426a4;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar10 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar10 = plVar2;
    }
    pvVar14 = (void *)(**(code **)(*plVar10 + 0x10))(plVar10,uVar8,8);
    local_80 = (byte)uVar8 | 1;
    uStack_7f = (undefined7)(uVar8 >> 8);
    local_78 = (undefined1)sVar4;
    uStack_77 = (undefined7)(sVar4 >> 8);
    local_70 = pvVar14;
LAB_025426a4:
    memcpy(pvVar14,param_3,sVar4);
  }
  local_220 = local_70;
  uStack_227 = uStack_77;
  uStack_228 = local_78;
  local_22f = uStack_7f;
  local_230 = local_80;
  *(undefined1 *)((long)pvVar14 + sVar4) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = 0;
  uStack_7f = 0;
  local_240 = 0;
  uStack_239 = 0;
  uStack_238 = 0;
  local_218 = &LAB_025454a4;
  puStack_210 = &LAB_025454c0;
  local_208 = 0xffffffff;
  sVar4 = strlen(param_5);
  plVar2 = DAT_043f1798;
  local_268 = 0;
  uStack_267 = 0;
  local_260 = 0;
  uStack_25f = 0;
  local_258 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_268 = (byte)((int)sVar4 << 1);
    pvVar14 = (void *)((ulong)&local_268 | 1);
    if (sVar4 != 0) goto LAB_02542744;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar10 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar10 = plVar2;
    }
    pvVar14 = (void *)(**(code **)(*plVar10 + 0x10))(plVar10,uVar8,8);
    local_268 = (byte)uVar8 | 1;
    uStack_267 = (undefined7)(uVar8 >> 8);
    local_260 = (undefined1)sVar4;
    uStack_25f = (undefined7)(sVar4 >> 8);
    local_258 = pvVar14;
LAB_02542744:
    memcpy(pvVar14,param_5,sVar4);
  }
  local_1f0 = local_258;
  uStack_1f7 = uStack_25f;
  uStack_1f8 = local_260;
  local_1ff = uStack_267;
  local_200 = local_268;
  *(undefined1 *)((long)pvVar14 + sVar4) = 0;
  local_268 = 0;
  uStack_267 = 0;
  local_260 = 0;
  uStack_25f = 0;
  local_258 = (void *)0x0;
  local_250 = 0;
  uStack_249 = 0;
  uStack_248 = 0;
  local_1d8 = 0xffffffff;
  local_1e8 = &LAB_025454dc;
  puStack_1e0 = &LAB_025454f8;
  sVar4 = strlen(param_7);
  plVar2 = DAT_043f1798;
  local_290 = 0;
  uStack_28f = 0;
  local_288 = 0;
  uStack_287 = 0;
  local_280 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_290 = (byte)((int)sVar4 << 1);
    pvVar14 = (void *)((ulong)&local_290 | 1);
    if (sVar4 != 0) goto LAB_025427dc;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar10 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar10 = plVar2;
    }
    pvVar14 = (void *)(**(code **)(*plVar10 + 0x10))(plVar10,uVar8,8);
    local_290 = (byte)uVar8 | 1;
    uStack_28f = (undefined7)(uVar8 >> 8);
    local_288 = (undefined1)sVar4;
    uStack_287 = (undefined7)(sVar4 >> 8);
    local_280 = pvVar14;
LAB_025427dc:
    memcpy(pvVar14,param_7,sVar4);
  }
  local_1c0 = local_280;
  uStack_1c7 = uStack_287;
  uStack_1c8 = local_288;
  local_1cf = uStack_28f;
  local_1d0 = local_290;
  *(undefined1 *)((long)pvVar14 + sVar4) = 0;
  local_290 = 0;
  uStack_28f = 0;
  local_288 = 0;
  uStack_287 = 0;
  local_280 = (void *)0x0;
  local_278 = 0;
  uStack_271 = 0;
  uStack_270 = 0;
  local_1a8 = 0xffffffff;
  local_1b8 = &LAB_02545514;
  puStack_1b0 = &LAB_02545530;
  sVar4 = strlen(param_9);
  plVar2 = DAT_043f1798;
  local_2b8 = 0;
  uStack_2b7 = 0;
  local_2b0 = 0;
  uStack_2af = 0;
  local_2a8 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_2b8 = (byte)((int)sVar4 << 1);
    pvVar14 = (void *)((ulong)&local_2b8 | 1);
    if (sVar4 != 0) goto LAB_02542878;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar10 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar10 = plVar2;
    }
    pvVar14 = (void *)(**(code **)(*plVar10 + 0x10))(plVar10,uVar8,8);
    local_2b8 = (byte)uVar8 | 1;
    uStack_2b7 = (undefined7)(uVar8 >> 8);
    local_2b0 = (undefined1)sVar4;
    uStack_2af = (undefined7)(sVar4 >> 8);
    local_2a8 = pvVar14;
LAB_02542878:
    memcpy(pvVar14,param_9,sVar4);
  }
  local_190 = local_2a8;
  uStack_197 = uStack_2af;
  uStack_198 = local_2b0;
  local_19f = uStack_2b7;
  local_1a0 = local_2b8;
  *(undefined1 *)((long)pvVar14 + sVar4) = 0;
  local_2b8 = 0;
  uStack_2b7 = 0;
  local_2b0 = 0;
  uStack_2af = 0;
  local_2a8 = (void *)0x0;
  local_2a0 = 0;
  uStack_299 = 0;
  uStack_298 = 0;
  local_188 = &LAB_0254554c;
  puStack_180 = &LAB_02545568;
  local_178 = 0xffffffff;
  sVar4 = strlen(param_11);
  plVar2 = DAT_043f1798;
  local_2e0 = 0;
  uStack_2df = 0;
  local_2d8 = 0;
  uStack_2d7 = 0;
  local_2d0 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_2e0 = (byte)((int)sVar4 << 1);
    pvVar14 = (void *)((ulong)&local_2e0 | 1);
    if (sVar4 != 0) goto LAB_02542918;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar10 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar10 = plVar2;
    }
    pvVar14 = (void *)(**(code **)(*plVar10 + 0x10))(plVar10,uVar8,8);
    local_2e0 = (byte)uVar8 | 1;
    uStack_2df = (undefined7)(uVar8 >> 8);
    local_2d8 = (undefined1)sVar4;
    uStack_2d7 = (undefined7)(sVar4 >> 8);
    local_2d0 = pvVar14;
LAB_02542918:
    memcpy(pvVar14,param_11,sVar4);
  }
  local_160 = local_2d0;
  uStack_167 = uStack_2d7;
  uStack_168 = local_2d8;
  local_16f = uStack_2df;
  local_170 = local_2e0;
  *(undefined1 *)((long)pvVar14 + sVar4) = 0;
  local_2e0 = 0;
  uStack_2df = 0;
  local_2d8 = 0;
  uStack_2d7 = 0;
  local_2d0 = (void *)0x0;
  local_2c8 = 0;
  uStack_2c1 = 0;
  uStack_2c0 = 0;
  local_150 = &LAB_025455a0;
  local_158 = &LAB_02545584;
  local_148 = 0xffffffff;
  sVar4 = strlen(param_13);
  plVar2 = DAT_043f1798;
  local_308 = 0;
  uStack_307 = 0;
  local_300 = 0;
  uStack_2ff = 0;
  local_2f8 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_308 = (byte)((int)sVar4 << 1);
    pvVar14 = (void *)((ulong)&local_308 | 1);
    if (sVar4 != 0) goto LAB_025429bc;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar10 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar10 = plVar2;
    }
    pvVar14 = (void *)(**(code **)(*plVar10 + 0x10))(plVar10,uVar8,8);
    local_308 = (byte)uVar8 | 1;
    uStack_307 = (undefined7)(uVar8 >> 8);
    local_300 = (undefined1)sVar4;
    uStack_2ff = (undefined7)(sVar4 >> 8);
    local_2f8 = pvVar14;
LAB_025429bc:
    memcpy(pvVar14,param_13,sVar4);
  }
  local_130 = local_2f8;
  uStack_137 = uStack_2ff;
  uStack_138 = local_300;
  local_13f = uStack_307;
  local_140 = local_308;
  *(undefined1 *)((long)pvVar14 + sVar4) = 0;
  local_300 = 0;
  uStack_2ff = 0;
  local_2f8 = (void *)0x0;
  local_308 = 0;
  uStack_307 = 0;
  local_2f0 = 0;
  uStack_2e9 = 0;
  uStack_2e8 = 0;
  local_128 = &LAB_025455bc;
  local_118 = 0xffffffff;
  local_120 = &LAB_025455d8;
  sVar4 = strlen(param_15);
  plVar2 = DAT_043f1798;
  local_320 = 0;
  uStack_31f = 0;
  local_318 = 0;
  uStack_317 = 0;
  local_310 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_320 = (byte)((int)sVar4 << 1);
    pvVar14 = (void *)((ulong)&local_320 | 1);
    if (sVar4 != 0) goto LAB_02542a64;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar10 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar10 = plVar2;
    }
    pvVar14 = (void *)(**(code **)(*plVar10 + 0x10))(plVar10,uVar8,8);
    local_320 = (byte)uVar8 | 1;
    uStack_31f = (undefined7)(uVar8 >> 8);
    local_318 = (undefined1)sVar4;
    uStack_317 = (undefined7)(sVar4 >> 8);
    local_310 = pvVar14;
LAB_02542a64:
    memcpy(pvVar14,param_15,sVar4);
  }
  *(undefined1 *)((long)pvVar14 + sVar4) = 0;
  local_110 = local_320;
  local_10f = uStack_31f;
  local_f8 = &LAB_025455f4;
  local_e0 = 6;
  local_100 = local_310;
  local_f0 = &LAB_02545610;
  uStack_108 = local_318;
  uStack_107 = uStack_317;
  local_e8 = 0xffffffff;
  local_df = 0x656e;
  local_dd = 0x77;
  local_dc = 0;
  local_d4 = 0;
  local_c0 = &LAB_02545674;
  local_d0 = 0;
  local_c8 = &LAB_0254562c;
  local_b0 = 8;
  local_b8 = 0xffffffff;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_a0 = 0;
  local_90 = &LAB_02545704;
  local_98 = &LAB_025456bc;
  local_88 = 0xffffffff;
  FUN_0254574c(plVar13,&local_230,9);
  lVar6 = FUN_008cca50();
  lVar11 = 0;
  do {
    lVar7 = FUN_008e8c90(plVar13,lVar6 + lVar11);
    if (lVar7 != 0) {
      FUN_008f2aec(&local_80,plVar13,lVar7);
      plVar2 = DAT_043f1798;
      lVar7 = CONCAT71(uStack_7f,local_80);
      local_80 = 0;
      uStack_7f = 0;
      if (lVar7 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar7 + 0x10) & 1) != 0)) &&
           (lVar15 = *(long *)(lVar7 + 0x20), lVar15 != 0)) {
          plVar10 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar10 = plVar2;
          }
          uVar8 = (**(code **)(*plVar10 + 0xc0))(plVar10);
          if ((uVar8 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar10,lVar15,0,8);
              goto LAB_02542f9c;
            }
          }
          (**(code **)(*plVar10 + 0x18))(plVar10,lVar15,0,8);
        }
LAB_02542f9c:
        plVar2 = DAT_043f1798;
        plVar10 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar10 = plVar2;
        }
        uVar8 = (**(code **)(*plVar10 + 0xc0))(plVar10);
        if ((uVar8 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar10,lVar7,0,8);
            goto LAB_02542f54;
          }
        }
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar7,0,8);
      }
    }
LAB_02542f54:
    lVar7 = local_a0;
    lVar11 = lVar11 + 0x18;
  } while (lVar11 != 0x300);
  *(undefined1 *)(plVar5 + 0xb) = 1;
  plVar2 = DAT_043f1798;
  lVar11 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar13 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar13 = plVar2;
    }
    uVar8 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar13,lVar7,0,8);
        plVar2 = DAT_043f1798;
        lVar11 = local_d0;
        goto joined_r0x025430e0;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,lVar7,0,8);
    plVar2 = DAT_043f1798;
    lVar11 = local_d0;
  }
joined_r0x025430e0:
  pvVar14 = local_100;
  local_d0 = lVar11;
  if (((local_e0 & 1) != 0) && (lVar11 != 0)) {
    plVar13 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar13 = plVar2;
    }
    uVar8 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar13,lVar11,0,8);
        plVar2 = DAT_043f1798;
        pvVar14 = local_100;
        goto joined_r0x025438bc;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,lVar11,0,8);
    plVar2 = DAT_043f1798;
    pvVar14 = local_100;
  }
joined_r0x025438bc:
  pvVar3 = local_130;
  local_100 = pvVar14;
  if (((local_110 & 1) != 0) && (pvVar14 != (void *)0x0)) {
    plVar13 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar13 = plVar2;
    }
    uVar8 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar13,pvVar14,0,8);
        plVar2 = DAT_043f1798;
        pvVar3 = local_130;
        goto joined_r0x02543248;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,pvVar14,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_130;
  }
joined_r0x02543248:
  pvVar14 = local_160;
  local_130 = pvVar3;
  if (((local_140 & 1) != 0) && (pvVar3 != (void *)0x0)) {
    plVar13 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar13 = plVar2;
    }
    uVar8 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar13,pvVar3,0,8);
        plVar2 = DAT_043f1798;
        pvVar14 = local_160;
        goto joined_r0x025438fc;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,pvVar3,0,8);
    plVar2 = DAT_043f1798;
    pvVar14 = local_160;
  }
joined_r0x025438fc:
  pvVar3 = local_190;
  local_160 = pvVar14;
  if (((local_170 & 1) != 0) && (pvVar14 != (void *)0x0)) {
    plVar13 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar13 = plVar2;
    }
    uVar8 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar13,pvVar14,0,8);
        plVar2 = DAT_043f1798;
        pvVar3 = local_190;
        goto joined_r0x025433b0;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,pvVar14,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_190;
  }
joined_r0x025433b0:
  pvVar14 = local_1c0;
  local_190 = pvVar3;
  if (((local_1a0 & 1) != 0) && (pvVar3 != (void *)0x0)) {
    plVar13 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar13 = plVar2;
    }
    uVar8 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar13,pvVar3,0,8);
        plVar2 = DAT_043f1798;
        pvVar14 = local_1c0;
        goto joined_r0x0254393c;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,pvVar3,0,8);
    plVar2 = DAT_043f1798;
    pvVar14 = local_1c0;
  }
joined_r0x0254393c:
  pvVar3 = local_1f0;
  local_1c0 = pvVar14;
  if (((local_1d0 & 1) != 0) && (pvVar14 != (void *)0x0)) {
    plVar13 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar13 = plVar2;
    }
    uVar8 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar13,pvVar14,0,8);
        plVar2 = DAT_043f1798;
        pvVar3 = local_1f0;
        goto joined_r0x02543518;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,pvVar14,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_1f0;
  }
joined_r0x02543518:
  pvVar14 = local_220;
  local_1f0 = pvVar3;
  if (((local_200 & 1) != 0) && (pvVar3 != (void *)0x0)) {
    plVar13 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar13 = plVar2;
    }
    uVar8 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar13,pvVar3,0,8);
        plVar2 = DAT_043f1798;
        pvVar14 = local_220;
        goto joined_r0x0254397c;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,pvVar3,0,8);
    plVar2 = DAT_043f1798;
    pvVar14 = local_220;
  }
joined_r0x0254397c:
  DAT_043f1798 = plVar2;
  local_220 = pvVar14;
  if (((local_230 & 1) != 0) && (pvVar14 != (void *)0x0)) {
    plVar13 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar13 = plVar2;
    }
    uVar8 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar13,pvVar14,0,8);
        goto LAB_0254367c;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,pvVar14,0,8);
  }
LAB_0254367c:
  uVar12 = *(undefined8 *)(lVar9 + 0x20);
  FUN_0014fef0(uVar12);
  (**(code **)*plVar5)(plVar5,uVar12);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  pvVar14 = local_328;
  if ((local_338 & 1) == 0) {
    pvVar14 = (void *)((long)&local_338 + 1);
  }
  FUN_001522a0(uVar12,pvVar14);
  pvVar14 = local_328;
  plVar2 = DAT_043f1798;
  if (((local_338 & 1) != 0) && (local_328 != (void *)0x0)) {
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
        FUN_02bcc824(plVar5,pvVar14,0,8);
        return;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,pvVar14,0,8);
  }
  return;
}


