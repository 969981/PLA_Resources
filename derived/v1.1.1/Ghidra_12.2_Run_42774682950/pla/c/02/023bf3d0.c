/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023bf3d0; name: FUN_023bf3d0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_023bf3d0(long param_1)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined8 uVar8;
  int iVar9;
  long *plVar10;
  size_t sVar11;
  char *pcVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  char *pcVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  string *psVar20;
  long lVar21;
  string *psVar22;
  undefined8 uVar23;
  long *plVar24;
  string *psVar25;
  char *pcVar26;
  void *pvVar27;
  char *pcVar28;
  long lVar29;
  ulong local_370;
  undefined8 uStack_368;
  char *local_360;
  byte local_358;
  undefined7 uStack_357;
  undefined1 local_350;
  undefined7 uStack_34f;
  void *local_348;
  undefined7 local_340;
  undefined1 uStack_339;
  undefined7 uStack_338;
  undefined7 local_330;
  undefined1 uStack_329;
  undefined7 uStack_328;
  string local_320;
  char local_31f [8];
  undefined1 local_317;
  undefined4 local_316;
  undefined2 local_312;
  long local_310;
  undefined1 *local_308;
  undefined1 *local_300;
  undefined4 local_2f8;
  byte local_2f0;
  undefined4 local_2ef;
  undefined2 local_2eb;
  undefined1 local_2e9;
  undefined8 local_2e8;
  char *local_2e0;
  undefined1 *local_2d8;
  undefined1 *puStack_2d0;
  undefined4 local_2c8;
  byte local_2c0;
  undefined4 local_2bf;
  undefined2 local_2bb;
  undefined1 local_2b9;
  undefined8 local_2b8;
  char *local_2b0;
  undefined1 *local_2a8;
  undefined1 *puStack_2a0;
  undefined4 local_298;
  string local_290;
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
  undefined1 *puStack_240;
  undefined4 local_238;
  byte local_230;
  undefined4 local_22f;
  undefined2 local_22b;
  undefined1 local_229;
  undefined8 local_228;
  char *local_220;
  undefined1 *local_218;
  undefined1 *puStack_210;
  undefined4 local_208;
  byte local_200;
  undefined4 local_1ff;
  undefined2 local_1fb;
  undefined1 local_1f9;
  undefined8 local_1f8;
  char *local_1f0;
  undefined1 *local_1e8;
  undefined1 *puStack_1e0;
  undefined4 local_1d8;
  byte local_1d0;
  char local_1cf [7];
  char cStack_1c8;
  char acStack_1c7 [7];
  long local_1c0;
  undefined1 *local_1b8;
  undefined1 *puStack_1b0;
  undefined4 local_1a8;
  byte local_1a0;
  char acStack_19f [5];
  char local_19a [3];
  char acStack_197 [5];
  undefined2 local_192;
  long local_190;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined4 local_178;
  byte local_170;
  char local_16f [7];
  char cStack_168;
  char acStack_167 [7];
  long local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined4 local_148;
  byte local_140;
  undefined4 local_13f;
  undefined2 local_13b;
  undefined1 local_139;
  undefined8 local_138;
  char *local_130;
  undefined1 *local_128;
  undefined1 *local_120;
  undefined4 local_118;
  byte local_110;
  undefined4 local_10f;
  undefined2 local_10b;
  undefined1 local_109;
  undefined8 local_108;
  char *local_100;
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
  
  plVar1 = DAT_043f1798;
  lVar5 = tpidr_el0;
  plVar17 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar17 = plVar1;
  }
  local_360 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x20,8);
  uVar8 = s_RideBasuraoStateContext_03989f66._0_8_;
  local_370 = 0x21;
  uStack_368 = 0x17;
  uVar6 = CONCAT71(s_RideBasuraoStateContext_03989f66._16_7_,s_RideBasuraoStateContext_03989f66[0xf]
                  );
  uVar23 = CONCAT17(s_RideBasuraoStateContext_03989f66[0xf],s_RideBasuraoStateContext_03989f66._8_7_
                   );
  local_360[0x17] = '\0';
  *(undefined8 *)local_360 = uVar8;
  *(undefined8 *)(local_360 + 8) = uVar23;
  *(undefined8 *)(local_360 + 0xf) = uVar6;
  plVar1 = DAT_043f1798;
  plVar17 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar17 = plVar1;
  }
  plVar10 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x170,8);
  plVar10[4] = 0;
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar24 = plVar10 + 1;
  *plVar24 = 0;
  plVar10[6] = (long)FUN_023c1660;
  plVar10[7] = (long)FUN_023c1710;
  *(undefined4 *)(plVar10 + 5) = 0x3f800000;
  *plVar10 = (long)&PTR_FUN_0425be48;
  plVar10[0xc] = (long)"inputInfo";
  plVar10[0xd] = 0xa8;
  plVar10[0x10] = (long)"__haxe_export_GetBasuraoController";
  plVar10[0x11] = (long)"__haxe_export_GetStaminaData";
  plVar10[0x14] = 0;
  plVar10[0x15] = (long)"__haxe_export_GetCameraTransformObject";
  plVar10[0x16] = (long)"GetCameraForward";
  plVar10[0x17] = (long)&LAB_02710e7c;
  plVar10[0x12] = (long)"__haxe_export_IsCameraEnable";
  plVar10[0x13] = (long)&LAB_02710c5c;
  plVar10[0x18] = 0;
  plVar10[0x19] = (long)"GetCameraLeft";
  plVar10[0x1a] = (long)&LAB_02710ff8;
  plVar10[0x1b] = 0;
  plVar10[0x1c] = (long)"playerStateContext";
  plVar10[0x1d] = 0xe0;
  plVar10[0x1e] = (long)"__haxe_export_GetPlayerInputInfoHandler";
  plVar10[0x1f] = (long)"__haxe_export_GetRidePokemonComponent";
  plVar10[10] = 0;
  *(undefined1 *)(plVar10 + 0xb) = 0;
  plVar10[0x2d] = 0;
  plVar10[0x20] = (long)&LAB_02711178;
  plVar10[0x21] = 0;
  plVar10[0x22] = (long)&DAT_038ca815;
  plVar10[0x23] = (long)&DAT_0392da3c;
  plVar10[0x26] = (long)FUN_023c18a0;
  plVar10[0x27] = (long)&LAB_023c1b80;
  plVar10[0x28] = (long)&LAB_023c1e60;
  plVar10[0x29] = (long)&LAB_023c1e70;
  *(undefined1 *)(plVar10 + 0x2c) = 1;
  plVar10[8] = 0;
  plVar10[9] = 0;
  plVar10[0xe] = (long)"__haxe_export_GetPlayer";
  plVar10[0xf] = (long)"__haxe_export_GetPlayerAnimation";
  plVar10[0x24] = 0;
  plVar10[0x25] = 0;
  plVar10[0x2a] = 0;
  plVar10[0x2b] = 0;
  plVar1 = DAT_043f1798;
  local_320 = (string)0x12;
  local_317 = 0x6f;
  local_31f[0] = s_inputInfo_039c076f[0];
  local_31f[1] = s_inputInfo_039c076f[1];
  local_31f[2] = s_inputInfo_039c076f[2];
  local_31f[3] = s_inputInfo_039c076f[3];
  local_31f[4] = s_inputInfo_039c076f[4];
  local_31f[5] = s_inputInfo_039c076f[5];
  local_31f[6] = s_inputInfo_039c076f[6];
  local_31f[7] = s_inputInfo_039c076f[7];
  local_316 = 0;
  local_312 = 0;
  local_300 = &LAB_023c1f64;
  local_2f8 = 0xffffffff;
  local_310 = 0;
  local_308 = &LAB_023c1e74;
  plVar17 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar17 = plVar1;
  }
  local_2e0 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x20,8);
  local_2e0[0x17] = '\0';
  uVar23 = CONCAT17(s___haxe_export_GetPlayer_039a5722[0xf],s___haxe_export_GetPlayer_039a5722._8_7_
                   );
  *(undefined8 *)local_2e0 = s___haxe_export_GetPlayer_039a5722._0_8_;
  *(undefined8 *)(local_2e0 + 8) = uVar23;
  *(ulong *)(local_2e0 + 0xf) =
       CONCAT71(s___haxe_export_GetPlayer_039a5722._16_7_,s___haxe_export_GetPlayer_039a5722[0xf]);
  plVar1 = DAT_043f1798;
  local_2f0 = 0x21;
  local_2eb = 0;
  local_2ef = 0;
  local_2e8 = 0x17;
  local_2e9 = 0;
  local_2d8 = &LAB_023c1f80;
  puStack_2d0 = &LAB_023c1fc8;
  local_2c8 = 0xffffffff;
  plVar17 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar17 = plVar1;
  }
  local_2b0 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x30,8);
  local_2b0[0x20] = '\0';
  uVar23 = s___haxe_export_GetPlayerAnimation_0397765d._8_8_;
  *(undefined8 *)local_2b0 = s___haxe_export_GetPlayerAnimation_0397765d._0_8_;
  uVar6 = s___haxe_export_GetPlayerAnimation_0397765d._24_8_;
  *(undefined8 *)(local_2b0 + 0x10) = s___haxe_export_GetPlayerAnimation_0397765d._16_8_;
  *(undefined8 *)(local_2b0 + 0x18) = uVar6;
  *(undefined8 *)(local_2b0 + 8) = uVar23;
  local_2c0 = 0x31;
  local_2bb = 0;
  local_2bf = 0;
  local_2b8 = 0x20;
  local_2b9 = 0;
  local_2a8 = &LAB_023c2010;
  puStack_2a0 = &LAB_023c2058;
  local_298 = 0xffffffff;
  pcVar26 = (char *)plVar10[0x10];
  sVar11 = strlen(pcVar26);
  plVar1 = DAT_043f1798;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar11) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar11 < 0x17) {
    local_80 = SUB41((int)sVar11 << 1,0);
    pvVar27 = (void *)((ulong)&local_80 | 1);
    if (sVar11 != 0) goto LAB_023bf7b0;
  }
  else {
    uVar14 = sVar11 + 0x10 & 0xfffffffffffffff0;
    plVar17 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar17 = plVar1;
    }
    pvVar27 = (void *)(**(code **)(*plVar17 + 0x10))(plVar17,uVar14,8);
    local_80 = (string)((byte)uVar14 | 1);
    uStack_7f = (undefined7)(uVar14 >> 8);
    local_78 = (undefined1)sVar11;
    uStack_77 = (undefined7)(sVar11 >> 8);
    local_70 = pvVar27;
