/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024e1a20; name: FUN_024e1a20
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_024e1a20(long *param_1,char *param_2,char *param_3,long *param_4,long param_5,long *param_6
                 ,char *param_7,long *param_8,char *param_9,long *param_10,char *param_11,
                 long *param_12,char *param_13,long *param_14,char *param_15,long *param_16,
                 char *param_17,long *param_18)

{
  long *plVar1;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  size_t sVar16;
  long *plVar17;
  string *psVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  string *psVar22;
  string *psVar23;
  long *plVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  string *psVar28;
  undefined8 uVar29;
  string *psVar30;
  long *plVar31;
  char *pcVar32;
  long lVar33;
  long lVar34;
  void *pvVar35;
  string *psVar36;
  string *psVar37;
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
  
  lVar34 = *param_1;
  local_388 = 0;
  local_380 = (void *)0x0;
  local_390 = 0;
  sVar16 = strlen(param_2);
  plVar1 = DAT_043f1798;
  if (0xffffffffffffffef < sVar16) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar4 = tpidr_el0;
  if (sVar16 < 0x17) {
    local_390 = CONCAT71(local_390._1_7_,(char)((int)sVar16 << 1));
    pvVar35 = (void *)((ulong)&local_390 | 1);
    if (sVar16 != 0) goto LAB_024e1ac8;
  }
  else {
    uVar20 = sVar16 + 0x10 & 0xfffffffffffffff0;
    plVar17 = *(long **)(lVar4 + 0x20);
    if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
      *(long **)(lVar4 + 0x20) = DAT_043f1798;
      plVar17 = plVar1;
    }
    pvVar35 = (void *)(**(code **)(*plVar17 + 0x10))(plVar17,uVar20,8);
    local_390 = uVar20 | 1;
    local_388 = sVar16;
    local_380 = pvVar35;
LAB_024e1ac8:
    memcpy(pvVar35,param_2,sVar16);
  }
  *(undefined1 *)((long)pvVar35 + sVar16) = 0;
  plVar1 = DAT_043f1798;
  plVar17 = *(long **)(lVar4 + 0x20);
  if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
    *(long **)(lVar4 + 0x20) = DAT_043f1798;
    plVar17 = plVar1;
  }
  plVar17 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x180,8);
  plVar17[4] = 0;
  plVar31 = plVar17 + 1;
  *plVar31 = 0;
  plVar17[2] = 0;
  plVar17[3] = 0;
  *(undefined4 *)(plVar17 + 5) = 0x3f800000;
  plVar17[6] = (long)FUN_024e3b90;
  plVar17[7] = (long)FUN_024e3c40;
  plVar17[8] = 0;
  plVar17[9] = 0;
  plVar17[10] = 0;
  *(undefined1 *)(plVar17 + 0xb) = 0;
  *plVar17 = (long)&PTR_FUN_0425c2f0;
  plVar17[0xc] = (long)param_3;
  lVar25 = param_4[1];
  plVar17[0xd] = *param_4;
  plVar17[0xe] = lVar25;
  plVar17[0xf] = param_5;
  lVar25 = *param_6;
  plVar17[0x11] = param_6[1];
  plVar17[0x12] = (long)param_7;
  plVar17[0x10] = lVar25;
  lVar25 = *param_8;
  plVar17[0x14] = param_8[1];
  plVar17[0x15] = (long)param_9;
  plVar17[0x13] = lVar25;
  lVar25 = *param_10;
  plVar17[0x17] = param_10[1];
  plVar17[0x18] = (long)param_11;
  plVar17[0x16] = lVar25;
  lVar25 = param_12[1];
  plVar17[0x19] = *param_12;
  plVar17[0x1a] = lVar25;
  plVar17[0x1b] = (long)param_13;
  lVar25 = *param_14;
  plVar17[0x1d] = param_14[1];
  plVar17[0x1e] = (long)param_15;
  plVar17[0x1c] = lVar25;
  lVar25 = *param_16;
  plVar17[0x20] = param_16[1];
  plVar17[0x21] = (long)param_17;
  plVar17[0x1f] = lVar25;
  lVar25 = *param_18;
  lVar27 = param_18[1];
  plVar17[0x24] = (long)&DAT_038ca815;
  plVar17[0x25] = (long)&DAT_0392da3c;
  plVar17[0x26] = 0;
  plVar17[0x27] = 0;
  plVar17[0x2f] = 0;
  plVar17[0x28] = (long)FUN_024e3dd0;
  plVar17[0x29] = (long)&LAB_024e40b0;
  *(undefined1 *)(plVar17 + 0x2e) = 0;
  plVar17[0x2a] = (long)&LAB_024e4390;
  plVar17[0x2b] = (long)&LAB_024e43a0;
  plVar17[0x2c] = 0;
  plVar17[0x2d] = 0;
  plVar17[0x22] = lVar25;
  plVar17[0x23] = lVar27;
  sVar16 = strlen(param_3);
  plVar1 = DAT_043f1798;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar16) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar16 < 0x17) {
    local_80 = SUB41((int)sVar16 << 1,0);
    pvVar35 = (void *)((ulong)&local_80 | 1);
    if (sVar16 != 0) goto LAB_024e1c94;
  }
  else {
    uVar20 = sVar16 + 0x10 & 0xfffffffffffffff0;
    plVar24 = *(long **)(lVar4 + 0x20);
    if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
      *(long **)(lVar4 + 0x20) = DAT_043f1798;
      plVar24 = plVar1;
    }
    pvVar35 = (void *)(**(code **)(*plVar24 + 0x10))(plVar24,uVar20,8);
    local_80 = (string)((byte)uVar20 | 1);
    uStack_7f = (undefined7)(uVar20 >> 8);
    local_78 = (undefined1)sVar16;
    uStack_77 = (undefined7)(sVar16 >> 8);
    local_70 = pvVar35;
