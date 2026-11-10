/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0173e2c4; name: FUN_0173e2c4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0173e2c4(long *param_1,char *param_2,char *param_3,long *param_4,char *param_5,
                 long *param_6,char *param_7,long *param_8,char *param_9,long *param_10,
                 char *param_11,long *param_12,char *param_13,long *param_14,char *param_15,
                 long *param_16,char *param_17,long *param_18)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  int iVar8;
  size_t sVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  string *psVar16;
  long lVar17;
  string *psVar18;
  long lVar19;
  undefined8 uVar20;
  string *psVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  void *pvVar25;
  ulong uVar26;
  ulong uVar27;
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
  string local_260;
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
  string local_80;
  undefined7 uStack_7f;
  undefined1 local_78;
  undefined7 uStack_77;
  void *local_70;
  
  lVar24 = *param_1;
  local_388 = 0;
  local_380 = (void *)0x0;
  local_390 = 0;
  sVar9 = strlen(param_2);
  plVar1 = DAT_043f1798;
  if (0xffffffffffffffef < sVar9) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar6 = tpidr_el0;
  if (sVar9 < 0x17) {
    local_390 = CONCAT71(local_390._1_7_,(char)((int)sVar9 << 1));
    pvVar25 = (void *)((ulong)&local_390 | 1);
    if (sVar9 != 0) goto LAB_0173e36c;
  }
  else {
    uVar26 = sVar9 + 0x10 & 0xfffffffffffffff0;
    plVar10 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar10 = plVar1;
    }
    pvVar25 = (void *)(**(code **)(*plVar10 + 0x10))(plVar10,uVar26,8);
    local_390 = uVar26 | 1;
    local_388 = sVar9;
    local_380 = pvVar25;
LAB_0173e36c:
    memcpy(pvVar25,param_2,sVar9);
  }
  *(undefined1 *)((long)pvVar25 + sVar9) = 0;
  plVar1 = DAT_043f1798;
  plVar10 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar10 = plVar1;
  }
  plVar10 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x150,8);
  plVar10[4] = 0;
  plVar22 = plVar10 + 1;
  *plVar22 = 0;
  plVar10[6] = (long)FUN_01740280;
  plVar10[7] = (long)FUN_01740330;
  *plVar10 = (long)&PTR_FUN_04224fd8;
  plVar10[2] = 0;
  plVar10[3] = 0;
  *(undefined4 *)(plVar10 + 5) = 0x3f800000;
  plVar10[8] = 0;
  plVar10[9] = 0;
  plVar10[10] = 0;
  *(undefined1 *)(plVar10 + 0xb) = 0;
  plVar10[0xc] = (long)param_3;
  plVar10[0xd] = *param_4;
  plVar10[0xe] = (long)param_5;
  plVar10[0xf] = *param_6;
  plVar10[0x10] = (long)param_7;
  plVar10[0x11] = *param_8;
  plVar10[0x12] = (long)param_9;
  plVar10[0x13] = *param_10;
  plVar10[0x14] = (long)param_11;
  plVar10[0x15] = *param_12;
  plVar10[0x16] = (long)param_13;
  plVar10[0x17] = *param_14;
  plVar10[0x18] = (long)param_15;
  lVar17 = *param_16;
  plVar10[0x1a] = param_16[1];
  plVar10[0x1b] = (long)param_17;
  plVar10[0x19] = lVar17;
  lVar17 = *param_18;
  lVar19 = param_18[1];
  plVar10[0x22] = (long)FUN_017404c0;
  plVar10[0x23] = (long)&LAB_017407a0;
  plVar10[0x1e] = (long)&DAT_038ca815;
  plVar10[0x1f] = (long)&DAT_0392da3c;
  *(undefined1 *)(plVar10 + 0x28) = 1;
  plVar10[0x20] = 0;
  plVar10[0x21] = 0;
  plVar10[0x29] = 0;
  plVar10[0x24] = (long)&LAB_01740a80;
  plVar10[0x25] = (long)&LAB_01740a90;
  plVar10[0x26] = 0;
  plVar10[0x27] = 0;
  plVar10[0x1c] = lVar17;
  plVar10[0x1d] = lVar19;
  sVar9 = strlen(param_3);
  plVar1 = DAT_043f1798;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar9) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar9 < 0x17) {
    local_80 = SUB41((int)sVar9 << 1,0);
    pvVar25 = (void *)((ulong)&local_80 | 1);
    if (sVar9 != 0) goto LAB_0173e538;
  }
  else {
    uVar26 = sVar9 + 0x10 & 0xfffffffffffffff0;
    plVar15 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar15 = plVar1;
    }
    pvVar25 = (void *)(**(code **)(*plVar15 + 0x10))(plVar15,uVar26,8);
    local_80 = (string)((byte)uVar26 | 1);
    uStack_7f = (undefined7)(uVar26 >> 8);
    local_78 = (undefined1)sVar9;
    uStack_77 = (undefined7)(sVar9 >> 8);
    local_70 = pvVar25;
