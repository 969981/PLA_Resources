/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02504be0; name: FUN_02504be0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02504be0(long param_1)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  char *pcVar8;
  undefined8 uVar9;
  int iVar10;
  long *plVar11;
  size_t sVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  string *psVar20;
  long lVar21;
  string *psVar22;
  undefined8 uVar23;
  string *psVar24;
  long *plVar25;
  char *pcVar26;
  void *pvVar27;
  long lVar28;
  ulong uVar29;
  ulong local_508;
  undefined8 uStack_500;
  char *local_4f8;
  byte local_4f0;
  undefined7 uStack_4ef;
  undefined1 local_4e8;
  undefined7 uStack_4e7;
  void *local_4e0;
  undefined7 local_4d8;
  undefined1 uStack_4d1;
  undefined7 uStack_4d0;
  byte local_4c8;
  undefined7 uStack_4c7;
  undefined1 local_4c0;
  undefined7 uStack_4bf;
  void *local_4b8;
  undefined7 local_4b0;
  undefined1 uStack_4a9;
  undefined7 uStack_4a8;
  byte local_4a0;
  undefined7 uStack_49f;
  undefined1 local_498;
  undefined7 uStack_497;
  void *local_490;
  undefined7 local_488;
  undefined1 uStack_481;
  undefined7 uStack_480;
  byte local_478;
  undefined7 uStack_477;
  undefined1 local_470;
  undefined7 uStack_46f;
  void *local_468;
  undefined7 local_460;
  undefined1 uStack_459;
  undefined7 uStack_458;
  undefined7 local_450;
  undefined1 uStack_449;
  undefined7 uStack_448;
  string local_440;
  char local_43f [6];
  char acStack_439 [2];
  char acStack_437 [6];
  undefined1 local_431;
  long local_430;
  undefined1 *local_428;
  undefined1 *local_420;
  undefined4 local_418;
  byte local_410;
  char local_40f [8];
  undefined2 local_407;
  undefined1 local_405;
  undefined4 local_404;
  long local_400;
  undefined1 *puStack_3f8;
  undefined1 *local_3f0;
  undefined4 local_3e8;
  string local_3e0;
  undefined7 local_3df;
  undefined1 uStack_3d8;
  undefined7 uStack_3d7;
  void *local_3d0;
  undefined1 *local_3c8;
  undefined1 *puStack_3c0;
  undefined4 local_3b8;
  byte local_3b0;
  undefined7 local_3af;
  undefined1 uStack_3a8;
  undefined7 uStack_3a7;
  void *local_3a0;
  undefined1 *local_398;
  undefined1 *puStack_390;
  undefined4 local_388;
  byte local_380;
  undefined7 local_37f;
  undefined1 uStack_378;
  undefined7 uStack_377;
  void *local_370;
  undefined1 *local_368;
  undefined1 *puStack_360;
  undefined4 local_358;
  byte local_350;
  undefined7 local_34f;
  undefined1 uStack_348;
  undefined7 uStack_347;
  void *local_340;
  undefined1 *local_338;
  undefined1 *puStack_330;
  undefined4 local_328;
  byte local_320;
  undefined7 local_31f;
  undefined1 uStack_318;
  undefined7 uStack_317;
  void *local_310;
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
  undefined1 *local_2d0;
  undefined4 local_2c8;
  byte local_2c0;
  char local_2bf [8];
  undefined1 local_2b7;
  undefined4 local_2b6;
  undefined2 local_2b2;
  long local_2b0;
  undefined1 *local_2a8;
  undefined1 *local_2a0;
  undefined4 local_298;
  byte local_290;
  undefined4 local_28f;
  undefined2 local_28b;
  undefined1 local_289;
  undefined8 local_288;
  char *local_280;
  undefined1 *local_278;
  undefined1 *local_270;
  undefined4 local_268;
  byte local_260;
  undefined4 local_25f;
  undefined2 local_25b;
  undefined1 local_259;
  undefined8 local_258;
  char *local_250;
  undefined1 *local_248;
  undefined1 *local_240;
  undefined4 local_238;
  byte local_230;
  undefined4 local_22f;
  undefined2 local_22b;
  undefined1 local_229;
  undefined8 local_228;
  char *local_220;
  undefined1 *local_218;
  undefined1 *local_210;
  undefined4 local_208;
  byte local_200;
  undefined4 local_1ff;
  undefined2 local_1fb;
  undefined1 local_1f9;
  undefined8 local_1f8;
  char *local_1f0;
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  undefined4 local_1d8;
  byte local_1d0;
  undefined4 local_1cf;
  undefined2 local_1cb;
  undefined1 local_1c9;
  undefined8 local_1c8;
  char *local_1c0;
  undefined1 *local_1b8;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  byte local_1a0;
  undefined4 local_19f;
  undefined2 local_19b;
  undefined1 local_199;
  undefined8 local_198;
  char *local_190;
  undefined1 *local_188;
  undefined1 *local_180;
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
  string local_80;
  undefined7 uStack_7f;
  undefined1 local_78;
  undefined7 uStack_77;
  void *local_70;
  
  plVar1 = DAT_043f1798;
  lVar6 = tpidr_el0;
  plVar11 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar11 = plVar1;
  }
  local_4f8 = (char *)(**(code **)(*plVar11 + 0x10))(plVar11,0x20,8);
  uVar9 = s_RideWhooguruStateContext_0395a2a3._8_8_;
  uVar23 = s_RideWhooguruStateContext_0395a2a3._0_8_;
  local_508 = 0x21;
  uStack_500 = 0x18;
  *(undefined8 *)(local_4f8 + 0x10) = s_RideWhooguruStateContext_0395a2a3._16_8_;
  *(undefined8 *)local_4f8 = uVar23;
  *(undefined8 *)(local_4f8 + 8) = uVar9;
  local_4f8[0x18] = '\0';
  plVar1 = DAT_043f1798;
  plVar11 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar11 = plVar1;
  }
  plVar11 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x1d0,8);
  plVar11[4] = 0;
  plVar25 = plVar11 + 1;
  *plVar25 = 0;
  *(undefined4 *)(plVar11 + 5) = 0x3f800000;
  plVar11[10] = 0;
  plVar11[6] = (long)FUN_02507c20;
  plVar11[7] = (long)FUN_02507cd0;
  *plVar11 = (long)&PTR_FUN_0425c428;
  plVar11[0xc] = (long)"isAirJumpStart";
  plVar11[0xd] = 0xa8;
  plVar11[0xe] = (long)"isClimbing";
  plVar11[0xf] = 0xa9;
  plVar11[0x10] = (long)"climbingNormal";
  plVar11[0x11] = 0xb0;
  plVar11[0x12] = (long)"isClimbingStart";
  plVar11[0x13] = 0xc0;
  plVar11[0x14] = (long)"climbingJumpWaitCount";
  plVar11[0x15] = 0xc4;
  plVar11[0x16] = (long)"__haxe_export_GetCharaController";
  plVar11[0x17] = (long)"__haxe_export_GetWhooguruController";
  plVar11[0x18] = (long)"__haxe_export_IsCharaControllerEnable";
  plVar11[0x19] = (long)&LAB_02723e50;
  plVar11[0x1a] = 0;
  plVar11[0x1b] = (long)"inputInfo";
  *(undefined1 *)(plVar11 + 0xb) = 0;
  plVar11[0x39] = 0;
  plVar11[0x1c] = 200;
  plVar11[0x1d] = (long)"__haxe_export_GetCameraTransformObject";
  plVar11[0x1e] = (long)"__haxe_export_IsCameraEnable";
  plVar11[0x1f] = (long)&LAB_0272417c;
  plVar11[0x20] = 0;
  plVar11[0x21] = (long)"__haxe_export_GetItemCandidacy";
  plVar11[0x22] = (long)"__haxe_export_IsItemPickEnable";
  plVar11[0x23] = (long)&LAB_0272443c;
  plVar11[0x26] = (long)"__haxe_export_IsStaminaEnable";
  plVar11[0x27] = (long)&LAB_02724478;
  plVar11[0x28] = 0;
  plVar11[0x29] = (long)"__haxe_export_GetStaminaData";
  plVar11[0x2a] = (long)"__haxe_export_GetRideManager";
  plVar11[0x2b] = (long)"__haxe_export_GetRidePokemonComponent";
  plVar11[0x2c] = (long)&LAB_027244c4;
  plVar11[0x2d] = 0;
  plVar11[0x2e] = (long)&DAT_038ca815;
  plVar11[0x2f] = (long)&DAT_0392da3c;
  plVar11[0x32] = (long)FUN_02507e60;
  plVar11[0x33] = (long)&LAB_02508140;
  plVar11[0x34] = (long)&LAB_02508420;
  plVar11[0x35] = (long)&LAB_02508430;
  *(undefined1 *)(plVar11 + 0x38) = 1;
  plVar11[2] = 0;
  plVar11[3] = 0;
  plVar11[8] = 0;
  plVar11[9] = 0;
  plVar11[0x24] = 0;
  plVar11[0x25] = (long)"__haxe_export_GetCameraManager";
  plVar11[0x30] = 0;
  plVar11[0x31] = 0;
  plVar11[0x36] = 0;
  plVar11[0x37] = 0;
  local_440 = (string)0x1c;
  local_43f[0] = s_isAirJumpStart_0393e5b0[0];
  local_43f[1] = s_isAirJumpStart_0393e5b0[1];
  local_43f[2] = s_isAirJumpStart_0393e5b0[2];
  local_43f[3] = s_isAirJumpStart_0393e5b0[3];
  local_43f[4] = s_isAirJumpStart_0393e5b0[4];
  local_43f[5] = s_isAirJumpStart_0393e5b0[5];
  acStack_439[0] = s_isAirJumpStart_0393e5b0[6];
  acStack_439[1] = s_isAirJumpStart_0393e5b0[7];
  acStack_437[0] = s_isAirJumpStart_0393e5b0[8];
  acStack_437[1] = s_isAirJumpStart_0393e5b0[9];
  acStack_437[2] = s_isAirJumpStart_0393e5b0[10];
  acStack_437[3] = s_isAirJumpStart_0393e5b0[0xb];
  acStack_437[4] = s_isAirJumpStart_0393e5b0[0xc];
  acStack_437[5] = s_isAirJumpStart_0393e5b0[0xd];
  local_431 = 0;
  local_420 = &LAB_02508450;
  local_418 = 0xffffffff;
  local_430 = 0;
  local_428 = &LAB_02508434;
  local_410 = 0x14;
  local_407 = 0x676e;
  local_40f[0] = s_isClimbing_03946a26[0];
  local_40f[1] = s_isClimbing_03946a26[1];
  local_40f[2] = s_isClimbing_03946a26[2];
  local_40f[3] = s_isClimbing_03946a26[3];
  local_40f[4] = s_isClimbing_03946a26[4];
  local_40f[5] = s_isClimbing_03946a26[5];
  local_40f[6] = s_isClimbing_03946a26[6];
  local_40f[7] = s_isClimbing_03946a26[7];
  local_405 = 0;
  local_404 = 0;
  local_3f0 = &LAB_02508488;
  local_3e8 = 0xffffffff;
  local_400 = 0;
  puStack_3f8 = &LAB_0250846c;
  pcVar26 = (char *)plVar11[0x10];
  sVar12 = strlen(pcVar26);
  plVar1 = DAT_043f1798;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar12) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar12 < 0x17) {
    local_80 = SUB41((int)sVar12 << 1,0);
    pvVar27 = (void *)((ulong)&local_80 | 1);
    if (sVar12 != 0) goto LAB_02504f30;
  }
  else {
    uVar15 = sVar12 + 0x10 & 0xfffffffffffffff0;
    plVar18 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar18 = plVar1;
    }
    pvVar27 = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar15,8);
    local_80 = (string)((byte)uVar15 | 1);
    uStack_7f = (undefined7)(uVar15 >> 8);
    local_78 = (undefined1)sVar12;
    uStack_77 = (undefined7)(sVar12 >> 8);
    local_70 = pvVar27;