LAB_024e1c94:
    memcpy(pvVar35,param_3,sVar16);
  }
  local_250 = local_70;
  uStack_257 = uStack_77;
  uStack_258 = local_78;
  local_25f = uStack_7f;
  local_260 = local_80;
  *(undefined1 *)((long)pvVar35 + sVar16) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_270 = 0;
  uStack_269 = 0;
  uStack_268 = 0;
  local_248 = &LAB_024e43a4;
  puStack_240 = &LAB_024e43ec;
  local_238 = 0xffffffff;
  pcVar32 = (char *)plVar17[0xf];
  sVar16 = strlen(pcVar32);
  plVar1 = DAT_043f1798;
  local_298 = 0;
  uStack_297 = 0;
  local_290 = 0;
  uStack_28f = 0;
  local_288 = (void *)0x0;
  if (0xffffffffffffffef < sVar16) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar16 < 0x17) {
    local_298 = (byte)((int)sVar16 << 1);
    pvVar35 = (void *)((ulong)&local_298 | 1);
    if (sVar16 != 0) goto LAB_024e1d3c;
  }
  else {
    uVar20 = sVar16 + 0x10 & 0xfffffffffffffff0;
    plVar24 = *(long **)(lVar4 + 0x20);
    if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
      *(long **)(lVar4 + 0x20) = DAT_043f1798;
      plVar24 = plVar1;
    }
    pvVar35 = (void *)(**(code **)(*plVar24 + 0x10))(plVar24,uVar20,8);
    local_298 = (byte)uVar20 | 1;
    uStack_297 = (undefined7)(uVar20 >> 8);
    local_290 = (undefined1)sVar16;
    uStack_28f = (undefined7)(sVar16 >> 8);
    local_288 = pvVar35;
LAB_024e1d3c:
    memcpy(pvVar35,pcVar32,sVar16);
  }
  local_220 = local_288;
  uStack_227 = uStack_28f;
  uStack_228 = local_290;
  local_22f = uStack_297;
  local_230 = local_298;
  *(undefined1 *)((long)pvVar35 + sVar16) = 0;
  local_298 = 0;
  uStack_297 = 0;
  local_290 = 0;
  uStack_28f = 0;
  local_288 = (void *)0x0;
  local_280 = 0;
  uStack_279 = 0;
  uStack_278 = 0;
  local_208 = 0xffffffff;
  local_218 = &LAB_024e4434;
  puStack_210 = &LAB_024e447c;
  sVar16 = strlen(param_7);
  plVar1 = DAT_043f1798;
  local_2c0 = 0;
  uStack_2bf = 0;
  local_2b8 = 0;
  uStack_2b7 = 0;
  local_2b0 = (void *)0x0;
  if (0xffffffffffffffef < sVar16) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  psVar36 = &local_260;
  if (sVar16 < 0x17) {
    local_2c0 = (byte)((int)sVar16 << 1);
    pvVar35 = (void *)((ulong)&local_2c0 | 1);
    if (sVar16 != 0) goto LAB_024e1dd8;
  }
  else {
    uVar20 = sVar16 + 0x10 & 0xfffffffffffffff0;
    plVar24 = *(long **)(lVar4 + 0x20);
    if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
      *(long **)(lVar4 + 0x20) = DAT_043f1798;
      plVar24 = plVar1;
    }
    pvVar35 = (void *)(**(code **)(*plVar24 + 0x10))(plVar24,uVar20,8);
    local_2c0 = (byte)uVar20 | 1;
    uStack_2bf = (undefined7)(uVar20 >> 8);
    local_2b8 = (undefined1)sVar16;
    uStack_2b7 = (undefined7)(sVar16 >> 8);
    local_2b0 = pvVar35;
