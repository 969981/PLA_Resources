/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02026440; name: FUN_02026440
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02026440(long param_1)

{
  long lVar1;
  long *plVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  byte local_398;
  undefined7 uStack_397;
  char local_390;
  undefined7 uStack_38f;
  char local_388;
  undefined2 uStack_387;
  undefined5 uStack_385;
  byte local_380;
  char local_37f [8];
  undefined2 local_377;
  undefined1 local_375;
  undefined4 local_374;
  long local_370;
  undefined1 *puStack_368;
  undefined1 *local_360;
  undefined4 local_358;
  byte local_350;
  char local_34f [8];
  undefined1 local_347;
  undefined4 local_346;
  undefined2 local_342;
  long local_340;
  undefined1 *puStack_338;
  undefined1 *local_330;
  undefined4 local_328;
  byte local_320;
  undefined4 local_31f;
  undefined2 local_31b;
  undefined1 local_319;
  undefined8 local_318;
  char *local_310;
  undefined1 *local_308;
  undefined1 *puStack_300;
  undefined4 local_2f8;
  byte local_2f0;
  char local_2ef [7];
  char cStack_2e8;
  char acStack_2e7 [7];
  long local_2e0;
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
  char local_25f [7];
  char cStack_258;
  char acStack_257 [7];
  long local_250;
  undefined1 *local_248;
  undefined1 *puStack_240;
  undefined4 local_238;
  byte local_230;
  char local_22f [7];
  char cStack_228;
  char acStack_227 [7];
  long local_220;
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
  long local_80 [2];
  char local_70;
  
  plVar2 = DAT_043f1798;
  local_398 = 0x22;
  uStack_385 = 0;
  uStack_38f = s_EventLandmarkDesc_038cda7f._8_7_;
  local_388 = s_EventLandmarkDesc_038cda7f[0xf];
  uStack_397 = s_EventLandmarkDesc_038cda7f._0_7_;
  local_390 = s_EventLandmarkDesc_038cda7f[7];
  uStack_387 = 99;
  lVar1 = tpidr_el0;
  plVar10 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar10 = plVar2;
  }
  plVar6 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x180,8);
  plVar6[4] = 0;
  plVar14 = plVar6 + 1;
  *plVar14 = 0;
  *(undefined4 *)(plVar6 + 5) = 0x3f800000;
  plVar6[10] = 0;
  plVar6[6] = (long)FUN_02035e00;
  plVar6[7] = (long)FUN_02035eb0;
  *plVar6 = (long)&PTR_FUN_0425b2b8;
  plVar6[0xc] = (long)"ballHitPos";
  plVar6[0xd] = 0x50;
  plVar6[0xe] = (long)"eventType";
  plVar6[0xf] = 0x60;
  plVar6[0x14] = (long)&LAB_0202845c;
  plVar6[0x15] = 0;
  plVar6[0x16] = (long)"__haxe_export_GetBuddy";
  plVar6[0x17] = (long)"GetBuddyController";
  plVar6[0x18] = (long)"__haxe_export_GetBuddyAnimationController";
  plVar6[0x19] = (long)"__haxe_export_GetBuddyTranslation";
  plVar6[0x1a] = (long)&LAB_02028524;
  plVar6[0x1b] = 0;
  plVar6[0x1c] = (long)"__haxe_export_GetBuddyRotation";
  plVar6[0x1d] = (long)&LAB_020285ec;
  plVar6[0x1e] = 0;
  plVar6[0x1f] = (long)"__haxe_export_GetLandmark";
  plVar6[0x20] = (long)"__haxe_export_GetLandmarkTranslation";
  plVar6[0x21] = (long)&LAB_020286b8;
  plVar6[0x22] = 0;
  plVar6[0x23] = (long)"__haxe_export_GetPlayerInputInfoHandler";
  plVar6[0x24] = (long)&DAT_038ca815;
  plVar6[0x25] = (long)&DAT_0392da3c;
  plVar6[0x28] = (long)FUN_02036084;
  plVar6[0x29] = (long)&LAB_02036364;
  plVar6[0x2a] = (long)&LAB_02028fa0;
  plVar6[0x2b] = (long)&LAB_02028fb0;
  *(undefined1 *)(plVar6 + 0xb) = 0;
  *(undefined1 *)(plVar6 + 0x2e) = 1;
  plVar6[0x2f] = 0;
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  plVar6[0x10] = (long)"__haxe_export_GetPlayer";
  plVar6[0x11] = (long)"GetPlayerController";
  plVar6[0x12] = (long)"__haxe_export_GetPlayerAnimationController";
  plVar6[0x13] = (long)"__haxe_export_GetPlayerTranslation";
  plVar6[0x26] = 0;
  plVar6[0x27] = 0;
  plVar6[0x2c] = 0;
  plVar6[0x2d] = 0;
  plVar2 = DAT_043f1798;
  local_37f[0] = s_ballHitPos_038a626f[0];
  local_37f[1] = s_ballHitPos_038a626f[1];
  local_37f[2] = s_ballHitPos_038a626f[2];
  local_37f[3] = s_ballHitPos_038a626f[3];
  local_37f[4] = s_ballHitPos_038a626f[4];
  local_37f[5] = s_ballHitPos_038a626f[5];
  local_37f[6] = s_ballHitPos_038a626f[6];
  local_37f[7] = s_ballHitPos_038a626f[7];
  local_380 = 0x14;
  local_377 = 0x736f;
  local_34f[0] = s_eventType_03900057[0];
  local_34f[1] = s_eventType_03900057[1];
  local_34f[2] = s_eventType_03900057[2];
  local_34f[3] = s_eventType_03900057[3];
  local_34f[4] = s_eventType_03900057[4];
  local_34f[5] = s_eventType_03900057[5];
  local_34f[6] = s_eventType_03900057[6];
  local_34f[7] = s_eventType_03900057[7];
  local_375 = 0;
  local_374 = 0;
  local_360 = &LAB_0203665c;
  local_358 = 0xffffffff;
  local_346 = 0;
  local_342 = 0;
  local_328 = 0xffffffff;
  local_370 = 0;
  puStack_368 = &LAB_02036640;
  local_350 = 0x12;
  local_347 = 0x65;
  local_330 = &LAB_02036694;
  local_340 = 0;
  puStack_338 = &LAB_02036678;
  plVar10 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar10 = plVar2;
  }
  local_310 = (char *)(**(code **)(*plVar10 + 0x10))(plVar10,0x20,8);
  local_310[0x17] = '\0';
  uVar13 = CONCAT17(s___haxe_export_GetPlayer_039a5722[0xf],s___haxe_export_GetPlayer_039a5722._8_7_
                   );
  *(undefined8 *)local_310 = s___haxe_export_GetPlayer_039a5722._0_8_;
  *(undefined8 *)(local_310 + 8) = uVar13;
  *(ulong *)(local_310 + 0xf) =
       CONCAT71(s___haxe_export_GetPlayer_039a5722._16_7_,s___haxe_export_GetPlayer_039a5722[0xf]);
  plVar2 = DAT_043f1798;
  local_320 = 0x21;
  local_318 = 0x17;
  local_308 = &LAB_020366b0;
  puStack_300 = &LAB_020366f8;
  local_2f0 = 0x26;
  local_319 = 0;
  local_31b = 0;
  local_31f = 0;
  local_2f8 = 0xffffffff;
  local_2ef[0] = s_GetPlayerController_039a573a[0];
  local_2ef[1] = s_GetPlayerController_039a573a[1];
  local_2ef[2] = s_GetPlayerController_039a573a[2];
  local_2ef[3] = s_GetPlayerController_039a573a[3];
  local_2ef[4] = s_GetPlayerController_039a573a[4];
  local_2ef[5] = s_GetPlayerController_039a573a[5];
  local_2ef[6] = s_GetPlayerController_039a573a[6];
  cStack_2e8 = s_GetPlayerController_039a573a[7];
  acStack_2e7[0] = s_GetPlayerController_039a573a[8];
  acStack_2e7[1] = s_GetPlayerController_039a573a[9];
  acStack_2e7[2] = s_GetPlayerController_039a573a[10];
  acStack_2e7[3] = s_GetPlayerController_039a573a[0xb];
  acStack_2e7[4] = s_GetPlayerController_039a573a[0xc];
  acStack_2e7[5] = s_GetPlayerController_039a573a[0xd];
  acStack_2e7[6] = s_GetPlayerController_039a573a[0xe];
  local_2e0 = 0x72656c6c;
  local_2c8 = 0xffffffff;
  local_2d8 = &LAB_02036740;
  puStack_2d0 = &LAB_02036788;
  plVar10 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar10 = plVar2;
  }
  local_2b0 = (char *)(**(code **)(*plVar10 + 0x10))(plVar10,0x30,8);
  local_2b0[0x28] = 'e';
  uVar13 = s___haxe_export_GetPlayerAnimation_0397f7f5._8_8_;
  local_2b0[0x29] = 'r';
  *(undefined8 *)local_2b0 = s___haxe_export_GetPlayerAnimation_0397f7f5._0_8_;
  *(undefined8 *)(local_2b0 + 8) = uVar13;
  uVar13 = s___haxe_export_GetPlayerAnimation_0397f7f5._24_8_;
  *(undefined8 *)(local_2b0 + 0x10) = s___haxe_export_GetPlayerAnimation_0397f7f5._16_8_;
  uVar5 = s___haxe_export_GetPlayerAnimation_0397f7f5._32_8_;
  *(undefined8 *)(local_2b0 + 0x18) = uVar13;
  *(undefined8 *)(local_2b0 + 0x20) = uVar5;
  local_2b0[0x2a] = '\0';
  plVar2 = DAT_043f1798;
  local_2c0 = 0x31;
  local_2bb = 0;
  local_2bf = 0;
  local_2b9 = 0;
  local_2b8 = 0x2a;
  local_2a8 = &LAB_020367d0;
  puStack_2a0 = &LAB_02036818;
  local_298 = 0xffffffff;
  plVar10 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar10 = plVar2;
  }
  local_280 = (char *)(**(code **)(*plVar10 + 0x10))(plVar10,0x30,8);
  local_280[0x20] = 'o';
  uVar13 = s___haxe_export_GetPlayerTranslati_039b671a._8_8_;
  local_280[0x21] = 'n';
  *(undefined8 *)local_280 = s___haxe_export_GetPlayerTranslati_039b671a._0_8_;
  *(undefined8 *)(local_280 + 8) = uVar13;
  uVar5 = s___haxe_export_GetPlayerTranslati_039b671a._24_8_;
  uVar13 = s___haxe_export_GetPlayerTranslati_039b671a._16_8_;
  local_280[0x22] = '\0';
  *(undefined8 *)(local_280 + 0x10) = uVar13;
  *(undefined8 *)(local_280 + 0x18) = uVar5;
  plVar2 = DAT_043f1798;
  local_290 = 0x31;
  local_28b = 0;
  local_28f = 0;
  local_289 = 0;
  local_288 = 0x22;
  local_278 = &LAB_02036860;
  puStack_270 = &LAB_020368a8;
  local_260 = 0x2c;
  local_268 = 0xffffffff;
  local_25f[0] = s___haxe_export_GetBuddy_038e0c08[0];
  local_25f[1] = s___haxe_export_GetBuddy_038e0c08[1];
  local_25f[2] = s___haxe_export_GetBuddy_038e0c08[2];
  local_25f[3] = s___haxe_export_GetBuddy_038e0c08[3];
  local_25f[4] = s___haxe_export_GetBuddy_038e0c08[4];
  local_25f[5] = s___haxe_export_GetBuddy_038e0c08[5];
  local_25f[6] = s___haxe_export_GetBuddy_038e0c08[6];
  local_238 = 0xffffffff;
  cStack_258 = s___haxe_export_GetBuddy_038e0c08[7];
  acStack_257[0] = s___haxe_export_GetBuddy_038e0c08[8];
  acStack_257[1] = s___haxe_export_GetBuddy_038e0c08[9];
  acStack_257[2] = s___haxe_export_GetBuddy_038e0c08[10];
  acStack_257[3] = s___haxe_export_GetBuddy_038e0c08[0xb];
  acStack_257[4] = s___haxe_export_GetBuddy_038e0c08[0xc];
  acStack_257[5] = s___haxe_export_GetBuddy_038e0c08[0xd];
  acStack_257[6] = s___haxe_export_GetBuddy_038e0c08[0xe];
  local_250 = 0x79646475427465;
  local_248 = &LAB_020368f0;
  puStack_240 = &LAB_02036938;
  local_230 = 0x24;
  local_22f[0] = s_GetBuddyController_0390a981[0];
  local_22f[1] = s_GetBuddyController_0390a981[1];
  local_22f[2] = s_GetBuddyController_0390a981[2];
  local_22f[3] = s_GetBuddyController_0390a981[3];
  local_22f[4] = s_GetBuddyController_0390a981[4];
  local_22f[5] = s_GetBuddyController_0390a981[5];
  local_22f[6] = s_GetBuddyController_0390a981[6];
  cStack_228 = s_GetBuddyController_0390a981[7];
  acStack_227[0] = s_GetBuddyController_0390a981[8];
  acStack_227[1] = s_GetBuddyController_0390a981[9];
  acStack_227[2] = s_GetBuddyController_0390a981[10];
  acStack_227[3] = s_GetBuddyController_0390a981[0xb];
  acStack_227[4] = s_GetBuddyController_0390a981[0xc];
  acStack_227[5] = s_GetBuddyController_0390a981[0xd];
  acStack_227[6] = s_GetBuddyController_0390a981[0xe];
  local_220 = 0x72656c;
  local_218 = &LAB_02036980;
  puStack_210 = &LAB_020369c8;
  local_208 = 0xffffffff;
  plVar10 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar10 = plVar2;
  }
  local_1f0 = (char *)(**(code **)(*plVar10 + 0x10))(plVar10,0x30,8);
  local_1f0[0x28] = 'r';
  uVar13 = s___haxe_export_GetBuddyAnimationC_038b9bb1._8_8_;
  *(undefined8 *)local_1f0 = s___haxe_export_GetBuddyAnimationC_038b9bb1._0_8_;
  *(undefined8 *)(local_1f0 + 8) = uVar13;
  uVar13 = s___haxe_export_GetBuddyAnimationC_038b9bb1._24_8_;
  *(undefined8 *)(local_1f0 + 0x10) = s___haxe_export_GetBuddyAnimationC_038b9bb1._16_8_;
  uVar5 = s___haxe_export_GetBuddyAnimationC_038b9bb1._32_8_;
  *(undefined8 *)(local_1f0 + 0x18) = uVar13;
  *(undefined8 *)(local_1f0 + 0x20) = uVar5;
  local_1f0[0x29] = '\0';
  plVar2 = DAT_043f1798;
  local_200 = 0x31;
  local_1f9 = 0;
  local_1fb = 0;
  local_1ff = 0;
  local_1f8 = 0x29;
  local_1e8 = &LAB_02036a10;
  puStack_1e0 = &LAB_02036a58;
  local_1d8 = 0xffffffff;
  plVar10 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar10 = plVar2;
  }
  local_1c0 = (char *)(**(code **)(*plVar10 + 0x10))(plVar10,0x30,8);
  local_1c0[0x20] = 'n';
  uVar13 = s___haxe_export_GetBuddyTranslatio_038aff83._8_8_;
  *(undefined8 *)local_1c0 = s___haxe_export_GetBuddyTranslatio_038aff83._0_8_;
  *(undefined8 *)(local_1c0 + 8) = uVar13;
  uVar13 = s___haxe_export_GetBuddyTranslatio_038aff83._24_8_;
  *(undefined8 *)(local_1c0 + 0x10) = s___haxe_export_GetBuddyTranslatio_038aff83._16_8_;
  *(undefined8 *)(local_1c0 + 0x18) = uVar13;
  local_1c0[0x21] = '\0';
  plVar2 = DAT_043f1798;
  local_1d0 = 0x31;
  local_1c9 = 0;
  local_1cb = 0;
  local_1cf = 0;
  local_1c8 = 0x21;
  local_1b8 = &LAB_02036aa0;
  puStack_1b0 = &LAB_02036ae8;
  local_1a8 = 0xffffffff;
  plVar10 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar10 = plVar2;
  }
  local_190 = (char *)(**(code **)(*plVar10 + 0x10))(plVar10,0x20,8);
  local_190[0x1e] = '\0';
  uVar5 = s___haxe_export_GetBuddyRotation_038affa5._8_8_;
  *(undefined8 *)local_190 = s___haxe_export_GetBuddyRotation_038affa5._0_8_;
  *(ulong *)(local_190 + 0x16) =
       CONCAT62(s___haxe_export_GetBuddyRotation_038affa5._24_6_,
                s___haxe_export_GetBuddyRotation_038affa5._22_2_);
  uVar13 = CONCAT26(s___haxe_export_GetBuddyRotation_038affa5._22_2_,
                    s___haxe_export_GetBuddyRotation_038affa5._16_6_);
  *(undefined8 *)(local_190 + 8) = uVar5;
  *(undefined8 *)(local_190 + 0x10) = uVar13;
  plVar2 = DAT_043f1798;
  local_1a0 = 0x21;
  local_199 = 0;
  local_19b = 0;
  local_19f = 0;
  local_198 = 0x1e;
  local_180 = &LAB_02036b78;
  local_178 = 0xffffffff;
  local_188 = &LAB_02036b30;
  plVar10 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar10 = plVar2;
  }
  local_160 = (char *)(**(code **)(*plVar10 + 0x10))(plVar10,0x20,8);
  local_160[0x18] = 'k';
  local_160[0x19] = '\0';
  uVar13 = s___haxe_export_GetLandmark_039894fc._8_8_;
  *(undefined8 *)local_160 = s___haxe_export_GetLandmark_039894fc._0_8_;
  uVar5 = s___haxe_export_GetLandmark_039894fc._16_8_;
  *(undefined8 *)(local_160 + 8) = uVar13;
  *(undefined8 *)(local_160 + 0x10) = uVar5;
  plVar2 = DAT_043f1798;
  local_170 = 0x21;
  local_169 = 0;
  local_16b = 0;
  local_16f = 0;
  local_168 = 0x19;
  local_150 = &LAB_02036c08;
  local_148 = 0xffffffff;
  local_158 = &LAB_02036bc0;
  plVar10 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar10 = plVar2;
  }
  uVar11 = (ulong)&local_398 | 1;
  local_130 = (char *)(**(code **)(*plVar10 + 0x10))(plVar10,0x30,8);
  local_130[0x20] = 't';
  uVar13 = s___haxe_export_GetLandmarkTransla_038c36df._8_8_;
  local_130[0x21] = 'i';
  local_130[0x22] = 'o';
  local_130[0x23] = 'n';
  *(undefined8 *)local_130 = s___haxe_export_GetLandmarkTransla_038c36df._0_8_;
  *(undefined8 *)(local_130 + 8) = uVar13;
  uVar5 = s___haxe_export_GetLandmarkTransla_038c36df._24_8_;
  uVar13 = s___haxe_export_GetLandmarkTransla_038c36df._16_8_;
  local_130[0x24] = '\0';
  *(undefined8 *)(local_130 + 0x10) = uVar13;
  *(undefined8 *)(local_130 + 0x18) = uVar5;
  plVar2 = DAT_043f1798;
  local_140 = 0x31;
  local_139 = 0;
  local_13b = 0;
  local_13f = 0;
  local_138 = 0x24;
  local_120 = &LAB_02036c98;
  local_118 = 0xffffffff;
  local_128 = &LAB_02036c50;
  plVar10 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar10 = plVar2;
  }
  local_100 = (char *)(**(code **)(*plVar10 + 0x10))(plVar10,0x30,8);
  uVar13 = s___haxe_export_GetPlayerInputInfo_038a6961._8_8_;
  *(undefined8 *)local_100 = s___haxe_export_GetPlayerInputInfo_038a6961._0_8_;
  *(undefined8 *)(local_100 + 8) = uVar13;
  uVar13 = CONCAT17(s___haxe_export_GetPlayerInputInfo_038a6961[0x1f],
                    s___haxe_export_GetPlayerInputInfo_038a6961._24_7_);
  *(undefined8 *)(local_100 + 0x10) = s___haxe_export_GetPlayerInputInfo_038a6961._16_8_;
  *(undefined8 *)(local_100 + 0x18) = uVar13;
  *(ulong *)(local_100 + 0x1f) =
       CONCAT71(s___haxe_export_GetPlayerInputInfo_038a6961._32_7_,
                s___haxe_export_GetPlayerInputInfo_038a6961[0x1f]);
  local_100[0x27] = '\0';
  local_110 = 0x31;
  local_109 = 0;
  local_10b = 0;
  local_10f = 0;
  local_108 = 0x27;
  local_f0 = &LAB_02036d28;
  local_e8 = 0xffffffff;
  local_f8 = &LAB_02036ce0;
  local_e0 = 6;
  local_dd = 0x77;
  local_df = 0x656e;
  local_d4 = 0;
  local_dc = 0;
  local_c0 = &LAB_02036db8;
  local_d0 = 0;
  local_b8 = 0xffffffff;
  local_b0 = 8;
  local_c8 = &LAB_02036d70;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_a0 = 0;
  local_90 = &LAB_02036e48;
  local_98 = &LAB_02036e00;
  local_88 = 0xffffffff;
  FUN_02029280(plVar14,&local_380,0x10);
  lVar7 = FUN_008cca50();
  lVar12 = 0;
  do {
    lVar8 = FUN_008e8c90(plVar14,lVar7 + lVar12);
    if (lVar8 != 0) {
      FUN_008f2aec(local_80,plVar14,lVar8);
      lVar8 = local_80[0];
      plVar2 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar8 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar8 + 0x10) & 1) != 0)) &&
           (lVar15 = *(long *)(lVar8 + 0x20), lVar15 != 0)) {
          plVar10 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar10 = plVar2;
          }
          uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
          if ((uVar9 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar10,lVar15,0,8);
              goto LAB_02026ea0;
            }
          }
          (**(code **)(*plVar10 + 0x18))(plVar10,lVar15,0,8);
        }
