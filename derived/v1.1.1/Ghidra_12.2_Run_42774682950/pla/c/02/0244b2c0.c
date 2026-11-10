/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0244b2c0; name: FUN_0244b2c0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0244b2c0(long param_1)

{
  long *plVar1;
  size_t sVar2;
  char *pcVar3;
  string *psVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  size_t __n;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 uVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  string *psVar19;
  long lVar20;
  string *psVar21;
  ulong uVar22;
  undefined8 uVar23;
  long *plVar24;
  string *psVar25;
  long lVar26;
  ulong uVar27;
  ulong local_338;
  undefined8 uStack_330;
  char *local_328;
  string local_320;
  undefined4 local_31f;
  undefined2 local_31b;
  undefined1 local_319;
  undefined8 local_318;
  char *local_310;
  undefined1 *local_308;
  undefined1 *puStack_300;
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
  char local_2bf [8];
  undefined1 local_2b7;
  undefined4 local_2b6;
  undefined2 local_2b2;
  long local_2b0;
  undefined1 *puStack_2a8;
  undefined1 *local_2a0;
  undefined4 local_298;
  byte local_290;
  undefined4 local_28f;
  undefined2 local_28b;
  undefined1 local_289;
  undefined8 local_288;
  char *local_280;
  undefined1 *local_278;
  undefined1 *puStack_270;
  undefined4 local_268;
  byte local_260;
  undefined4 local_25f;
  undefined2 local_25b;
  undefined1 local_259;
  undefined8 local_258;
  char *local_250;
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
  undefined4 local_1cf;
  undefined2 local_1cb;
  undefined1 local_1c9;
  undefined8 local_1c8;
  char *local_1c0;
  undefined1 *local_1b8;
  undefined1 *puStack_1b0;
  undefined4 local_1a8;
  byte local_1a0;
  undefined4 local_19f;
  undefined2 local_19b;
  undefined1 local_199;
  undefined8 local_198;
  char *local_190;
  undefined1 *local_188;
  undefined1 *puStack_180;
  undefined4 local_178;
  byte local_170;
  undefined4 local_16f;
  undefined2 local_16b;
  undefined1 local_169;
  undefined8 local_168;
  char *local_160;
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
  long local_80 [2];
  char local_70;
  
  plVar1 = DAT_043f1798;
  lVar7 = tpidr_el0;
  plVar17 = *(long **)(lVar7 + 0x20);
  if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
    *(long **)(lVar7 + 0x20) = DAT_043f1798;
    plVar17 = plVar1;
  }
  local_328 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x20,8);
  uVar10 = s_RideOdosisiStateContext_039222c3._0_8_;
  local_338 = 0x21;
  uStack_330 = 0x17;
  uVar8 = CONCAT71(s_RideOdosisiStateContext_039222c3._16_7_,s_RideOdosisiStateContext_039222c3[0xf]
                  );
  uVar23 = CONCAT17(s_RideOdosisiStateContext_039222c3[0xf],s_RideOdosisiStateContext_039222c3._8_7_
                   );
  local_328[0x17] = '\0';
  *(undefined8 *)local_328 = uVar10;
  *(undefined8 *)(local_328 + 8) = uVar23;
  *(undefined8 *)(local_328 + 0xf) = uVar8;
  plVar1 = DAT_043f1798;
  plVar17 = *(long **)(lVar7 + 0x20);
  if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
    *(long **)(lVar7 + 0x20) = DAT_043f1798;
    plVar17 = plVar1;
  }
  plVar12 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x178,8);
  plVar12[4] = 0;
  plVar12[2] = 0;
  plVar12[3] = 0;
  plVar24 = plVar12 + 1;
  *plVar24 = 0;
  plVar12[6] = (long)FUN_0244d570;
  plVar12[7] = (long)FUN_0244d620;
  *plVar12 = (long)&PTR_FUN_0425c0c0;
  *(undefined4 *)(plVar12 + 5) = 0x3f800000;
  plVar12[0xe] = (long)&LAB_0271c360;
  plVar12[0xf] = 0;
  plVar12[0x10] = (long)"inputInfo";
  plVar12[0x11] = 0xb0;
  plVar12[0x14] = (long)&LAB_0271c68c;
  plVar12[0x15] = 0;
  plVar12[0x16] = (long)"__haxe_export_GetItemCandidacy";
  plVar12[0x17] = (long)"__haxe_export_IsItemPickEnable";
  plVar12[0x18] = (long)&LAB_0271c94c;
  plVar12[0x19] = 0;
  plVar12[0x1a] = (long)"__haxe_export_GetCameraManager";
  plVar12[0x1b] = (long)"__haxe_export_IsStaminaEnable";
  plVar12[0x1c] = (long)&LAB_0271c988;
  plVar12[0x1d] = 0;
  plVar12[10] = 0;
  *(undefined1 *)(plVar12 + 0xb) = 0;
  plVar12[0x2c] = 0;
  plVar12[0x2e] = 0;
  plVar12[0x1e] = (long)"__haxe_export_GetStaminaData";
  plVar12[0x1f] = (long)"__haxe_export_GetPlayerInputInfoHandler";
  plVar12[0x20] = (long)"__haxe_export_GetRidePokemonComponent";
  plVar12[0x21] = (long)&LAB_0271c9c8;
  plVar12[0x22] = 0;
  plVar12[0x23] = (long)&DAT_038ca815;
  plVar12[0x24] = (long)&DAT_0392da3c;
  plVar12[0x25] = 0;
  plVar12[0x26] = 0;
  plVar12[0x27] = (long)FUN_0244d7b0;
  plVar12[0x28] = (long)&LAB_0244da90;
  plVar12[0x29] = (long)&LAB_0244dd70;
  plVar12[0x2a] = (long)&LAB_0244dd80;
  plVar12[0x2b] = 0;
  *(undefined1 *)(plVar12 + 0x2d) = 1;
  plVar12[8] = 0;
  plVar12[9] = 0;
  plVar12[0xc] = (long)"__haxe_export_GetCharaController";
  plVar12[0xd] = (long)"__haxe_export_IsCharaControllerEnable";
  plVar12[0x12] = (long)"__haxe_export_GetCameraTransformObject";
  plVar12[0x13] = (long)"__haxe_export_IsCameraEnable";
  plVar1 = DAT_043f1798;
  plVar17 = *(long **)(lVar7 + 0x20);
  if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
    *(long **)(lVar7 + 0x20) = DAT_043f1798;
    plVar17 = plVar1;
  }
  local_310 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x30,8);
  local_310[0x20] = '\0';
  uVar23 = s___haxe_export_GetCharaController_038eb35f._8_8_;
  *(undefined8 *)local_310 = s___haxe_export_GetCharaController_038eb35f._0_8_;
  uVar8 = s___haxe_export_GetCharaController_038eb35f._24_8_;
  *(undefined8 *)(local_310 + 0x10) = s___haxe_export_GetCharaController_038eb35f._16_8_;
  *(undefined8 *)(local_310 + 0x18) = uVar8;
  *(undefined8 *)(local_310 + 8) = uVar23;
  plVar1 = DAT_043f1798;
  local_318 = 0x20;
  local_320 = (string)0x31;
  local_319 = 0;
  local_31b = 0;
  local_31f = 0;
  local_308 = &LAB_0244dd84;
  puStack_300 = &LAB_0244ddcc;
  local_2f8 = 0xffffffff;
  plVar17 = *(long **)(lVar7 + 0x20);
  if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
    *(long **)(lVar7 + 0x20) = DAT_043f1798;
    plVar17 = plVar1;
  }
  local_2e0 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x30,8);
  uVar23 = s___haxe_export_IsCharaControllerE_038f5793._8_8_;
  *(undefined8 *)local_2e0 = s___haxe_export_IsCharaControllerE_038f5793._0_8_;
  *(undefined8 *)(local_2e0 + 8) = uVar23;
  uVar23 = CONCAT35(s___haxe_export_IsCharaControllerE_038f5793._29_3_,
                    s___haxe_export_IsCharaControllerE_038f5793._24_5_);
  *(undefined8 *)(local_2e0 + 0x10) = s___haxe_export_IsCharaControllerE_038f5793._16_8_;
  *(undefined8 *)(local_2e0 + 0x18) = uVar23;
  *(ulong *)(local_2e0 + 0x1d) =
       CONCAT53(s___haxe_export_IsCharaControllerE_038f5793._32_5_,
                s___haxe_export_IsCharaControllerE_038f5793._29_3_);
  local_2e0[0x25] = '\0';
  plVar1 = DAT_043f1798;
  local_2f0 = 0x31;
  local_2e9 = 0;
  local_2e8 = 0x25;
  local_2eb = 0;
  local_2d8 = &LAB_0244de14;
  puStack_2d0 = &LAB_0244de5c;
  local_2c0 = 0x12;
  local_2b7 = 0x6f;
  local_2bf[0] = s_inputInfo_039c076f[0];
  local_2bf[1] = s_inputInfo_039c076f[1];
  local_2bf[2] = s_inputInfo_039c076f[2];
  local_2bf[3] = s_inputInfo_039c076f[3];
  local_2bf[4] = s_inputInfo_039c076f[4];
  local_2bf[5] = s_inputInfo_039c076f[5];
  local_2bf[6] = s_inputInfo_039c076f[6];
  local_2bf[7] = s_inputInfo_039c076f[7];
  local_2ef = 0;
  local_2c8 = 0xffffffff;
  local_2b2 = 0;
  local_2b6 = 0;
  local_2b0 = 0;
  puStack_2a8 = &LAB_0244dea4;
  local_2a0 = &LAB_0244df94;
  local_298 = 0xffffffff;
  uVar27 = 0x31;
  plVar17 = *(long **)(lVar7 + 0x20);
  if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
    *(long **)(lVar7 + 0x20) = DAT_043f1798;
    plVar17 = plVar1;
  }
  local_280 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x30,8);
  uVar23 = s___haxe_export_GetCameraTransform_039c0779._8_8_;
  *(undefined8 *)local_280 = s___haxe_export_GetCameraTransform_039c0779._0_8_;
  *(undefined8 *)(local_280 + 8) = uVar23;
  uVar23 = CONCAT26(s___haxe_export_GetCameraTransform_039c0779._30_2_,
                    s___haxe_export_GetCameraTransform_039c0779._24_6_);
  *(undefined8 *)(local_280 + 0x10) = s___haxe_export_GetCameraTransform_039c0779._16_8_;
  *(undefined8 *)(local_280 + 0x18) = uVar23;
  *(ulong *)(local_280 + 0x1e) =
       CONCAT62(s___haxe_export_GetCameraTransform_039c0779._32_6_,
                s___haxe_export_GetCameraTransform_039c0779._30_2_);
  local_280[0x26] = '\0';
  plVar1 = DAT_043f1798;
  local_290 = 0x31;
  local_28b = 0;
  local_28f = 0;
  local_289 = 0;
  local_288 = 0x26;
  local_278 = &LAB_0244dfb0;
  puStack_270 = &LAB_0244dff8;
  local_268 = 0xffffffff;
  plVar17 = *(long **)(lVar7 + 0x20);
  if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
    *(long **)(lVar7 + 0x20) = DAT_043f1798;
    plVar17 = plVar1;
  }
  local_250 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x20,8);
  local_250[0x18] = 'a';
  local_250[0x19] = 'b';
  local_250[0x1a] = 'l';
  local_250[0x1b] = 'e';
  local_250[0x1c] = '\0';
  uVar23 = s___haxe_export_IsCameraEnable_038e27f5._8_8_;
  *(undefined8 *)local_250 = s___haxe_export_IsCameraEnable_038e27f5._0_8_;
  uVar8 = s___haxe_export_IsCameraEnable_038e27f5._16_8_;
  *(undefined8 *)(local_250 + 8) = uVar23;
  *(undefined8 *)(local_250 + 0x10) = uVar8;
  plVar1 = DAT_043f1798;
  local_260 = 0x21;
  local_25b = 0;
  local_25f = 0;
  local_259 = 0;
  local_258 = 0x1c;
  local_248 = &LAB_0244e040;
  puStack_240 = &LAB_0244e088;
  local_238 = 0xffffffff;
  plVar17 = *(long **)(lVar7 + 0x20);
  if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
    *(long **)(lVar7 + 0x20) = DAT_043f1798;
    plVar17 = plVar1;
  }
  local_220 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x20,8);
  local_220[0x1e] = '\0';
  uVar8 = s___haxe_export_GetItemCandidacy_03980659._8_8_;
  *(undefined8 *)local_220 = s___haxe_export_GetItemCandidacy_03980659._0_8_;
  *(ulong *)(local_220 + 0x16) =
       CONCAT62(s___haxe_export_GetItemCandidacy_03980659._24_6_,
                s___haxe_export_GetItemCandidacy_03980659._22_2_);
  uVar23 = CONCAT26(s___haxe_export_GetItemCandidacy_03980659._22_2_,
                    s___haxe_export_GetItemCandidacy_03980659._16_6_);
  *(undefined8 *)(local_220 + 8) = uVar8;
  *(undefined8 *)(local_220 + 0x10) = uVar23;
  plVar1 = DAT_043f1798;
  local_230 = 0x21;
  local_22b = 0;
  local_22f = 0;
  local_228 = 0x1e;
  local_229 = 0;
  local_208 = 0xffffffff;
  local_218 = &LAB_0244e0d0;
  puStack_210 = &LAB_0244e118;
  plVar17 = *(long **)(lVar7 + 0x20);
  if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
    *(long **)(lVar7 + 0x20) = DAT_043f1798;
    plVar17 = plVar1;
  }
  local_1f0 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x20,8);
  local_1f0[0x1e] = '\0';
  uVar8 = s___haxe_export_IsItemPickEnable_0392bb06._8_8_;
  *(undefined8 *)local_1f0 = s___haxe_export_IsItemPickEnable_0392bb06._0_8_;
  *(ulong *)(local_1f0 + 0x16) =
       CONCAT62(s___haxe_export_IsItemPickEnable_0392bb06._24_6_,
                s___haxe_export_IsItemPickEnable_0392bb06._22_2_);
  uVar23 = CONCAT26(s___haxe_export_IsItemPickEnable_0392bb06._22_2_,
                    s___haxe_export_IsItemPickEnable_0392bb06._16_6_);
  *(undefined8 *)(local_1f0 + 8) = uVar8;
  *(undefined8 *)(local_1f0 + 0x10) = uVar23;
  plVar1 = DAT_043f1798;
  local_200 = 0x21;
  local_1f9 = 0;
  local_1fb = 0;
  local_1ff = 0;
  local_1f8 = 0x1e;
  local_1d8 = 0xffffffff;
  local_1e8 = &LAB_0244e160;
  puStack_1e0 = &LAB_0244e1a8;
  plVar17 = *(long **)(lVar7 + 0x20);
  if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
    *(long **)(lVar7 + 0x20) = DAT_043f1798;
    plVar17 = plVar1;
  }
  local_1c0 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x20,8);
  local_1c0[0x1e] = '\0';
  uVar8 = s___haxe_export_GetCameraManager_038ec142._8_8_;
  *(undefined8 *)local_1c0 = s___haxe_export_GetCameraManager_038ec142._0_8_;
  *(ulong *)(local_1c0 + 0x16) =
       CONCAT62(s___haxe_export_GetCameraManager_038ec142._24_6_,
                s___haxe_export_GetCameraManager_038ec142._22_2_);
  uVar23 = CONCAT26(s___haxe_export_GetCameraManager_038ec142._22_2_,
                    s___haxe_export_GetCameraManager_038ec142._16_6_);
  *(undefined8 *)(local_1c0 + 8) = uVar8;
  *(undefined8 *)(local_1c0 + 0x10) = uVar23;
  plVar1 = DAT_043f1798;
  local_1d0 = 0x21;
  local_1c9 = 0;
  local_1cb = 0;
  local_1cf = 0;
  local_1a8 = 0xffffffff;
  local_1c8 = 0x1e;
  local_1b8 = &LAB_0244e1f0;
  puStack_1b0 = &LAB_0244e238;
  plVar17 = *(long **)(lVar7 + 0x20);
  if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
    *(long **)(lVar7 + 0x20) = DAT_043f1798;
    plVar17 = plVar1;
  }
  local_190 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x20,8);
  local_190[0x1d] = '\0';
  uVar8 = s___haxe_export_IsStaminaEnable_03980999._8_8_;
  *(undefined8 *)local_190 = s___haxe_export_IsStaminaEnable_03980999._0_8_;
  *(ulong *)(local_190 + 0x15) =
       CONCAT53(s___haxe_export_IsStaminaEnable_03980999._24_5_,
                s___haxe_export_IsStaminaEnable_03980999._21_3_);
  uVar23 = CONCAT35(s___haxe_export_IsStaminaEnable_03980999._21_3_,
                    s___haxe_export_IsStaminaEnable_03980999._16_5_);
  *(undefined8 *)(local_190 + 8) = uVar8;
  *(undefined8 *)(local_190 + 0x10) = uVar23;
  plVar1 = DAT_043f1798;
  local_1a0 = 0x21;
  local_199 = 0;
  local_19b = 0;
  local_19f = 0;
  local_198 = 0x1d;
  local_178 = 0xffffffff;
  local_188 = &LAB_0244e280;
  puStack_180 = &LAB_0244e2c8;
  plVar17 = *(long **)(lVar7 + 0x20);
  if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
    *(long **)(lVar7 + 0x20) = DAT_043f1798;
    plVar17 = plVar1;
  }
  local_160 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x20,8);
  local_160[0x18] = 'D';
  local_160[0x19] = 'a';
  local_160[0x1a] = 't';
  local_160[0x1b] = 'a';
  local_160[0x1c] = '\0';
  uVar23 = s___haxe_export_GetStaminaData_0393e307._8_8_;
  *(undefined8 *)local_160 = s___haxe_export_GetStaminaData_0393e307._0_8_;
  uVar8 = s___haxe_export_GetStaminaData_0393e307._16_8_;
  *(undefined8 *)(local_160 + 8) = uVar23;
  *(undefined8 *)(local_160 + 0x10) = uVar8;
  plVar1 = DAT_043f1798;
  local_170 = 0x21;
  local_169 = 0;
  local_16b = 0;
  local_16f = 0;
  local_158 = &LAB_0244e310;
  local_148 = 0xffffffff;
  local_168 = 0x1c;
  local_150 = &LAB_0244e358;
  plVar17 = *(long **)(lVar7 + 0x20);
  if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
    *(long **)(lVar7 + 0x20) = DAT_043f1798;
    plVar17 = plVar1;
  }
  local_130 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x30,8);
  uVar23 = s___haxe_export_GetPlayerInputInfo_038a6961._8_8_;
  psVar25 = &local_320;
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
  local_120 = &LAB_0244e3e8;
  local_118 = 0xffffffff;
  local_128 = &LAB_0244e3a0;
  plVar17 = *(long **)(lVar7 + 0x20);
  if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
    *(long **)(lVar7 + 0x20) = DAT_043f1798;
    plVar17 = plVar1;
  }
  local_100 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x30,8);
  uVar23 = s___haxe_export_GetRidePokemonComp_03951188._8_8_;
  plVar1 = plVar12 + 3;
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
  local_f0 = &LAB_0244e478;
  local_e8 = 0xffffffff;
  local_f8 = &LAB_0244e430;
  local_e0 = 6;
  local_dd = 0x77;
  local_df = 0x656e;
  local_d4 = 0;
  local_dc = 0;
  local_c0 = &LAB_0244e508;
  local_d0 = 0;
  local_b8 = 0xffffffff;
  local_b0 = 8;
  local_c8 = &LAB_0244e4c0;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_98 = &LAB_0244e550;
  local_a0 = 0;
  local_90 = &LAB_0244e598;
  local_88 = 0xffffffff;
  do {
    uVar13 = *(ulong *)(psVar25 + 8);
    psVar4 = *(string **)(psVar25 + 0x10);
    if (((byte)*psVar25 & 1) == 0) {
      psVar4 = psVar25 + 1;
      uVar13 = (ulong)((byte)*psVar25 >> 1);
    }
    uVar13 = FUN_008e8ed4(local_80,psVar4,uVar13);
    uVar22 = plVar12[2];
    if (uVar22 != 0) {
      uVar27 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
      uVar27 = (uVar27 & 0x3333333333333333) + (uVar27 >> 2 & 0x3333333333333333);
      uVar15 = (uVar27 + (uVar27 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        uVar27 = uVar22 - 1 & uVar13;
      }
      else {
        uVar27 = uVar13;
        if (uVar22 <= uVar13) {
          uVar27 = 0;
          if (uVar22 != 0) {
            uVar27 = uVar13 / uVar22;
          }
          uVar27 = uVar13 - uVar27 * uVar22;
        }
      }
      plVar17 = *(long **)(*plVar24 + uVar27 * 8);
      if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
        psVar4 = psVar25 + 1;
        __n = (ulong)((byte)*psVar25 >> 1);
        if (((byte)*psVar25 & 1) != 0) {
          psVar4 = *(string **)(psVar25 + 0x10);
          __n = *(size_t *)(psVar25 + 8);
        }
        if (uVar15 < 2) {
          if (__n == 0) {
            do {
              if (plVar17[1] != uVar13 && (plVar17[1] & uVar22 - 1) != uVar27) break;
              uVar15 = (ulong)(*(byte *)(plVar17 + 2) >> 1);
              if ((*(byte *)(plVar17 + 2) & 1) != 0) {
                uVar15 = plVar17[3];
              }
              if (uVar15 == 0) goto LAB_0244bf64;
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
          else {
            do {
              if (plVar17[1] != uVar13 && (plVar17[1] & uVar22 - 1) != uVar27) break;
              bVar5 = *(byte *)(plVar17 + 2);
              uVar15 = (ulong)(bVar5 >> 1);
              sVar2 = uVar15;
              if ((bVar5 & 1) != 0) {
                sVar2 = plVar17[3];
              }
              if (sVar2 == __n) {
                if ((bVar5 & 1) == 0) {
                  psVar19 = (string *)((long)plVar17 + 0x11);
                  psVar21 = psVar4;
                  while (*psVar19 == *psVar21) {
                    uVar15 = uVar15 - 1;
                    psVar19 = psVar19 + 1;
                    psVar21 = psVar21 + 1;
                    if (uVar15 == 0) goto LAB_0244bf64;
                  }
                }
                else {
                  iVar11 = memcmp((void *)plVar17[4],psVar4,__n);
                  if (iVar11 == 0) goto LAB_0244bf64;
                }
              }
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
        }
        else if (__n == 0) {
          do {
            uVar15 = plVar17[1];
            if (uVar15 != uVar13) {
              if (uVar22 <= uVar15) {
                uVar6 = 0;
                if (uVar22 != 0) {
                  uVar6 = uVar15 / uVar22;
                }
                uVar15 = uVar15 - uVar6 * uVar22;
              }
              if (uVar15 != uVar27) break;
            }
            uVar15 = (ulong)(*(byte *)(plVar17 + 2) >> 1);
            if ((*(byte *)(plVar17 + 2) & 1) != 0) {
              uVar15 = plVar17[3];
            }
            if (uVar15 == 0) goto LAB_0244bf64;
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        else {
          do {
            uVar15 = plVar17[1];
            if (uVar15 != uVar13) {
              if (uVar22 <= uVar15) {
                uVar6 = 0;
                if (uVar22 != 0) {
                  uVar6 = uVar15 / uVar22;
                }
                uVar15 = uVar15 - uVar6 * uVar22;
              }
              if (uVar15 != uVar27) break;
            }
            bVar5 = *(byte *)(plVar17 + 2);
            uVar15 = (ulong)(bVar5 >> 1);
            sVar2 = uVar15;
            if ((bVar5 & 1) != 0) {
              sVar2 = plVar17[3];
            }
            if (sVar2 == __n) {
              if ((bVar5 & 1) == 0) {
                psVar19 = (string *)((long)plVar17 + 0x11);
                psVar21 = psVar4;
                while (*psVar19 == *psVar21) {
                  uVar15 = uVar15 - 1;
                  psVar19 = psVar19 + 1;
                  psVar21 = psVar21 + 1;
                  if (uVar15 == 0) goto LAB_0244bf64;
                }
              }
              else {
                iVar11 = memcmp((void *)plVar17[4],psVar4,__n);
                if (iVar11 == 0) goto LAB_0244bf64;
              }
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
    plVar17 = DAT_043f1798;
    plVar16 = *(long **)(lVar7 + 0x20);
    if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
      *(long **)(lVar7 + 0x20) = DAT_043f1798;
      plVar16 = plVar17;
    }
    plVar17 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x40,8);
    std::string::string((string *)(plVar17 + 2),psVar25);
    lVar18 = *(long *)(psVar25 + 0x18);
    lVar20 = *(long *)(psVar25 + 0x28);
    plVar17[6] = *(long *)(psVar25 + 0x20);
    plVar17[7] = lVar20;
    plVar17[5] = lVar18;
    *plVar17 = 0;
    plVar17[1] = uVar13;
    if ((uVar22 == 0) || (*(float *)(plVar12 + 5) * (float)uVar22 < (float)(plVar12[4] + 1))) {
      uVar27 = (ulong)(uVar22 < 3 || (uVar22 & uVar22 - 1) != 0) | uVar22 << 1;
      uVar22 = (ulong)((float)(plVar12[4] + 1) / *(float *)(plVar12 + 5));
      if (uVar22 <= uVar27) {
        uVar22 = uVar27;
      }
      FUN_008e9ae4(plVar24,uVar22);
      uVar22 = plVar12[2];
      if ((uVar22 & uVar22 - 1) == 0) {
        uVar27 = uVar22 - 1 & uVar13;
      }
      else if (uVar13 < uVar22) {
        uVar27 = uVar13;
      }
      else {
        uVar27 = 0;
        if (uVar22 != 0) {
          uVar27 = uVar13 / uVar22;
        }
        uVar27 = uVar13 - uVar27 * uVar22;
      }
    }
    lVar18 = *plVar24;
    plVar16 = *(long **)(lVar18 + uVar27 * 8);
    if (plVar16 == (long *)0x0) {
      *plVar17 = *plVar1;
      *plVar1 = (long)plVar17;
      *(long **)(lVar18 + uVar27 * 8) = plVar1;
      if (*plVar17 != 0) {
        uVar13 = *(ulong *)(*plVar17 + 8);
        if ((uVar22 & uVar22 - 1) == 0) {
          uVar13 = uVar13 & uVar22 - 1;
        }
        else if (uVar22 <= uVar13) {
          uVar15 = 0;
          if (uVar22 != 0) {
            uVar15 = uVar13 / uVar22;
          }
          uVar13 = uVar13 - uVar15 * uVar22;
        }
        plVar16 = (long *)(*plVar24 + uVar13 * 8);
        goto LAB_0244bf54;
      }
    }
    else {
      *plVar17 = *plVar16;
LAB_0244bf54:
      *plVar16 = (long)plVar17;
    }
    plVar12[4] = plVar12[4] + 1;
LAB_0244bf64:
    psVar25 = psVar25 + 0x30;
  } while (psVar25 != (string *)local_80);
  lVar20 = FUN_008cca50();
  lVar18 = 0;
  do {
    lVar14 = FUN_008e8c90(plVar24,lVar20 + lVar18);
    if (lVar14 != 0) {
      FUN_008f2aec(local_80,plVar24,lVar14);
      lVar14 = local_80[0];
      plVar1 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar14 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar14 + 0x10) & 1) != 0)) &&
           (lVar26 = *(long *)(lVar14 + 0x20), lVar26 != 0)) {
          plVar17 = *(long **)(lVar7 + 0x20);
          if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
            *(long **)(lVar7 + 0x20) = DAT_043f1798;
            plVar17 = plVar1;
          }
          uVar27 = (**(code **)(*plVar17 + 0xc0))(plVar17);
          if ((uVar27 & 1) != 0) {
            if (*(char *)(lVar7 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar7 + 0x38d488) = 1;
              *(undefined8 *)(lVar7 + 0x38d478) = 0;
              *(undefined8 *)(lVar7 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar7 + 0x38d480)) {
              FUN_02bcc824(plVar17,lVar26,0,8);
              goto LAB_0244c198;
            }
          }
          (**(code **)(*plVar17 + 0x18))(plVar17,lVar26,0,8);
        }
LAB_0244c198:
        plVar1 = DAT_043f1798;
        plVar17 = *(long **)(lVar7 + 0x20);
        if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
          *(long **)(lVar7 + 0x20) = DAT_043f1798;
          plVar17 = plVar1;
        }
        uVar27 = (**(code **)(*plVar17 + 0xc0))(plVar17);
        if ((uVar27 & 1) != 0) {
          if (*(char *)(lVar7 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar7 + 0x38d488) = 1;
            *(undefined8 *)(lVar7 + 0x38d478) = 0;
            *(undefined8 *)(lVar7 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar7 + 0x38d480)) {
            FUN_02bcc824(plVar17,lVar14,0,8);
            goto LAB_0244c150;
          }
        }
        (**(code **)(*plVar17 + 0x18))(plVar17,lVar14,0,8);
      }
    }
LAB_0244c150:
    lVar14 = local_a0;
    lVar18 = lVar18 + 0x18;
  } while (lVar18 != 0x300);
  *(undefined1 *)(plVar12 + 0xb) = 1;
  plVar1 = DAT_043f1798;
  lVar18 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar17 = *(long **)(lVar7 + 0x20);
    if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
      *(long **)(lVar7 + 0x20) = DAT_043f1798;
      plVar17 = plVar1;
    }
    uVar27 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar27 & 1) != 0) {
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar7 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar14,0,8);
        plVar1 = DAT_043f1798;
        lVar18 = local_d0;
        goto joined_r0x0244c2d4;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar14,0,8);
    plVar1 = DAT_043f1798;
    lVar18 = local_d0;
  }