LAB_024e1dd8:
    memcpy(pvVar35,param_7,sVar16);
  }
  local_1f0 = local_2b0;
  uStack_1f7 = uStack_2b7;
  uStack_1f8 = local_2b8;
  local_1ff = uStack_2bf;
  local_200 = local_2c0;
  *(undefined1 *)((long)pvVar35 + sVar16) = 0;
  local_2c0 = 0;
  uStack_2bf = 0;
  local_2b8 = 0;
  uStack_2b7 = 0;
  local_2b0 = (void *)0x0;
  local_2a8 = 0;
  uStack_2a1 = 0;
  uStack_2a0 = 0;
  local_1e0 = &LAB_024e450c;
  local_1e8 = &LAB_024e44c4;
  local_1d8 = 0xffffffff;
  sVar16 = strlen(param_9);
  plVar1 = DAT_043f1798;
  local_2e8 = 0;
  uStack_2e7 = 0;
  local_2e0 = 0;
  uStack_2df = 0;
  local_2d8 = (void *)0x0;
  if (0xffffffffffffffef < sVar16) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar16 < 0x17) {
    local_2e8 = (byte)((int)sVar16 << 1);
    pvVar35 = (void *)((ulong)&local_2e8 | 1);
    if (sVar16 != 0) goto LAB_024e1e78;
  }
  else {
    uVar20 = sVar16 + 0x10 & 0xfffffffffffffff0;
    plVar24 = *(long **)(lVar4 + 0x20);
    if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
      *(long **)(lVar4 + 0x20) = DAT_043f1798;
      plVar24 = plVar1;
    }
    pvVar35 = (void *)(**(code **)(*plVar24 + 0x10))(plVar24,uVar20,8);
    local_2e8 = (byte)uVar20 | 1;
    uStack_2e7 = (undefined7)(uVar20 >> 8);
    local_2e0 = (undefined1)sVar16;
    uStack_2df = (undefined7)(sVar16 >> 8);
    local_2d8 = pvVar35;
LAB_024e1e78:
    memcpy(pvVar35,param_9,sVar16);
  }
  local_1c0 = local_2d8;
  uStack_1c7 = uStack_2df;
  uStack_1c8 = local_2e0;
  local_1cf = uStack_2e7;
  local_1d0 = local_2e8;
  *(undefined1 *)((long)pvVar35 + sVar16) = 0;
  local_2e8 = 0;
  uStack_2e7 = 0;
  local_2e0 = 0;
  uStack_2df = 0;
  local_2d8 = (void *)0x0;
  local_2d0 = 0;
  uStack_2c9 = 0;
  uStack_2c8 = 0;
  local_1b0 = &LAB_024e459c;
  local_1b8 = &LAB_024e4554;
  local_1a8 = 0xffffffff;
  sVar16 = strlen(param_11);
  plVar1 = DAT_043f1798;
  local_310 = 0;
  uStack_30f = 0;
  local_308 = 0;
  uStack_307 = 0;
  local_300 = (void *)0x0;
  if (0xffffffffffffffef < sVar16) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar16 < 0x17) {
    local_310 = (byte)((int)sVar16 << 1);
    pvVar35 = (void *)((ulong)&local_310 | 1);
    if (sVar16 != 0) goto LAB_024e1f20;
  }
  else {
    uVar20 = sVar16 + 0x10 & 0xfffffffffffffff0;
    plVar24 = *(long **)(lVar4 + 0x20);
    if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
      *(long **)(lVar4 + 0x20) = DAT_043f1798;
      plVar24 = plVar1;
    }
    pvVar35 = (void *)(**(code **)(*plVar24 + 0x10))(plVar24,uVar20,8);
    local_310 = (byte)uVar20 | 1;
    uStack_30f = (undefined7)(uVar20 >> 8);
    local_308 = (undefined1)sVar16;
    uStack_307 = (undefined7)(sVar16 >> 8);
    local_300 = pvVar35;
LAB_024e1f20:
    memcpy(pvVar35,param_11,sVar16);
  }
  local_190 = local_300;
  uStack_197 = uStack_307;
  uStack_198 = local_308;
  local_19f = uStack_30f;
  local_1a0 = local_310;
  *(undefined1 *)((long)pvVar35 + sVar16) = 0;
  local_310 = 0;
  uStack_30f = 0;
  local_308 = 0;
  uStack_307 = 0;
  local_300 = (void *)0x0;
  local_2f8 = 0;
  uStack_2f1 = 0;
  uStack_2f0 = 0;
  local_178 = 0xffffffff;
  local_180 = &LAB_024e462c;
  local_188 = &LAB_024e45e4;
  sVar16 = strlen(param_13);
  plVar1 = DAT_043f1798;
  local_338 = 0;
  uStack_337 = 0;
  local_330 = 0;
  uStack_32f = 0;
  local_328 = (void *)0x0;
  if (0xffffffffffffffef < sVar16) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar16 < 0x17) {
    local_338 = (byte)((int)sVar16 << 1);
    pvVar35 = (void *)((ulong)&local_338 | 1);
    if (sVar16 != 0) goto LAB_024e1fc4;
  }
  else {
    uVar20 = sVar16 + 0x10 & 0xfffffffffffffff0;
    plVar24 = *(long **)(lVar4 + 0x20);
    if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
      *(long **)(lVar4 + 0x20) = DAT_043f1798;
      plVar24 = plVar1;
    }
    pvVar35 = (void *)(**(code **)(*plVar24 + 0x10))(plVar24,uVar20,8);
    local_338 = (byte)uVar20 | 1;
    uStack_337 = (undefined7)(uVar20 >> 8);
    local_330 = (undefined1)sVar16;
    uStack_32f = (undefined7)(sVar16 >> 8);
    local_328 = pvVar35;
