/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 022a2d64; name: FUN_022a2d64
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_022a2d64(long *param_1,char *param_2,char *param_3,long *param_4,long param_5,long *param_6
                 ,long param_7,long *param_8,char *param_9,long *param_10,char *param_11,
                 long *param_12,char *param_13,long *param_14,char *param_15,long *param_16,
                 char *param_17,long *param_18,char *param_19,long *param_20)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  long lVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  size_t sVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  char *pcVar23;
  long *plVar24;
  long lVar25;
  ulong uVar26;
  string *psVar27;
  long lVar28;
  string *psVar29;
  undefined8 uVar30;
  string *psVar31;
  long *plVar32;
  char *pcVar33;
  long lVar34;
  void *pvVar35;
  char *pcVar36;
  undefined8 local_3b8;
  size_t local_3b0;
  void *local_3a8;
  byte local_3a0;
  undefined7 uStack_39f;
  undefined1 local_398;
  undefined7 uStack_397;
  void *local_390;
  byte local_388;
  undefined7 uStack_387;
  undefined1 local_380;
  undefined7 uStack_37f;
  void *local_378;
  undefined7 local_370;
  undefined1 uStack_369;
  undefined7 uStack_368;
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
  
  lVar20 = *param_1;
  local_3b8 = 0;
  local_3b0 = 0;
  local_3a8 = (void *)0x0;
  sVar17 = strlen(param_2);
  plVar1 = DAT_043f1798;
  if (0xffffffffffffffef < sVar17) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar5 = tpidr_el0;
  if (sVar17 < 0x17) {
    local_3b8 = CONCAT71(local_3b8._1_7_,(char)((int)sVar17 << 1));
    pvVar35 = (void *)((ulong)&local_3b8 | 1);
    if (sVar17 != 0) goto LAB_022a2e20;
  }
  else {
    uVar21 = sVar17 + 0x10 & 0xfffffffffffffff0;
    plVar18 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar18 = plVar1;
    }
    pvVar35 = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar21,8);
    local_3b8 = uVar21 | 1;
    local_3b0 = sVar17;
    local_3a8 = pvVar35;
LAB_022a2e20:
    memcpy(pvVar35,param_2,sVar17);
  }
  *(undefined1 *)((long)pvVar35 + sVar17) = 0;
  plVar1 = DAT_043f1798;
  plVar18 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar18 = plVar1;
  }
  plVar18 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18,400,8);
  plVar18[4] = 0;
  plVar32 = plVar18 + 1;
  *plVar32 = 0;
  *(undefined4 *)(plVar18 + 5) = 0x3f800000;
  plVar18[10] = 0;
  *(undefined1 *)(plVar18 + 0xb) = 0;
  plVar18[6] = (long)FUN_022a4f60;
  plVar18[7] = (long)FUN_022a5010;
  *plVar18 = (long)&PTR_FUN_0425ba10;
  plVar18[2] = 0;
  plVar18[3] = 0;
  plVar18[8] = 0;
  plVar18[9] = 0;
  plVar18[0xc] = (long)param_3;
  lVar25 = param_4[1];
  plVar18[0xd] = *param_4;
  plVar18[0xe] = lVar25;
  plVar18[0xf] = param_5;
  lVar25 = param_6[1];
  plVar18[0x10] = *param_6;
  plVar18[0x11] = lVar25;
  plVar18[0x12] = param_7;
  lVar25 = param_8[1];
  plVar18[0x13] = *param_8;
  plVar18[0x14] = lVar25;
  plVar18[0x15] = (long)param_9;
  lVar25 = param_10[1];
  plVar18[0x16] = *param_10;
  plVar18[0x17] = lVar25;
  plVar18[0x18] = (long)param_11;
  lVar25 = param_12[1];
  plVar18[0x19] = *param_12;
  plVar18[0x1a] = lVar25;
  plVar18[0x1b] = (long)param_13;
  lVar25 = param_14[1];
  plVar18[0x1c] = *param_14;
  plVar18[0x1d] = lVar25;
  plVar18[0x1e] = (long)param_15;
  lVar25 = param_16[1];
  plVar18[0x1f] = *param_16;
  plVar18[0x20] = lVar25;
  plVar18[0x21] = (long)param_17;
  lVar25 = param_18[1];
  plVar18[0x22] = *param_18;
  plVar18[0x23] = lVar25;
  plVar18[0x24] = (long)param_19;
  lVar25 = *param_20;
  lVar28 = param_20[1];
  plVar18[0x31] = 0;
  plVar18[0x27] = (long)&DAT_0392da3c;
  plVar18[0x28] = 0;
  plVar18[0x2f] = 0;
  plVar18[0x29] = 0;
  plVar18[0x2a] = (long)FUN_022a51a0;
  *(undefined1 *)(plVar18 + 0x30) = 0;
  plVar18[0x2b] = (long)&LAB_022a5480;
  plVar18[0x2c] = (long)&LAB_022a5760;
  plVar18[0x25] = lVar25;
  plVar18[0x26] = lVar28;
  plVar18[0x2d] = (long)&LAB_022a5770;
  plVar18[0x2e] = 0;
  sVar17 = strlen(param_3);
  plVar1 = DAT_043f1798;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar17) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar17 < 0x17) {
    local_80 = SUB41((int)sVar17 << 1,0);
    pvVar35 = (void *)((ulong)&local_80 | 1);
    if (sVar17 != 0) goto LAB_022a3000;
  }
  else {
    uVar21 = sVar17 + 0x10 & 0xfffffffffffffff0;
    plVar24 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar24 = plVar1;
    }
    pvVar35 = (void *)(**(code **)(*plVar24 + 0x10))(plVar24,uVar21,8);
    local_80 = (string)((byte)uVar21 | 1);
    uStack_7f = (undefined7)(uVar21 >> 8);
    local_78 = (undefined1)sVar17;
    uStack_77 = (undefined7)(sVar17 >> 8);
    local_70 = pvVar35;