joined_r0x0244c2d4:
  pcVar3 = local_100;
  local_d0 = lVar18;
  if (((local_e0 & 1) != 0) && (lVar18 != 0)) {
    plVar17 = *(long **)(lVar7 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
      *(long **)(lVar7 + 0x20) = plVar1;
      plVar17 = plVar1;
    }
    uVar27 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar27 & 1) != 0) {
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar7 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar18,0,8);
        plVar1 = DAT_043f1798;
        pcVar3 = local_100;
        goto joined_r0x0244ce30;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar18,0,8);
    plVar1 = DAT_043f1798;
    pcVar3 = local_100;
  }
joined_r0x0244ce30:
  pcVar9 = local_130;
  local_100 = pcVar3;
  if (((local_110 & 1) != 0) && (pcVar3 != (char *)0x0)) {
    plVar17 = *(long **)(lVar7 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
      *(long **)(lVar7 + 0x20) = plVar1;
      plVar17 = plVar1;
    }
    uVar27 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar27 & 1) != 0) {
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar7 + 0x38d480)) {
        FUN_02bcc824(plVar17,pcVar3,0,8);
        plVar1 = DAT_043f1798;
        pcVar9 = local_130;
        goto joined_r0x0244c43c;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,pcVar3,0,8);
    plVar1 = DAT_043f1798;
    pcVar9 = local_130;
  }
