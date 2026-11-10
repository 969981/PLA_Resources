/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02050ca0; name: FUN_02050ca0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02050ca0(long param_1)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  long *plVar25;
  ulong uVar26;
  long lVar27;
  size_t sVar28;
  ulong uVar29;
  long *plVar30;
  long lVar31;
  long *plVar32;
  long lVar33;
  string *psVar34;
  long lVar35;
  string *psVar36;
  ulong uVar37;
  undefined8 uVar38;
  ulong uVar39;
  long *plVar40;
  char *pcVar41;
  string *psVar42;
  byte local_398;
  undefined7 uStack_397;
  undefined4 local_390;
  undefined4 local_38c;
  ulong local_388;
  string local_380;
  char local_37f [7];
  char cStack_378;
  char acStack_377 [7];
  long local_370;
  undefined1 *local_368;
  undefined1 *local_360;
  undefined4 local_358;
  byte local_350;
  char local_34f [7];
  char cStack_348;
  char acStack_347 [7];
  long local_340;
  undefined1 *puStack_338;
  undefined1 *local_330;
  undefined4 local_328;
  byte local_320;
  char local_31f [7];
  char cStack_318;
  char acStack_317 [7];
  long local_310;
  undefined1 *puStack_308;
  undefined1 *local_300;
  undefined4 local_2f8;
  byte local_2f0;
  char local_2ef [6];
  char acStack_2e9 [2];
  char acStack_2e7 [6];
  undefined1 local_2e1;
  long local_2e0;
  undefined1 *puStack_2d8;
  undefined1 *local_2d0;
  undefined4 local_2c8;
  byte local_2c0;
  char acStack_2bf [7];
  char local_2b8;
  char acStack_2b7 [7];
  long local_2b0;
  undefined1 *puStack_2a8;
  undefined1 *local_2a0;
  undefined4 local_298;
  byte local_290;
  char acStack_28f [7];
  char local_288;
  char acStack_287 [7];
  long local_280;
  undefined1 *puStack_278;
  undefined1 *local_270;
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
  char local_1cf [7];
  char cStack_1c8;
  char acStack_1c7 [7];
  long local_1c0;
  undefined1 *local_1b8;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  byte local_1a0;
  undefined7 local_19f;
  undefined4 uStack_198;
  undefined4 local_194;
  long local_190;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined4 local_178;
  byte local_170;
  char local_16f [5];
  char acStack_16a [3];
  char acStack_167 [5];
  undefined2 local_162;
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
  char local_10f [7];
  char cStack_108;
  char acStack_107 [7];
  long local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  byte local_e0;
  char local_df [7];
  char cStack_d8;
  char acStack_d7 [7];
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
  local_398 = 0x16;
  local_388 = 0;
  local_38c = 0;
  uStack_397 = s_AreaModules_03962cb7._0_7_;
  local_390 = CONCAT31(0x73656c,s_AreaModules_03962cb7[7]);
  lVar6 = tpidr_el0;
  plVar32 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar32 = plVar1;
  }
  uVar37 = 0x726567;
  plVar25 = (long *)(**(code **)(*plVar32 + 0x10))(plVar32,0x160,8);
  plVar40 = plVar25 + 1;
  *plVar40 = 0;
  plVar25[0x14] = (long)&LAB_0199d6f0;
  plVar25[0x15] = 0;
  plVar25[0x16] = (long)"SetThrowableSituation_Minigame";
  plVar25[0x17] = (long)&LAB_0199d8dc;
  *(undefined4 *)(plVar25 + 5) = 0x3f800000;
  plVar25[4] = 0;
  plVar25[0x18] = 0;
  plVar25[0x19] = (long)"GetLocationManager";
  plVar25[10] = 0;
  *(undefined1 *)(plVar25 + 0xb) = 0;
  plVar25[0x1a] = (long)"GetMiniGame";
  plVar25[0x1b] = (long)"GetAreaStatus";
  plVar25[0x1c] = (long)&LAB_02053080;
  plVar25[0x1d] = 0;
  plVar25[6] = (long)FUN_020530a0;
  plVar25[7] = (long)FUN_02053150;
  plVar25[0x20] = (long)"GetVigilanceBgmChanger";
  plVar25[0x21] = (long)&DAT_0392da3c;
  *plVar25 = (long)&PTR_FUN_0425b308;
  plVar25[0x2b] = 0;
  *(undefined1 *)(plVar25 + 0x2a) = 0;
  plVar25[0x1e] = (long)"GetFieldAreaSpeedManager";
  plVar25[0x1f] = (long)"GetLockOnSensor";
  plVar25[0x24] = (long)FUN_020532e0;
  plVar25[0x25] = (long)&LAB_020535c0;
  plVar25[2] = 0;
  plVar25[3] = 0;
  plVar25[8] = 0;
  plVar25[9] = 0;
  plVar25[0xc] = (long)"GetCameraManager";
  plVar25[0xd] = (long)"GetAreaSettingData";
  plVar25[0xe] = (long)"GetPlacementGenerator";
  plVar25[0xf] = (long)"GetRideManager";
  plVar25[0x10] = (long)"GetPauseController";
  plVar25[0x11] = (long)"GetInputInfoHandler";
  plVar25[0x12] = (long)"GetCameraInputInfoHandler";
  plVar25[0x13] = (long)"SetThrowableSituation_Field";
  plVar25[0x22] = 0;
  plVar25[0x23] = 0;
  plVar25[0x26] = (long)&LAB_020538a0;
  plVar25[0x27] = (long)&LAB_020538b0;
  plVar25[0x28] = 0;
  plVar25[0x29] = 0;
  plVar1 = DAT_043f1798;
  local_380 = (string)0x20;
  local_37f[0] = s_GetCameraManager_0397c9d2[0];
  local_37f[1] = s_GetCameraManager_0397c9d2[1];
  local_37f[2] = s_GetCameraManager_0397c9d2[2];
  local_37f[3] = s_GetCameraManager_0397c9d2[3];
  local_37f[4] = s_GetCameraManager_0397c9d2[4];
  local_37f[5] = s_GetCameraManager_0397c9d2[5];
  local_37f[6] = s_GetCameraManager_0397c9d2[6];
  cStack_378 = s_GetCameraManager_0397c9d2[7];
  acStack_377[0] = s_GetCameraManager_0397c9d2[8];
  acStack_377[1] = s_GetCameraManager_0397c9d2[9];
  acStack_377[2] = s_GetCameraManager_0397c9d2[10];
  acStack_377[3] = s_GetCameraManager_0397c9d2[0xb];
  acStack_377[4] = s_GetCameraManager_0397c9d2[0xc];
  acStack_377[5] = s_GetCameraManager_0397c9d2[0xd];
  acStack_377[6] = s_GetCameraManager_0397c9d2[0xe];
  local_360 = &LAB_020538fc;
  local_358 = 0xffffffff;
  local_350 = 0x24;
  local_328 = 0xffffffff;
  local_2f8 = 0xffffffff;
  local_370 = 0x72;
  local_368 = &LAB_020538b4;
  local_34f[0] = s_GetAreaSettingData_03914b1a[0];
  local_34f[1] = s_GetAreaSettingData_03914b1a[1];
  local_34f[2] = s_GetAreaSettingData_03914b1a[2];
  local_34f[3] = s_GetAreaSettingData_03914b1a[3];
  local_34f[4] = s_GetAreaSettingData_03914b1a[4];
  local_34f[5] = s_GetAreaSettingData_03914b1a[5];
  local_34f[6] = s_GetAreaSettingData_03914b1a[6];
  cStack_348 = s_GetAreaSettingData_03914b1a[7];
  acStack_347[0] = s_GetAreaSettingData_03914b1a[8];
  acStack_347[1] = s_GetAreaSettingData_03914b1a[9];
  acStack_347[2] = s_GetAreaSettingData_03914b1a[10];
  acStack_347[3] = s_GetAreaSettingData_03914b1a[0xb];
  acStack_347[4] = s_GetAreaSettingData_03914b1a[0xc];
  acStack_347[5] = s_GetAreaSettingData_03914b1a[0xd];
  acStack_347[6] = s_GetAreaSettingData_03914b1a[0xe];
  local_340 = 0x617461;
  puStack_338 = &LAB_02053944;
  local_330 = &LAB_0205398c;
  local_320 = 0x2a;
  local_31f[0] = s_GetPlacementGenerator_0390aa09[0];
  local_31f[1] = s_GetPlacementGenerator_0390aa09[1];
  local_31f[2] = s_GetPlacementGenerator_0390aa09[2];
  local_31f[3] = s_GetPlacementGenerator_0390aa09[3];
  local_31f[4] = s_GetPlacementGenerator_0390aa09[4];
  local_31f[5] = s_GetPlacementGenerator_0390aa09[5];
  local_31f[6] = s_GetPlacementGenerator_0390aa09[6];
  cStack_318 = s_GetPlacementGenerator_0390aa09[7];
  acStack_317[0] = s_GetPlacementGenerator_0390aa09[8];
  acStack_317[1] = s_GetPlacementGenerator_0390aa09[9];
  acStack_317[2] = s_GetPlacementGenerator_0390aa09[10];
  acStack_317[3] = s_GetPlacementGenerator_0390aa09[0xb];
  acStack_317[4] = s_GetPlacementGenerator_0390aa09[0xc];
  acStack_317[5] = s_GetPlacementGenerator_0390aa09[0xd];
  acStack_317[6] = s_GetPlacementGenerator_0390aa09[0xe];
  local_300 = &LAB_02053a1c;
  local_310 = 0x726f74617265;
  puStack_308 = &LAB_020539d4;
  local_2f0 = 0x1c;
  local_2ef[0] = s_GetRideManager_0399a4c2[0];
  local_2ef[1] = s_GetRideManager_0399a4c2[1];
  local_2ef[2] = s_GetRideManager_0399a4c2[2];
  local_2ef[3] = s_GetRideManager_0399a4c2[3];
  local_2ef[4] = s_GetRideManager_0399a4c2[4];
  local_2ef[5] = s_GetRideManager_0399a4c2[5];
  acStack_2e9[0] = s_GetRideManager_0399a4c2[6];
  acStack_2e9[1] = s_GetRideManager_0399a4c2[7];
  acStack_2e7[0] = s_GetRideManager_0399a4c2[8];
  acStack_2e7[1] = s_GetRideManager_0399a4c2[9];
  acStack_2e7[2] = s_GetRideManager_0399a4c2[10];
  acStack_2e7[3] = s_GetRideManager_0399a4c2[0xb];
  acStack_2e7[4] = s_GetRideManager_0399a4c2[0xc];
  acStack_2e7[5] = s_GetRideManager_0399a4c2[0xd];
  local_2e1 = 0;
  local_2d0 = &LAB_02053aac;
  local_2c8 = 0xffffffff;
  local_2c0 = 0x24;
  local_2e0 = 0;
  puStack_2d8 = &LAB_02053a64;
  acStack_2b7[0] = s_GetPauseController_038a6989[8];
  acStack_2b7[1] = s_GetPauseController_038a6989[9];
  acStack_2b7[2] = s_GetPauseController_038a6989[10];
  acStack_2b7[3] = s_GetPauseController_038a6989[0xb];
  acStack_2b7[4] = s_GetPauseController_038a6989[0xc];
  acStack_2b7[5] = s_GetPauseController_038a6989[0xd];
  acStack_2b7[6] = s_GetPauseController_038a6989[0xe];
  acStack_2bf[0] = s_GetPauseController_038a6989[0];
  acStack_2bf[1] = s_GetPauseController_038a6989[1];
  acStack_2bf[2] = s_GetPauseController_038a6989[2];
  acStack_2bf[3] = s_GetPauseController_038a6989[3];
  acStack_2bf[4] = s_GetPauseController_038a6989[4];
  acStack_2bf[5] = s_GetPauseController_038a6989[5];
  acStack_2bf[6] = s_GetPauseController_038a6989[6];
  local_2b8 = s_GetPauseController_038a6989[7];
  local_298 = 0xffffffff;
  local_2b0 = 0x72656c;
  puStack_2a8 = &LAB_02053af4;
  local_2a0 = &LAB_02053b3c;
  local_290 = 0x26;
  acStack_287[0] = s_GetInputInfoHandler_0390015b[8];
  acStack_287[1] = s_GetInputInfoHandler_0390015b[9];
  acStack_287[2] = s_GetInputInfoHandler_0390015b[10];
  acStack_287[3] = s_GetInputInfoHandler_0390015b[0xb];
  acStack_287[4] = s_GetInputInfoHandler_0390015b[0xc];
  acStack_287[5] = s_GetInputInfoHandler_0390015b[0xd];
  acStack_287[6] = s_GetInputInfoHandler_0390015b[0xe];
  acStack_28f[0] = s_GetInputInfoHandler_0390015b[0];
  acStack_28f[1] = s_GetInputInfoHandler_0390015b[1];
  acStack_28f[2] = s_GetInputInfoHandler_0390015b[2];
  acStack_28f[3] = s_GetInputInfoHandler_0390015b[3];
  acStack_28f[4] = s_GetInputInfoHandler_0390015b[4];
  acStack_28f[5] = s_GetInputInfoHandler_0390015b[5];
  acStack_28f[6] = s_GetInputInfoHandler_0390015b[6];
  local_288 = s_GetInputInfoHandler_0390015b[7];
  local_268 = 0xffffffff;
  local_280 = 0x72656c64;
  puStack_278 = &LAB_02053b84;
  local_270 = &LAB_02053bcc;
  plVar32 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar32 = plVar1;
  }
  local_250 = (char *)(**(code **)(*plVar32 + 0x10))(plVar32,0x20,8);
  local_250[0x18] = 'r';
  local_250[0x19] = '\0';
  uVar38 = s_GetCameraInputInfoHandler_03914b2d._8_8_;
  *(undefined8 *)local_250 = s_GetCameraInputInfoHandler_03914b2d._0_8_;
  uVar8 = s_GetCameraInputInfoHandler_03914b2d._16_8_;
  *(undefined8 *)(local_250 + 8) = uVar38;
  *(undefined8 *)(local_250 + 0x10) = uVar8;
  plVar1 = DAT_043f1798;
  local_260 = 0x21;
  local_259 = 0;
  local_25b = 0;
  local_25f = 0;
  local_258 = 0x19;
  local_238 = 0xffffffff;
  local_248 = &LAB_02053c14;
  puStack_240 = &LAB_02053c5c;
  plVar32 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar32 = plVar1;
  }
  local_220 = (char *)(**(code **)(*plVar32 + 0x10))(plVar32,0x20,8);
  local_220[0x17] = 'i';
  local_220[0x18] = 'e';
  local_220[0x19] = 'l';
  local_220[0x1a] = 'd';
  local_220[0x1b] = '\0';
  uVar38 = s_SetThrowableSituation_Field_038b9bdb._8_8_;
  *(undefined8 *)local_220 = s_SetThrowableSituation_Field_038b9bdb._0_8_;
  uVar8 = s_SetThrowableSituation_Field_038b9bdb._16_8_;
  *(undefined8 *)(local_220 + 8) = uVar38;
  *(undefined8 *)(local_220 + 0x10) = uVar8;
  plVar1 = DAT_043f1798;
  local_230 = 0x21;
  local_229 = 0;
  local_22b = 0;
  local_22f = 0;
  local_228 = 0x1b;
  local_208 = 0xffffffff;
  local_218 = &LAB_02053ca4;
  puStack_210 = &LAB_02053cec;
  plVar32 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar32 = plVar1;
  }
  local_1f0 = (char *)(**(code **)(*plVar32 + 0x10))(plVar32,0x20,8);
  local_1f0[0x1e] = '\0';
  uVar8 = s_SetThrowableSituation_Minigame_038b9bf7._8_8_;
  *(undefined8 *)local_1f0 = s_SetThrowableSituation_Minigame_038b9bf7._0_8_;
  *(ulong *)(local_1f0 + 0x16) =
       CONCAT62(s_SetThrowableSituation_Minigame_038b9bf7._24_6_,
                s_SetThrowableSituation_Minigame_038b9bf7._22_2_);
  uVar38 = CONCAT26(s_SetThrowableSituation_Minigame_038b9bf7._22_2_,
                    s_SetThrowableSituation_Minigame_038b9bf7._16_6_);
  psVar42 = &local_380;
  *(undefined8 *)(local_1f0 + 8) = uVar8;
  *(undefined8 *)(local_1f0 + 0x10) = uVar38;
  plVar1 = DAT_043f1798;
  local_200 = 0x21;
  local_1f9 = 0;
  local_1fb = 0;
  local_1ff = 0;
  local_1d8 = 0xffffffff;
  local_1f8 = 0x1e;
  local_1e8 = &LAB_02053d34;
  puStack_1e0 = &LAB_02053d7c;
  local_1d0 = 0x24;
  local_1cf[0] = s_GetLocationManager_039ae5a5[0];
  local_1cf[1] = s_GetLocationManager_039ae5a5[1];
  local_1cf[2] = s_GetLocationManager_039ae5a5[2];
  local_1cf[3] = s_GetLocationManager_039ae5a5[3];
  local_1cf[4] = s_GetLocationManager_039ae5a5[4];
  local_1cf[5] = s_GetLocationManager_039ae5a5[5];
  local_1cf[6] = s_GetLocationManager_039ae5a5[6];
  cStack_1c8 = s_GetLocationManager_039ae5a5[7];
  acStack_1c7[0] = s_GetLocationManager_039ae5a5[8];
  acStack_1c7[1] = s_GetLocationManager_039ae5a5[9];
  acStack_1c7[2] = s_GetLocationManager_039ae5a5[10];
  acStack_1c7[3] = s_GetLocationManager_039ae5a5[0xb];
  acStack_1c7[4] = s_GetLocationManager_039ae5a5[0xc];
  acStack_1c7[5] = s_GetLocationManager_039ae5a5[0xd];
  acStack_1c7[6] = s_GetLocationManager_039ae5a5[0xe];
  local_1c0 = 0x726567;
  local_1b0 = &LAB_02053e0c;
  local_1b8 = &LAB_02053dc4;
  local_1a0 = 0x16;
  local_1a8 = 0xffffffff;
  local_19f = s_GetMiniGame_038eb929._0_7_;
  uStack_198 = 0x656d6147;
  local_194 = 0;
  local_190 = 0;
  local_178 = 0xffffffff;
  local_188 = &LAB_02053e54;
  local_180 = &LAB_02053e9c;
  local_170 = 0x1a;
  local_16f[0] = s_GetAreaStatus_038a699c[0];
  local_16f[1] = s_GetAreaStatus_038a699c[1];
  local_16f[2] = s_GetAreaStatus_038a699c[2];
  local_16f[3] = s_GetAreaStatus_038a699c[3];
  local_16f[4] = s_GetAreaStatus_038a699c[4];
  acStack_16a[0] = s_GetAreaStatus_038a699c[5];
  acStack_16a[1] = s_GetAreaStatus_038a699c[6];
  acStack_16a[2] = s_GetAreaStatus_038a699c[7];
  acStack_167[0] = s_GetAreaStatus_038a699c[8];
  acStack_167[1] = s_GetAreaStatus_038a699c[9];
  acStack_167[2] = s_GetAreaStatus_038a699c[10];
  acStack_167[3] = s_GetAreaStatus_038a699c[0xb];
  acStack_167[4] = s_GetAreaStatus_038a699c[0xc];
  local_162 = 0;
  local_160 = 0;
  local_148 = 0xffffffff;
  local_158 = &LAB_02053ee4;
  local_150 = &LAB_02053f2c;
  plVar32 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar32 = plVar1;
  }
  local_130 = (char *)(**(code **)(*plVar32 + 0x10))(plVar32,0x20,8);
  local_130[0x18] = '\0';
  uVar38 = s_GetFieldAreaSpeedManager_03914b47._8_8_;
  *(undefined8 *)local_130 = s_GetFieldAreaSpeedManager_03914b47._0_8_;
  uVar8 = s_GetFieldAreaSpeedManager_03914b47._16_8_;
  *(undefined8 *)(local_130 + 8) = uVar38;
  *(undefined8 *)(local_130 + 0x10) = uVar8;
  local_140 = 0x21;
  local_139 = 0;
  local_13b = 0;
  local_13f = 0;
  local_120 = &LAB_02053fbc;
  local_138 = 0x18;
  local_128 = &LAB_02053f74;
  local_118 = 0xffffffff;
  plVar1 = plVar25 + 3;
  local_110 = 0x1e;
  local_10f[0] = s_GetLockOnSensor_03a735a4[0];
  local_10f[1] = s_GetLockOnSensor_03a735a4[1];
  local_10f[2] = s_GetLockOnSensor_03a735a4[2];
  local_10f[3] = s_GetLockOnSensor_03a735a4[3];
  local_10f[4] = s_GetLockOnSensor_03a735a4[4];
  local_10f[5] = s_GetLockOnSensor_03a735a4[5];
  local_10f[6] = s_GetLockOnSensor_03a735a4[6];
  local_100 = 0;
  local_e8 = 0xffffffff;
  cStack_108 = s_GetLockOnSensor_03a735a4[7];
  acStack_107[0] = s_GetLockOnSensor_03a735a4[8];
  acStack_107[1] = s_GetLockOnSensor_03a735a4[9];
  acStack_107[2] = s_GetLockOnSensor_03a735a4[10];
  acStack_107[3] = s_GetLockOnSensor_03a735a4[0xb];
  acStack_107[4] = s_GetLockOnSensor_03a735a4[0xc];
  acStack_107[5] = s_GetLockOnSensor_03a735a4[0xd];
  acStack_107[6] = s_GetLockOnSensor_03a735a4[0xe];
  local_f8 = &LAB_02054004;
  local_f0 = &LAB_0205404c;
  local_e0 = 0x2c;
  local_df[0] = s_GetVigilanceBgmChanger_03a739b4[0];
  local_df[1] = s_GetVigilanceBgmChanger_03a739b4[1];
  local_df[2] = s_GetVigilanceBgmChanger_03a739b4[2];
  local_df[3] = s_GetVigilanceBgmChanger_03a739b4[3];
  local_df[4] = s_GetVigilanceBgmChanger_03a739b4[4];
  local_df[5] = s_GetVigilanceBgmChanger_03a739b4[5];
  local_df[6] = s_GetVigilanceBgmChanger_03a739b4[6];
  cStack_d8 = s_GetVigilanceBgmChanger_03a739b4[7];
  acStack_d7[0] = s_GetVigilanceBgmChanger_03a739b4[8];
  acStack_d7[1] = s_GetVigilanceBgmChanger_03a739b4[9];
  acStack_d7[2] = s_GetVigilanceBgmChanger_03a739b4[10];
  acStack_d7[3] = s_GetVigilanceBgmChanger_03a739b4[0xb];
  acStack_d7[4] = s_GetVigilanceBgmChanger_03a739b4[0xc];
  acStack_d7[5] = s_GetVigilanceBgmChanger_03a739b4[0xd];
  acStack_d7[6] = s_GetVigilanceBgmChanger_03a739b4[0xe];
  local_c8 = &LAB_02054094;
  local_b8 = 0xffffffff;
  local_b0 = 8;
  local_d0 = 0x7265676e616843;
  local_c0 = &LAB_020540dc;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_98 = &LAB_02054124;
  local_a0 = 0;
  local_90 = &LAB_0205416c;
  local_88 = 0xffffffff;
  do {
    uVar26 = *(ulong *)(psVar42 + 8);
    psVar3 = *(string **)(psVar42 + 0x10);
    if (((byte)*psVar42 & 1) == 0) {
      psVar3 = psVar42 + 1;
      uVar26 = (ulong)((byte)*psVar42 >> 1);
    }
    uVar26 = FUN_008e8ed4(local_80,psVar3,uVar26);
    uVar39 = plVar25[2];
    if (uVar39 != 0) {
      uVar37 = uVar39 - (uVar39 >> 1 & 0x5555555555555555);
      uVar37 = (uVar37 & 0x3333333333333333) + (uVar37 >> 2 & 0x3333333333333333);
      uVar29 = (uVar37 + (uVar37 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar29 < 2) {
        uVar37 = uVar39 - 1 & uVar26;
      }
      else {
        uVar37 = uVar26;
        if (uVar39 <= uVar26) {
          uVar37 = 0;
          if (uVar39 != 0) {
            uVar37 = uVar26 / uVar39;
          }
          uVar37 = uVar26 - uVar37 * uVar39;
        }
      }
      plVar32 = *(long **)(*plVar40 + uVar37 * 8);
      if ((plVar32 != (long *)0x0) && (plVar32 = (long *)*plVar32, plVar32 != (long *)0x0)) {
        psVar3 = psVar42 + 1;
        sVar28 = (ulong)((byte)*psVar42 >> 1);
        if (((byte)*psVar42 & 1) != 0) {
          psVar3 = *(string **)(psVar42 + 0x10);
          sVar28 = *(size_t *)(psVar42 + 8);
        }
        if (uVar29 < 2) {
          if (sVar28 == 0) {
            do {
              if (plVar32[1] != uVar26 && (plVar32[1] & uVar39 - 1) != uVar37) break;
              uVar29 = (ulong)(*(byte *)(plVar32 + 2) >> 1);
              if ((*(byte *)(plVar32 + 2) & 1) != 0) {
                uVar29 = plVar32[3];
              }
              if (uVar29 == 0) goto LAB_020516b8;
              plVar32 = (long *)*plVar32;
            } while (plVar32 != (long *)0x0);
          }
          else {
            do {
              if (plVar32[1] != uVar26 && (plVar32[1] & uVar39 - 1) != uVar37) break;
              bVar4 = *(byte *)(plVar32 + 2);
              uVar29 = (ulong)(bVar4 >> 1);
              sVar2 = uVar29;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar32[3];
              }
              if (sVar2 == sVar28) {
                if ((bVar4 & 1) == 0) {
                  psVar34 = (string *)((long)plVar32 + 0x11);
                  psVar36 = psVar3;
                  while (*psVar34 == *psVar36) {
                    uVar29 = uVar29 - 1;
                    psVar34 = psVar34 + 1;
                    psVar36 = psVar36 + 1;
                    if (uVar29 == 0) goto LAB_020516b8;
                  }
                }
                else {
                  iVar9 = memcmp((void *)plVar32[4],psVar3,sVar28);
                  if (iVar9 == 0) goto LAB_020516b8;
                }
              }
              plVar32 = (long *)*plVar32;
            } while (plVar32 != (long *)0x0);
          }
        }
        else if (sVar28 == 0) {
          do {
            uVar29 = plVar32[1];
            if (uVar29 != uVar26) {
              if (uVar39 <= uVar29) {
                uVar5 = 0;
                if (uVar39 != 0) {
                  uVar5 = uVar29 / uVar39;
                }
                uVar29 = uVar29 - uVar5 * uVar39;
              }
              if (uVar29 != uVar37) break;
            }
            uVar29 = (ulong)(*(byte *)(plVar32 + 2) >> 1);
            if ((*(byte *)(plVar32 + 2) & 1) != 0) {
              uVar29 = plVar32[3];
            }
            if (uVar29 == 0) goto LAB_020516b8;
            plVar32 = (long *)*plVar32;
          } while (plVar32 != (long *)0x0);
        }
        else {
          do {
            uVar29 = plVar32[1];
            if (uVar29 != uVar26) {
              if (uVar39 <= uVar29) {
                uVar5 = 0;
                if (uVar39 != 0) {
                  uVar5 = uVar29 / uVar39;
                }
                uVar29 = uVar29 - uVar5 * uVar39;
              }
              if (uVar29 != uVar37) break;
            }
            bVar4 = *(byte *)(plVar32 + 2);
            uVar29 = (ulong)(bVar4 >> 1);
            sVar2 = uVar29;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar32[3];
            }
            if (sVar2 == sVar28) {
              if ((bVar4 & 1) == 0) {
                psVar34 = (string *)((long)plVar32 + 0x11);
                psVar36 = psVar3;
                while (*psVar34 == *psVar36) {
                  uVar29 = uVar29 - 1;
                  psVar34 = psVar34 + 1;
                  psVar36 = psVar36 + 1;
                  if (uVar29 == 0) goto LAB_020516b8;
                }
              }
              else {
                iVar9 = memcmp((void *)plVar32[4],psVar3,sVar28);
                if (iVar9 == 0) goto LAB_020516b8;
              }
            }
            plVar32 = (long *)*plVar32;
          } while (plVar32 != (long *)0x0);
        }
      }
    }
    plVar32 = DAT_043f1798;
    plVar30 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar30 = plVar32;
    }
    plVar32 = (long *)(**(code **)(*plVar30 + 0x10))(plVar30,0x40,8);
    std::string::string((string *)(plVar32 + 2),psVar42);
    lVar33 = *(long *)(psVar42 + 0x18);
    lVar35 = *(long *)(psVar42 + 0x28);
    plVar32[6] = *(long *)(psVar42 + 0x20);
    plVar32[7] = lVar35;
    plVar32[5] = lVar33;
    *plVar32 = 0;
    plVar32[1] = uVar26;
    if ((uVar39 == 0) || (*(float *)(plVar25 + 5) * (float)uVar39 < (float)(plVar25[4] + 1))) {
      uVar37 = (ulong)(uVar39 < 3 || (uVar39 & uVar39 - 1) != 0) | uVar39 << 1;
      uVar39 = (ulong)((float)(plVar25[4] + 1) / *(float *)(plVar25 + 5));
      if (uVar39 <= uVar37) {
        uVar39 = uVar37;
      }
      FUN_008e9ae4(plVar40,uVar39);
      uVar39 = plVar25[2];
      if ((uVar39 & uVar39 - 1) == 0) {
        uVar37 = uVar39 - 1 & uVar26;
      }
      else if (uVar26 < uVar39) {
        uVar37 = uVar26;
      }
      else {
        uVar37 = 0;
        if (uVar39 != 0) {
          uVar37 = uVar26 / uVar39;
        }
        uVar37 = uVar26 - uVar37 * uVar39;
      }
    }
    lVar33 = *plVar40;
    plVar30 = *(long **)(lVar33 + uVar37 * 8);
    if (plVar30 == (long *)0x0) {
      *plVar32 = *plVar1;
      *plVar1 = (long)plVar32;
      *(long **)(lVar33 + uVar37 * 8) = plVar1;
      if (*plVar32 != 0) {
        uVar26 = *(ulong *)(*plVar32 + 8);
        if ((uVar39 & uVar39 - 1) == 0) {
          uVar26 = uVar26 & uVar39 - 1;
        }
        else if (uVar39 <= uVar26) {
          uVar29 = 0;
          if (uVar39 != 0) {
            uVar29 = uVar26 / uVar39;
          }
          uVar26 = uVar26 - uVar29 * uVar39;
        }
        plVar30 = (long *)(*plVar40 + uVar26 * 8);
        goto LAB_020516a8;
      }
    }
    else {
      *plVar32 = *plVar30;
LAB_020516a8:
      *plVar30 = (long)plVar32;
    }
    plVar25[4] = plVar25[4] + 1;