LAB_022a3000:
    memcpy(pvVar35,param_3,sVar17);
  }
  local_250 = local_70;
  uStack_257 = uStack_77;
  uStack_258 = local_78;
  local_25f = uStack_7f;
  local_260 = local_80;
  *(undefined1 *)((long)pvVar35 + sVar17) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_270 = 0;
  uStack_269 = 0;
  uStack_268 = 0;
  local_248 = &LAB_022a5774;
  puStack_240 = &LAB_022a57bc;
  local_238 = 0xffffffff;
  pcVar33 = (char *)plVar18[0xf];
  sVar17 = strlen(pcVar33);
  plVar1 = DAT_043f1798;
  local_298 = 0;
  uStack_297 = 0;
  local_290 = 0;
  uStack_28f = 0;
  local_288 = (void *)0x0;
  if (0xffffffffffffffef < sVar17) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar17 < 0x17) {
    local_298 = (byte)((int)sVar17 << 1);
    pvVar35 = (void *)((ulong)&local_298 | 1);
    if (sVar17 != 0) goto LAB_022a30a4;
  }
  else {
    uVar21 = sVar17 + 0x10 & 0xfffffffffffffff0;
    plVar24 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar24 = plVar1;
    }
    pvVar35 = (void *)(**(code **)(*plVar24 + 0x10))(plVar24,uVar21,8);
    local_298 = (byte)uVar21 | 1;
    uStack_297 = (undefined7)(uVar21 >> 8);
    local_290 = (undefined1)sVar17;
    uStack_28f = (undefined7)(sVar17 >> 8);
    local_288 = pvVar35;
LAB_022a30a4:
    memcpy(pvVar35,pcVar33,sVar17);
  }
  local_220 = local_288;
  uStack_227 = uStack_28f;
  uStack_228 = local_290;
  local_22f = uStack_297;
  local_230 = local_298;
  *(undefined1 *)((long)pvVar35 + sVar17) = 0;
  local_290 = 0;
  uStack_28f = 0;
  local_288 = (void *)0x0;
  local_298 = 0;
  uStack_297 = 0;
  local_280 = 0;
  uStack_279 = 0;
  uStack_278 = 0;
  local_218 = &LAB_022a5804;
  local_210 = &LAB_022a584c;
  local_208 = 0xffffffff;
  pcVar33 = (char *)plVar18[0x12];
  sVar17 = strlen(pcVar33);
  plVar1 = DAT_043f1798;
  local_2c0 = 0;
  uStack_2bf = 0;
  local_2b8 = 0;
  uStack_2b7 = 0;
  local_2b0 = (void *)0x0;
  if (0xffffffffffffffef < sVar17) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar17 < 0x17) {
    local_2c0 = (byte)((int)sVar17 << 1);
    pvVar35 = (void *)((ulong)&local_2c0 | 1);
    if (sVar17 != 0) goto LAB_022a3150;
  }
  else {
    uVar21 = sVar17 + 0x10 & 0xfffffffffffffff0;
    plVar24 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar24 = plVar1;
    }
    pvVar35 = (void *)(**(code **)(*plVar24 + 0x10))(plVar24,uVar21,8);
    local_2c0 = (byte)uVar21 | 1;
    uStack_2bf = (undefined7)(uVar21 >> 8);
    local_2b8 = (undefined1)sVar17;
    uStack_2b7 = (undefined7)(sVar17 >> 8);
    local_2b0 = pvVar35;