LAB_02026ea0:
        plVar2 = DAT_043f1798;
        plVar10 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar10 = plVar2;
        }
        uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
        if ((uVar9 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar10,lVar8,0,8);
            goto LAB_02026e58;
          }
        }
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,0,8);
      }
    }
LAB_02026e58:
    lVar8 = local_a0;
    lVar12 = lVar12 + 0x18;
  } while (lVar12 != 0x300);
  *(undefined1 *)(plVar6 + 0xb) = 1;
  plVar2 = DAT_043f1798;
  lVar12 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar10 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar10 = plVar2;
    }
    uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar9 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar10,lVar8,0,8);
        plVar2 = DAT_043f1798;
        lVar12 = local_d0;
        goto joined_r0x02026fd8;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,0,8);
    plVar2 = DAT_043f1798;
    lVar12 = local_d0;
  }
joined_r0x02026fd8:
  pcVar3 = local_100;
  local_d0 = lVar12;
  if (((local_e0 & 1) != 0) && (lVar12 != 0)) {
    plVar10 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar10 = plVar2;
    }
    uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar9 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar10,lVar12,0,8);
        plVar2 = DAT_043f1798;
        pcVar3 = local_100;
        goto joined_r0x02027c40;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar12,0,8);
    plVar2 = DAT_043f1798;
    pcVar3 = local_100;
  }