LAB_020516b8:
    psVar42 = psVar42 + 0x30;
  } while (psVar42 != (string *)local_80);
  lVar35 = FUN_008cca50();
  lVar33 = 0;
  do {
    lVar27 = FUN_008e8c90(plVar40,lVar35 + lVar33);
    if (lVar27 != 0) {
      FUN_008f2aec(local_80,plVar40,lVar27);
      lVar27 = local_80[0];
      plVar1 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar27 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar27 + 0x10) & 1) != 0)) &&
           (lVar31 = *(long *)(lVar27 + 0x20), lVar31 != 0)) {
          plVar32 = *(long **)(lVar6 + 0x20);
          if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
            *(long **)(lVar6 + 0x20) = DAT_043f1798;
            plVar32 = plVar1;
          }
          uVar37 = (**(code **)(*plVar32 + 0xc0))(plVar32);
          if ((uVar37 & 1) != 0) {
            if (*(char *)(lVar6 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar6 + 0x38d488) = 1;
              *(undefined8 *)(lVar6 + 0x38d478) = 0;
              *(undefined8 *)(lVar6 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar6 + 0x38d480)) {
              FUN_02bcc824(plVar32,lVar31,0,8);
              goto LAB_0205198c;
            }
          }
          (**(code **)(*plVar32 + 0x18))(plVar32,lVar31,0,8);
        }