LAB_023bf7b0:
    memcpy(pvVar27,pcVar26,sVar11);
  }
  local_280 = local_70;
  uStack_287 = uStack_77;
  uStack_288 = local_78;
  local_28f = uStack_7f;
  local_290 = local_80;
  *(undefined1 *)((long)pvVar27 + sVar11) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_330 = 0;
  uStack_329 = 0;
  uStack_328 = 0;
  local_268 = 0xffffffff;
  local_278 = &LAB_023c20a0;
  puStack_270 = &LAB_023c20e8;
  pcVar26 = (char *)plVar10[0x11];
  sVar11 = strlen(pcVar26);
  plVar1 = DAT_043f1798;
  local_358 = 0;
  uStack_357 = 0;
  local_350 = 0;
  uStack_34f = 0;
  local_348 = (void *)0x0;
  if (0xffffffffffffffef < sVar11) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar11 < 0x17) {
    local_358 = (byte)((int)sVar11 << 1);
    pvVar27 = (void *)((ulong)&local_358 | 1);
    if (sVar11 != 0) goto LAB_023bf850;
  }
  else {
    uVar14 = sVar11 + 0x10 & 0xfffffffffffffff0;
    plVar17 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar17 = plVar1;
    }
    pvVar27 = (void *)(**(code **)(*plVar17 + 0x10))(plVar17,uVar14,8);
    local_358 = (byte)uVar14 | 1;
    uStack_357 = (undefined7)(uVar14 >> 8);
    local_350 = (undefined1)sVar11;
    uStack_34f = (undefined7)(sVar11 >> 8);
    local_348 = pvVar27;