joined_r0x0244c43c:
  pcVar3 = local_160;
  local_130 = pcVar9;
  if (((local_140 & 1) != 0) && (pcVar9 != (char *)0x0)) {
    plVar17 = *(long **)(lVar7 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
      *(long **)(lVar7 + 0x20) = plVar1;
      plVar17 = plVar1;
    }
    uVar27 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar27 & 1) != 0) {
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar7 + 0x38d480)) {
        FUN_02bcc824(plVar17,pcVar9,0,8);
        plVar1 = DAT_043f1798;
        pcVar3 = local_160;
        goto joined_r0x0244ce70;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,pcVar9,0,8);
    plVar1 = DAT_043f1798;
    pcVar3 = local_160;
  }
joined_r0x0244ce70:
  pcVar9 = local_190;
  local_160 = pcVar3;
  if (((local_170 & 1) != 0) && (pcVar3 != (char *)0x0)) {
    plVar17 = *(long **)(lVar7 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
      *(long **)(lVar7 + 0x20) = plVar1;
      plVar17 = plVar1;
    }
    uVar27 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar27 & 1) != 0) {
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar7 + 0x38d480)) {
        FUN_02bcc824(plVar17,pcVar3,0,8);
        plVar1 = DAT_043f1798;
        pcVar9 = local_190;
        goto joined_r0x0244c5a4;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,pcVar3,0,8);
    plVar1 = DAT_043f1798;
    pcVar9 = local_190;
  }