LAB_022a3150:
    memcpy(pvVar35,pcVar33,sVar17);
  }
  local_1f0 = local_2b0;
  uStack_1f7 = uStack_2b7;
  uStack_1f8 = local_2b8;
  local_1ff = uStack_2bf;
  local_200 = local_2c0;
  *(undefined1 *)((long)pvVar35 + sVar17) = 0;
  local_2c0 = 0;
  uStack_2bf = 0;
  local_2b8 = 0;
  uStack_2b7 = 0;
  local_2b0 = (void *)0x0;
  local_2a8 = 0;
  uStack_2a1 = 0;
  uStack_2a0 = 0;
  local_1e0 = &LAB_022a58dc;
  local_1e8 = &LAB_022a5894;
  local_1d8 = 0xffffffff;
  sVar17 = strlen(param_9);
  plVar1 = DAT_043f1798;
  local_2e8 = 0;
  uStack_2e7 = 0;
  local_2e0 = 0;
  uStack_2df = 0;
  local_2d8 = (void *)0x0;
  if (0xffffffffffffffef < sVar17) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar17 < 0x17) {
    local_2e8 = (byte)((int)sVar17 << 1);
    pvVar35 = (void *)((ulong)&local_2e8 | 1);
    if (sVar17 != 0) goto LAB_022a31f8;
  }
  else {
    uVar21 = sVar17 + 0x10 & 0xfffffffffffffff0;
    plVar24 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar24 = plVar1;
    }
    pvVar35 = (void *)(**(code **)(*plVar24 + 0x10))(plVar24,uVar21,8);
    local_2e8 = (byte)uVar21 | 1;
    uStack_2e7 = (undefined7)(uVar21 >> 8);
    local_2e0 = (undefined1)sVar17;
    uStack_2df = (undefined7)(sVar17 >> 8);
    local_2d8 = pvVar35;
LAB_022a31f8:
    memcpy(pvVar35,param_9,sVar17);
  }
  local_1c0 = local_2d8;
  uStack_1c7 = uStack_2df;
  uStack_1c8 = local_2e0;
  local_1cf = uStack_2e7;
  local_1d0 = local_2e8;
  *(undefined1 *)((long)pvVar35 + sVar17) = 0;
  local_2e8 = 0;
  uStack_2e7 = 0;
  local_2e0 = 0;
  uStack_2df = 0;
  local_2d8 = (void *)0x0;
  local_2d0 = 0;
  uStack_2c9 = 0;
  uStack_2c8 = 0;
  local_1b0 = &LAB_022a596c;
  local_1b8 = &LAB_022a5924;
  local_1a8 = 0xffffffff;
  sVar17 = strlen(param_11);
  plVar1 = DAT_043f1798;
  local_310 = 0;
  uStack_30f = 0;
  local_308 = 0;
  uStack_307 = 0;
  local_300 = (void *)0x0;
  if (0xffffffffffffffef < sVar17) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar17 < 0x17) {
    local_310 = (byte)((int)sVar17 << 1);
    pvVar35 = (void *)((ulong)&local_310 | 1);
    if (sVar17 != 0) goto LAB_022a32a0;
  }
  else {
    uVar21 = sVar17 + 0x10 & 0xfffffffffffffff0;
    plVar24 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar24 = plVar1;
    }
    pvVar35 = (void *)(**(code **)(*plVar24 + 0x10))(plVar24,uVar21,8);
    local_310 = (byte)uVar21 | 1;
    uStack_30f = (undefined7)(uVar21 >> 8);
    local_308 = (undefined1)sVar17;
    uStack_307 = (undefined7)(sVar17 >> 8);
    local_300 = pvVar35;
LAB_022a32a0:
    memcpy(pvVar35,param_11,sVar17);
  }
  local_190 = local_300;
  uStack_197 = uStack_307;
  uStack_198 = local_308;
  local_19f = uStack_30f;
  local_1a0 = local_310;
  *(undefined1 *)((long)pvVar35 + sVar17) = 0;
  local_310 = 0;
  uStack_30f = 0;
  local_308 = 0;
  uStack_307 = 0;
  local_300 = (void *)0x0;
  local_2f8 = 0;
  uStack_2f1 = 0;
  uStack_2f0 = 0;
  local_180 = &LAB_022a59fc;
  local_188 = &LAB_022a59b4;
  local_178 = 0xffffffff;
  sVar17 = strlen(param_13);
  plVar1 = DAT_043f1798;
  local_338 = 0;
  uStack_337 = 0;
  local_330 = 0;
  uStack_32f = 0;
  local_328 = (void *)0x0;
  if (0xffffffffffffffef < sVar17) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar17 < 0x17) {
    local_338 = (byte)((int)sVar17 << 1);
    pvVar35 = (void *)((ulong)&local_338 | 1);
    if (sVar17 != 0) goto LAB_022a3344;
  }
  else {
    uVar21 = sVar17 + 0x10 & 0xfffffffffffffff0;
    plVar24 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar24 = plVar1;
    }
    pvVar35 = (void *)(**(code **)(*plVar24 + 0x10))(plVar24,uVar21,8);
    local_338 = (byte)uVar21 | 1;
    uStack_337 = (undefined7)(uVar21 >> 8);
    local_330 = (undefined1)sVar17;
    uStack_32f = (undefined7)(sVar17 >> 8);
    local_328 = pvVar35;