LAB_02504f30:
    memcpy(pvVar27,pcVar26,sVar12);
  }
  local_3d0 = local_70;
  uStack_3d7 = uStack_77;
  uStack_3d8 = local_78;
  local_3df = uStack_7f;
  local_3e0 = local_80;
  *(undefined1 *)((long)pvVar27 + sVar12) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_450 = 0;
  uStack_449 = 0;
  uStack_448 = 0;
  local_3b8 = 0xffffffff;
  local_3c8 = &LAB_025084a4;
  puStack_3c0 = &LAB_025084c0;
  pcVar26 = (char *)plVar11[0x12];
  sVar12 = strlen(pcVar26);
  plVar1 = DAT_043f1798;
  local_478 = 0;
  uStack_477 = 0;
  local_470 = 0;
  uStack_46f = 0;
  local_468 = (void *)0x0;
  if (0xffffffffffffffef < sVar12) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar12 < 0x17) {
    local_478 = (byte)((int)sVar12 << 1);
    pvVar27 = (void *)((ulong)&local_478 | 1);
    if (sVar12 != 0) goto LAB_02504fd0;
  }
  else {
    uVar15 = sVar12 + 0x10 & 0xfffffffffffffff0;
    plVar18 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar18 = plVar1;
    }
    pvVar27 = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar15,8);
    local_478 = (byte)uVar15 | 1;
    uStack_477 = (undefined7)(uVar15 >> 8);
    local_470 = (undefined1)sVar12;
    uStack_46f = (undefined7)(sVar12 >> 8);
    local_468 = pvVar27;