LAB_0173e538:
    memcpy(pvVar25,param_3,sVar9);
  }
  local_250 = local_70;
  uStack_257 = uStack_77;
  uStack_258 = local_78;
  local_25f = uStack_7f;
  local_260 = local_80;
  *(undefined1 *)((long)pvVar25 + sVar9) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = (string)0x0;
  uStack_7f = 0;
  uVar26 = 0xffffffff;
  local_270 = 0;
  uStack_269 = 0;
  uStack_268 = 0;
  local_248 = &LAB_01740a94;
  puStack_240 = &LAB_01740b78;
  local_238 = 0xffffffff;
  sVar9 = strlen(param_5);
  plVar1 = DAT_043f1798;
  local_298 = 0;
  uStack_297 = 0;
  local_290 = 0;
  uStack_28f = 0;
  local_288 = (void *)0x0;
  if (0xffffffffffffffef < sVar9) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar9 < 0x17) {
    local_298 = (byte)((int)sVar9 << 1);
    pvVar25 = (void *)((ulong)&local_298 | 1);
    if (sVar9 != 0) goto LAB_0173e5e0;
  }
  else {
    uVar11 = sVar9 + 0x10 & 0xfffffffffffffff0;
    plVar15 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar15 = plVar1;
    }
    pvVar25 = (void *)(**(code **)(*plVar15 + 0x10))(plVar15,uVar11,8);
    local_298 = (byte)uVar11 | 1;
    uStack_297 = (undefined7)(uVar11 >> 8);
    local_290 = (undefined1)sVar9;
    uStack_28f = (undefined7)(sVar9 >> 8);
    local_288 = pvVar25;
LAB_0173e5e0:
    memcpy(pvVar25,param_5,sVar9);
  }
  local_220 = local_288;
  uStack_227 = uStack_28f;
  uStack_228 = local_290;
  local_22f = uStack_297;
  local_230 = local_298;
  *(undefined1 *)((long)pvVar25 + sVar9) = 0;
  local_298 = 0;
  uStack_297 = 0;
  local_290 = 0;
  uStack_28f = 0;
  local_288 = (void *)0x0;
  local_280 = 0;
  uStack_279 = 0;
  uStack_278 = 0;
  local_208 = 0xffffffff;
  local_218 = &LAB_01740b94;
  puStack_210 = &LAB_01740bb0;
  sVar9 = strlen(param_7);
  plVar1 = DAT_043f1798;
  local_2c0 = 0;
  uStack_2bf = 0;
  local_2b8 = 0;
  uStack_2b7 = 0;
  local_2b0 = (void *)0x0;
  if (0xffffffffffffffef < sVar9) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar9 < 0x17) {
    local_2c0 = (byte)((int)sVar9 << 1);
    pvVar25 = (void *)((ulong)&local_2c0 | 1);
    if (sVar9 != 0) goto LAB_0173e67c;
  }
  else {
    uVar11 = sVar9 + 0x10 & 0xfffffffffffffff0;
    plVar15 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar15 = plVar1;
    }
    pvVar25 = (void *)(**(code **)(*plVar15 + 0x10))(plVar15,uVar11,8);
    local_2c0 = (byte)uVar11 | 1;
    uStack_2bf = (undefined7)(uVar11 >> 8);
    local_2b8 = (undefined1)sVar9;
    uStack_2b7 = (undefined7)(sVar9 >> 8);
    local_2b0 = pvVar25;