LAB_022a3344:
    memcpy(pvVar35,param_13,sVar17);
  }
  local_160 = local_328;
  uStack_167 = uStack_32f;
  uStack_168 = local_330;
  local_16f = uStack_337;
  local_170 = local_338;
  *(undefined1 *)((long)pvVar35 + sVar17) = 0;
  local_330 = 0;
  uStack_32f = 0;
  local_328 = (void *)0x0;
  local_338 = 0;
  uStack_337 = 0;
  local_320 = 0;
  uStack_319 = 0;
  uStack_318 = 0;
  local_150 = &LAB_022a5a8c;
  local_158 = &LAB_022a5a44;
  local_148 = 0xffffffff;
  sVar17 = strlen(param_15);
  plVar1 = DAT_043f1798;
  local_360 = 0;
  uStack_35f = 0;
  local_358 = 0;
  uStack_357 = 0;
  local_350 = (void *)0x0;
  if (0xffffffffffffffef < sVar17) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar17 < 0x17) {
    local_360 = (byte)((int)sVar17 << 1);
    pvVar35 = (void *)((ulong)&local_360 | 1);
    if (sVar17 != 0) goto LAB_022a33f4;
  }
  else {
    uVar21 = sVar17 + 0x10 & 0xfffffffffffffff0;
    plVar24 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar24 = plVar1;
    }
    pvVar35 = (void *)(**(code **)(*plVar24 + 0x10))(plVar24,uVar21,8);
    local_360 = (byte)uVar21 | 1;
    uStack_35f = (undefined7)(uVar21 >> 8);
    local_358 = (undefined1)sVar17;
    uStack_357 = (undefined7)(sVar17 >> 8);
    local_350 = pvVar35;
LAB_022a33f4:
    memcpy(pvVar35,param_15,sVar17);
  }
  local_130 = local_350;
  uStack_137 = uStack_357;
  uStack_138 = local_358;
  *(undefined1 *)((long)pvVar35 + sVar17) = 0;
  local_140 = local_360;
  local_358 = 0;
  uStack_357 = 0;
  local_350 = (void *)0x0;
  local_13f = uStack_35f;
  local_128 = &LAB_022a5ad4;
  local_360 = 0;
  uStack_35f = 0;
  local_348 = 0;
  uStack_341 = 0;
  uStack_340 = 0;
  local_118 = 0xffffffff;
  local_120 = &LAB_022a5b1c;
  sVar17 = strlen(param_17);
  plVar1 = DAT_043f1798;
  local_388 = 0;
  uStack_387 = 0;
  local_380 = 0;
  uStack_37f = 0;
  local_378 = (void *)0x0;
  if (0xffffffffffffffef < sVar17) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar17 < 0x17) {
    local_388 = (byte)((int)sVar17 << 1);
    pvVar35 = (void *)((ulong)&local_388 | 1);
    if (sVar17 != 0) goto LAB_022a34a0;
  }
  else {
    uVar21 = sVar17 + 0x10 & 0xfffffffffffffff0;
    plVar24 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar24 = plVar1;
    }
    pvVar35 = (void *)(**(code **)(*plVar24 + 0x10))(plVar24,uVar21,8);
    local_388 = (byte)uVar21 | 1;
    uStack_387 = (undefined7)(uVar21 >> 8);
    local_380 = (undefined1)sVar17;
    uStack_37f = (undefined7)(sVar17 >> 8);
    local_378 = pvVar35;
LAB_022a34a0:
    memcpy(pvVar35,param_17,sVar17);
  }
  local_100 = local_378;
  uStack_107 = uStack_37f;
  uStack_108 = local_380;
  *(undefined1 *)((long)pvVar35 + sVar17) = 0;
  local_110 = local_388;
  local_380 = 0;
  uStack_37f = 0;
  local_378 = (void *)0x0;
  local_10f = uStack_387;
  local_f8 = &LAB_022a5b64;
  local_388 = 0;
  uStack_387 = 0;
  local_370 = 0;
  uStack_369 = 0;
  uStack_368 = 0;
  local_e8 = 0xffffffff;
  local_f0 = &LAB_022a5bac;
  sVar17 = strlen(param_19);
  plVar1 = DAT_043f1798;
  local_3a0 = 0;
  uStack_39f = 0;
  local_398 = 0;
  uStack_397 = 0;
  local_390 = (void *)0x0;
  if (0xffffffffffffffef < sVar17) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar17 < 0x17) {
    local_3a0 = (byte)((int)sVar17 << 1);
    pvVar35 = (void *)((ulong)&local_3a0 | 1);
    if (sVar17 != 0) goto LAB_022a354c;
  }
  else {
    uVar21 = sVar17 + 0x10 & 0xfffffffffffffff0;
    plVar24 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar24 = plVar1;
    }
    pvVar35 = (void *)(**(code **)(*plVar24 + 0x10))(plVar24,uVar21,8);
    local_3a0 = (byte)uVar21 | 1;
    uStack_39f = (undefined7)(uVar21 >> 8);
    local_398 = (undefined1)sVar17;
    uStack_397 = (undefined7)(sVar17 >> 8);
    local_390 = pvVar35;