LAB_0205198c:
        plVar1 = DAT_043f1798;
        plVar32 = *(long **)(lVar6 + 0x20);
        if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
          *(long **)(lVar6 + 0x20) = DAT_043f1798;
          plVar32 = plVar1;
        }
        uVar37 = (**(code **)(*plVar32 + 0xc0))(plVar32);
        if ((uVar37 & 1) != 0) {
          if (*(char *)(lVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar6 + 0x38d488) = 1;
            *(undefined8 *)(lVar6 + 0x38d478) = 0;
            *(undefined8 *)(lVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar6 + 0x38d480)) {
            FUN_02bcc824(plVar32,lVar27,0,8);
            goto LAB_02051888;
          }
        }
        (**(code **)(*plVar32 + 0x18))(plVar32,lVar27,0,8);
      }
    }
LAB_02051888:
    lVar33 = lVar33 + 0x18;
  } while (lVar33 != 0x300);
  pcVar41 = (char *)plVar25[0xc];
  sVar28 = strlen(pcVar41);
  iVar9 = FUN_008f2c60(sVar28,pcVar41);
  pcVar41 = (char *)plVar25[0xd];
  sVar28 = strlen(pcVar41);
  iVar10 = FUN_008f2c60(sVar28,pcVar41);
  pcVar41 = (char *)plVar25[0xe];
  sVar28 = strlen(pcVar41);
  iVar11 = FUN_008f2c60(sVar28,pcVar41);
  pcVar41 = (char *)plVar25[0xf];
  sVar28 = strlen(pcVar41);
  iVar12 = FUN_008f2c60(sVar28,pcVar41);
  pcVar41 = (char *)plVar25[0x10];
  sVar28 = strlen(pcVar41);
  iVar13 = FUN_008f2c60(sVar28,pcVar41);
  pcVar41 = (char *)plVar25[0x11];
  sVar28 = strlen(pcVar41);
  iVar14 = FUN_008f2c60(sVar28,pcVar41);
  pcVar41 = (char *)plVar25[0x12];
  sVar28 = strlen(pcVar41);
  iVar15 = FUN_008f2c60(sVar28,pcVar41);
  pcVar41 = (char *)plVar25[0x13];
  sVar28 = strlen(pcVar41);
  iVar16 = FUN_008f2c60(sVar28,pcVar41);
  pcVar41 = (char *)plVar25[0x16];
  sVar28 = strlen(pcVar41);
  iVar17 = FUN_008f2c60(sVar28,pcVar41);
  pcVar41 = (char *)plVar25[0x19];
  sVar28 = strlen(pcVar41);
  iVar18 = FUN_008f2c60(sVar28,pcVar41);
  pcVar41 = (char *)plVar25[0x1a];
  sVar28 = strlen(pcVar41);
  iVar19 = FUN_008f2c60(sVar28,pcVar41);
  pcVar41 = (char *)plVar25[0x1b];
  sVar28 = strlen(pcVar41);
  iVar20 = FUN_008f2c60(sVar28,pcVar41);
  pcVar41 = (char *)plVar25[0x1e];
  sVar28 = strlen(pcVar41);
  iVar21 = FUN_008f2c60(sVar28,pcVar41);
  pcVar41 = (char *)plVar25[0x1f];
  sVar28 = strlen(pcVar41);
  iVar22 = FUN_008f2c60(sVar28,pcVar41);
  pcVar41 = (char *)plVar25[0x20];
  sVar28 = strlen(pcVar41);
  iVar23 = FUN_008f2c60(sVar28,pcVar41);
  pcVar41 = (char *)plVar25[0x21];
  sVar28 = strlen(pcVar41);
  iVar24 = FUN_008f2c60(sVar28,pcVar41);
  lVar35 = local_a0;
  *(bool *)(plVar25 + 0xb) =
       ((((((((((((((iVar10 != 0 || iVar9 != 0) || iVar11 != 0) || iVar12 != 0) || iVar13 != 0) ||
                iVar14 != 0) || iVar15 != 0) || iVar16 != 0) || iVar17 != 0) || iVar18 != 0) ||
           iVar19 != 0) || iVar20 != 0) || iVar21 != 0) || iVar22 != 0) || iVar23 != 0) ||
       iVar24 != 0;
  plVar1 = DAT_043f1798;
  lVar33 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar32 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar32 = plVar1;
    }
    uVar37 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar37 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar35,0,8);
        plVar1 = DAT_043f1798;
        lVar33 = local_d0;
        goto joined_r0x02051c78;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar35,0,8);
    plVar1 = DAT_043f1798;
    lVar33 = local_d0;
  }