LAB_024e1fc4:
    memcpy(pvVar35,param_13,sVar16);
  }
  local_160 = local_328;
  uStack_167 = uStack_32f;
  uStack_168 = local_330;
  local_16f = uStack_337;
  local_170 = local_338;
  *(undefined1 *)((long)pvVar35 + sVar16) = 0;
  local_330 = 0;
  uStack_32f = 0;
  local_328 = (void *)0x0;
  local_338 = 0;
  uStack_337 = 0;
  local_320 = 0;
  uStack_319 = 0;
  uStack_318 = 0;
  local_150 = &LAB_024e46bc;
  local_158 = &LAB_024e4674;
  local_148 = 0xffffffff;
  sVar16 = strlen(param_15);
  plVar1 = DAT_043f1798;
  local_360 = 0;
  uStack_35f = 0;
  local_358 = 0;
  uStack_357 = 0;
  local_350 = (void *)0x0;
  if (0xffffffffffffffef < sVar16) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar16 < 0x17) {
    local_360 = (byte)((int)sVar16 << 1);
    pvVar35 = (void *)((ulong)&local_360 | 1);
    if (sVar16 != 0) goto LAB_024e2070;
  }
  else {
    uVar20 = sVar16 + 0x10 & 0xfffffffffffffff0;
    plVar24 = *(long **)(lVar4 + 0x20);
    if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
      *(long **)(lVar4 + 0x20) = DAT_043f1798;
      plVar24 = plVar1;
    }
    pvVar35 = (void *)(**(code **)(*plVar24 + 0x10))(plVar24,uVar20,8);
    local_360 = (byte)uVar20 | 1;
    uStack_35f = (undefined7)(uVar20 >> 8);
    local_358 = (undefined1)sVar16;
    uStack_357 = (undefined7)(sVar16 >> 8);
    local_350 = pvVar35;
LAB_024e2070:
    memcpy(pvVar35,param_15,sVar16);
  }
  local_130 = local_350;
  uStack_137 = uStack_357;
  uStack_138 = local_358;
  *(undefined1 *)((long)pvVar35 + sVar16) = 0;
  local_140 = local_360;
  local_358 = 0;
  uStack_357 = 0;
  local_350 = (void *)0x0;
  local_13f = uStack_35f;
  local_128 = &LAB_024e4704;
  local_360 = 0;
  uStack_35f = 0;
  local_348 = 0;
  uStack_341 = 0;
  uStack_340 = 0;
  local_118 = 0xffffffff;
  local_120 = &LAB_024e474c;
  sVar16 = strlen(param_17);
  plVar1 = DAT_043f1798;
  local_378 = 0;
  uStack_377 = 0;
  local_370 = 0;
  uStack_36f = 0;
  local_368 = (void *)0x0;
  if (0xffffffffffffffef < sVar16) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar16 < 0x17) {
    local_378 = (byte)((int)sVar16 << 1);
    pvVar35 = (void *)((ulong)&local_378 | 1);
    if (sVar16 != 0) goto LAB_024e211c;
  }
  else {
    uVar20 = sVar16 + 0x10 & 0xfffffffffffffff0;
    plVar24 = *(long **)(lVar4 + 0x20);
    if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
      *(long **)(lVar4 + 0x20) = DAT_043f1798;
      plVar24 = plVar1;
    }
    pvVar35 = (void *)(**(code **)(*plVar24 + 0x10))(plVar24,uVar20,8);
    local_378 = (byte)uVar20 | 1;
    uStack_377 = (undefined7)(uVar20 >> 8);
    local_370 = (undefined1)sVar16;
    uStack_36f = (undefined7)(sVar16 >> 8);
    local_368 = pvVar35;