joined_r0x02027c40:
  pcVar4 = local_130;
  local_100 = pcVar3;
  if (((local_110 & 1) != 0) && (pcVar3 != (char *)0x0)) {
    plVar10 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar10 = plVar2;
    }
    uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar9 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar10,pcVar3,0,8);
        plVar2 = DAT_043f1798;
        pcVar4 = local_130;
        goto joined_r0x02027138;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,pcVar3,0,8);
    plVar2 = DAT_043f1798;
    pcVar4 = local_130;
  }
joined_r0x02027138:
  pcVar3 = local_160;
  local_130 = pcVar4;
  if (((local_140 & 1) != 0) && (pcVar4 != (char *)0x0)) {
    plVar10 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar10 = plVar2;
    }
    uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar9 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar10,pcVar4,0,8);
        plVar2 = DAT_043f1798;
        pcVar3 = local_160;
        goto joined_r0x02027c80;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,pcVar4,0,8);
    plVar2 = DAT_043f1798;
    pcVar3 = local_160;
  }
joined_r0x02027c80:
  pcVar4 = local_190;
  local_160 = pcVar3;
  if (((local_170 & 1) != 0) && (pcVar3 != (char *)0x0)) {
    plVar10 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar10 = plVar2;
    }
    uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar9 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar10,pcVar3,0,8);
        plVar2 = DAT_043f1798;
        pcVar4 = local_190;
        goto joined_r0x02027298;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,pcVar3,0,8);
    plVar2 = DAT_043f1798;
    pcVar4 = local_190;
  }
