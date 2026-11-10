/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0232dab0; name: FUN_0232dab0
 */


void FUN_0232dab0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 *local_340;
  undefined8 local_338;
  undefined1 *puStack_330;
  undefined8 local_328;
  undefined1 *puStack_320;
  undefined8 local_318;
  undefined1 *puStack_310;
  undefined8 local_308;
  undefined1 *puStack_300;
  undefined8 local_2f8;
  undefined1 *puStack_2f0;
  undefined8 local_2e8;
  undefined1 *puStack_2e0;
  undefined8 local_2d8;
  code *pcStack_2d0;
  undefined8 local_2c8;
  code *pcStack_2c0;
  undefined8 local_2b8;
  code *pcStack_2b0;
  undefined8 local_2a8;
  undefined1 *puStack_2a0;
  undefined8 local_298;
  undefined1 *puStack_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined1 *local_270;
  undefined8 local_268;
  undefined1 *local_260;
  undefined8 local_258;
  undefined1 *local_250;
  undefined8 local_248;
  undefined1 *local_240;
  undefined8 local_238;
  code *local_230;
  undefined8 local_228;
  code *local_220;
  undefined8 local_218;
  undefined1 *local_210;
  undefined8 local_208;
  undefined1 *local_200;
  undefined8 local_1f8;
  code *local_1f0;
  undefined8 local_1e8;
  code *local_1e0;
  undefined8 local_1d8;
  undefined1 *local_1d0;
  undefined8 local_1c8;
  code *local_1c0;
  undefined8 local_1b8;
  undefined1 *local_1b0;
  undefined8 local_1a8;
  code *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  code *local_180;
  undefined8 local_178;
  undefined1 *local_170;
  undefined8 local_168;
  undefined1 *local_160;
  undefined8 local_158;
  undefined1 *local_150;
  undefined8 local_148;
  undefined1 *local_140;
  undefined8 local_138;
  code *local_130;
  undefined8 local_128;
  code *local_120;
  undefined8 local_118;
  undefined1 *local_110;
  undefined8 uStack_108;
  code *local_100;
  undefined8 uStack_f8;
  undefined1 *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  code *local_a0;
  undefined8 uStack_98;
  code *local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined8 uStack_78;
  code *local_70;
  undefined8 uStack_68;
  code *local_60;
  undefined8 uStack_58;
  code *local_50;
  undefined8 uStack_48;
  
  plVar5 = DAT_043f1798;
  local_118 = 0;
  local_50 = FUN_01bedb9c;
  uStack_48 = 0;
  local_60 = FUN_01becb04;
  uStack_58 = 0;
  local_70 = FUN_01bedc94;
  uStack_68 = 0;
  local_128 = 0;
  local_138 = 0;
  local_148 = 0;
  local_158 = 0;
  local_168 = 0;
  local_178 = 0;
  local_198 = 0;
  local_1a8 = 0;
  local_1b8 = 0;
  local_1c8 = 0;
  local_1d8 = 0;
  local_1e8 = 0;
  local_1f8 = 0;
  local_208 = 0;
  local_218 = 0;
  local_228 = 0;
  local_238 = 0;
  local_248 = 0;
  local_258 = 0;
  local_268 = 0;
  local_288 = 0;
  local_90 = FUN_01bee320;
  uStack_88 = 0;
  local_80 = FUN_01bede50;
  uStack_78 = 0;
  local_a0 = FUN_01bee514;
  uStack_98 = 0;
  local_188 = 1;
  local_278 = 1;
  local_b0 = 0x1f0;
  uStack_a8 = 1;
  local_c0 = 0x200;
  uStack_b8 = 1;
  local_d0 = 0x218;
  uStack_c8 = 1;
  local_e0 = 0x250;
  uStack_d8 = 1;
  local_f0 = &LAB_01beeae4;
  uStack_e8 = 0;
  local_100 = FUN_01beed80;
  uStack_f8 = 0;
  local_120 = FUN_01bedb6c;
  local_130 = FUN_01bf2a08;
  local_150 = &LAB_01bf0258;
  local_160 = &LAB_01bf1794;
  local_180 = FUN_01bf1f68;
  local_190 = 0x348;
  local_1a0 = FUN_01bf2ed0;
  local_1c0 = FUN_01bf3400;
  local_1d0 = &LAB_01bf37a8;
  local_1f0 = FUN_01bf381c;
  local_200 = &LAB_01bf9c6c;
  local_220 = FUN_01bf3b28;
  local_230 = FUN_01bf3878;
  local_250 = &LAB_01bf40fc;
  local_260 = &LAB_01bf4140;
  local_280 = 0x2d0;
  local_110 = &LAB_01bf2234;
  uStack_108 = 0;
  local_140 = &LAB_01beff64;
  local_170 = &LAB_01bf0528;
  local_1b0 = &LAB_01bf3190;
  local_1e0 = FUN_01bf37b8;
  local_210 = &LAB_01bf9c80;
  local_240 = &LAB_01bf3dec;
  local_270 = &LAB_01bf41c4;
  local_298 = 0;
  puStack_290 = &LAB_01bf4ec8;
  local_2a8 = 0;
  puStack_2a0 = &LAB_01bed53c;
  local_2c8 = 0;
  pcStack_2c0 = FUN_01bf4fd8;
  local_2d8 = 0;
  pcStack_2d0 = FUN_01bf52a8;
  local_2b8 = 0;
  pcStack_2b0 = FUN_01bf4fb0;
  local_2f8 = 0;
  puStack_2f0 = &LAB_01bf537c;
  local_2e8 = 0;
  puStack_2e0 = &LAB_01bf5314;
  local_308 = 0;
  puStack_300 = &LAB_01bf53c4;
  local_318 = 0;
  puStack_310 = &LAB_01bf5404;
  local_340 = &LAB_01bfa4b4;
  local_328 = 0;
  puStack_320 = &LAB_01bf5440;
  local_338 = 0;
  puStack_330 = &LAB_01bf5450;
  lVar1 = tpidr_el0;
  plVar7 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar7 = plVar5;
  }
  pcVar4 = (char *)(**(code **)(*plVar7 + 0x10))(plVar7,0x20,8);
  pcVar4[0x18] = 'r';
  uVar3 = s_PlayerAnimationController_0396eb4f._16_8_;
  uVar2 = s_PlayerAnimationController_0396eb4f._8_8_;
  uVar8 = s_PlayerAnimationController_0396eb4f._0_8_;
  pcVar4[0x19] = '\0';
  *(undefined8 *)(pcVar4 + 8) = uVar2;
  *(undefined8 *)(pcVar4 + 0x10) = uVar3;
  *(undefined8 *)pcVar4 = uVar8;
  plVar5 = DAT_043f1798;
  plVar7 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar7 = plVar5;
  }
  plVar5 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x538,8);
  FUN_0232e0ac(plVar5,&local_50,&local_60,&local_70,&local_80,&local_90,&local_a0,&local_b0,
               &local_c0,&local_d0,&local_e0,&local_f0,&local_100,&local_110,&local_120,&local_130,
               &local_140,&local_150,&local_160,&local_170,&local_180,&local_190,&local_1a0,
               &local_1b0,&local_1c0,&local_1d0,&local_1e0,&local_1f0,&local_200,&local_210,
               &local_220,&local_230,&local_240,&local_250,&local_260,&local_270,&local_280,
               &puStack_290,&puStack_2a0,&pcStack_2b0,&pcStack_2c0,&pcStack_2d0,&puStack_2e0,
               &puStack_2f0,&puStack_300,&puStack_310,&puStack_320,&puStack_330,&local_340);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar8);
  (**(code **)*plVar5)(plVar5,uVar8);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  FUN_001522a0(uVar8,pcVar4);
  plVar5 = DAT_043f1798;
  if (pcVar4 != (char *)0x0) {
    plVar7 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar7 = plVar5;
    }
    uVar6 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar6 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar7,pcVar4,0,8);
        return;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,pcVar4,0,8);
  }
  return;
}