joined_r0x0244c5a4:
  pcVar3 = local_1c0;
  local_190 = pcVar9;
  if (((local_1a0 & 1) != 0) && (pcVar9 != (char *)0x0)) {
    plVar17 = *(long **)(lVar7 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
      *(long **)(lVar7 + 0x20) = plVar1;
      plVar17 = plVar1;
    }
    uVar27 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar27 & 1) != 0) {
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar7 + 0x38d480)) {
        FUN_02bcc824(plVar17,pcVar9,0,8);
        plVar1 = DAT_043f1798;
        pcVar3 = local_1c0;
        goto joined_r0x0244ceb0;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,pcVar9,0,8);
    plVar1 = DAT_043f1798;
    pcVar3 = local_1c0;
  }
joined_r0x0244ceb0:
  pcVar9 = local_1f0;
  local_1c0 = pcVar3;
  if (((local_1d0 & 1) != 0) && (pcVar3 != (char *)0x0)) {
    plVar17 = *(long **)(lVar7 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
      *(long **)(lVar7 + 0x20) = plVar1;
      plVar17 = plVar1;
    }
    uVar27 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar27 & 1) != 0) {
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar7 + 0x38d480)) {
        FUN_02bcc824(plVar17,pcVar3,0,8);
        plVar1 = DAT_043f1798;
        pcVar9 = local_1f0;
        goto joined_r0x0244c70c;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,pcVar3,0,8);
    plVar1 = DAT_043f1798;
    pcVar9 = local_1f0;
  }