LAB_0173e67c:
    memcpy(pvVar25,param_7,sVar9);
  }
  local_1f0 = local_2b0;
  uStack_1f7 = uStack_2b7;
  uStack_1f8 = local_2b8;
  local_1ff = uStack_2bf;
  local_200 = local_2c0;
  *(undefined1 *)((long)pvVar25 + sVar9) = 0;
  local_2c0 = 0;
  uStack_2bf = 0;
  local_2b8 = 0;
  uStack_2b7 = 0;
  local_2b0 = (void *)0x0;
  local_2a8 = 0;
  uStack_2a1 = 0;
  uStack_2a0 = 0;
  local_1e0 = &LAB_01740be8;
  local_1e8 = &LAB_01740bcc;
  local_1d8 = 0xffffffff;
  sVar9 = strlen(param_9);
  plVar1 = DAT_043f1798;
  local_2e8 = 0;
  uStack_2e7 = 0;
  local_2e0 = 0;
  uStack_2df = 0;
  local_2d8 = (void *)0x0;
  if (0xffffffffffffffef < sVar9) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar9 < 0x17) {
    local_2e8 = (byte)((int)sVar9 << 1);
    pvVar25 = (void *)((ulong)&local_2e8 | 1);
    if (sVar9 != 0) goto LAB_0173e718;
  }
  else {
    uVar11 = sVar9 + 0x10 & 0xfffffffffffffff0;
    plVar15 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar15 = plVar1;
    }
    pvVar25 = (void *)(**(code **)(*plVar15 + 0x10))(plVar15,uVar11,8);
    local_2e8 = (byte)uVar11 | 1;
    uStack_2e7 = (undefined7)(uVar11 >> 8);
    local_2e0 = (undefined1)sVar9;
    uStack_2df = (undefined7)(sVar9 >> 8);
    local_2d8 = pvVar25;
LAB_0173e718:
    memcpy(pvVar25,param_9,sVar9);
  }
  local_1c0 = local_2d8;
  uStack_1c7 = uStack_2df;
  uStack_1c8 = local_2e0;
  local_1cf = uStack_2e7;
  local_1d0 = local_2e8;
  *(undefined1 *)((long)pvVar25 + sVar9) = 0;
  local_2e8 = 0;
  uStack_2e7 = 0;
  local_2e0 = 0;
  uStack_2df = 0;
  local_2d8 = (void *)0x0;
  local_2d0 = 0;
  uStack_2c9 = 0;
  uStack_2c8 = 0;
  local_1b0 = &LAB_01740c20;
  local_1b8 = &LAB_01740c04;
  local_1a8 = 0xffffffff;
  sVar9 = strlen(param_11);
  plVar1 = DAT_043f1798;
  local_310 = 0;
  uStack_30f = 0;
  local_308 = 0;
  uStack_307 = 0;
  local_300 = (void *)0x0;
  if (0xffffffffffffffef < sVar9) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar9 < 0x17) {
    local_310 = (byte)((int)sVar9 << 1);
    pvVar25 = (void *)((ulong)&local_310 | 1);
    if (sVar9 != 0) goto LAB_0173e7bc;
  }
  else {
    uVar11 = sVar9 + 0x10 & 0xfffffffffffffff0;
    plVar15 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar15 = plVar1;
    }
    pvVar25 = (void *)(**(code **)(*plVar15 + 0x10))(plVar15,uVar11,8);
    local_310 = (byte)uVar11 | 1;
    uStack_30f = (undefined7)(uVar11 >> 8);
    local_308 = (undefined1)sVar9;
    uStack_307 = (undefined7)(sVar9 >> 8);
    local_300 = pvVar25;
