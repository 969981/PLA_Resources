/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02391470; name: FUN_02391470
 */


void FUN_02391470(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  code *local_2a0;
  undefined8 local_298;
  code *pcStack_290;
  undefined8 local_288;
  code *pcStack_280;
  undefined8 local_278;
  code *pcStack_270;
  undefined8 local_268;
  code *pcStack_260;
  undefined8 local_258;
  code *pcStack_250;
  undefined8 local_248;
  code *pcStack_240;
  undefined8 local_238;
  code *pcStack_230;
  undefined8 local_228;
  code *pcStack_220;
  undefined8 local_218;
  code *pcStack_210;
  undefined8 local_208;
  code *pcStack_200;
  undefined8 local_1f8;
  code *pcStack_1f0;
  undefined8 local_1e8;
  code *pcStack_1e0;
  undefined8 local_1d8;
  code *pcStack_1d0;
  undefined8 local_1c8;
  code *pcStack_1c0;
  undefined8 local_1b8;
  code *pcStack_1b0;
  undefined8 local_1a8;
  code *pcStack_1a0;
  undefined8 local_198;
  code *local_190;
  undefined8 local_188;
  code *local_180;
  undefined8 local_178;
  code *local_170;
  undefined8 local_168;
  undefined1 *local_160;
  undefined8 local_158;
  undefined1 *local_150;
  undefined8 local_148;
  undefined1 *local_140;
  undefined8 local_138;
  undefined1 *local_130;
  undefined8 local_128;
  code *local_120;
  undefined8 local_118;
  code *local_110;
  undefined8 uStack_108;
  code *local_100;
  undefined8 uStack_f8;
  code *local_f0;
  undefined8 uStack_e8;
  code *local_e0;
  undefined8 uStack_d8;
  code *local_d0;
  undefined8 uStack_c8;
  code *local_c0;
  undefined8 uStack_b8;
  code *local_b0;
  undefined8 uStack_a8;
  undefined1 *local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined8 uStack_58;
  code *local_50;
  undefined8 uStack_48;
  
  plVar5 = DAT_043f1798;
  local_118 = 0;
  local_50 = FUN_01c00ae0;
  uStack_48 = 0;
  local_70 = &LAB_01c00e5c;
  uStack_68 = 0;
  local_128 = 0;
  local_138 = 0;
  local_148 = 0;
  local_158 = 0;
  local_168 = 0;
  local_178 = 0;
  local_188 = 0;
  local_198 = 0;
  local_80 = FUN_01c01098;
  uStack_78 = 0;
  local_a0 = &LAB_01c01340;
  uStack_98 = 0;
  local_b0 = FUN_01c0148c;
  uStack_a8 = 0;
  local_d0 = FUN_01c017f8;
  uStack_c8 = 0;
  local_e0 = FUN_01c01964;
  uStack_d8 = 0;
  local_100 = FUN_01c01c5c;
  uStack_f8 = 0;
  local_110 = FUN_01c01de0;
  uStack_108 = 0;
  local_130 = &LAB_01c02094;
  local_140 = &LAB_01c022fc;
  local_160 = &LAB_01c02304;
  local_170 = FUN_01c02590;
  local_190 = FUN_01c029b4;
  local_60 = &LAB_01c00c34;
  uStack_58 = 0;
  local_90 = &LAB_01c01200;
  uStack_88 = 0;
  local_c0 = FUN_01c01684;
  uStack_b8 = 0;
  local_1a8 = 0;
  pcStack_1a0 = FUN_01c02b20;
  local_f0 = FUN_01c01970;
  uStack_e8 = 0;
  local_120 = FUN_01c01994;
  local_150 = &LAB_01c02450;
  local_180 = FUN_01c02854;
  local_1c8 = 0;
  pcStack_1c0 = FUN_01c02f44;
  local_1d8 = 0;
  pcStack_1d0 = FUN_01c03208;
  local_1f8 = 0;
  pcStack_1f0 = FUN_01c03560;
  local_208 = 0;
  pcStack_200 = FUN_01c036a0;
  local_1b8 = 0;
  pcStack_1b0 = FUN_01c02c80;
  local_228 = 0;
  pcStack_220 = FUN_01c03dc4;
  local_1e8 = 0;
  pcStack_1e0 = FUN_01c03550;
  local_238 = 0;
  pcStack_230 = FUN_01c03f04;
  local_218 = 0;
  pcStack_210 = FUN_01c03c84;
  local_258 = 0;
  pcStack_250 = FUN_01c04184;
  local_248 = 0;
  pcStack_240 = FUN_01c04044;
  local_268 = 0;
  pcStack_260 = FUN_01c042c4;
  local_278 = 0;
  pcStack_270 = FUN_01c04404;
  local_2a0 = FUN_01c047d0;
  local_288 = 0;
  pcStack_280 = FUN_01c04544;
  local_298 = 0;
  pcStack_290 = FUN_01c04684;
  lVar1 = tpidr_el0;
  plVar7 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar7 = plVar5;
  }
  pcVar4 = (char *)(**(code **)(*plVar7 + 0x10))(plVar7,0x20,8);
  pcVar4[0x18] = 'e';
  uVar3 = s_PokemonAnimationController_039aea8a._16_8_;
  uVar2 = s_PokemonAnimationController_039aea8a._8_8_;
  uVar8 = s_PokemonAnimationController_039aea8a._0_8_;
  pcVar4[0x19] = 'r';
  pcVar4[0x1a] = '\0';
  *(undefined8 *)(pcVar4 + 8) = uVar2;
  *(undefined8 *)(pcVar4 + 0x10) = uVar3;
  *(undefined8 *)pcVar4 = uVar8;
  plVar5 = DAT_043f1798;
  plVar7 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar7 = plVar5;
  }
  plVar5 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x448,8);
  FUN_0239199c(plVar5,&local_50,&local_60,&local_70,&local_80,&local_90,&local_a0,&local_b0,
               &local_c0,&local_d0,&local_e0,&local_f0,&local_100,&local_110,&local_120,&local_130,
               &local_140,&local_150,&local_160,&local_170,&local_180,&local_190,&pcStack_1a0,
               &pcStack_1b0,&pcStack_1c0,&pcStack_1d0,&pcStack_1e0,&pcStack_1f0,&pcStack_200,
               &pcStack_210,&pcStack_220,&pcStack_230,&pcStack_240,&pcStack_250,&pcStack_260,
               &pcStack_270,&pcStack_280,&pcStack_290,&local_2a0);
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


