/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020b1670; name: FUN_020b1670
 */


void FUN_020b1670(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 local_420;
  undefined8 local_418;
  code *pcStack_410;
  undefined8 local_408;
  code *pcStack_400;
  undefined8 local_3f8;
  code *pcStack_3f0;
  undefined8 local_3e8;
  undefined1 *puStack_3e0;
  undefined8 local_3d8;
  code *local_3d0;
  undefined8 local_3c8;
  code *local_3c0;
  undefined8 local_3b8;
  code *local_3b0;
  undefined8 local_3a8;
  undefined1 *local_3a0;
  undefined8 local_398;
  code *local_390;
  undefined8 local_388;
  code *local_380;
  undefined8 local_378;
  code *local_370;
  undefined8 local_368;
  code *local_360;
  undefined8 local_358;
  code *local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined1 *local_330;
  undefined8 local_328;
  undefined1 *local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined1 *local_1d0;
  undefined8 local_1c8;
  code *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined1 *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  plVar4 = DAT_043f1798;
  local_118 = 1;
  local_50 = 0xf0;
  uStack_48 = 1;
  local_60 = 0xf8;
  uStack_58 = 1;
  local_1d0 = &LAB_01a51060;
  local_350 = FUN_01a56fa4;
  local_380 = FUN_01a57b48;
  local_3b0 = FUN_01a587a0;
  local_128 = 1;
  local_138 = 1;
  local_148 = 1;
  local_158 = 1;
  local_168 = 1;
  local_178 = 0;
  local_188 = 1;
  local_198 = 1;
  local_1a8 = 1;
  local_1b8 = 0;
  local_1c8 = 0;
  local_1d8 = 1;
  local_1e8 = 1;
  local_1f8 = 1;
  local_208 = 1;
  local_218 = 1;
  local_228 = 1;
  local_238 = 1;
  local_248 = 1;
  local_258 = 1;
  local_268 = 1;
  local_278 = 1;
  local_288 = 1;
  local_298 = 1;
  local_2a8 = 1;
  local_2b8 = 1;
  local_2c8 = 1;
  local_2d8 = 1;
  local_2e8 = 1;
  local_2f8 = 1;
  local_308 = 1;
  local_318 = 0;
  local_328 = 0;
  local_338 = 1;
  local_348 = 0;
  local_358 = 0;
  local_368 = 0;
  local_378 = 0;
  local_388 = 0;
  local_398 = 0;
  local_3a8 = 0;
  local_3b8 = 0;
  local_3c8 = 0;
  local_3d8 = 0;
  local_70 = 0x100;
  uStack_68 = 1;
  local_80 = 0x110;
  uStack_78 = 1;
  local_90 = 0x118;
  uStack_88 = 1;
  local_a0 = 0x128;
  uStack_98 = 1;
  local_b0 = 0x130;
  uStack_a8 = 1;
  local_c0 = 0x140;
  uStack_b8 = 1;
  local_d0 = 0x148;
  uStack_c8 = 1;
  local_e0 = 0x158;
  uStack_d8 = 1;
  local_f0 = 0x160;
  uStack_e8 = 1;
  local_100 = 0x168;
  uStack_f8 = 1;
  local_110 = 0x170;
  uStack_108 = 1;
  local_120 = 0x178;
  local_130 = 0x180;
  local_140 = 0x188;
  local_150 = 400;
  local_160 = 0x198;
  local_170 = 0x1a0;
  local_180 = &LAB_01a50594;
  local_190 = 0x1d0;
  local_1a0 = 0x1d8;
  local_1b0 = 0x1e0;
  local_1c0 = FUN_01a50d98;
  local_1e0 = 0x1f0;
  local_1f0 = 0x1f8;
  local_200 = 0x200;
  local_210 = 0x208;
  local_220 = 0x210;
  local_230 = 0x218;
  local_240 = 0x220;
  local_250 = 0x230;
  local_260 = 0x238;
  local_270 = 0x240;
  local_280 = 0x250;
  local_290 = 600;
  local_2a0 = 0x260;
  local_2b0 = 0x268;
  local_2c0 = 0x278;
  local_2d0 = 0x280;
  local_2e0 = 0x288;
  local_2f0 = 0x290;
  local_300 = 0x2b0;
  local_310 = 0x2d0;
  local_320 = &LAB_01a55fe0;
  local_330 = &LAB_01a566e0;
  local_340 = 0x2d8;
  local_360 = FUN_01a5728c;
  local_370 = FUN_01a5785c;
  local_390 = FUN_01a57e30;
  local_3a0 = &LAB_01a584b4;
  local_3c0 = FUN_01a58250;
  local_3d0 = FUN_01a587b4;
  local_3f8 = 0;
  pcStack_3f0 = FUN_01a59ec8;
  local_3e8 = 0;
  puStack_3e0 = &LAB_01a58f0c;
  local_408 = 0;
  pcStack_400 = FUN_01a5a0d4;
  local_420 = 0x340;
  local_418 = 1;
  pcStack_410 = FUN_01a5a2e4;
  lVar1 = tpidr_el0;
  plVar6 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar6 = plVar4;
  }
  pcVar3 = (char *)(**(code **)(*plVar6 + 0x10))(plVar6,0x20,8);
  pcVar3[0x18] = 'l';
  uVar2 = s_CharacterAnimationController_038c3a9c._16_8_;
  uVar7 = s_CharacterAnimationController_038c3a9c._0_8_;
  pcVar3[0x19] = 'l';
  pcVar3[0x1a] = 'e';
  pcVar3[0x1b] = 'r';
  *(undefined8 *)(pcVar3 + 8) = s_CharacterAnimationController_038c3a9c._8_8_;
  *(undefined8 *)(pcVar3 + 0x10) = uVar2;
  *(undefined8 *)pcVar3 = uVar7;
  pcVar3[0x1c] = '\0';
  plVar4 = DAT_043f1798;
  plVar6 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar6 = plVar4;
  }
  plVar4 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x6a0,8);
  FUN_020b1d2c(plVar4,&local_50,&local_60,&local_70,&local_80,&local_90,&local_a0,&local_b0,
               &local_c0,&local_d0,&local_e0,&local_f0,&local_100,&local_110,&local_120,&local_130,
               &local_140,&local_150,&local_160,&local_170,&local_180,&local_190,&local_1a0,
               &local_1b0,&local_1c0,&local_1d0,&local_1e0,&local_1f0,&local_200,&local_210,
               &local_220,&local_230,&local_240,&local_250,&local_260,&local_270,&local_280,
               &local_290,&local_2a0,&local_2b0,&local_2c0,&local_2d0,&local_2e0,&local_2f0,
               &local_300,&local_310,&local_320,&local_330,&local_340,&local_350,&local_360,
               &local_370,&local_380,&local_390,&local_3a0,&local_3b0,&local_3c0,&local_3d0,
               &puStack_3e0,&pcStack_3f0,&pcStack_400,&pcStack_410,&local_420);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar7);
  (**(code **)*plVar4)(plVar4,uVar7);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  FUN_001522a0(uVar7,pcVar3);
  plVar4 = DAT_043f1798;
  if (pcVar3 != (char *)0x0) {
    plVar6 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar6 = plVar4;
    }
    uVar5 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar5 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar6,pcVar3,0,8);
        return;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,pcVar3,0,8);
  }
  return;
}