joined_r0x02051c78:
  lVar35 = local_100;
  local_d0 = lVar33;
  if (((local_e0 & 1) != 0) && (lVar33 != 0)) {
    plVar32 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar37 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar37 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar33,0,8);
        plVar1 = DAT_043f1798;
        lVar35 = local_100;
        goto joined_r0x02052858;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar33,0,8);
    plVar1 = DAT_043f1798;
    lVar35 = local_100;
  }
joined_r0x02052858:
  pcVar41 = local_130;
  local_100 = lVar35;
  if (((local_110 & 1) != 0) && (lVar35 != 0)) {
    plVar32 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar37 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar37 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar35,0,8);
        plVar1 = DAT_043f1798;
        pcVar41 = local_130;
        goto joined_r0x02051de0;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar35,0,8);
    plVar1 = DAT_043f1798;
    pcVar41 = local_130;
  }
joined_r0x02051de0:
  lVar33 = local_160;
  local_130 = pcVar41;
  if (((local_140 & 1) != 0) && (pcVar41 != (char *)0x0)) {
    plVar32 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar37 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar37 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar32,pcVar41,0,8);
        plVar1 = DAT_043f1798;
        lVar33 = local_160;
        goto joined_r0x02052898;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,pcVar41,0,8);
    plVar1 = DAT_043f1798;
    lVar33 = local_160;
  }