joined_r0x0244c70c:
  pcVar3 = local_220;
  local_1f0 = pcVar9;
  if (((local_200 & 1) != 0) && (pcVar9 != (char *)0x0)) {
    plVar17 = *(long **)(lVar7 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
      *(long **)(lVar7 + 0x20) = plVar1;
      plVar17 = plVar1;
    }
    uVar27 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar27 & 1) != 0) {
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar7 + 0x38d480)) {
        FUN_02bcc824(plVar17,pcVar9,0,8);
        plVar1 = DAT_043f1798;
        pcVar3 = local_220;
        goto joined_r0x0244cef0;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,pcVar9,0,8);
    plVar1 = DAT_043f1798;
    pcVar3 = local_220;
  }
joined_r0x0244cef0:
  pcVar9 = local_250;
  local_220 = pcVar3;
  if (((local_230 & 1) != 0) && (pcVar3 != (char *)0x0)) {
    plVar17 = *(long **)(lVar7 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
      *(long **)(lVar7 + 0x20) = plVar1;
      plVar17 = plVar1;
    }
    uVar27 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar27 & 1) != 0) {
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar7 + 0x38d480)) {
        FUN_02bcc824(plVar17,pcVar3,0,8);
        plVar1 = DAT_043f1798;
        pcVar9 = local_250;
        goto joined_r0x0244c874;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,pcVar3,0,8);
    plVar1 = DAT_043f1798;
    pcVar9 = local_250;
  }