joined_r0x02027298:
  pcVar3 = local_1c0;
  local_190 = pcVar4;
  if (((local_1a0 & 1) != 0) && (pcVar4 != (char *)0x0)) {
    plVar10 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar10 = plVar2;
    }
    uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar9 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar10,pcVar4,0,8);
        plVar2 = DAT_043f1798;
        pcVar3 = local_1c0;
        goto joined_r0x02027cc0;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,pcVar4,0,8);
    plVar2 = DAT_043f1798;
    pcVar3 = local_1c0;
  }
joined_r0x02027cc0:
  pcVar4 = local_1f0;
  local_1c0 = pcVar3;
  if (((local_1d0 & 1) != 0) && (pcVar3 != (char *)0x0)) {
    plVar10 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar10 = plVar2;
    }
    uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar9 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar10,pcVar3,0,8);
        plVar2 = DAT_043f1798;
        pcVar4 = local_1f0;
        goto joined_r0x020273f8;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,pcVar3,0,8);
    plVar2 = DAT_043f1798;
    pcVar4 = local_1f0;
  }
joined_r0x020273f8:
  lVar12 = local_220;
  local_1f0 = pcVar4;
  if (((local_200 & 1) != 0) && (pcVar4 != (char *)0x0)) {
    plVar10 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar10 = plVar2;
    }
    uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar9 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar10,pcVar4,0,8);
        plVar2 = DAT_043f1798;
        lVar12 = local_220;
        goto joined_r0x02027d00;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,pcVar4,0,8);
    plVar2 = DAT_043f1798;
    lVar12 = local_220;
  }