LAB_023bf850:
    memcpy(pvVar27,pcVar26,sVar11);
  }
  local_250 = local_348;
  uStack_257 = uStack_34f;
  uStack_258 = local_350;
  local_25f = uStack_357;
  local_260 = local_358;
  pcVar26 = "__haxe_export_GetRidePokemonComponent";
  *(undefined1 *)((long)pvVar27 + sVar11) = 0;
  plVar1 = DAT_043f1798;
  local_358 = 0;
  uStack_357 = 0;
  local_350 = 0;
  uStack_34f = 0;
  local_348 = (void *)0x0;
  local_340 = 0;
  uStack_339 = 0;
  uStack_338 = 0;
  local_248 = &LAB_023c2130;
  puStack_240 = &LAB_023c2178;
  local_238 = 0xffffffff;
  plVar17 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar17 = plVar1;
  }
  local_220 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x20,8);
  local_220[0x18] = 'a';
  local_220[0x19] = 'b';
  local_220[0x1a] = 'l';
  local_220[0x1b] = 'e';
  local_220[0x1c] = '\0';
  uVar23 = s___haxe_export_IsCameraEnable_038e27f5._8_8_;
  *(undefined8 *)local_220 = s___haxe_export_IsCameraEnable_038e27f5._0_8_;
  uVar6 = s___haxe_export_IsCameraEnable_038e27f5._16_8_;
  *(undefined8 *)(local_220 + 8) = uVar23;
  *(undefined8 *)(local_220 + 0x10) = uVar6;
  plVar1 = DAT_043f1798;
  local_230 = 0x21;
  local_22b = 0;
  local_22f = 0;
  local_229 = 0;
  local_228 = 0x1c;
  local_218 = &LAB_023c21c0;
  puStack_210 = &LAB_023c2208;
  local_208 = 0xffffffff;
  plVar17 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar17 = plVar1;
  }
  local_1f0 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x30,8);
  uVar23 = s___haxe_export_GetCameraTransform_039c0779._8_8_;
  *(undefined8 *)local_1f0 = s___haxe_export_GetCameraTransform_039c0779._0_8_;
  *(undefined8 *)(local_1f0 + 8) = uVar23;
  uVar23 = CONCAT26(s___haxe_export_GetCameraTransform_039c0779._30_2_,
                    s___haxe_export_GetCameraTransform_039c0779._24_6_);
  *(undefined8 *)(local_1f0 + 0x10) = s___haxe_export_GetCameraTransform_039c0779._16_8_;
  *(undefined8 *)(local_1f0 + 0x18) = uVar23;
  *(ulong *)(local_1f0 + 0x1e) =
       CONCAT62(s___haxe_export_GetCameraTransform_039c0779._32_6_,
                s___haxe_export_GetCameraTransform_039c0779._30_2_);
  local_1f0[0x26] = '\0';
  plVar1 = DAT_043f1798;
  local_200 = 0x31;
  local_1f9 = 0;
  local_1fb = 0;
  local_1ff = 0;
  local_1e8 = &LAB_023c2250;
  puStack_1e0 = &LAB_023c2298;
  local_1f8 = 0x26;
  local_1d8 = 0xffffffff;
  local_1d0 = 0x20;
  local_1cf[0] = s_GetCameraForward_03964ddf[0];
  local_1cf[1] = s_GetCameraForward_03964ddf[1];
  local_1cf[2] = s_GetCameraForward_03964ddf[2];
  local_1cf[3] = s_GetCameraForward_03964ddf[3];
  local_1cf[4] = s_GetCameraForward_03964ddf[4];
  local_1cf[5] = s_GetCameraForward_03964ddf[5];
  local_1cf[6] = s_GetCameraForward_03964ddf[6];
  local_1a8 = 0xffffffff;
  local_1b8 = &LAB_023c22e0;
  puStack_1b0 = &LAB_023c2328;
  cStack_1c8 = s_GetCameraForward_03964ddf[7];
  acStack_1c7[0] = s_GetCameraForward_03964ddf[8];
  acStack_1c7[1] = s_GetCameraForward_03964ddf[9];
  acStack_1c7[2] = s_GetCameraForward_03964ddf[10];
  acStack_1c7[3] = s_GetCameraForward_03964ddf[0xb];
  acStack_1c7[4] = s_GetCameraForward_03964ddf[0xc];
  acStack_1c7[5] = s_GetCameraForward_03964ddf[0xd];
  acStack_1c7[6] = s_GetCameraForward_03964ddf[0xe];
  local_1c0 = 100;
  local_1a0 = 0x1a;
  acStack_197[0] = s_GetCameraLeft_03959020[8];
  acStack_197[1] = s_GetCameraLeft_03959020[9];
  acStack_197[2] = s_GetCameraLeft_03959020[10];
  acStack_197[3] = s_GetCameraLeft_03959020[0xb];
  acStack_197[4] = s_GetCameraLeft_03959020[0xc];
  acStack_19f[0] = s_GetCameraLeft_03959020[0];
  acStack_19f[1] = s_GetCameraLeft_03959020[1];
  acStack_19f[2] = s_GetCameraLeft_03959020[2];
  acStack_19f[3] = s_GetCameraLeft_03959020[3];
  acStack_19f[4] = s_GetCameraLeft_03959020[4];
  local_19a[0] = s_GetCameraLeft_03959020[5];
  local_19a[1] = s_GetCameraLeft_03959020[6];
  local_19a[2] = s_GetCameraLeft_03959020[7];
  local_180 = &LAB_023c23b8;
  local_188 = &LAB_023c2370;
  local_170 = 0x24;
  local_192 = 0;
  local_190 = 0;
  local_178 = 0xffffffff;
  local_16f[0] = s_playerStateContext_038bb97b[0];
  local_16f[1] = s_playerStateContext_038bb97b[1];
  local_16f[2] = s_playerStateContext_038bb97b[2];
  local_16f[3] = s_playerStateContext_038bb97b[3];
  local_16f[4] = s_playerStateContext_038bb97b[4];
  local_16f[5] = s_playerStateContext_038bb97b[5];
  local_16f[6] = s_playerStateContext_038bb97b[6];
  local_158 = &LAB_023c2400;
  cStack_168 = s_playerStateContext_038bb97b[7];
  acStack_167[0] = s_playerStateContext_038bb97b[8];
  acStack_167[1] = s_playerStateContext_038bb97b[9];
  acStack_167[2] = s_playerStateContext_038bb97b[10];
  acStack_167[3] = s_playerStateContext_038bb97b[0xb];
  acStack_167[4] = s_playerStateContext_038bb97b[0xc];
  acStack_167[5] = s_playerStateContext_038bb97b[0xd];
  acStack_167[6] = s_playerStateContext_038bb97b[0xe];
  local_160 = 0x747865;
  local_148 = 0xffffffff;
  local_150 = &LAB_023c24f0;
  plVar17 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar17 = plVar1;
  }
  local_130 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x30,8);
  uVar23 = s___haxe_export_GetPlayerInputInfo_038a6961._8_8_;
  *(undefined8 *)local_130 = s___haxe_export_GetPlayerInputInfo_038a6961._0_8_;
  *(undefined8 *)(local_130 + 8) = uVar23;
  uVar23 = CONCAT17(s___haxe_export_GetPlayerInputInfo_038a6961[0x1f],
                    s___haxe_export_GetPlayerInputInfo_038a6961._24_7_);
  *(undefined8 *)(local_130 + 0x10) = s___haxe_export_GetPlayerInputInfo_038a6961._16_8_;
  *(undefined8 *)(local_130 + 0x18) = uVar23;
  *(ulong *)(local_130 + 0x1f) =
       CONCAT71(s___haxe_export_GetPlayerInputInfo_038a6961._32_7_,
                s___haxe_export_GetPlayerInputInfo_038a6961[0x1f]);
  local_130[0x27] = '\0';
  plVar1 = DAT_043f1798;
  local_140 = 0x31;
  local_139 = 0;
  local_13b = 0;
  local_13f = 0;
  local_138 = 0x27;
  local_120 = &LAB_023c2554;
  local_118 = 0xffffffff;
  local_128 = &LAB_023c250c;
  plVar17 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar17 = plVar1;
  }
  local_100 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x30,8);
  uVar23 = s___haxe_export_GetRidePokemonComp_03951188._8_8_;
  psVar25 = &local_320;
  *(undefined8 *)local_100 = s___haxe_export_GetRidePokemonComp_03951188._0_8_;
  *(undefined8 *)(local_100 + 8) = uVar23;
  uVar23 = CONCAT35(s___haxe_export_GetRidePokemonComp_03951188._29_3_,
                    s___haxe_export_GetRidePokemonComp_03951188._24_5_);
  *(undefined8 *)(local_100 + 0x10) = s___haxe_export_GetRidePokemonComp_03951188._16_8_;
  *(undefined8 *)(local_100 + 0x18) = uVar23;
  *(ulong *)(local_100 + 0x1d) =
       CONCAT53(s___haxe_export_GetRidePokemonComp_03951188._32_5_,
                s___haxe_export_GetRidePokemonComp_03951188._29_3_);
  local_100[0x25] = '\0';
  local_110 = 0x31;
  local_109 = 0;
  local_10b = 0;
  local_10f = 0;
  local_108 = 0x25;
  local_f0 = &LAB_023c25e4;
  local_e8 = 0xffffffff;
  plVar1 = plVar10 + 3;
  local_f8 = &LAB_023c259c;
  local_e0 = 6;
  local_dd = 0x77;
  local_df = 0x656e;
  local_d4 = 0;
  local_dc = 0;
  local_c0 = &LAB_023c2674;
  local_d0 = 0;
  local_b8 = 0xffffffff;
  local_b0 = 8;
  local_c8 = &LAB_023c262c;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_a0 = 0;
  local_90 = &LAB_023c2704;
  local_88 = 0xffffffff;
  local_98 = &LAB_023c26bc;
  do {
    uVar14 = *(ulong *)(psVar25 + 8);
    psVar3 = *(string **)(psVar25 + 0x10);
    if (((byte)*psVar25 & 1) == 0) {
      psVar3 = psVar25 + 1;
      uVar14 = (ulong)((byte)*psVar25 >> 1);
    }
    pcVar12 = (char *)FUN_008e8ed4(&local_80,psVar3,uVar14);
    pcVar28 = (char *)plVar10[2];
    if (pcVar28 != (char *)0x0) {
      uVar14 = (long)pcVar28 - ((ulong)pcVar28 >> 1 & 0x5555555555555555);
      uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
      uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar14 < 2) {
        pcVar26 = (char *)((ulong)(pcVar28 + -1) & (ulong)pcVar12);
      }
      else {
        pcVar26 = pcVar12;
        if (pcVar28 <= pcVar12) {
          uVar19 = 0;
          if (pcVar28 != (char *)0x0) {
            uVar19 = (ulong)pcVar12 / (ulong)pcVar28;
          }
          pcVar26 = pcVar12 + -(uVar19 * (long)pcVar28);
        }
      }
      plVar17 = *(long **)(*plVar24 + (long)pcVar26 * 8);
      if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
        psVar3 = psVar25 + 1;
        sVar11 = (ulong)((byte)*psVar25 >> 1);
        if (((byte)*psVar25 & 1) != 0) {
          psVar3 = *(string **)(psVar25 + 0x10);
          sVar11 = *(size_t *)(psVar25 + 8);
        }
        if (uVar14 < 2) {
          if (sVar11 == 0) {
            do {
              if ((char *)plVar17[1] != pcVar12 &&
                  (char *)((ulong)plVar17[1] & (ulong)(pcVar28 + -1)) != pcVar26) break;
              uVar14 = (ulong)(*(byte *)(plVar17 + 2) >> 1);
              if ((*(byte *)(plVar17 + 2) & 1) != 0) {
                uVar14 = plVar17[3];
              }
              if (uVar14 == 0) goto LAB_023bfe54;
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
          else {
            do {
              if ((char *)plVar17[1] != pcVar12 &&
                  (char *)((ulong)plVar17[1] & (ulong)(pcVar28 + -1)) != pcVar26) break;
              bVar4 = *(byte *)(plVar17 + 2);
              uVar14 = (ulong)(bVar4 >> 1);
              sVar2 = uVar14;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar17[3];
              }
              if (sVar2 == sVar11) {
                if ((bVar4 & 1) == 0) {
                  psVar20 = (string *)((long)plVar17 + 0x11);
                  psVar22 = psVar3;
                  while (*psVar20 == *psVar22) {
                    uVar14 = uVar14 - 1;
                    psVar20 = psVar20 + 1;
                    psVar22 = psVar22 + 1;
                    if (uVar14 == 0) goto LAB_023bfe54;
                  }
                }
                else {
                  iVar9 = memcmp((void *)plVar17[4],psVar3,sVar11);
                  if (iVar9 == 0) goto LAB_023bfe54;
                }
              }
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
        }
        else if (sVar11 == 0) {
          do {
            pcVar16 = (char *)plVar17[1];
            if (pcVar16 != pcVar12) {
              if (pcVar28 <= pcVar16) {
                uVar14 = 0;
                if (pcVar28 != (char *)0x0) {
                  uVar14 = (ulong)pcVar16 / (ulong)pcVar28;
                }
                pcVar16 = pcVar16 + -(uVar14 * (long)pcVar28);
              }
              if (pcVar16 != pcVar26) break;
            }
            uVar14 = (ulong)(*(byte *)(plVar17 + 2) >> 1);
            if ((*(byte *)(plVar17 + 2) & 1) != 0) {
              uVar14 = plVar17[3];
            }
            if (uVar14 == 0) goto LAB_023bfe54;
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        else {
          do {
            pcVar16 = (char *)plVar17[1];
            if (pcVar16 != pcVar12) {
              if (pcVar28 <= pcVar16) {
                uVar14 = 0;
                if (pcVar28 != (char *)0x0) {
                  uVar14 = (ulong)pcVar16 / (ulong)pcVar28;
                }
                pcVar16 = pcVar16 + -(uVar14 * (long)pcVar28);
              }
              if (pcVar16 != pcVar26) break;
            }
            bVar4 = *(byte *)(plVar17 + 2);
            uVar14 = (ulong)(bVar4 >> 1);
            sVar2 = uVar14;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar17[3];
            }
            if (sVar2 == sVar11) {
              if ((bVar4 & 1) == 0) {
                psVar20 = (string *)((long)plVar17 + 0x11);
                psVar22 = psVar3;
                while (*psVar20 == *psVar22) {
                  uVar14 = uVar14 - 1;
                  psVar20 = psVar20 + 1;
                  psVar22 = psVar22 + 1;
                  if (uVar14 == 0) goto LAB_023bfe54;
                }
              }
              else {
                iVar9 = memcmp((void *)plVar17[4],psVar3,sVar11);
                if (iVar9 == 0) goto LAB_023bfe54;
              }
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
    plVar17 = DAT_043f1798;
    plVar15 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar15 = plVar17;
    }
    plVar17 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0x40,8);
    std::string::string((string *)(plVar17 + 2),psVar25);
    lVar18 = *(long *)(psVar25 + 0x18);
    lVar21 = *(long *)(psVar25 + 0x28);
    plVar17[6] = *(long *)(psVar25 + 0x20);
    plVar17[7] = lVar21;
    plVar17[5] = lVar18;
    *plVar17 = 0;
    plVar17[1] = (long)pcVar12;
    if ((pcVar28 == (char *)0x0) ||
       (*(float *)(plVar10 + 5) * (float)pcVar28 < (float)(plVar10[4] + 1))) {
      uVar14 = (ulong)(pcVar28 < (char *)0x3 || ((ulong)pcVar28 & (ulong)(pcVar28 + -1)) != 0) |
               (long)pcVar28 << 1;
      uVar19 = (ulong)((float)(plVar10[4] + 1) / *(float *)(plVar10 + 5));
      if (uVar19 <= uVar14) {
        uVar19 = uVar14;
      }
      FUN_008e9ae4(plVar24,uVar19);
      pcVar28 = (char *)plVar10[2];
      if (((ulong)pcVar28 & (ulong)(pcVar28 + -1)) == 0) {
        pcVar26 = (char *)((ulong)(pcVar28 + -1) & (ulong)pcVar12);
      }
      else if (pcVar12 < pcVar28) {
        pcVar26 = pcVar12;
      }
      else {
        uVar14 = 0;
        if (pcVar28 != (char *)0x0) {
          uVar14 = (ulong)pcVar12 / (ulong)pcVar28;
        }
        pcVar26 = pcVar12 + -(uVar14 * (long)pcVar28);
      }
    }
    lVar18 = *plVar24;
    plVar15 = *(long **)(lVar18 + (long)pcVar26 * 8);
    if (plVar15 == (long *)0x0) {
      *plVar17 = *plVar1;
      *plVar1 = (long)plVar17;
      *(long **)(lVar18 + (long)pcVar26 * 8) = plVar1;
      if (*plVar17 != 0) {
        pcVar12 = *(char **)(*plVar17 + 8);
        if (((ulong)pcVar28 & (ulong)(pcVar28 + -1)) == 0) {
          pcVar12 = (char *)((ulong)pcVar12 & (ulong)(pcVar28 + -1));
        }
        else if (pcVar28 <= pcVar12) {
          uVar14 = 0;
          if (pcVar28 != (char *)0x0) {
            uVar14 = (ulong)pcVar12 / (ulong)pcVar28;
          }
          pcVar12 = pcVar12 + -(uVar14 * (long)pcVar28);
        }
        plVar15 = (long *)(*plVar24 + (long)pcVar12 * 8);
        goto LAB_023bfe44;
      }
    }
    else {
      *plVar17 = *plVar15;
LAB_023bfe44:
      *plVar15 = (long)plVar17;
    }
    plVar10[4] = plVar10[4] + 1;
LAB_023bfe54:
    psVar25 = psVar25 + 0x30;
  } while (psVar25 != &local_80);
  lVar21 = FUN_008cca50();
  lVar18 = 0;
  do {
    lVar13 = FUN_008e8c90(plVar24,lVar21 + lVar18);
    if (lVar13 != 0) {
      FUN_008f2aec(&local_80,plVar24,lVar13);
      plVar1 = DAT_043f1798;
      lVar13 = CONCAT71(uStack_7f,local_80);
      local_80 = (string)0x0;
      uStack_7f = 0;
      if (lVar13 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar13 + 0x10) & 1) != 0)) &&
           (lVar29 = *(long *)(lVar13 + 0x20), lVar29 != 0)) {
          plVar17 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar17 = plVar1;
          }
          uVar14 = (**(code **)(*plVar17 + 0xc0))(plVar17);
          if ((uVar14 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar17,lVar29,0,8);
              goto LAB_023c0258;
            }
          }
          (**(code **)(*plVar17 + 0x18))(plVar17,lVar29,0,8);
        }
LAB_023c0258:
        plVar1 = DAT_043f1798;
        plVar17 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar17 = plVar1;
        }
        uVar14 = (**(code **)(*plVar17 + 0xc0))(plVar17);
        if ((uVar14 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar17,lVar13,0,8);
            goto LAB_023c0210;
          }
        }
        (**(code **)(*plVar17 + 0x18))(plVar17,lVar13,0,8);
      }
    }