LAB_0173e7bc:
    memcpy(pvVar25,param_11,sVar9);
  }
  local_190 = local_300;
  uStack_197 = uStack_307;
  uStack_198 = local_308;
  local_19f = uStack_30f;
  local_1a0 = local_310;
  *(undefined1 *)((long)pvVar25 + sVar9) = 0;
  local_310 = 0;
  uStack_30f = 0;
  local_308 = 0;
  uStack_307 = 0;
  local_300 = (void *)0x0;
  local_2f8 = 0;
  uStack_2f1 = 0;
  uStack_2f0 = 0;
  local_178 = 0xffffffff;
  local_180 = &LAB_01740c58;
  local_188 = &LAB_01740c3c;
  sVar9 = strlen(param_13);
  plVar1 = DAT_043f1798;
  local_338 = 0;
  uStack_337 = 0;
  local_330 = 0;
  uStack_32f = 0;
  local_328 = (void *)0x0;
  if (0xffffffffffffffef < sVar9) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar9 < 0x17) {
    local_338 = (byte)((int)sVar9 << 1);
    pvVar25 = (void *)((ulong)&local_338 | 1);
    if (sVar9 != 0) goto LAB_0173e860;
  }
  else {
    uVar11 = sVar9 + 0x10 & 0xfffffffffffffff0;
    plVar15 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar15 = plVar1;
    }
    pvVar25 = (void *)(**(code **)(*plVar15 + 0x10))(plVar15,uVar11,8);
    local_338 = (byte)uVar11 | 1;
    uStack_337 = (undefined7)(uVar11 >> 8);
    local_330 = (undefined1)sVar9;
    uStack_32f = (undefined7)(sVar9 >> 8);
    local_328 = pvVar25;
LAB_0173e860:
    memcpy(pvVar25,param_13,sVar9);
  }
  local_160 = local_328;
  uStack_167 = uStack_32f;
  uStack_168 = local_330;
  local_16f = uStack_337;
  local_170 = local_338;
  *(undefined1 *)((long)pvVar25 + sVar9) = 0;
  local_330 = 0;
  uStack_32f = 0;
  local_328 = (void *)0x0;
  local_338 = 0;
  uStack_337 = 0;
  local_150 = &LAB_01740c90;
  local_320 = 0;
  uStack_319 = 0;
  uStack_318 = 0;
  local_158 = &LAB_01740c74;
  local_148 = 0xffffffff;
  sVar9 = strlen(param_15);
  plVar1 = DAT_043f1798;
  local_360 = 0;
  uStack_35f = 0;
  local_358 = 0;
  uStack_357 = 0;
  local_350 = (void *)0x0;
  if (0xffffffffffffffef < sVar9) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar9 < 0x17) {
    local_360 = (byte)((int)sVar9 << 1);
    pvVar25 = (void *)((ulong)&local_360 | 1);
    if (sVar9 != 0) goto LAB_0173e90c;
  }
  else {
    uVar11 = sVar9 + 0x10 & 0xfffffffffffffff0;
    plVar15 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar15 = plVar1;
    }
    pvVar25 = (void *)(**(code **)(*plVar15 + 0x10))(plVar15,uVar11,8);
    local_360 = (byte)uVar11 | 1;
    uStack_35f = (undefined7)(uVar11 >> 8);
    local_358 = (undefined1)sVar9;
    uStack_357 = (undefined7)(sVar9 >> 8);
    local_350 = pvVar25;
LAB_0173e90c:
    memcpy(pvVar25,param_15,sVar9);
  }
  local_130 = local_350;
  uStack_137 = uStack_357;
  uStack_138 = local_358;
  *(undefined1 *)((long)pvVar25 + sVar9) = 0;
  local_140 = local_360;
  local_358 = 0;
  uStack_357 = 0;
  local_350 = (void *)0x0;
  local_13f = uStack_35f;
  local_128 = &LAB_01740cac;
  local_360 = 0;
  uStack_35f = 0;
  local_348 = 0;
  uStack_341 = 0;
  uStack_340 = 0;
  local_118 = 0xffffffff;
  local_120 = &LAB_01740cf4;
  sVar9 = strlen(param_17);
  plVar1 = DAT_043f1798;
  local_378 = 0;
  uStack_377 = 0;
  local_370 = 0;
  uStack_36f = 0;
  local_368 = (void *)0x0;
  if (0xffffffffffffffef < sVar9) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar9 < 0x17) {
    local_378 = (byte)((int)sVar9 << 1);
    pvVar25 = (void *)((ulong)&local_378 | 1);
    if (sVar9 != 0) goto LAB_0173e9b8;
  }
  else {
    uVar11 = sVar9 + 0x10 & 0xfffffffffffffff0;
    plVar15 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar15 = plVar1;
    }
    pvVar25 = (void *)(**(code **)(*plVar15 + 0x10))(plVar15,uVar11,8);
    local_378 = (byte)uVar11 | 1;
    uStack_377 = (undefined7)(uVar11 >> 8);
    local_370 = (undefined1)sVar9;
    uStack_36f = (undefined7)(sVar9 >> 8);
    local_368 = pvVar25;