LAB_022a354c:
    memcpy(pvVar35,param_19,sVar17);
  }
  *(undefined1 *)((long)pvVar35 + sVar17) = 0;
  psVar31 = &local_260;
  local_e0 = local_3a0;
  local_df = uStack_39f;
  local_c8 = &LAB_022a5bf4;
  local_b0 = 8;
  local_d0 = local_390;
  local_c0 = &LAB_022a5c3c;
  uStack_d8 = local_398;
  uStack_d7 = uStack_397;
  local_b8 = 0xffffffff;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_a0 = 0;
  local_90 = &LAB_022a5ccc;
  plVar1 = plVar18 + 3;
  local_98 = &LAB_022a5c84;
  local_88 = 0xffffffff;
  do {
    uVar21 = *(ulong *)(psVar31 + 8);
    psVar3 = *(string **)(psVar31 + 0x10);
    if (((byte)*psVar31 & 1) == 0) {
      psVar3 = psVar31 + 1;
      uVar21 = (ulong)((byte)*psVar31 >> 1);
    }
    pcVar33 = (char *)FUN_008e8ed4(&local_80,psVar3,uVar21);
    pcVar36 = (char *)plVar18[2];
    if (pcVar36 != (char *)0x0) {
      uVar21 = (long)pcVar36 - ((ulong)pcVar36 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        param_15 = (char *)((ulong)(pcVar36 + -1) & (ulong)pcVar33);
      }
      else {
        param_15 = pcVar33;
        if (pcVar36 <= pcVar33) {
          uVar26 = 0;
          if (pcVar36 != (char *)0x0) {
            uVar26 = (ulong)pcVar33 / (ulong)pcVar36;
          }
          param_15 = pcVar33 + -(uVar26 * (long)pcVar36);
        }
      }
      plVar24 = *(long **)(*plVar32 + (long)param_15 * 8);
      if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
        psVar3 = psVar31 + 1;
        sVar17 = (ulong)((byte)*psVar31 >> 1);
        if (((byte)*psVar31 & 1) != 0) {
          psVar3 = *(string **)(psVar31 + 0x10);
          sVar17 = *(size_t *)(psVar31 + 8);
        }
        if (uVar21 < 2) {
          if (sVar17 == 0) {
            do {
              if ((char *)plVar24[1] != pcVar33 &&
                  (char *)((ulong)plVar24[1] & (ulong)(pcVar36 + -1)) != param_15) break;
              uVar21 = (ulong)(*(byte *)(plVar24 + 2) >> 1);
              if ((*(byte *)(plVar24 + 2) & 1) != 0) {
                uVar21 = plVar24[3];
              }
              if (uVar21 == 0) goto LAB_022a3764;
              plVar24 = (long *)*plVar24;
            } while (plVar24 != (long *)0x0);
          }
          else {
            do {
              if ((char *)plVar24[1] != pcVar33 &&
                  (char *)((ulong)plVar24[1] & (ulong)(pcVar36 + -1)) != param_15) break;
              bVar4 = *(byte *)(plVar24 + 2);
              uVar21 = (ulong)(bVar4 >> 1);
              sVar2 = uVar21;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar24[3];
              }
              if (sVar2 == sVar17) {
                if ((bVar4 & 1) == 0) {
                  psVar27 = (string *)((long)plVar24 + 0x11);
                  psVar29 = psVar3;
                  while (*psVar27 == *psVar29) {
                    uVar21 = uVar21 - 1;
                    psVar27 = psVar27 + 1;
                    psVar29 = psVar29 + 1;
                    if (uVar21 == 0) goto LAB_022a3764;
                  }
                }
                else {
                  iVar7 = memcmp((void *)plVar24[4],psVar3,sVar17);
                  if (iVar7 == 0) goto LAB_022a3764;
                }
              }
              plVar24 = (long *)*plVar24;
            } while (plVar24 != (long *)0x0);
          }
        }
        else if (sVar17 == 0) {
          do {
            pcVar23 = (char *)plVar24[1];
            if (pcVar23 != pcVar33) {
              if (pcVar36 <= pcVar23) {
                uVar21 = 0;
                if (pcVar36 != (char *)0x0) {
                  uVar21 = (ulong)pcVar23 / (ulong)pcVar36;
                }
                pcVar23 = pcVar23 + -(uVar21 * (long)pcVar36);
              }
              if (pcVar23 != param_15) break;
            }
            uVar21 = (ulong)(*(byte *)(plVar24 + 2) >> 1);
            if ((*(byte *)(plVar24 + 2) & 1) != 0) {
              uVar21 = plVar24[3];
            }
            if (uVar21 == 0) goto LAB_022a3764;
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
        else {
          do {
            pcVar23 = (char *)plVar24[1];
            if (pcVar23 != pcVar33) {
              if (pcVar36 <= pcVar23) {
                uVar21 = 0;
                if (pcVar36 != (char *)0x0) {
                  uVar21 = (ulong)pcVar23 / (ulong)pcVar36;
                }
                pcVar23 = pcVar23 + -(uVar21 * (long)pcVar36);
              }
              if (pcVar23 != param_15) break;
            }
            bVar4 = *(byte *)(plVar24 + 2);
            uVar21 = (ulong)(bVar4 >> 1);
            sVar2 = uVar21;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar24[3];
            }
            if (sVar2 == sVar17) {
              if ((bVar4 & 1) == 0) {
                psVar27 = (string *)((long)plVar24 + 0x11);
                psVar29 = psVar3;
                while (*psVar27 == *psVar29) {
                  uVar21 = uVar21 - 1;
                  psVar27 = psVar27 + 1;
                  psVar29 = psVar29 + 1;
                  if (uVar21 == 0) goto LAB_022a3764;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar24[4],psVar3,sVar17);
                if (iVar7 == 0) goto LAB_022a3764;
              }
            }
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
      }
    }
    plVar24 = DAT_043f1798;
    plVar22 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar22 = plVar24;
    }
    plVar24 = (long *)(**(code **)(*plVar22 + 0x10))(plVar22,0x40,8);
    std::string::string((string *)(plVar24 + 2),psVar31);
    lVar25 = *(long *)(psVar31 + 0x18);
    lVar28 = *(long *)(psVar31 + 0x28);
    plVar24[6] = *(long *)(psVar31 + 0x20);
    plVar24[7] = lVar28;
    plVar24[5] = lVar25;
    *plVar24 = 0;
    plVar24[1] = (long)pcVar33;
    if ((pcVar36 == (char *)0x0) ||
       (*(float *)(plVar18 + 5) * (float)pcVar36 < (float)(plVar18[4] + 1))) {
      uVar21 = (ulong)(pcVar36 < (char *)0x3 || ((ulong)pcVar36 & (ulong)(pcVar36 + -1)) != 0) |
               (long)pcVar36 << 1;
      uVar26 = (ulong)((float)(plVar18[4] + 1) / *(float *)(plVar18 + 5));
      if (uVar26 <= uVar21) {
        uVar26 = uVar21;
      }
      FUN_008e9ae4(plVar32,uVar26);
      pcVar36 = (char *)plVar18[2];
      if (((ulong)pcVar36 & (ulong)(pcVar36 + -1)) == 0) {
        param_15 = (char *)((ulong)(pcVar36 + -1) & (ulong)pcVar33);
      }
      else if (pcVar33 < pcVar36) {
        param_15 = pcVar33;
      }
      else {
        uVar21 = 0;
        if (pcVar36 != (char *)0x0) {
          uVar21 = (ulong)pcVar33 / (ulong)pcVar36;
        }
        param_15 = pcVar33 + -(uVar21 * (long)pcVar36);
      }
    }
    lVar25 = *plVar32;
    plVar22 = *(long **)(lVar25 + (long)param_15 * 8);
    if (plVar22 == (long *)0x0) {
      *plVar24 = *plVar1;
      *plVar1 = (long)plVar24;
      *(long **)(lVar25 + (long)param_15 * 8) = plVar1;
      if (*plVar24 != 0) {
        pcVar33 = *(char **)(*plVar24 + 8);
        if (((ulong)pcVar36 & (ulong)(pcVar36 + -1)) == 0) {
          pcVar33 = (char *)((ulong)pcVar33 & (ulong)(pcVar36 + -1));
        }
        else if (pcVar36 <= pcVar33) {
          uVar21 = 0;
          if (pcVar36 != (char *)0x0) {
            uVar21 = (ulong)pcVar33 / (ulong)pcVar36;
          }
          pcVar33 = pcVar33 + -(uVar21 * (long)pcVar36);
        }
        plVar22 = (long *)(*plVar32 + (long)pcVar33 * 8);
        goto LAB_022a3754;
      }
    }
    else {
      *plVar24 = *plVar22;
LAB_022a3754:
      *plVar22 = (long)plVar24;
    }
    plVar18[4] = plVar18[4] + 1;
LAB_022a3764:
    psVar31 = psVar31 + 0x30;
  } while (psVar31 != &local_80);
  lVar28 = FUN_008cca50();
  lVar25 = 0;
  do {
    lVar19 = FUN_008e8c90(plVar32,lVar28 + lVar25);
    if (lVar19 != 0) {
      FUN_008f2aec(&local_80,plVar32,lVar19);
      plVar1 = DAT_043f1798;
      lVar19 = CONCAT71(uStack_7f,local_80);
      local_80 = (string)0x0;
      uStack_7f = 0;
      if (lVar19 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar19 + 0x10) & 1) != 0)) &&
           (lVar34 = *(long *)(lVar19 + 0x20), lVar34 != 0)) {
          plVar24 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar24 = plVar1;
          }
          uVar21 = (**(code **)(*plVar24 + 0xc0))(plVar24);
          if ((uVar21 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar24,lVar34,0,8);
              goto LAB_022a3fa8;
            }
          }
          (**(code **)(*plVar24 + 0x18))(plVar24,lVar34,0,8);
        }