LAB_023c0210:
    lVar13 = local_a0;
    lVar18 = lVar18 + 0x18;
  } while (lVar18 != 0x300);
  *(undefined1 *)(plVar10 + 0xb) = 1;
  plVar1 = DAT_043f1798;
  lVar18 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar17 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar17 = plVar1;
    }
    uVar14 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar13,0,8);
        plVar1 = DAT_043f1798;
        lVar18 = local_d0;
        goto joined_r0x023c03b0;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar13,0,8);
    plVar1 = DAT_043f1798;
    lVar18 = local_d0;
  }
joined_r0x023c03b0:
  pcVar26 = local_100;
  local_d0 = lVar18;
  if (((local_e0 & 1) != 0) && (lVar18 != 0)) {
    plVar17 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar17 = plVar1;
    }
    uVar14 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar18,0,8);
        plVar1 = DAT_043f1798;
        pcVar26 = local_100;
        goto joined_r0x023c0f14;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar18,0,8);
    plVar1 = DAT_043f1798;
    pcVar26 = local_100;
  }
joined_r0x023c0f14:
  pcVar12 = local_130;
  local_100 = pcVar26;
  if (((local_110 & 1) != 0) && (pcVar26 != (char *)0x0)) {
    plVar17 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar17 = plVar1;
    }
    uVar14 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar17,pcVar26,0,8);
        plVar1 = DAT_043f1798;
        pcVar12 = local_130;
        goto joined_r0x023c0518;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,pcVar26,0,8);
    plVar1 = DAT_043f1798;
    pcVar12 = local_130;
  }