LAB_02504fd0:
    memcpy(pvVar27,pcVar26,sVar12);
  }
  local_3a0 = local_468;
  uStack_3a7 = uStack_46f;
  uStack_3a8 = local_470;
  local_3af = uStack_477;
  local_3b0 = local_478;
  uVar15 = 0x21;
  *(undefined1 *)((long)pvVar27 + sVar12) = 0;
  local_470 = 0;
  uStack_46f = 0;
  local_468 = (void *)0x0;
  local_478 = 0;
  uStack_477 = 0;
  local_460 = 0;
  uStack_459 = 0;
  uStack_458 = 0;
  local_388 = 0xffffffff;
  local_398 = &LAB_025084dc;
  puStack_390 = &LAB_025084f8;
  pcVar26 = (char *)plVar11[0x14];
  sVar12 = strlen(pcVar26);
  plVar1 = DAT_043f1798;
  local_4a0 = 0;
  uStack_49f = 0;
  local_498 = 0;
  uStack_497 = 0;
  local_490 = (void *)0x0;
  if (0xffffffffffffffef < sVar12) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar12 < 0x17) {
    local_4a0 = (byte)((int)sVar12 << 1);
    pvVar27 = (void *)((ulong)&local_4a0 | 1);
    if (sVar12 != 0) goto LAB_02505078;
  }
  else {
    uVar13 = sVar12 + 0x10 & 0xfffffffffffffff0;
    plVar18 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar18 = plVar1;
    }
    pvVar27 = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar13,8);
    local_4a0 = (byte)uVar13 | 1;
    uStack_49f = (undefined7)(uVar13 >> 8);
    local_498 = (undefined1)sVar12;
    uStack_497 = (undefined7)(sVar12 >> 8);
    local_490 = pvVar27;
LAB_02505078:
    memcpy(pvVar27,pcVar26,sVar12);
  }
  local_370 = local_490;
  uStack_377 = uStack_497;
  uStack_378 = local_498;
  local_37f = uStack_49f;
  local_380 = local_4a0;
  *(undefined1 *)((long)pvVar27 + sVar12) = 0;
  local_498 = 0;
  uStack_497 = 0;
  local_490 = (void *)0x0;
  local_4a0 = 0;
  uStack_49f = 0;
  local_488 = 0;
  uStack_481 = 0;
  uStack_480 = 0;
  local_358 = 0xffffffff;
  local_368 = &LAB_02508514;
  puStack_360 = &LAB_02508530;
  pcVar26 = (char *)plVar11[0x16];
  sVar12 = strlen(pcVar26);
  plVar1 = DAT_043f1798;
  local_4c8 = 0;
  uStack_4c7 = 0;
  local_4c0 = 0;
  uStack_4bf = 0;
  local_4b8 = (void *)0x0;
  if (0xffffffffffffffef < sVar12) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar12 < 0x17) {
    local_4c8 = (byte)((int)sVar12 << 1);
    pvVar27 = (void *)((ulong)&local_4c8 | 1);
    if (sVar12 != 0) goto LAB_02505118;
  }
  else {
    uVar13 = sVar12 + 0x10 & 0xfffffffffffffff0;
    plVar18 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar18 = plVar1;
    }
    pvVar27 = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar13,8);
    local_4c8 = (byte)uVar13 | 1;
    uStack_4c7 = (undefined7)(uVar13 >> 8);
    local_4c0 = (undefined1)sVar12;
    uStack_4bf = (undefined7)(sVar12 >> 8);
    local_4b8 = pvVar27;
LAB_02505118:
    memcpy(pvVar27,pcVar26,sVar12);
  }
  local_340 = local_4b8;
  uStack_347 = uStack_4bf;
  uStack_348 = local_4c0;
  local_34f = uStack_4c7;
  local_350 = local_4c8;
  *(undefined1 *)((long)pvVar27 + sVar12) = 0;
  local_4c0 = 0;
  uStack_4bf = 0;
  local_4b8 = (void *)0x0;
  local_4c8 = 0;
  uStack_4c7 = 0;
  local_4b0 = 0;
  uStack_4a9 = 0;
  uStack_4a8 = 0;
  local_328 = 0xffffffff;
  local_338 = &LAB_0250854c;
  puStack_330 = &LAB_02508594;
  pcVar26 = (char *)plVar11[0x17];
  sVar12 = strlen(pcVar26);
  plVar1 = DAT_043f1798;
  local_4f0 = 0;
  uStack_4ef = 0;
  local_4e8 = 0;
  uStack_4e7 = 0;
  local_4e0 = (void *)0x0;
  if (0xffffffffffffffef < sVar12) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar12 < 0x17) {
    local_4f0 = (byte)((int)sVar12 << 1);
    pvVar27 = (void *)((ulong)&local_4f0 | 1);
    if (sVar12 != 0) goto LAB_025051bc;
  }
  else {
    uVar13 = sVar12 + 0x10 & 0xfffffffffffffff0;
    plVar18 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar18 = plVar1;
    }
    pvVar27 = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar13,8);
    local_4f0 = (byte)uVar13 | 1;
    uStack_4ef = (undefined7)(uVar13 >> 8);
    local_4e8 = (undefined1)sVar12;
    uStack_4e7 = (undefined7)(sVar12 >> 8);
    local_4e0 = pvVar27;