joined_r0x02027d00:
  lVar7 = local_250;
  local_220 = lVar12;
  if (((local_230 & 1) != 0) && (lVar12 != 0)) {
    plVar10 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar10 = plVar2;
    }
    uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar9 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar10,lVar12,0,8);
        plVar2 = DAT_043f1798;
        lVar7 = local_250;
        goto joined_r0x02027558;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar12,0,8);
    plVar2 = DAT_043f1798;
    lVar7 = local_250;
  }
joined_r0x02027558:
  pcVar3 = local_280;
  local_250 = lVar7;
  if (((local_260 & 1) != 0) && (lVar7 != 0)) {
    plVar10 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar10 = plVar2;
    }
    uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar9 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar10,lVar7,0,8);
        plVar2 = DAT_043f1798;
        pcVar3 = local_280;
        goto joined_r0x02027d40;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar7,0,8);
    plVar2 = DAT_043f1798;
    pcVar3 = local_280;
  }
joined_r0x02027d40:
  pcVar4 = local_2b0;
  local_280 = pcVar3;
  if (((local_290 & 1) != 0) && (pcVar3 != (char *)0x0)) {
    plVar10 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar10 = plVar2;
    }
    uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar9 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar10,pcVar3,0,8);
        plVar2 = DAT_043f1798;
        pcVar4 = local_2b0;
        goto joined_r0x020276b8;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,pcVar3,0,8);
    plVar2 = DAT_043f1798;
    pcVar4 = local_2b0;
  }