joined_r0x023c0518:
  lVar18 = local_160;
  local_130 = pcVar12;
  if (((local_140 & 1) != 0) && (pcVar12 != (char *)0x0)) {
    plVar17 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar17 = plVar1;
    }
    uVar14 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar17,pcVar12,0,8);
        plVar1 = DAT_043f1798;
        lVar18 = local_160;
        goto joined_r0x023c0f54;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,pcVar12,0,8);
    plVar1 = DAT_043f1798;
    lVar18 = local_160;
  }
joined_r0x023c0f54:
  lVar21 = local_190;
  local_160 = lVar18;
  if (((local_170 & 1) != 0) && (lVar18 != 0)) {
    plVar17 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar17 = plVar1;
    }
    uVar14 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar18,0,8);
        plVar1 = DAT_043f1798;
        lVar21 = local_190;
        goto joined_r0x023c0680;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar18,0,8);
    plVar1 = DAT_043f1798;
    lVar21 = local_190;
  }
joined_r0x023c0680:
  lVar18 = local_1c0;
  local_190 = lVar21;
  if (((local_1a0 & 1) != 0) && (lVar21 != 0)) {
    plVar17 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar17 = plVar1;
    }
    uVar14 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar21,0,8);
        plVar1 = DAT_043f1798;
        lVar18 = local_1c0;
        goto joined_r0x023c0f94;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar21,0,8);
    plVar1 = DAT_043f1798;
    lVar18 = local_1c0;
  }