joined_r0x02052898:
  lVar35 = local_190;
  local_160 = lVar33;
  if (((local_170 & 1) != 0) && (lVar33 != 0)) {
    plVar32 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar37 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar37 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar33,0,8);
        plVar1 = DAT_043f1798;
        lVar35 = local_190;
        goto joined_r0x02051f48;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar33,0,8);
    plVar1 = DAT_043f1798;
    lVar35 = local_190;
  }
joined_r0x02051f48:
  lVar33 = local_1c0;
  local_190 = lVar35;
  if (((local_1a0 & 1) != 0) && (lVar35 != 0)) {
    plVar32 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar37 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar37 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar35,0,8);
        plVar1 = DAT_043f1798;
        lVar33 = local_1c0;
        goto joined_r0x020528d8;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar35,0,8);
    plVar1 = DAT_043f1798;
    lVar33 = local_1c0;
  }
joined_r0x020528d8:
  pcVar41 = local_1f0;
  local_1c0 = lVar33;
  if (((local_1d0 & 1) != 0) && (lVar33 != 0)) {
    plVar32 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar37 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar37 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar33,0,8);
        plVar1 = DAT_043f1798;
        pcVar41 = local_1f0;
        goto joined_r0x020520b0;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar33,0,8);
    plVar1 = DAT_043f1798;
    pcVar41 = local_1f0;
  }