LAB_025051bc:
    memcpy(pvVar27,pcVar26,sVar12);
  }
  local_310 = local_4e0;
  uStack_317 = uStack_4e7;
  uStack_318 = local_4e8;
  local_31f = uStack_4ef;
  local_320 = local_4f0;
  *(undefined1 *)((long)pvVar27 + sVar12) = 0;
  plVar1 = DAT_043f1798;
  local_4f0 = 0;
  uStack_4ef = 0;
  local_4e8 = 0;
  uStack_4e7 = 0;
  local_4e0 = (void *)0x0;
  local_308 = &LAB_025085dc;
  local_4d8 = 0;
  uStack_4d1 = 0;
  uStack_4d0 = 0;
  local_300 = &LAB_02508624;
  local_2f8 = 0xffffffff;
  plVar18 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar18 = plVar1;
  }
  local_2e0 = (char *)(**(code **)(*plVar18 + 0x10))(plVar18,0x30,8);
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
  local_2eb = 0;
  local_2ef = 0;
  local_2e8 = 0x25;
  local_2d8 = &LAB_0250866c;
  local_2c8 = 0xffffffff;
  local_2d0 = &LAB_025086b4;
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
  local_2b2 = 0;
  local_2b6 = 0;
  local_2b0 = 0;
  local_2a0 = &LAB_025087ec;
  local_298 = 0xffffffff;
  local_2a8 = &LAB_025086fc;
  plVar18 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar18 = plVar1;
  }
  local_280 = (char *)(**(code **)(*plVar18 + 0x10))(plVar18,0x30,8);
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
  local_289 = 0;
  local_28b = 0;
  local_28f = 0;
  local_278 = &LAB_02508808;
  local_268 = 0xffffffff;
  local_288 = 0x26;
  local_270 = &LAB_02508850;
  plVar18 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar18 = plVar1;
  }
  local_250 = (char *)(**(code **)(*plVar18 + 0x10))(plVar18,0x20,8);
  local_250[0x18] = 'a';
  local_250[0x19] = 'b';
  local_250[0x1a] = 'l';
  local_250[0x1b] = 'e';
  local_250[0x1c] = '\0';
  uVar23 = s___haxe_export_IsCameraEnable_038e27f5._8_8_;
  *(undefined8 *)local_250 = s___haxe_export_IsCameraEnable_038e27f5._0_8_;
  uVar9 = s___haxe_export_IsCameraEnable_038e27f5._16_8_;
  *(undefined8 *)(local_250 + 8) = uVar23;
  *(undefined8 *)(local_250 + 0x10) = uVar9;
  plVar1 = DAT_043f1798;
  local_260 = 0x21;
  local_259 = 0;
  local_25b = 0;
  local_25f = 0;
  local_258 = 0x1c;
  local_240 = &LAB_025088e0;
  local_238 = 0xffffffff;
  local_248 = &LAB_02508898;
  plVar18 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar18 = plVar1;
  }
  local_220 = (char *)(**(code **)(*plVar18 + 0x10))(plVar18,0x20,8);
  local_220[0x1e] = '\0';
  uVar9 = s___haxe_export_GetItemCandidacy_03980659._8_8_;
  *(undefined8 *)local_220 = s___haxe_export_GetItemCandidacy_03980659._0_8_;
  *(ulong *)(local_220 + 0x16) =
       CONCAT62(s___haxe_export_GetItemCandidacy_03980659._24_6_,
                s___haxe_export_GetItemCandidacy_03980659._22_2_);
  uVar23 = CONCAT26(s___haxe_export_GetItemCandidacy_03980659._22_2_,
                    s___haxe_export_GetItemCandidacy_03980659._16_6_);
  *(undefined8 *)(local_220 + 8) = uVar9;
  *(undefined8 *)(local_220 + 0x10) = uVar23;
  plVar1 = DAT_043f1798;
  local_230 = 0x21;
  local_229 = 0;
  local_22b = 0;
  local_22f = 0;
  local_228 = 0x1e;
  local_210 = &LAB_02508970;
  local_208 = 0xffffffff;
  local_218 = &LAB_02508928;
  plVar18 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar18 = plVar1;
  }
  local_1f0 = (char *)(**(code **)(*plVar18 + 0x10))(plVar18,0x20,8);
  local_1f0[0x1e] = '\0';
  uVar9 = s___haxe_export_IsItemPickEnable_0392bb06._8_8_;
  *(undefined8 *)local_1f0 = s___haxe_export_IsItemPickEnable_0392bb06._0_8_;
  *(ulong *)(local_1f0 + 0x16) =
       CONCAT62(s___haxe_export_IsItemPickEnable_0392bb06._24_6_,
                s___haxe_export_IsItemPickEnable_0392bb06._22_2_);
  uVar23 = CONCAT26(s___haxe_export_IsItemPickEnable_0392bb06._22_2_,
                    s___haxe_export_IsItemPickEnable_0392bb06._16_6_);
  *(undefined8 *)(local_1f0 + 8) = uVar9;
  *(undefined8 *)(local_1f0 + 0x10) = uVar23;
  plVar1 = DAT_043f1798;
  local_200 = 0x21;
  local_1f9 = 0;
  local_1fb = 0;
  local_1ff = 0;
  local_1f8 = 0x1e;
  local_1e0 = &LAB_02508a00;
  local_1d8 = 0xffffffff;
  local_1e8 = &LAB_025089b8;
  plVar18 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar18 = plVar1;
  }
  local_1c0 = (char *)(**(code **)(*plVar18 + 0x10))(plVar18,0x20,8);
  local_1c0[0x1e] = '\0';
  uVar9 = s___haxe_export_GetCameraManager_038ec142._8_8_;
  *(undefined8 *)local_1c0 = s___haxe_export_GetCameraManager_038ec142._0_8_;
  *(ulong *)(local_1c0 + 0x16) =
       CONCAT62(s___haxe_export_GetCameraManager_038ec142._24_6_,
                s___haxe_export_GetCameraManager_038ec142._22_2_);
  uVar23 = CONCAT26(s___haxe_export_GetCameraManager_038ec142._22_2_,
                    s___haxe_export_GetCameraManager_038ec142._16_6_);
  *(undefined8 *)(local_1c0 + 8) = uVar9;
  *(undefined8 *)(local_1c0 + 0x10) = uVar23;
  plVar1 = DAT_043f1798;
  local_1d0 = 0x21;
  local_1c9 = 0;
  local_1cb = 0;
  local_1cf = 0;
  local_1c8 = 0x1e;
  local_1b0 = &LAB_02508a90;
  local_1a8 = 0xffffffff;
  local_1b8 = &LAB_02508a48;
  plVar18 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar18 = plVar1;
  }
  local_190 = (char *)(**(code **)(*plVar18 + 0x10))(plVar18,0x20,8);
  local_190[0x1d] = '\0';
  uVar9 = s___haxe_export_IsStaminaEnable_03980999._8_8_;
  *(undefined8 *)local_190 = s___haxe_export_IsStaminaEnable_03980999._0_8_;
  *(ulong *)(local_190 + 0x15) =
       CONCAT53(s___haxe_export_IsStaminaEnable_03980999._24_5_,
                s___haxe_export_IsStaminaEnable_03980999._21_3_);
  uVar23 = CONCAT35(s___haxe_export_IsStaminaEnable_03980999._21_3_,
                    s___haxe_export_IsStaminaEnable_03980999._16_5_);
  *(undefined8 *)(local_190 + 8) = uVar9;
  *(undefined8 *)(local_190 + 0x10) = uVar23;
  plVar1 = DAT_043f1798;
  local_1a0 = 0x21;
  local_199 = 0;
  local_19b = 0;
  local_19f = 0;
  local_198 = 0x1d;
  local_180 = &LAB_02508b20;
  local_178 = 0xffffffff;
  local_188 = &LAB_02508ad8;
  plVar18 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar18 = plVar1;
  }
  local_160 = (char *)(**(code **)(*plVar18 + 0x10))(plVar18,0x20,8);
  local_160[0x18] = 'D';
  local_160[0x19] = 'a';
  local_160[0x1a] = 't';
  local_160[0x1b] = 'a';
  local_160[0x1c] = '\0';
  uVar23 = s___haxe_export_GetStaminaData_0393e307._8_8_;
  *(undefined8 *)local_160 = s___haxe_export_GetStaminaData_0393e307._0_8_;
  uVar9 = s___haxe_export_GetStaminaData_0393e307._16_8_;
  *(undefined8 *)(local_160 + 8) = uVar23;
  *(undefined8 *)(local_160 + 0x10) = uVar9;
  plVar1 = DAT_043f1798;
  local_170 = 0x21;
  local_169 = 0;
  local_16b = 0;
  local_16f = 0;
  local_168 = 0x1c;
  local_150 = &LAB_02508bb0;
  local_148 = 0xffffffff;
  local_158 = &LAB_02508b68;
  plVar18 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar18 = plVar1;
  }
  local_130 = (char *)(**(code **)(*plVar18 + 0x10))(plVar18,0x20,8);
  local_130[0x18] = 'a';
  local_130[0x19] = 'g';
  local_130[0x1a] = 'e';
  local_130[0x1b] = 'r';
  local_130[0x1c] = '\0';
  uVar23 = s___haxe_export_GetRideManager_038bbe1b._8_8_;
  *(undefined8 *)local_130 = s___haxe_export_GetRideManager_038bbe1b._0_8_;
  uVar9 = s___haxe_export_GetRideManager_038bbe1b._16_8_;
  *(undefined8 *)(local_130 + 8) = uVar23;
  *(undefined8 *)(local_130 + 0x10) = uVar9;
  plVar1 = DAT_043f1798;
  local_140 = 0x21;
  local_139 = 0;
  local_13b = 0;
  local_13f = 0;
  local_138 = 0x1c;
  local_120 = &LAB_02508c40;
  local_118 = 0xffffffff;
  local_128 = &LAB_02508bf8;
  plVar18 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar18 = plVar1;
  }
  local_100 = (char *)(**(code **)(*plVar18 + 0x10))(plVar18,0x30,8);
  uVar23 = s___haxe_export_GetRidePokemonComp_03951188._8_8_;
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
  psVar24 = &local_440;
  local_109 = 0;
  local_10b = 0;
  local_10f = 0;
  local_108 = 0x25;
  local_f0 = &LAB_02508cd0;
  local_e8 = 0xffffffff;
  plVar1 = plVar11 + 3;
  local_f8 = &LAB_02508c88;
  local_e0 = 6;
  local_dd = 0x77;
  local_df = 0x656e;
  local_d4 = 0;
  local_dc = 0;
  local_c0 = &LAB_02508d60;
  local_d0 = 0;
  local_b8 = 0xffffffff;
  local_b0 = 8;
  local_c8 = &LAB_02508d18;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_98 = &LAB_02508da8;
  local_a0 = 0;
  local_90 = &LAB_02508df0;
  local_88 = 0xffffffff;
  do {
    uVar13 = *(ulong *)(psVar24 + 8);
    psVar3 = *(string **)(psVar24 + 0x10);
    if (((byte)*psVar24 & 1) == 0) {
      psVar3 = psVar24 + 1;
      uVar13 = (ulong)((byte)*psVar24 >> 1);
    }
    uVar13 = FUN_008e8ed4(&local_80,psVar3,uVar13);
    uVar29 = plVar11[2];
    if (uVar29 != 0) {
      uVar15 = uVar29 - (uVar29 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar16 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 < 2) {
        uVar15 = uVar29 - 1 & uVar13;
      }
      else {
        uVar15 = uVar13;
        if (uVar29 <= uVar13) {
          uVar15 = 0;
          if (uVar29 != 0) {
            uVar15 = uVar13 / uVar29;
          }
          uVar15 = uVar13 - uVar15 * uVar29;
        }
      }
      plVar18 = *(long **)(*plVar25 + uVar15 * 8);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        psVar3 = psVar24 + 1;
        sVar12 = (ulong)((byte)*psVar24 >> 1);
        if (((byte)*psVar24 & 1) != 0) {
          psVar3 = *(string **)(psVar24 + 0x10);
          sVar12 = *(size_t *)(psVar24 + 8);
        }
        if (uVar16 < 2) {
          if (sVar12 == 0) {
            do {
              if (plVar18[1] != uVar13 && (plVar18[1] & uVar29 - 1) != uVar15) break;
              uVar16 = (ulong)(*(byte *)(plVar18 + 2) >> 1);
              if ((*(byte *)(plVar18 + 2) & 1) != 0) {
                uVar16 = plVar18[3];
              }
              if (uVar16 == 0) goto LAB_02505c24;
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
          else {
            do {
              if (plVar18[1] != uVar13 && (plVar18[1] & uVar29 - 1) != uVar15) break;
              bVar4 = *(byte *)(plVar18 + 2);
              uVar16 = (ulong)(bVar4 >> 1);
              sVar2 = uVar16;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar18[3];
              }
              if (sVar2 == sVar12) {
                if ((bVar4 & 1) == 0) {
                  psVar20 = (string *)((long)plVar18 + 0x11);
                  psVar22 = psVar3;
                  while (*psVar20 == *psVar22) {
                    uVar16 = uVar16 - 1;
                    psVar20 = psVar20 + 1;
                    psVar22 = psVar22 + 1;
                    if (uVar16 == 0) goto LAB_02505c24;
                  }
                }
                else {
                  iVar10 = memcmp((void *)plVar18[4],psVar3,sVar12);
                  if (iVar10 == 0) goto LAB_02505c24;
                }
              }
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
        }
        else if (sVar12 == 0) {
          do {
            uVar16 = plVar18[1];
            if (uVar16 != uVar13) {
              if (uVar29 <= uVar16) {
                uVar5 = 0;
                if (uVar29 != 0) {
                  uVar5 = uVar16 / uVar29;
                }
                uVar16 = uVar16 - uVar5 * uVar29;
              }
              if (uVar16 != uVar15) break;
            }
            uVar16 = (ulong)(*(byte *)(plVar18 + 2) >> 1);
            if ((*(byte *)(plVar18 + 2) & 1) != 0) {
              uVar16 = plVar18[3];
            }
            if (uVar16 == 0) goto LAB_02505c24;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            uVar16 = plVar18[1];
            if (uVar16 != uVar13) {
              if (uVar29 <= uVar16) {
                uVar5 = 0;
                if (uVar29 != 0) {
                  uVar5 = uVar16 / uVar29;
                }
                uVar16 = uVar16 - uVar5 * uVar29;
              }
              if (uVar16 != uVar15) break;
            }
            bVar4 = *(byte *)(plVar18 + 2);
            uVar16 = (ulong)(bVar4 >> 1);
            sVar2 = uVar16;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar18[3];
            }
            if (sVar2 == sVar12) {
              if ((bVar4 & 1) == 0) {
                psVar20 = (string *)((long)plVar18 + 0x11);
                psVar22 = psVar3;
                while (*psVar20 == *psVar22) {
                  uVar16 = uVar16 - 1;
                  psVar20 = psVar20 + 1;
                  psVar22 = psVar22 + 1;
                  if (uVar16 == 0) goto LAB_02505c24;
                }
              }
              else {
                iVar10 = memcmp((void *)plVar18[4],psVar3,sVar12);
                if (iVar10 == 0) goto LAB_02505c24;
              }
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
      }
    }
    plVar18 = DAT_043f1798;
    plVar17 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar17 = plVar18;
    }
    plVar18 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x40,8);
    std::string::string((string *)(plVar18 + 2),psVar24);
    lVar19 = *(long *)(psVar24 + 0x18);
    lVar21 = *(long *)(psVar24 + 0x28);
    plVar18[6] = *(long *)(psVar24 + 0x20);
    plVar18[7] = lVar21;
    plVar18[5] = lVar19;
    *plVar18 = 0;
    plVar18[1] = uVar13;
    if ((uVar29 == 0) || (*(float *)(plVar11 + 5) * (float)uVar29 < (float)(plVar11[4] + 1))) {
      uVar15 = (ulong)(uVar29 < 3 || (uVar29 & uVar29 - 1) != 0) | uVar29 << 1;
      uVar29 = (ulong)((float)(plVar11[4] + 1) / *(float *)(plVar11 + 5));
      if (uVar29 <= uVar15) {
        uVar29 = uVar15;
      }
      FUN_008e9ae4(plVar25,uVar29);
      uVar29 = plVar11[2];
      if ((uVar29 & uVar29 - 1) == 0) {
        uVar15 = uVar29 - 1 & uVar13;
      }
      else if (uVar13 < uVar29) {
        uVar15 = uVar13;
      }
      else {
        uVar15 = 0;
        if (uVar29 != 0) {
          uVar15 = uVar13 / uVar29;
        }
        uVar15 = uVar13 - uVar15 * uVar29;
      }
    }
    lVar19 = *plVar25;
    plVar17 = *(long **)(lVar19 + uVar15 * 8);
    if (plVar17 == (long *)0x0) {
      *plVar18 = *plVar1;
      *plVar1 = (long)plVar18;
      *(long **)(lVar19 + uVar15 * 8) = plVar1;
      if (*plVar18 != 0) {
        uVar13 = *(ulong *)(*plVar18 + 8);
        if ((uVar29 & uVar29 - 1) == 0) {
          uVar13 = uVar13 & uVar29 - 1;
        }
        else if (uVar29 <= uVar13) {
          uVar16 = 0;
          if (uVar29 != 0) {
            uVar16 = uVar13 / uVar29;
          }
          uVar13 = uVar13 - uVar16 * uVar29;
        }
        plVar17 = (long *)(*plVar25 + uVar13 * 8);
        goto LAB_02505c14;
      }
    }
    else {
      *plVar18 = *plVar17;
LAB_02505c14:
      *plVar17 = (long)plVar18;
    }
    plVar11[4] = plVar11[4] + 1;
LAB_02505c24:
    psVar24 = psVar24 + 0x30;
  } while (psVar24 != &local_80);
  lVar21 = FUN_008cca50();
  lVar19 = 0;
  do {
    lVar14 = FUN_008e8c90(plVar25,lVar21 + lVar19);
    if (lVar14 != 0) {
      FUN_008f2aec(&local_80,plVar25,lVar14);
      plVar1 = DAT_043f1798;
      lVar14 = CONCAT71(uStack_7f,local_80);
      local_80 = (string)0x0;
      uStack_7f = 0;
      if (lVar14 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar14 + 0x10) & 1) != 0)) &&
           (lVar28 = *(long *)(lVar14 + 0x20), lVar28 != 0)) {
          plVar18 = *(long **)(lVar6 + 0x20);
          if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
            *(long **)(lVar6 + 0x20) = DAT_043f1798;
            plVar18 = plVar1;
          }
          uVar15 = (**(code **)(*plVar18 + 0xc0))(plVar18);
          if ((uVar15 & 1) != 0) {
            if (*(char *)(lVar6 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar6 + 0x38d488) = 1;
              *(undefined8 *)(lVar6 + 0x38d478) = 0;
              *(undefined8 *)(lVar6 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar6 + 0x38d480)) {
              FUN_02bcc824(plVar18,lVar28,0,8);
              goto LAB_025061cc;
            }
          }
          (**(code **)(*plVar18 + 0x18))(plVar18,lVar28,0,8);
        }