joined_r0x023c0f94:
  pcVar26 = local_1f0;
  local_1c0 = lVar18;
  if (((local_1d0 & 1) != 0) && (lVar18 != 0)) {
    plVar17 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar17 = plVar1;
    }
    uVar14 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar18,0,8);
        plVar1 = DAT_043f1798;
        pcVar26 = local_1f0;
        goto joined_r0x023c07e8;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar18,0,8);
    plVar1 = DAT_043f1798;
    pcVar26 = local_1f0;
  }
joined_r0x023c07e8:
  pcVar12 = local_220;
  local_1f0 = pcVar26;
  if (((local_200 & 1) != 0) && (pcVar26 != (char *)0x0)) {
    plVar17 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar17 = plVar1;
    }
    uVar14 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar17,pcVar26,0,8);
        plVar1 = DAT_043f1798;
        pcVar12 = local_220;
        goto joined_r0x023c0fd4;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,pcVar26,0,8);
    plVar1 = DAT_043f1798;
    pcVar12 = local_220;
  }
joined_r0x023c0fd4:
  pvVar27 = local_250;
  local_220 = pcVar12;
  if (((local_230 & 1) != 0) && (pcVar12 != (char *)0x0)) {
    plVar17 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar17 = plVar1;
    }
    uVar14 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar17,pcVar12,0,8);
        plVar1 = DAT_043f1798;
        pvVar27 = local_250;
        goto joined_r0x023c0950;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,pcVar12,0,8);
    plVar1 = DAT_043f1798;
    pvVar27 = local_250;
  }