LAB_024e211c:
    memcpy(pvVar35,param_17,sVar16);
  }
  *(undefined1 *)((long)pvVar35 + sVar16) = 0;
  psVar30 = &local_260;
  local_110 = local_378;
  local_10f = uStack_377;
  local_f8 = &LAB_024e4794;
  local_e0 = 6;
  local_100 = local_368;
  local_f0 = &LAB_024e47dc;
  uStack_108 = local_370;
  uStack_107 = uStack_36f;
  local_e8 = 0xffffffff;
  local_df = 0x656e;
  local_dd = 0x77;
  local_dc = 0;
  local_d4 = 0;
  local_c0 = &LAB_024e486c;
  local_d0 = 0;
  plVar1 = plVar17 + 3;
  local_c8 = &LAB_024e4824;
  local_b0 = 8;
  local_b8 = 0xffffffff;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_a0 = 0;
  local_90 = &LAB_024e48fc;
  local_88 = 0xffffffff;
  local_98 = &LAB_024e48b4;
  do {
    uVar20 = *(ulong *)(psVar30 + 8);
    psVar18 = *(string **)(psVar30 + 0x10);
    if (((byte)*psVar30 & 1) == 0) {
      psVar18 = psVar30 + 1;
      uVar20 = (ulong)((byte)*psVar30 >> 1);
    }
    psVar18 = (string *)FUN_008e8ed4(&local_80,psVar18,uVar20);
    psVar37 = (string *)plVar17[2];
    if (psVar37 != (string *)0x0) {
      uVar20 = (long)psVar37 - ((ulong)psVar37 >> 1 & 0x5555555555555555);
      uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
      uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar20 < 2) {
        psVar36 = (string *)((ulong)(psVar37 + -1) & (ulong)psVar18);
      }
      else {
        psVar36 = psVar18;
        if (psVar37 <= psVar18) {
          uVar26 = 0;
          if (psVar37 != (string *)0x0) {
            uVar26 = (ulong)psVar18 / (ulong)psVar37;
          }
          psVar36 = psVar18 + -(uVar26 * (long)psVar37);
        }
      }
      plVar24 = *(long **)(*plVar31 + (long)psVar36 * 8);
      if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
        psVar23 = psVar30 + 1;
        sVar16 = (ulong)((byte)*psVar30 >> 1);
        if (((byte)*psVar30 & 1) != 0) {
          psVar23 = *(string **)(psVar30 + 0x10);
          sVar16 = *(size_t *)(psVar30 + 8);
        }
        if (uVar20 < 2) {
          if (sVar16 == 0) {
            do {
              if ((string *)plVar24[1] != psVar18 &&
                  (string *)((ulong)plVar24[1] & (ulong)(psVar37 + -1)) != psVar36) break;
              uVar20 = (ulong)(*(byte *)(plVar24 + 2) >> 1);
              if ((*(byte *)(plVar24 + 2) & 1) != 0) {
                uVar20 = plVar24[3];
              }
              if (uVar20 == 0) goto LAB_024e2380;
              plVar24 = (long *)*plVar24;
            } while (plVar24 != (long *)0x0);
          }
          else {
            do {
              if ((string *)plVar24[1] != psVar18 &&
                  (string *)((ulong)plVar24[1] & (ulong)(psVar37 + -1)) != psVar36) break;
              bVar3 = *(byte *)(plVar24 + 2);
              uVar20 = (ulong)(bVar3 >> 1);
              sVar2 = uVar20;
              if ((bVar3 & 1) != 0) {
                sVar2 = plVar24[3];
              }
              if (sVar2 == sVar16) {
                if ((bVar3 & 1) == 0) {
                  psVar22 = (string *)((long)plVar24 + 0x11);
                  psVar28 = psVar23;
                  while (*psVar22 == *psVar28) {
                    uVar20 = uVar20 - 1;
                    psVar22 = psVar22 + 1;
                    psVar28 = psVar28 + 1;
                    if (uVar20 == 0) goto LAB_024e2380;
                  }
                }
                else {
                  iVar6 = memcmp((void *)plVar24[4],psVar23,sVar16);
                  if (iVar6 == 0) goto LAB_024e2380;
                }
              }
              plVar24 = (long *)*plVar24;
            } while (plVar24 != (long *)0x0);
          }
        }
        else if (sVar16 == 0) {
          do {
            psVar23 = (string *)plVar24[1];
            if (psVar23 != psVar18) {
              if (psVar37 <= psVar23) {
                uVar20 = 0;
                if (psVar37 != (string *)0x0) {
                  uVar20 = (ulong)psVar23 / (ulong)psVar37;
                }
                psVar23 = psVar23 + -(uVar20 * (long)psVar37);
              }
              if (psVar23 != psVar36) break;
            }
            uVar20 = (ulong)(*(byte *)(plVar24 + 2) >> 1);
            if ((*(byte *)(plVar24 + 2) & 1) != 0) {
              uVar20 = plVar24[3];
            }
            if (uVar20 == 0) goto LAB_024e2380;
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
        else {
          do {
            psVar22 = (string *)plVar24[1];
            if (psVar22 != psVar18) {
              if (psVar37 <= psVar22) {
                uVar20 = 0;
                if (psVar37 != (string *)0x0) {
                  uVar20 = (ulong)psVar22 / (ulong)psVar37;
                }
                psVar22 = psVar22 + -(uVar20 * (long)psVar37);
              }
              if (psVar22 != psVar36) break;
            }
            bVar3 = *(byte *)(plVar24 + 2);
            uVar20 = (ulong)(bVar3 >> 1);
            sVar2 = uVar20;
            if ((bVar3 & 1) != 0) {
              sVar2 = plVar24[3];
            }
            if (sVar2 == sVar16) {
              if ((bVar3 & 1) == 0) {
                psVar22 = (string *)((long)plVar24 + 0x11);
                psVar28 = psVar23;
                while (*psVar22 == *psVar28) {
                  uVar20 = uVar20 - 1;
                  psVar22 = psVar22 + 1;
                  psVar28 = psVar28 + 1;
                  if (uVar20 == 0) goto LAB_024e2380;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar24[4],psVar23,sVar16);
                if (iVar6 == 0) goto LAB_024e2380;
              }
            }
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
      }
    }
    plVar24 = DAT_043f1798;
    plVar21 = *(long **)(lVar4 + 0x20);
    if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
      *(long **)(lVar4 + 0x20) = DAT_043f1798;
      plVar21 = plVar24;
    }
    plVar24 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0x40,8);
    std::string::string((string *)(plVar24 + 2),psVar30);
    lVar25 = *(long *)(psVar30 + 0x18);
    lVar27 = *(long *)(psVar30 + 0x28);
    plVar24[6] = *(long *)(psVar30 + 0x20);
    plVar24[7] = lVar27;
    plVar24[5] = lVar25;
    *plVar24 = 0;
    plVar24[1] = (long)psVar18;
    if ((psVar37 == (string *)0x0) ||
       (*(float *)(plVar17 + 5) * (float)psVar37 < (float)(plVar17[4] + 1))) {
      uVar20 = (ulong)(psVar37 < (string *)0x3 || ((ulong)psVar37 & (ulong)(psVar37 + -1)) != 0) |
               (long)psVar37 << 1;
      uVar26 = (ulong)((float)(plVar17[4] + 1) / *(float *)(plVar17 + 5));
      if (uVar26 <= uVar20) {
        uVar26 = uVar20;
      }
      FUN_008e9ae4(plVar31,uVar26);
      psVar37 = (string *)plVar17[2];
      if (((ulong)psVar37 & (ulong)(psVar37 + -1)) == 0) {
        psVar36 = (string *)((ulong)(psVar37 + -1) & (ulong)psVar18);
      }
      else if (psVar18 < psVar37) {
        psVar36 = psVar18;
      }
      else {
        uVar20 = 0;
        if (psVar37 != (string *)0x0) {
          uVar20 = (ulong)psVar18 / (ulong)psVar37;
        }
        psVar36 = psVar18 + -(uVar20 * (long)psVar37);
      }
    }
    lVar25 = *plVar31;
    plVar21 = *(long **)(lVar25 + (long)psVar36 * 8);
    if (plVar21 == (long *)0x0) {
      *plVar24 = *plVar1;
      *plVar1 = (long)plVar24;
      *(long **)(lVar25 + (long)psVar36 * 8) = plVar1;
      if (*plVar24 != 0) {
        psVar18 = *(string **)(*plVar24 + 8);
        if (((ulong)psVar37 & (ulong)(psVar37 + -1)) == 0) {
          psVar18 = (string *)((ulong)psVar18 & (ulong)(psVar37 + -1));
        }
        else if (psVar37 <= psVar18) {
          uVar20 = 0;
          if (psVar37 != (string *)0x0) {
            uVar20 = (ulong)psVar18 / (ulong)psVar37;
          }
          psVar18 = psVar18 + -(uVar20 * (long)psVar37);
        }
        plVar21 = (long *)(*plVar31 + (long)psVar18 * 8);
        goto LAB_024e2370;
      }
    }
    else {
      *plVar24 = *plVar21;
LAB_024e2370:
      *plVar21 = (long)plVar24;
    }
    plVar17[4] = plVar17[4] + 1;
LAB_024e2380:
    psVar30 = psVar30 + 0x30;
  } while (psVar30 != &local_80);
  lVar27 = FUN_008cca50();
  lVar25 = 0;
  do {
    lVar19 = FUN_008e8c90(plVar31,lVar27 + lVar25);
    if (lVar19 != 0) {
      FUN_008f2aec(&local_80,plVar31,lVar19);
      plVar1 = DAT_043f1798;
      lVar19 = CONCAT71(uStack_7f,local_80);
      local_80 = (string)0x0;
      uStack_7f = 0;
      if (lVar19 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar19 + 0x10) & 1) != 0)) &&
           (lVar33 = *(long *)(lVar19 + 0x20), lVar33 != 0)) {
          plVar24 = *(long **)(lVar4 + 0x20);
          if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
            *(long **)(lVar4 + 0x20) = DAT_043f1798;
            plVar24 = plVar1;
          }
          uVar20 = (**(code **)(*plVar24 + 0xc0))(plVar24);
          if ((uVar20 & 1) != 0) {
            if (*(char *)(lVar4 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar4 + 0x38d488) = 1;
              *(undefined8 *)(lVar4 + 0x38d478) = 0;
              *(undefined8 *)(lVar4 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar4 + 0x38d480)) {
              FUN_02bcc824(plVar24,lVar33,0,8);
              goto LAB_024e2ab0;
            }
          }
          (**(code **)(*plVar24 + 0x18))(plVar24,lVar33,0,8);
        }