LAB_0173e9b8:
    memcpy(pvVar25,param_17,sVar9);
  }
  *(undefined1 *)((long)pvVar25 + sVar9) = 0;
  psVar21 = &local_260;
  local_110 = local_378;
  local_10f = uStack_377;
  local_f8 = &LAB_01740d3c;
  local_e0 = 6;
  local_100 = local_368;
  local_f0 = &LAB_01740d84;
  uStack_108 = local_370;
  uStack_107 = uStack_36f;
  local_e8 = 0xffffffff;
  local_df = 0x656e;
  local_dd = 0x77;
  local_dc = 0;
  local_d4 = 0;
  local_c0 = &LAB_01740e14;
  local_d0 = 0;
  plVar1 = plVar10 + 3;
  local_c8 = &LAB_01740dcc;
  local_b0 = 8;
  local_b8 = 0xffffffff;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_98 = &LAB_01740e5c;
  local_a0 = 0;
  local_90 = &LAB_01740ea4;
  local_88 = 0xffffffff;
  do {
    uVar11 = *(ulong *)(psVar21 + 8);
    psVar3 = *(string **)(psVar21 + 0x10);
    if (((byte)*psVar21 & 1) == 0) {
      psVar3 = psVar21 + 1;
      uVar11 = (ulong)((byte)*psVar21 >> 1);
    }
    uVar11 = FUN_008e8ed4(&local_80,psVar3,uVar11);
    uVar27 = plVar10[2];
    if (uVar27 != 0) {
      uVar26 = uVar27 - (uVar27 >> 1 & 0x5555555555555555);
      uVar26 = (uVar26 & 0x3333333333333333) + (uVar26 >> 2 & 0x3333333333333333);
      uVar13 = (uVar26 + (uVar26 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar13 < 2) {
        uVar26 = uVar27 - 1 & uVar11;
      }
      else {
        uVar26 = uVar11;
        if (uVar27 <= uVar11) {
          uVar26 = 0;
          if (uVar27 != 0) {
            uVar26 = uVar11 / uVar27;
          }
          uVar26 = uVar11 - uVar26 * uVar27;
        }
      }
      plVar15 = *(long **)(*plVar22 + uVar26 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        psVar3 = psVar21 + 1;
        sVar9 = (ulong)((byte)*psVar21 >> 1);
        if (((byte)*psVar21 & 1) != 0) {
          psVar3 = *(string **)(psVar21 + 0x10);
          sVar9 = *(size_t *)(psVar21 + 8);
        }
        if (uVar13 < 2) {
          if (sVar9 == 0) {
            do {
              if (plVar15[1] != uVar11 && (plVar15[1] & uVar27 - 1) != uVar26) break;
              uVar13 = (ulong)(*(byte *)(plVar15 + 2) >> 1);
              if ((*(byte *)(plVar15 + 2) & 1) != 0) {
                uVar13 = plVar15[3];
              }
              if (uVar13 == 0) goto LAB_0173ed34;
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
          else {
            do {
              if (plVar15[1] != uVar11 && (plVar15[1] & uVar27 - 1) != uVar26) break;
              bVar4 = *(byte *)(plVar15 + 2);
              uVar13 = (ulong)(bVar4 >> 1);
              sVar2 = uVar13;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar15[3];
              }
              if (sVar2 == sVar9) {
                if ((bVar4 & 1) == 0) {
                  psVar16 = (string *)((long)plVar15 + 0x11);
                  psVar18 = psVar3;
                  while (*psVar16 == *psVar18) {
                    uVar13 = uVar13 - 1;
                    psVar16 = psVar16 + 1;
                    psVar18 = psVar18 + 1;
                    if (uVar13 == 0) goto LAB_0173ed34;
                  }
                }
                else {
                  iVar8 = memcmp((void *)plVar15[4],psVar3,sVar9);
                  if (iVar8 == 0) goto LAB_0173ed34;
                }
              }
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
        }
        else if (sVar9 == 0) {
          do {
            uVar13 = plVar15[1];
            if (uVar13 != uVar11) {
              if (uVar27 <= uVar13) {
                uVar5 = 0;
                if (uVar27 != 0) {
                  uVar5 = uVar13 / uVar27;
                }
                uVar13 = uVar13 - uVar5 * uVar27;
              }
              if (uVar13 != uVar26) break;
            }
            uVar13 = (ulong)(*(byte *)(plVar15 + 2) >> 1);
            if ((*(byte *)(plVar15 + 2) & 1) != 0) {
              uVar13 = plVar15[3];
            }
            if (uVar13 == 0) goto LAB_0173ed34;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar13 = plVar15[1];
            if (uVar13 != uVar11) {
              if (uVar27 <= uVar13) {
                uVar5 = 0;
                if (uVar27 != 0) {
                  uVar5 = uVar13 / uVar27;
                }
                uVar13 = uVar13 - uVar5 * uVar27;
              }
              if (uVar13 != uVar26) break;
            }
            bVar4 = *(byte *)(plVar15 + 2);
            uVar13 = (ulong)(bVar4 >> 1);
            sVar2 = uVar13;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar15[3];
            }
            if (sVar2 == sVar9) {
              if ((bVar4 & 1) == 0) {
                psVar16 = (string *)((long)plVar15 + 0x11);
                psVar18 = psVar3;
                while (*psVar16 == *psVar18) {
                  uVar13 = uVar13 - 1;
                  psVar16 = psVar16 + 1;
                  psVar18 = psVar18 + 1;
                  if (uVar13 == 0) goto LAB_0173ed34;
                }
              }
              else {
                iVar8 = memcmp((void *)plVar15[4],psVar3,sVar9);
                if (iVar8 == 0) goto LAB_0173ed34;
              }
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    plVar15 = DAT_043f1798;
    plVar14 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar14 = plVar15;
    }
    plVar15 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x40,8);
    std::string::string((string *)(plVar15 + 2),psVar21);
    lVar17 = *(long *)(psVar21 + 0x18);
    lVar19 = *(long *)(psVar21 + 0x28);
    plVar15[6] = *(long *)(psVar21 + 0x20);
    plVar15[7] = lVar19;
    plVar15[5] = lVar17;
    *plVar15 = 0;
    plVar15[1] = uVar11;
    if ((uVar27 == 0) || (*(float *)(plVar10 + 5) * (float)uVar27 < (float)(plVar10[4] + 1))) {
      uVar26 = (ulong)(uVar27 < 3 || (uVar27 & uVar27 - 1) != 0) | uVar27 << 1;
      uVar27 = (ulong)((float)(plVar10[4] + 1) / *(float *)(plVar10 + 5));
      if (uVar27 <= uVar26) {
        uVar27 = uVar26;
      }
      FUN_008e9ae4(plVar22,uVar27);
      uVar27 = plVar10[2];
      if ((uVar27 & uVar27 - 1) == 0) {
        uVar26 = uVar27 - 1 & uVar11;
      }
      else if (uVar11 < uVar27) {
        uVar26 = uVar11;
      }
      else {
        uVar26 = 0;
        if (uVar27 != 0) {
          uVar26 = uVar11 / uVar27;
        }
        uVar26 = uVar11 - uVar26 * uVar27;
      }
    }
    lVar17 = *plVar22;
    plVar14 = *(long **)(lVar17 + uVar26 * 8);
    if (plVar14 == (long *)0x0) {
      *plVar15 = *plVar1;
      *plVar1 = (long)plVar15;
      *(long **)(lVar17 + uVar26 * 8) = plVar1;
      if (*plVar15 != 0) {
        uVar11 = *(ulong *)(*plVar15 + 8);
        if ((uVar27 & uVar27 - 1) == 0) {
          uVar11 = uVar11 & uVar27 - 1;
        }
        else if (uVar27 <= uVar11) {
          uVar13 = 0;
          if (uVar27 != 0) {
            uVar13 = uVar11 / uVar27;
          }
          uVar11 = uVar11 - uVar13 * uVar27;
        }
        plVar14 = (long *)(*plVar22 + uVar11 * 8);
        goto LAB_0173ed24;
      }
    }
    else {
      *plVar15 = *plVar14;
LAB_0173ed24:
      *plVar14 = (long)plVar15;
    }
    plVar10[4] = plVar10[4] + 1;
LAB_0173ed34:
    psVar21 = psVar21 + 0x30;
  } while (psVar21 != &local_80);
  lVar19 = FUN_008cca50();
  lVar17 = 0;
  do {
    lVar12 = FUN_008e8c90(plVar22,lVar19 + lVar17);
    if (lVar12 != 0) {
      FUN_008f2aec(&local_80,plVar22,lVar12);
      plVar1 = DAT_043f1798;
      lVar12 = CONCAT71(uStack_7f,local_80);
      local_80 = (string)0x0;
      uStack_7f = 0;
      if (lVar12 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar12 + 0x10) & 1) != 0)) &&
           (lVar23 = *(long *)(lVar12 + 0x20), lVar23 != 0)) {
          plVar15 = *(long **)(lVar6 + 0x20);
          if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
            *(long **)(lVar6 + 0x20) = DAT_043f1798;
            plVar15 = plVar1;
          }
          uVar26 = (**(code **)(*plVar15 + 0xc0))(plVar15);
          if ((uVar26 & 1) != 0) {
            if (*(char *)(lVar6 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar6 + 0x38d488) = 1;
              *(undefined8 *)(lVar6 + 0x38d478) = 0;
              *(undefined8 *)(lVar6 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar6 + 0x38d480)) {
              FUN_02bcc824(plVar15,lVar23,0,8);
              goto LAB_0173f34c;
            }
          }
          (**(code **)(*plVar15 + 0x18))(plVar15,lVar23,0,8);
        }
LAB_0173f34c:
        plVar1 = DAT_043f1798;
        plVar15 = *(long **)(lVar6 + 0x20);
        if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
          *(long **)(lVar6 + 0x20) = DAT_043f1798;
          plVar15 = plVar1;
        }
        uVar26 = (**(code **)(*plVar15 + 0xc0))(plVar15);
        if ((uVar26 & 1) != 0) {
          if (*(char *)(lVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar6 + 0x38d488) = 1;
            *(undefined8 *)(lVar6 + 0x38d478) = 0;
            *(undefined8 *)(lVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar6 + 0x38d480)) {
            FUN_02bcc824(plVar15,lVar12,0,8);
            goto LAB_0173f304;
          }
        }
        (**(code **)(*plVar15 + 0x18))(plVar15,lVar12,0,8);
      }
    }