LAB_022a3fa8:
        plVar1 = DAT_043f1798;
        plVar24 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar24 = plVar1;
        }
        uVar21 = (**(code **)(*plVar24 + 0xc0))(plVar24);
        if ((uVar21 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar24,lVar19,0,8);
            goto LAB_022a3ea0;
          }
        }
        (**(code **)(*plVar24 + 0x18))(plVar24,lVar19,0,8);
      }
    }
LAB_022a3ea0:
    lVar25 = lVar25 + 0x18;
  } while (lVar25 != 0x300);
  pcVar33 = (char *)plVar18[0xc];
  sVar17 = strlen(pcVar33);
  iVar7 = FUN_008f2c60(sVar17,pcVar33);
  pcVar33 = (char *)plVar18[0xf];
  sVar17 = strlen(pcVar33);
  iVar8 = FUN_008f2c60(sVar17,pcVar33);
  pcVar33 = (char *)plVar18[0x12];
  sVar17 = strlen(pcVar33);
  iVar9 = FUN_008f2c60(sVar17,pcVar33);
  pcVar33 = (char *)plVar18[0x15];
  sVar17 = strlen(pcVar33);
  iVar10 = FUN_008f2c60(sVar17,pcVar33);
  pcVar33 = (char *)plVar18[0x18];
  sVar17 = strlen(pcVar33);
  iVar11 = FUN_008f2c60(sVar17,pcVar33);
  pcVar33 = (char *)plVar18[0x1b];
  sVar17 = strlen(pcVar33);
  iVar12 = FUN_008f2c60(sVar17,pcVar33);
  pcVar33 = (char *)plVar18[0x1e];
  sVar17 = strlen(pcVar33);
  iVar13 = FUN_008f2c60(sVar17,pcVar33);
  pcVar33 = (char *)plVar18[0x21];
  sVar17 = strlen(pcVar33);
  iVar14 = FUN_008f2c60(sVar17,pcVar33);
  pcVar33 = (char *)plVar18[0x24];
  sVar17 = strlen(pcVar33);
  iVar15 = FUN_008f2c60(sVar17,pcVar33);
  pcVar33 = (char *)plVar18[0x27];
  sVar17 = strlen(pcVar33);
  iVar16 = FUN_008f2c60(sVar17,pcVar33);
  lVar25 = local_a0;
  *(bool *)(plVar18 + 0xb) =
       ((((((((iVar8 != 0 || iVar7 != 0) || iVar9 != 0) || iVar10 != 0) || iVar11 != 0) ||
          iVar12 != 0) || iVar13 != 0) || iVar14 != 0) || iVar15 != 0) || iVar16 != 0;
  plVar1 = DAT_043f1798;
  pvVar35 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar32 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar32 = plVar1;
    }
    uVar21 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar21 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar25,0,8);
        plVar1 = DAT_043f1798;
        pvVar35 = local_d0;
        goto joined_r0x022a4228;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar25,0,8);
    plVar1 = DAT_043f1798;
    pvVar35 = local_d0;
  }