joined_r0x020276b8:
  lVar12 = local_2e0;
  local_2b0 = pcVar4;
  if (((local_2c0 & 1) != 0) && (pcVar4 != (char *)0x0)) {
    plVar10 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar10 = plVar2;
    }
    uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar9 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar10,pcVar4,0,8);
        plVar2 = DAT_043f1798;
        lVar12 = local_2e0;
        goto joined_r0x02027d80;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,pcVar4,0,8);
    plVar2 = DAT_043f1798;
    lVar12 = local_2e0;
  }
joined_r0x02027d80:
  pcVar3 = local_310;
  local_2e0 = lVar12;
  if (((local_2f0 & 1) != 0) && (lVar12 != 0)) {
    plVar10 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar10 = plVar2;
    }
    uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar9 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar10,lVar12,0,8);
        plVar2 = DAT_043f1798;
        pcVar3 = local_310;
        goto joined_r0x02027818;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar12,0,8);
    plVar2 = DAT_043f1798;
    pcVar3 = local_310;
  }
joined_r0x02027818:
  lVar12 = local_340;
  local_310 = pcVar3;
  if (((local_320 & 1) != 0) && (pcVar3 != (char *)0x0)) {
    plVar10 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar10 = plVar2;
    }
    uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar9 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar10,pcVar3,0,8);
        plVar2 = DAT_043f1798;
        lVar12 = local_340;
        goto joined_r0x02027dc0;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,pcVar3,0,8);
    plVar2 = DAT_043f1798;
    lVar12 = local_340;
  }