joined_r0x020520b0:
  pcVar7 = local_220;
  local_1f0 = pcVar41;
  if (((local_200 & 1) != 0) && (pcVar41 != (char *)0x0)) {
    plVar32 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar37 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar37 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar32,pcVar41,0,8);
        plVar1 = DAT_043f1798;
        pcVar7 = local_220;
        goto joined_r0x02052918;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,pcVar41,0,8);
    plVar1 = DAT_043f1798;
    pcVar7 = local_220;
  }
joined_r0x02052918:
  pcVar41 = local_250;
  local_220 = pcVar7;
  if (((local_230 & 1) != 0) && (pcVar7 != (char *)0x0)) {
    plVar32 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar37 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar37 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar32,pcVar7,0,8);
        plVar1 = DAT_043f1798;
        pcVar41 = local_250;
        goto joined_r0x02052218;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,pcVar7,0,8);
    plVar1 = DAT_043f1798;
    pcVar41 = local_250;
  }
joined_r0x02052218:
  lVar33 = local_280;
  local_250 = pcVar41;
  if (((local_260 & 1) != 0) && (pcVar41 != (char *)0x0)) {
    plVar32 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar37 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar37 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar32,pcVar41,0,8);
        plVar1 = DAT_043f1798;
        lVar33 = local_280;
        goto joined_r0x02052958;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,pcVar41,0,8);
    plVar1 = DAT_043f1798;
    lVar33 = local_280;
  }