LAB_024e2ab0:
        plVar1 = DAT_043f1798;
        plVar24 = *(long **)(lVar4 + 0x20);
        if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
          *(long **)(lVar4 + 0x20) = DAT_043f1798;
          plVar24 = plVar1;
        }
        uVar20 = (**(code **)(*plVar24 + 0xc0))(plVar24);
        if ((uVar20 & 1) != 0) {
          if (*(char *)(lVar4 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar4 + 0x38d488) = 1;
            *(undefined8 *)(lVar4 + 0x38d478) = 0;
            *(undefined8 *)(lVar4 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar4 + 0x38d480)) {
            FUN_02bcc824(plVar24,lVar19,0,8);
            goto LAB_024e2a68;
          }
        }
        (**(code **)(*plVar24 + 0x18))(plVar24,lVar19,0,8);
      }
    }
LAB_024e2a68:
    lVar25 = lVar25 + 0x18;
  } while (lVar25 != 0x300);
  pcVar32 = (char *)plVar17[0xc];
  sVar16 = strlen(pcVar32);
  iVar6 = FUN_008f2c60(sVar16,pcVar32);
  pcVar32 = (char *)plVar17[0xf];
  sVar16 = strlen(pcVar32);
  iVar7 = FUN_008f2c60(sVar16,pcVar32);
  pcVar32 = (char *)plVar17[0x12];
  sVar16 = strlen(pcVar32);
  iVar8 = FUN_008f2c60(sVar16,pcVar32);
  pcVar32 = (char *)plVar17[0x15];
  sVar16 = strlen(pcVar32);
  iVar9 = FUN_008f2c60(sVar16,pcVar32);
  pcVar32 = (char *)plVar17[0x18];
  sVar16 = strlen(pcVar32);
  iVar10 = FUN_008f2c60(sVar16,pcVar32);
  pcVar32 = (char *)plVar17[0x1b];
  sVar16 = strlen(pcVar32);
  iVar11 = FUN_008f2c60(sVar16,pcVar32);
  pcVar32 = (char *)plVar17[0x1e];
  sVar16 = strlen(pcVar32);
  iVar12 = FUN_008f2c60(sVar16,pcVar32);
  pcVar32 = (char *)plVar17[0x21];
  sVar16 = strlen(pcVar32);
  iVar13 = FUN_008f2c60(sVar16,pcVar32);
  pcVar32 = (char *)plVar17[0x24];
  sVar16 = strlen(pcVar32);
  iVar14 = FUN_008f2c60(sVar16,pcVar32);
  pcVar32 = (char *)plVar17[0x25];
  sVar16 = strlen(pcVar32);
  iVar15 = FUN_008f2c60(sVar16,pcVar32);
  lVar27 = local_a0;
  *(bool *)(plVar17 + 0xb) =
       ((((((((iVar7 != 0 || iVar6 != 0) || iVar8 != 0) || iVar9 != 0) || iVar10 != 0) ||
          iVar11 != 0) || iVar12 != 0) || iVar13 != 0) || iVar14 != 0) || iVar15 != 0;
  plVar1 = DAT_043f1798;
  lVar25 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar31 = *(long **)(lVar4 + 0x20);
    if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
      *(long **)(lVar4 + 0x20) = DAT_043f1798;
      plVar31 = plVar1;
    }
    uVar20 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar20 & 1) != 0) {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar27,0,8);
        plVar1 = DAT_043f1798;
        lVar25 = local_d0;
        goto joined_r0x024e2ce8;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar27,0,8);
    plVar1 = DAT_043f1798;
    lVar25 = local_d0;
  }