joined_r0x023c0950:
  pvVar7 = local_280;
  local_250 = pvVar27;
  if (((local_260 & 1) != 0) && (pvVar27 != (void *)0x0)) {
    plVar17 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar17 = plVar1;
    }
    uVar14 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar17,pvVar27,0,8);
        plVar1 = DAT_043f1798;
        pvVar7 = local_280;
        goto joined_r0x023c1014;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,pvVar27,0,8);
    plVar1 = DAT_043f1798;
    pvVar7 = local_280;
  }
joined_r0x023c1014:
  pcVar26 = local_2b0;
  local_280 = pvVar7;
  if ((((byte)local_290 & 1) != 0) && (pvVar7 != (void *)0x0)) {
    plVar17 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar17 = plVar1;
    }
    uVar14 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar17,pvVar7,0,8);
        plVar1 = DAT_043f1798;
        pcVar26 = local_2b0;
        goto joined_r0x023c0ab8;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,pvVar7,0,8);
    plVar1 = DAT_043f1798;
    pcVar26 = local_2b0;
  }
joined_r0x023c0ab8:
  pcVar12 = local_2e0;
  local_2b0 = pcVar26;
  if (((local_2c0 & 1) != 0) && (pcVar26 != (char *)0x0)) {
    plVar17 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar17 = plVar1;
    }
    uVar14 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar17,pcVar26,0,8);
        plVar1 = DAT_043f1798;
        pcVar12 = local_2e0;
        goto joined_r0x023c1054;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,pcVar26,0,8);
    plVar1 = DAT_043f1798;
    pcVar12 = local_2e0;
  }