joined_r0x02052958:
  lVar35 = local_2b0;
  local_280 = lVar33;
  if (((local_290 & 1) != 0) && (lVar33 != 0)) {
    plVar32 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar37 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar37 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar33,0,8);
        plVar1 = DAT_043f1798;
        lVar35 = local_2b0;
        goto joined_r0x02052380;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar33,0,8);
    plVar1 = DAT_043f1798;
    lVar35 = local_2b0;
  }
joined_r0x02052380:
  lVar33 = local_2e0;
  local_2b0 = lVar35;
  if (((local_2c0 & 1) != 0) && (lVar35 != 0)) {
    plVar32 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar37 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar37 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar35,0,8);
        plVar1 = DAT_043f1798;
        lVar33 = local_2e0;
        goto joined_r0x02052998;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar35,0,8);
    plVar1 = DAT_043f1798;
    lVar33 = local_2e0;
  }
joined_r0x02052998:
  lVar35 = local_310;
  local_2e0 = lVar33;
  if (((local_2f0 & 1) != 0) && (lVar33 != 0)) {
    plVar32 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar37 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar37 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar33,0,8);
        plVar1 = DAT_043f1798;
        lVar35 = local_310;
        goto joined_r0x020524e8;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar33,0,8);
    plVar1 = DAT_043f1798;
    lVar35 = local_310;
  }