joined_r0x0244c874:
  pcVar3 = local_280;
  local_250 = pcVar9;
  if (((local_260 & 1) != 0) && (pcVar9 != (char *)0x0)) {
    plVar17 = *(long **)(lVar7 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
      *(long **)(lVar7 + 0x20) = plVar1;
      plVar17 = plVar1;
    }
    uVar27 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar27 & 1) != 0) {
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar7 + 0x38d480)) {
        FUN_02bcc824(plVar17,pcVar9,0,8);
        plVar1 = DAT_043f1798;
        pcVar3 = local_280;
        goto joined_r0x0244cf30;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,pcVar9,0,8);
    plVar1 = DAT_043f1798;
    pcVar3 = local_280;
  }
joined_r0x0244cf30:
  lVar18 = local_2b0;
  local_280 = pcVar3;
  if (((local_290 & 1) != 0) && (pcVar3 != (char *)0x0)) {
    plVar17 = *(long **)(lVar7 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
      *(long **)(lVar7 + 0x20) = plVar1;
      plVar17 = plVar1;
    }
    uVar27 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar27 & 1) != 0) {
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar7 + 0x38d480)) {
        FUN_02bcc824(plVar17,pcVar3,0,8);
        plVar1 = DAT_043f1798;
        lVar18 = local_2b0;
        goto joined_r0x0244c9dc;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,pcVar3,0,8);
    plVar1 = DAT_043f1798;
    lVar18 = local_2b0;
  }