joined_r0x02027dc0:
  lVar7 = local_370;
  local_340 = lVar12;
  if (((local_350 & 1) != 0) && (lVar12 != 0)) {
    plVar10 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar10 = plVar2;
    }
    uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar9 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar10,lVar12,0,8);
        plVar2 = DAT_043f1798;
        lVar7 = local_370;
        goto joined_r0x02027978;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar12,0,8);
    plVar2 = DAT_043f1798;
    lVar7 = local_370;
  }
joined_r0x02027978:
  DAT_043f1798 = plVar2;
  local_370 = lVar7;
  if (((local_380 & 1) != 0) && (lVar7 != 0)) {
    plVar10 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar10 = plVar2;
    }
    uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar9 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar10,lVar7,0,8);
        goto LAB_02027a24;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar7,0,8);
  }
LAB_02027a24:
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar13);
  (**(code **)*plVar6)(plVar6,uVar13);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  if ((local_398 & 1) != 0) {
    uVar11 = CONCAT53(uStack_385,CONCAT21(uStack_387,local_388));
  }
  FUN_001522a0(uVar13,uVar11);
  plVar2 = DAT_043f1798;
  if (((local_398 & 1) != 0) &&
     (lVar12 = CONCAT53(uStack_385,CONCAT21(uStack_387,local_388)), lVar12 != 0)) {
    plVar10 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar10 = plVar2;
    }
    uVar11 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar10,lVar12,0,8);
        return;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar12,0,8);
  }
  return;
}