LAB_0173f304:
    lVar12 = local_a0;
    lVar17 = lVar17 + 0x18;
  } while (lVar17 != 0x300);
  *(undefined1 *)(plVar10 + 0xb) = 1;
  plVar1 = DAT_043f1798;
  lVar17 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar22 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar22 = plVar1;
    }
    uVar26 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar26 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar22,lVar12,0,8);
        plVar1 = DAT_043f1798;
        lVar17 = local_d0;
        goto joined_r0x0173f490;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,lVar12,0,8);
    plVar1 = DAT_043f1798;
    lVar17 = local_d0;
  }
joined_r0x0173f490:
  pvVar25 = local_100;
  local_d0 = lVar17;
  if (((local_e0 & 1) != 0) && (lVar17 != 0)) {
    plVar22 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar22 = plVar1;
    }
    uVar26 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar26 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar22,lVar17,0,8);
        plVar1 = DAT_043f1798;
        pvVar25 = local_100;
        goto joined_r0x0173fd20;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,lVar17,0,8);
    plVar1 = DAT_043f1798;
    pvVar25 = local_100;
  }
joined_r0x0173fd20:
  pvVar7 = local_130;
  local_100 = pvVar25;
  if (((local_110 & 1) != 0) && (pvVar25 != (void *)0x0)) {
    plVar22 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar22 = plVar1;
    }
    uVar26 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar26 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar22,pvVar25,0,8);
        plVar1 = DAT_043f1798;
        pvVar7 = local_130;
        goto joined_r0x0173f5f8;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,pvVar25,0,8);
    plVar1 = DAT_043f1798;
    pvVar7 = local_130;
  }