joined_r0x023c1054:
  lVar18 = local_310;
  local_2e0 = pcVar12;
  if (((local_2f0 & 1) != 0) && (pcVar12 != (char *)0x0)) {
    plVar17 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar17 = plVar1;
    }
    uVar14 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar17,pcVar12,0,8);
        plVar1 = DAT_043f1798;
        lVar18 = local_310;
        goto joined_r0x023c0c20;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,pcVar12,0,8);
    plVar1 = DAT_043f1798;
    lVar18 = local_310;
  }
joined_r0x023c0c20:
  DAT_043f1798 = plVar1;
  local_310 = lVar18;
  if ((((byte)local_320 & 1) != 0) && (lVar18 != 0)) {
    plVar17 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar17 = plVar1;
    }
    uVar14 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar18,0,8);
        goto LAB_023c0cd0;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar18,0,8);
  }
LAB_023c0cd0:
  uVar23 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar23);
  (**(code **)*plVar10)(plVar10,uVar23);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  pcVar26 = (char *)((ulong)&local_370 | 1);
  if ((local_370 & 1) != 0) {
    pcVar26 = local_360;
  }
  FUN_001522a0(uVar23,pcVar26);
  pcVar26 = local_360;
  plVar1 = DAT_043f1798;
  if (((local_370 & 1) != 0) && (local_360 != (char *)0x0)) {
    plVar17 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar17 = plVar1;
    }
    uVar14 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar17,pcVar26,0,8);
        return;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,pcVar26,0,8);
  }
  return;
}