joined_r0x020524e8:
  lVar33 = local_340;
  local_310 = lVar35;
  if (((local_320 & 1) != 0) && (lVar35 != 0)) {
    plVar32 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar37 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar37 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar35,0,8);
        plVar1 = DAT_043f1798;
        lVar33 = local_340;
        goto joined_r0x020529d8;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar35,0,8);
    plVar1 = DAT_043f1798;
    lVar33 = local_340;
  }
joined_r0x020529d8:
  lVar35 = local_370;
  local_340 = lVar33;
  if (((local_350 & 1) != 0) && (lVar33 != 0)) {
    plVar32 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar37 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar37 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar33,0,8);
        plVar1 = DAT_043f1798;
        lVar35 = local_370;
        goto joined_r0x02052650;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar33,0,8);
    plVar1 = DAT_043f1798;
    lVar35 = local_370;
  }
joined_r0x02052650:
  DAT_043f1798 = plVar1;
  local_370 = lVar35;
  if ((((byte)local_380 & 1) != 0) && (lVar35 != 0)) {
    plVar32 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar37 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar37 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar35,0,8);
        goto LAB_02052700;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar35,0,8);
  }
LAB_02052700:
  uVar38 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar38);
  (**(code **)*plVar25)(plVar25,uVar38);
  (**(code **)(*plVar25 + 0x10))(plVar25);
  uVar37 = (ulong)&local_398 | 1;
  if ((local_398 & 1) != 0) {
    uVar37 = local_388;
  }
  FUN_001522a0(uVar38,uVar37);
  uVar37 = local_388;
  plVar1 = DAT_043f1798;
  if (((local_398 & 1) != 0) && (local_388 != 0)) {
    plVar32 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar32 = plVar1;
    }
    uVar26 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar26 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar32,uVar37,0,8);
        return;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,uVar37,0,8);
  }
  return;
}