LAB_025061cc:
        plVar1 = DAT_043f1798;
        plVar18 = *(long **)(lVar6 + 0x20);
        if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
          *(long **)(lVar6 + 0x20) = DAT_043f1798;
          plVar18 = plVar1;
        }
        uVar15 = (**(code **)(*plVar18 + 0xc0))(plVar18);
        if ((uVar15 & 1) != 0) {
          if (*(char *)(lVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar6 + 0x38d488) = 1;
            *(undefined8 *)(lVar6 + 0x38d478) = 0;
            *(undefined8 *)(lVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar6 + 0x38d480)) {
            FUN_02bcc824(plVar18,lVar14,0,8);
            goto LAB_025060c4;
          }
        }
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar14,0,8);
      }
    }
LAB_025060c4:
    lVar14 = local_a0;
    lVar19 = lVar19 + 0x18;
  } while (lVar19 != 0x300);
  *(undefined1 *)(plVar11 + 0xb) = 1;
  plVar1 = DAT_043f1798;
  lVar19 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar25 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar25 = plVar1;
    }
    uVar15 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar25,lVar14,0,8);
        plVar1 = DAT_043f1798;
        lVar19 = local_d0;
        goto joined_r0x02506358;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,lVar14,0,8);
    plVar1 = DAT_043f1798;
    lVar19 = local_d0;
  }