joined_r0x024e2ce8:
  pvVar35 = local_100;
  local_d0 = lVar25;
  if (((local_e0 & 1) != 0) && (lVar25 != 0)) {
    plVar31 = *(long **)(lVar4 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
      *(long **)(lVar4 + 0x20) = plVar1;
      plVar31 = plVar1;
    }
    uVar20 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar20 & 1) != 0) {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar25,0,8);
        plVar1 = DAT_043f1798;
        pvVar35 = local_100;
        goto joined_r0x024e3578;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar25,0,8);
    plVar1 = DAT_043f1798;
    pvVar35 = local_100;
  }
joined_r0x024e3578:
  pvVar5 = local_130;
  local_100 = pvVar35;
  if (((local_110 & 1) != 0) && (pvVar35 != (void *)0x0)) {
    plVar31 = *(long **)(lVar4 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
      *(long **)(lVar4 + 0x20) = plVar1;
      plVar31 = plVar1;
    }
    uVar20 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar20 & 1) != 0) {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar31,pvVar35,0,8);
        plVar1 = DAT_043f1798;
        pvVar5 = local_130;
        goto joined_r0x024e2e50;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,pvVar35,0,8);
    plVar1 = DAT_043f1798;
    pvVar5 = local_130;
  }
joined_r0x024e2e50:
  pvVar35 = local_160;
  local_130 = pvVar5;
  if (((local_140 & 1) != 0) && (pvVar5 != (void *)0x0)) {
    plVar31 = *(long **)(lVar4 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
      *(long **)(lVar4 + 0x20) = plVar1;
      plVar31 = plVar1;
    }
    uVar20 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar20 & 1) != 0) {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar31,pvVar5,0,8);
        plVar1 = DAT_043f1798;
        pvVar35 = local_160;
        goto joined_r0x024e35b8;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,pvVar5,0,8);
    plVar1 = DAT_043f1798;
    pvVar35 = local_160;
  }