joined_r0x022a4228:
  pvVar6 = local_100;
  local_d0 = pvVar35;
  if (((local_e0 & 1) != 0) && (pvVar35 != (void *)0x0)) {
    plVar32 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar21 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar21 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar32,pvVar35,0,8);
        plVar1 = DAT_043f1798;
        pvVar6 = local_100;
        goto joined_r0x022a49d4;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,pvVar35,0,8);
    plVar1 = DAT_043f1798;
    pvVar6 = local_100;
  }
joined_r0x022a49d4:
  pvVar35 = local_130;
  local_100 = pvVar6;
  if (((local_110 & 1) != 0) && (pvVar6 != (void *)0x0)) {
    plVar32 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar21 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar21 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar32,pvVar6,0,8);
        plVar1 = DAT_043f1798;
        pvVar35 = local_130;
        goto joined_r0x022a4390;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,pvVar6,0,8);
    plVar1 = DAT_043f1798;
    pvVar35 = local_130;
  }
joined_r0x022a4390:
  pvVar6 = local_160;
  local_130 = pvVar35;
  if (((local_140 & 1) != 0) && (pvVar35 != (void *)0x0)) {
    plVar32 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar21 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar21 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar32,pvVar35,0,8);
        plVar1 = DAT_043f1798;
        pvVar6 = local_160;
        goto joined_r0x022a4a14;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,pvVar35,0,8);
    plVar1 = DAT_043f1798;
    pvVar6 = local_160;
  }