joined_r0x02506358:
  pcVar26 = local_100;
  local_d0 = lVar19;
  if (((local_e0 & 1) != 0) && (lVar19 != 0)) {
    plVar25 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar25 = plVar1;
    }
    uVar15 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar25,lVar19,0,8);
        plVar1 = DAT_043f1798;
        pcVar26 = local_100;
        goto joined_r0x02507210;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,lVar19,0,8);
    plVar1 = DAT_043f1798;
    pcVar26 = local_100;
  }
joined_r0x02507210:
  pcVar8 = local_130;
  local_100 = pcVar26;
  if (((local_110 & 1) != 0) && (pcVar26 != (char *)0x0)) {
    plVar25 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar25 = plVar1;
    }
    uVar15 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar25,pcVar26,0,8);
        plVar1 = DAT_043f1798;
        pcVar8 = local_130;
        goto joined_r0x025064c0;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,pcVar26,0,8);
    plVar1 = DAT_043f1798;
    pcVar8 = local_130;
  }
joined_r0x025064c0:
  pcVar26 = local_160;
  local_130 = pcVar8;
  if (((local_140 & 1) != 0) && (pcVar8 != (char *)0x0)) {
    plVar25 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar25 = plVar1;
    }
    uVar15 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar25,pcVar8,0,8);
        plVar1 = DAT_043f1798;
        pcVar26 = local_160;
        goto joined_r0x02507250;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,pcVar8,0,8);
    plVar1 = DAT_043f1798;
    pcVar26 = local_160;
  }
