/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02081910; name: FUN_02081910
 */


void FUN_02081910(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 *local_320;
  undefined8 local_318;
  undefined1 *puStack_310;
  undefined8 local_308;
  undefined1 *puStack_300;
  undefined8 local_2f8;
  code *pcStack_2f0;
  undefined8 local_2e8;
  undefined1 *puStack_2e0;
  undefined8 local_2d8;
  code *pcStack_2d0;
  undefined8 local_2c8;
  undefined1 *puStack_2c0;
  undefined8 local_2b8;
  code *pcStack_2b0;
  undefined8 local_2a8;
  code *pcStack_2a0;
  undefined8 local_298;
  code *pcStack_290;
  undefined8 local_288;
  undefined1 *puStack_280;
  undefined8 local_278;
  undefined1 *puStack_270;
  undefined8 local_268;
  code *pcStack_260;
  undefined8 local_258;
  undefined1 *local_250;
  undefined8 local_248;
  undefined1 *local_240;
  undefined8 local_238;
  undefined1 *local_230;
  undefined8 local_228;
  undefined1 *local_220;
  undefined8 local_218;
  undefined1 *local_210;
  undefined8 local_208;
  undefined1 *local_200;
  undefined8 local_1f8;
  undefined1 *local_1f0;
  undefined8 local_1e8;
  undefined1 *local_1e0;
  undefined8 local_1d8;
  undefined1 *local_1d0;
  undefined8 local_1c8;
  undefined1 *local_1c0;
  undefined8 local_1b8;
  undefined1 *local_1b0;
  undefined8 local_1a8;
  undefined1 *local_1a0;
  undefined8 local_198;
  undefined1 *local_190;
  undefined8 local_188;
  undefined1 *local_180;
  undefined8 local_178;
  undefined1 *local_170;
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
  undefined1 *local_110;
  undefined8 uStack_108;
  undefined1 *local_100;
  undefined8 uStack_f8;
  undefined1 *local_f0;
  undefined8 uStack_e8;
  code *local_e0;
  undefined8 uStack_d8;
  code *local_d0;
  undefined8 uStack_c8;
  code *local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined8 uStack_a8;
  undefined1 *local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined8 uStack_78;
  code *local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined8 uStack_58;
  code *local_50;
  undefined8 uStack_48;
  
  plVar5 = DAT_043f1798;
  local_118 = 0;
  local_50 = FUN_018d49c8;
  uStack_48 = 0;
  local_60 = &LAB_02081ee4;
  uStack_58 = 0;
  local_128 = 0;
  local_138 = 0;
  local_148 = 0;
  local_158 = 0;
  local_168 = 0;
  local_178 = 0;
  local_188 = 0;
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
  local_70 = FUN_018d6e58;
  uStack_68 = 0;
  local_90 = &LAB_018d83a4;
  uStack_88 = 0;
  local_a0 = &LAB_018d8d54;
  uStack_98 = 0;
  local_c0 = FUN_018da814;
  uStack_b8 = 0;
  local_d0 = FUN_018dae04;
  uStack_c8 = 0;
  local_f0 = &LAB_018dcf30;
  uStack_e8 = 0;
  local_100 = &LAB_018dcf40;
  uStack_f8 = 0;
  local_120 = FUN_018dc318;
  local_130 = &LAB_018ddc48;
  local_150 = &LAB_018ddc88;
  local_160 = &LAB_02081ef4;
  local_180 = &LAB_02081f04;
  local_190 = &LAB_02081f10;
  local_1b0 = &LAB_02081f20;
  local_1c0 = &LAB_02081f2c;
  local_1e0 = &LAB_02081f40;
  local_1f0 = &LAB_02081f48;
  local_210 = &LAB_02081f64;
  local_220 = &LAB_018de1d8;
  local_240 = &LAB_018de354;
  local_250 = &LAB_018de520;
  local_80 = &LAB_018d700c;
  uStack_78 = 0;
  local_b0 = &LAB_018da49c;
  uStack_a8 = 0;
  local_e0 = FUN_018dcf2c;
  uStack_d8 = 0;
  local_110 = &LAB_018ddc38;
  uStack_108 = 0;
  local_140 = &LAB_02081eec;
  local_170 = &LAB_02081efc;
  local_1a0 = &LAB_02081f18;
  local_1d0 = &LAB_02081f34;
  local_200 = &LAB_02081f58;
  local_230 = &LAB_018de1e8;
  local_278 = 0;
  puStack_270 = &LAB_018ddc60;
  local_288 = 0;
  puStack_280 = &LAB_018e090c;
  local_2a8 = 0;
  pcStack_2a0 = FUN_018e0de8;
  local_268 = 0;
  pcStack_260 = FUN_018dcf5c;
  local_2b8 = 0;
  pcStack_2b0 = FUN_018e0f74;
  local_298 = 0;
  pcStack_290 = FUN_018e0d5c;
  local_2d8 = 0;
  pcStack_2d0 = FUN_018e0fb4;
  local_2c8 = 0;
  puStack_2c0 = &LAB_018e0f80;
  local_2e8 = 0;
  puStack_2e0 = &LAB_018e1384;
  local_2f8 = 0;
  pcStack_2f0 = FUN_018e1428;
  local_320 = &LAB_02081f74;
  local_308 = 0;
  puStack_300 = &LAB_018e1664;
  local_318 = 0;
  puStack_310 = &LAB_02081f6c;
  lVar1 = tpidr_el0;
  plVar7 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar7 = plVar5;
  }
  pcVar4 = (char *)(**(code **)(*plVar7 + 0x10))(plVar7,0x20,8);
  pcVar4[0x18] = 'n';
  uVar3 = s_FieldBuddyPokemonComponent_039769ec._16_8_;
  uVar2 = s_FieldBuddyPokemonComponent_039769ec._8_8_;
  uVar8 = s_FieldBuddyPokemonComponent_039769ec._0_8_;
  pcVar4[0x19] = 't';
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
  plVar5 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x528,8);
  FUN_02081f8c(plVar5,&local_50,&local_60,&local_70,&local_80,&local_90,&local_a0,&local_b0,
               &local_c0,&local_d0,&local_e0,&local_f0,&local_100,&local_110,&local_120,&local_130,
               &local_140,&local_150,&local_160,&local_170,&local_180,&local_190,&local_1a0,
               &local_1b0,&local_1c0,&local_1d0,&local_1e0,&local_1f0,&local_200,&local_210,
               &local_220,&local_230,&local_240,&local_250,&pcStack_260,&puStack_270,&puStack_280,
               &pcStack_290,&pcStack_2a0,&pcStack_2b0,&puStack_2c0,&pcStack_2d0,&puStack_2e0,
               &pcStack_2f0,&puStack_300,&puStack_310,&local_320);
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