joined_r0x0244c9dc:
  pcVar3 = local_2e0;
  local_2b0 = lVar18;
  if (((local_2c0 & 1) != 0) && (lVar18 != 0)) {
    plVar17 = *(long **)(lVar7 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
      *(long **)(lVar7 + 0x20) = plVar1;
      plVar17 = plVar1;
    }
    uVar27 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar27 & 1) != 0) {
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar7 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar18,0,8);
        plVar1 = DAT_043f1798;
        pcVar3 = local_2e0;
        goto joined_r0x0244cf70;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar18,0,8);
    plVar1 = DAT_043f1798;
    pcVar3 = local_2e0;
  }
joined_r0x0244cf70:
  pcVar9 = local_310;
  local_2e0 = pcVar3;
  if (((local_2f0 & 1) != 0) && (pcVar3 != (char *)0x0)) {
    plVar17 = *(long **)(lVar7 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
      *(long **)(lVar7 + 0x20) = plVar1;
      plVar17 = plVar1;
    }
    uVar27 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar27 & 1) != 0) {
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar7 + 0x38d480)) {
        FUN_02bcc824(plVar17,pcVar3,0,8);
        plVar1 = DAT_043f1798;
        pcVar9 = local_310;
        goto joined_r0x0244cb44;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,pcVar3,0,8);
    plVar1 = DAT_043f1798;
    pcVar9 = local_310;
  }