joined_r0x02507250:
  pcVar8 = local_190;
  local_160 = pcVar26;
  if (((local_170 & 1) != 0) && (pcVar26 != (char *)0x0)) {
    plVar25 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar25 = plVar1;
    }
    uVar15 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar25,pcVar26,0,8);
        plVar1 = DAT_043f1798;
        pcVar8 = local_190;
        goto joined_r0x02506628;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,pcVar26,0,8);
    plVar1 = DAT_043f1798;
    pcVar8 = local_190;
  }
joined_r0x02506628:
  pcVar26 = local_1c0;
  local_190 = pcVar8;
  if (((local_1a0 & 1) != 0) && (pcVar8 != (char *)0x0)) {
    plVar25 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar25 = plVar1;
    }
    uVar15 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar25,pcVar8,0,8);
        plVar1 = DAT_043f1798;
        pcVar26 = local_1c0;
        goto joined_r0x02507290;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,pcVar8,0,8);
    plVar1 = DAT_043f1798;
    pcVar26 = local_1c0;
  }
joined_r0x02507290:
  pcVar8 = local_1f0;
  local_1c0 = pcVar26;
  if (((local_1d0 & 1) != 0) && (pcVar26 != (char *)0x0)) {
    plVar25 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar25 = plVar1;
    }
    uVar15 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar25,pcVar26,0,8);
        plVar1 = DAT_043f1798;
        pcVar8 = local_1f0;
        goto joined_r0x02506790;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,pcVar26,0,8);
    plVar1 = DAT_043f1798;
    pcVar8 = local_1f0;
  }
joined_r0x02506790:
  pcVar26 = local_220;
  local_1f0 = pcVar8;
  if (((local_200 & 1) != 0) && (pcVar8 != (char *)0x0)) {
    plVar25 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar25 = plVar1;
    }
    uVar15 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar25,pcVar8,0,8);
        plVar1 = DAT_043f1798;
        pcVar26 = local_220;
        goto joined_r0x025072d0;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,pcVar8,0,8);
    plVar1 = DAT_043f1798;
    pcVar26 = local_220;
  }
joined_r0x025072d0:
  pcVar8 = local_250;
  local_220 = pcVar26;
  if (((local_230 & 1) != 0) && (pcVar26 != (char *)0x0)) {
    plVar25 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar25 = plVar1;
    }
    uVar15 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar25,pcVar26,0,8);
        plVar1 = DAT_043f1798;
        pcVar8 = local_250;
        goto joined_r0x025068f8;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,pcVar26,0,8);
    plVar1 = DAT_043f1798;
    pcVar8 = local_250;
  }