joined_r0x0173f5f8:
  pvVar25 = local_160;
  local_130 = pvVar7;
  if (((local_140 & 1) != 0) && (pvVar7 != (void *)0x0)) {
    plVar22 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar22 = plVar1;
    }
    uVar26 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar26 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar22,pvVar7,0,8);
        plVar1 = DAT_043f1798;
        pvVar25 = local_160;
        goto joined_r0x0173fd60;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,pvVar7,0,8);
    plVar1 = DAT_043f1798;
    pvVar25 = local_160;
  }
joined_r0x0173fd60:
  pvVar7 = local_190;
  local_160 = pvVar25;
  if (((local_170 & 1) != 0) && (pvVar25 != (void *)0x0)) {
    plVar22 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar22 = plVar1;
    }
    uVar26 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar26 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar22,pvVar25,0,8);
        plVar1 = DAT_043f1798;
        pvVar7 = local_190;
        goto joined_r0x0173f760;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,pvVar25,0,8);
    plVar1 = DAT_043f1798;
    pvVar7 = local_190;
  }
joined_r0x0173f760:
  pvVar25 = local_1c0;
  local_190 = pvVar7;
  if (((local_1a0 & 1) != 0) && (pvVar7 != (void *)0x0)) {
    plVar22 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar22 = plVar1;
    }
    uVar26 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar26 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar22,pvVar7,0,8);
        plVar1 = DAT_043f1798;
        pvVar25 = local_1c0;
        goto joined_r0x0173fda0;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,pvVar7,0,8);
    plVar1 = DAT_043f1798;
    pvVar25 = local_1c0;
  }