joined_r0x0244cb44:
  DAT_043f1798 = plVar1;
  local_310 = pcVar9;
  if ((((byte)local_320 & 1) != 0) && (pcVar9 != (char *)0x0)) {
    plVar17 = *(long **)(lVar7 + 0x20);
    if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
      *(long **)(lVar7 + 0x20) = plVar1;
      plVar17 = plVar1;
    }
    uVar27 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar27 & 1) != 0) {
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar7 + 0x38d480)) {
        FUN_02bcc824(plVar17,pcVar9,0,8);
        goto LAB_0244cbf4;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,pcVar9,0,8);
  }
LAB_0244cbf4:
  uVar23 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar23);
  (**(code **)*plVar12)(plVar12,uVar23);
  (**(code **)(*plVar12 + 0x10))(plVar12);
  pcVar3 = (char *)((ulong)&local_338 | 1);
  if ((local_338 & 1) != 0) {
    pcVar3 = local_328;
  }
  FUN_001522a0(uVar23,pcVar3);
  pcVar3 = local_328;
  plVar1 = DAT_043f1798;
  if (((local_338 & 1) != 0) && (local_328 != (char *)0x0)) {
    plVar17 = *(long **)(lVar7 + 0x20);
    if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
      *(long **)(lVar7 + 0x20) = DAT_043f1798;
      plVar17 = plVar1;
    }
    uVar27 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar27 & 1) != 0) {
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar7 + 0x38d480)) {
        FUN_02bcc824(plVar17,pcVar3,0,8);
        return;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,pcVar3,0,8);
  }
  return;
}