joined_r0x024e35b8:
  pvVar5 = local_190;
  local_160 = pvVar35;
  if (((local_170 & 1) != 0) && (pvVar35 != (void *)0x0)) {
    plVar31 = *(long **)(lVar4 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
      *(long **)(lVar4 + 0x20) = plVar1;
      plVar31 = plVar1;
    }
    uVar20 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar20 & 1) != 0) {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar31,pvVar35,0,8);
        plVar1 = DAT_043f1798;
        pvVar5 = local_190;
        goto joined_r0x024e2fb8;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,pvVar35,0,8);
    plVar1 = DAT_043f1798;
    pvVar5 = local_190;
  }
joined_r0x024e2fb8:
  pvVar35 = local_1c0;
  local_190 = pvVar5;
  if (((local_1a0 & 1) != 0) && (pvVar5 != (void *)0x0)) {
    plVar31 = *(long **)(lVar4 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
      *(long **)(lVar4 + 0x20) = plVar1;
      plVar31 = plVar1;
    }
    uVar20 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar20 & 1) != 0) {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar31,pvVar5,0,8);
        plVar1 = DAT_043f1798;
        pvVar35 = local_1c0;
        goto joined_r0x024e35f8;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,pvVar5,0,8);
    plVar1 = DAT_043f1798;
    pvVar35 = local_1c0;
  }
joined_r0x024e35f8:
  pvVar5 = local_1f0;
  local_1c0 = pvVar35;
  if (((local_1d0 & 1) != 0) && (pvVar35 != (void *)0x0)) {
    plVar31 = *(long **)(lVar4 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
      *(long **)(lVar4 + 0x20) = plVar1;
      plVar31 = plVar1;
    }
    uVar20 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar20 & 1) != 0) {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar31,pvVar35,0,8);
        plVar1 = DAT_043f1798;
        pvVar5 = local_1f0;
        goto joined_r0x024e3120;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,pvVar35,0,8);
    plVar1 = DAT_043f1798;
    pvVar5 = local_1f0;
  }
joined_r0x024e3120:
  pvVar35 = local_220;
  local_1f0 = pvVar5;
  if (((local_200 & 1) != 0) && (pvVar5 != (void *)0x0)) {
    plVar31 = *(long **)(lVar4 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
      *(long **)(lVar4 + 0x20) = plVar1;
      plVar31 = plVar1;
    }
    uVar20 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar20 & 1) != 0) {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar31,pvVar5,0,8);
        plVar1 = DAT_043f1798;
        pvVar35 = local_220;
        goto joined_r0x024e3638;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,pvVar5,0,8);
    plVar1 = DAT_043f1798;
    pvVar35 = local_220;
  }
joined_r0x024e3638:
  pvVar5 = local_250;
  local_220 = pvVar35;
  if (((local_230 & 1) != 0) && (pvVar35 != (void *)0x0)) {
    plVar31 = *(long **)(lVar4 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
      *(long **)(lVar4 + 0x20) = plVar1;
      plVar31 = plVar1;
    }
    uVar20 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar20 & 1) != 0) {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar31,pvVar35,0,8);
        plVar1 = DAT_043f1798;
        pvVar5 = local_250;
        goto joined_r0x024e3288;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,pvVar35,0,8);
    plVar1 = DAT_043f1798;
    pvVar5 = local_250;
  }
joined_r0x024e3288:
  DAT_043f1798 = plVar1;
  local_250 = pvVar5;
  if ((((byte)local_260 & 1) != 0) && (pvVar5 != (void *)0x0)) {
    plVar31 = *(long **)(lVar4 + 0x20);
    if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
      *(long **)(lVar4 + 0x20) = plVar1;
      plVar31 = plVar1;
    }
    uVar20 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar20 & 1) != 0) {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar31,pvVar5,0,8);
        goto LAB_024e3338;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,pvVar5,0,8);
  }
LAB_024e3338:
  uVar29 = *(undefined8 *)(lVar34 + 0x20);
  FUN_0014fef0(uVar29);
  (**(code **)*plVar17)(plVar17,uVar29);
  (**(code **)(*plVar17 + 0x10))(plVar17);
  pvVar35 = local_380;
  if ((local_390 & 1) == 0) {
    pvVar35 = (void *)((long)&local_390 + 1);
  }
  FUN_001522a0(uVar29,pvVar35);
  pvVar35 = local_380;
  plVar1 = DAT_043f1798;
  if (((local_390 & 1) != 0) && (local_380 != (void *)0x0)) {
    plVar17 = *(long **)(lVar4 + 0x20);
    if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
      *(long **)(lVar4 + 0x20) = DAT_043f1798;
      plVar17 = plVar1;
    }
    uVar20 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar20 & 1) != 0) {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar17,pvVar35,0,8);
        return;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,pvVar35,0,8);
  }
  return;
}