joined_r0x0173fda0:
  pvVar7 = local_1f0;
  local_1c0 = pvVar25;
  if (((local_1d0 & 1) != 0) && (pvVar25 != (void *)0x0)) {
    plVar22 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar22 = plVar1;
    }
    uVar26 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar26 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar22,pvVar25,0,8);
        plVar1 = DAT_043f1798;
        pvVar7 = local_1f0;
        goto joined_r0x0173f8c8;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,pvVar25,0,8);
    plVar1 = DAT_043f1798;
    pvVar7 = local_1f0;
  }
joined_r0x0173f8c8:
  pvVar25 = local_220;
  local_1f0 = pvVar7;
  if (((local_200 & 1) != 0) && (pvVar7 != (void *)0x0)) {
    plVar22 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar22 = plVar1;
    }
    uVar26 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar26 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar22,pvVar7,0,8);
        plVar1 = DAT_043f1798;
        pvVar25 = local_220;
        goto joined_r0x0173fde0;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,pvVar7,0,8);
    plVar1 = DAT_043f1798;
    pvVar25 = local_220;
  }
joined_r0x0173fde0:
  pvVar7 = local_250;
  local_220 = pvVar25;
  if (((local_230 & 1) != 0) && (pvVar25 != (void *)0x0)) {
    plVar22 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar22 = plVar1;
    }
    uVar26 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar26 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar22,pvVar25,0,8);
        plVar1 = DAT_043f1798;
        pvVar7 = local_250;
        goto joined_r0x0173fa30;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,pvVar25,0,8);
    plVar1 = DAT_043f1798;
    pvVar7 = local_250;
  }
joined_r0x0173fa30:
  DAT_043f1798 = plVar1;
  local_250 = pvVar7;
  if ((((byte)local_260 & 1) != 0) && (pvVar7 != (void *)0x0)) {
    plVar22 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar22 = plVar1;
    }
    uVar26 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar26 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar22,pvVar7,0,8);
        goto LAB_0173fae0;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,pvVar7,0,8);
  }
LAB_0173fae0:
  uVar20 = *(undefined8 *)(lVar24 + 0x20);
  FUN_0014fef0(uVar20);
  (**(code **)*plVar10)(plVar10,uVar20);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  pvVar25 = local_380;
  if ((local_390 & 1) == 0) {
    pvVar25 = (void *)((long)&local_390 + 1);
  }
  FUN_001522a0(uVar20,pvVar25);
  pvVar25 = local_380;
  plVar1 = DAT_043f1798;
  if (((local_390 & 1) != 0) && (local_380 != (void *)0x0)) {
    plVar10 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar10 = plVar1;
    }
    uVar26 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar26 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar10,pvVar25,0,8);
        return;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,pvVar25,0,8);
  }
  return;
}