joined_r0x022a4a14:
  pvVar35 = local_190;
  local_160 = pvVar6;
  if (((local_170 & 1) != 0) && (pvVar6 != (void *)0x0)) {
    plVar32 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar21 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar21 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar32,pvVar6,0,8);
        plVar1 = DAT_043f1798;
        pvVar35 = local_190;
        goto joined_r0x022a44f8;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,pvVar6,0,8);
    plVar1 = DAT_043f1798;
    pvVar35 = local_190;
  }
joined_r0x022a44f8:
  pvVar6 = local_1c0;
  local_190 = pvVar35;
  if (((local_1a0 & 1) != 0) && (pvVar35 != (void *)0x0)) {
    plVar32 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar21 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar21 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar32,pvVar35,0,8);
        plVar1 = DAT_043f1798;
        pvVar6 = local_1c0;
        goto joined_r0x022a4a54;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,pvVar35,0,8);
    plVar1 = DAT_043f1798;
    pvVar6 = local_1c0;
  }
joined_r0x022a4a54:
  pvVar35 = local_1f0;
  local_1c0 = pvVar6;
  if (((local_1d0 & 1) != 0) && (pvVar6 != (void *)0x0)) {
    plVar32 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar21 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar21 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar32,pvVar6,0,8);
        plVar1 = DAT_043f1798;
        pvVar35 = local_1f0;
        goto joined_r0x022a4660;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,pvVar6,0,8);
    plVar1 = DAT_043f1798;
    pvVar35 = local_1f0;
  }
joined_r0x022a4660:
  pvVar6 = local_220;
  local_1f0 = pvVar35;
  if (((local_200 & 1) != 0) && (pvVar35 != (void *)0x0)) {
    plVar32 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar21 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar21 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar32,pvVar35,0,8);
        plVar1 = DAT_043f1798;
        pvVar6 = local_220;
        goto joined_r0x022a4a94;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,pvVar35,0,8);
    plVar1 = DAT_043f1798;
    pvVar6 = local_220;
  }
joined_r0x022a4a94:
  pvVar35 = local_250;
  local_220 = pvVar6;
  if (((local_230 & 1) != 0) && (pvVar6 != (void *)0x0)) {
    plVar32 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar21 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar21 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar32,pvVar6,0,8);
        plVar1 = DAT_043f1798;
        pvVar35 = local_250;
        goto joined_r0x022a47c8;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,pvVar6,0,8);
    plVar1 = DAT_043f1798;
    pvVar35 = local_250;
  }
joined_r0x022a47c8:
  DAT_043f1798 = plVar1;
  local_250 = pvVar35;
  if ((((byte)local_260 & 1) != 0) && (pvVar35 != (void *)0x0)) {
    plVar32 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar21 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar21 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar32,pvVar35,0,8);
        goto LAB_022a4878;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,pvVar35,0,8);
  }
LAB_022a4878:
  uVar30 = *(undefined8 *)(lVar20 + 0x20);
  FUN_0014fef0(uVar30);
  (**(code **)*plVar18)(plVar18,uVar30);
  (**(code **)(*plVar18 + 0x10))(plVar18);
  pvVar35 = local_3a8;
  if ((local_3b8 & 1) == 0) {
    pvVar35 = (void *)((long)&local_3b8 + 1);
  }
  FUN_001522a0(uVar30,pvVar35);
  pvVar35 = local_3a8;
  plVar1 = DAT_043f1798;
  if (((local_3b8 & 1) != 0) && (local_3a8 != (void *)0x0)) {
    plVar18 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar18 = plVar1;
    }
    uVar21 = (**(code **)(*plVar18 + 0xc0))(plVar18);
    if ((uVar21 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar18,pvVar35,0,8);
        return;
      }
    }
    (**(code **)(*plVar18 + 0x18))(plVar18,pvVar35,0,8);
  }
  return;
}