joined_r0x025068f8:
  pcVar26 = local_280;
  local_250 = pcVar8;
  if (((local_260 & 1) != 0) && (pcVar8 != (char *)0x0)) {
    plVar25 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar25 = plVar1;
    }
    uVar15 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar25,pcVar8,0,8);
        plVar1 = DAT_043f1798;
        pcVar26 = local_280;
        goto joined_r0x02507310;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,pcVar8,0,8);
    plVar1 = DAT_043f1798;
    pcVar26 = local_280;
  }
joined_r0x02507310:
  lVar19 = local_2b0;
  local_280 = pcVar26;
  if (((local_290 & 1) != 0) && (pcVar26 != (char *)0x0)) {
    plVar25 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar25 = plVar1;
    }
    uVar15 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar25,pcVar26,0,8);
        plVar1 = DAT_043f1798;
        lVar19 = local_2b0;
        goto joined_r0x02506a60;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,pcVar26,0,8);
    plVar1 = DAT_043f1798;
    lVar19 = local_2b0;
  }
joined_r0x02506a60:
  pcVar26 = local_2e0;
  local_2b0 = lVar19;
  if (((local_2c0 & 1) != 0) && (lVar19 != 0)) {
    plVar25 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar25 = plVar1;
    }
    uVar15 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar25,lVar19,0,8);
        plVar1 = DAT_043f1798;
        pcVar26 = local_2e0;
        goto joined_r0x02507350;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,lVar19,0,8);
    plVar1 = DAT_043f1798;
    pcVar26 = local_2e0;
  }
joined_r0x02507350:
  pvVar27 = local_310;
  local_2e0 = pcVar26;
  if (((local_2f0 & 1) != 0) && (pcVar26 != (char *)0x0)) {
    plVar25 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar25 = plVar1;
    }
    uVar15 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar25,pcVar26,0,8);
        plVar1 = DAT_043f1798;
        pvVar27 = local_310;
        goto joined_r0x02506bc8;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,pcVar26,0,8);
    plVar1 = DAT_043f1798;
    pvVar27 = local_310;
  }
joined_r0x02506bc8:
  pvVar7 = local_340;
  local_310 = pvVar27;
  if (((local_320 & 1) != 0) && (pvVar27 != (void *)0x0)) {
    plVar25 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar25 = plVar1;
    }
    uVar15 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar25,pvVar27,0,8);
        plVar1 = DAT_043f1798;
        pvVar7 = local_340;
        goto joined_r0x02507390;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,pvVar27,0,8);
    plVar1 = DAT_043f1798;
    pvVar7 = local_340;
  }
joined_r0x02507390:
  pvVar27 = local_370;
  local_340 = pvVar7;
  if (((local_350 & 1) != 0) && (pvVar7 != (void *)0x0)) {
    plVar25 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar25 = plVar1;
    }
    uVar15 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar25,pvVar7,0,8);
        plVar1 = DAT_043f1798;
        pvVar27 = local_370;
        goto joined_r0x02506d30;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,pvVar7,0,8);
    plVar1 = DAT_043f1798;
    pvVar27 = local_370;
  }
joined_r0x02506d30:
  pvVar7 = local_3a0;
  local_370 = pvVar27;
  if (((local_380 & 1) != 0) && (pvVar27 != (void *)0x0)) {
    plVar25 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar25 = plVar1;
    }
    uVar15 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar25,pvVar27,0,8);
        plVar1 = DAT_043f1798;
        pvVar7 = local_3a0;
        goto joined_r0x025073d0;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,pvVar27,0,8);
    plVar1 = DAT_043f1798;
    pvVar7 = local_3a0;
  }
joined_r0x025073d0:
  pvVar27 = local_3d0;
  local_3a0 = pvVar7;
  if (((local_3b0 & 1) != 0) && (pvVar7 != (void *)0x0)) {
    plVar25 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar25 = plVar1;
    }
    uVar15 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar25,pvVar7,0,8);
        plVar1 = DAT_043f1798;
        pvVar27 = local_3d0;
        goto joined_r0x02506e98;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,pvVar7,0,8);
    plVar1 = DAT_043f1798;
    pvVar27 = local_3d0;
  }
joined_r0x02506e98:
  lVar19 = local_400;
  local_3d0 = pvVar27;
  if ((((byte)local_3e0 & 1) != 0) && (pvVar27 != (void *)0x0)) {
    plVar25 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar25 = plVar1;
    }
    uVar15 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar25,pvVar27,0,8);
        plVar1 = DAT_043f1798;
        lVar19 = local_400;
        goto joined_r0x02507410;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,pvVar27,0,8);
    plVar1 = DAT_043f1798;
    lVar19 = local_400;
  }
joined_r0x02507410:
  lVar21 = local_430;
  local_400 = lVar19;
  if (((local_410 & 1) != 0) && (lVar19 != 0)) {
    plVar25 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar25 = plVar1;
    }
    uVar15 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar25,lVar19,0,8);
        plVar1 = DAT_043f1798;
        lVar21 = local_430;
        goto joined_r0x02507000;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,lVar19,0,8);
    plVar1 = DAT_043f1798;
    lVar21 = local_430;
  }
joined_r0x02507000:
  DAT_043f1798 = plVar1;
  local_430 = lVar21;
  if ((((byte)local_440 & 1) != 0) && (lVar21 != 0)) {
    plVar25 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar25 = plVar1;
    }
    uVar15 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar25,lVar21,0,8);
        goto LAB_025070b0;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,lVar21,0,8);
  }
LAB_025070b0:
  uVar23 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar23);
  (**(code **)*plVar11)(plVar11,uVar23);
  (**(code **)(*plVar11 + 0x10))(plVar11);
  pcVar26 = (char *)((ulong)&local_508 | 1);
  if ((local_508 & 1) != 0) {
    pcVar26 = local_4f8;
  }
  FUN_001522a0(uVar23,pcVar26);
  pcVar26 = local_4f8;
  plVar1 = DAT_043f1798;
  if (((local_508 & 1) != 0) && (local_4f8 != (char *)0x0)) {
    plVar11 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar11 = plVar1;
    }
    uVar15 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar11,pcVar26,0,8);
        return;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,pcVar26,0,8);
  }
  return;
}


