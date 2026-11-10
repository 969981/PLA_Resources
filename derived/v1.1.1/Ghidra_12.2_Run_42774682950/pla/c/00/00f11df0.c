/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f11df0; name: FUN_00f11df0
 */


void FUN_00f11df0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  byte local_58;
  char local_57 [6];
  char acStack_51 [2];
  char acStack_4f [6];
  undefined1 local_49;
  long local_48;
  
  plVar3 = DAT_043f1798;
  local_60 = &LAB_00e920dc;
  local_68 = &LAB_00e92524;
  local_70 = &LAB_00e92590;
  local_78 = &LAB_00e925fc;
  local_80 = &LAB_00e92668;
  local_88 = &LAB_00e926f0;
  local_90 = &LAB_00e92a60;
  local_98 = &LAB_00e92c98;
  local_a0 = &LAB_00e92d14;
  local_a8 = &LAB_00e92d80;
  local_b0 = &LAB_00e92e0c;
  local_b8 = &LAB_00e92e78;
  local_c0 = &LAB_00e92f0c;
  local_c8 = &LAB_00e92f78;
  local_d0 = &LAB_00e92fec;
  local_d8 = &LAB_00e930ec;
  local_e0 = &LAB_00e93158;
  local_e8 = FUN_00e93238;
  local_f0 = &LAB_00e93370;
  local_f8 = &LAB_00e936b0;
  local_100 = &LAB_00e937b0;
  local_108 = &LAB_00e93824;
  local_110 = &LAB_00e93898;
  local_118 = &LAB_00e9390c;
  local_120 = &LAB_00e93a0c;
  local_128 = &LAB_00e93a10;
  local_130 = &LAB_00e93a14;
  local_138 = &LAB_00e93a80;
  local_140 = &LAB_00e93aec;
  local_148 = &LAB_00e93b58;
  local_58 = 0x1c;
  local_150 = &LAB_00e93c7c;
  local_158 = &LAB_00e93edc;
  local_160 = &LAB_00e93fc4;
  local_168 = &LAB_00e9410c;
  local_48 = 0;
  local_57 = (char  [6])s_PokemonCommand_0393a03e._0_6_;
  acStack_51 = (char  [2])s_PokemonCommand_0393a03e._6_2_;
  acStack_4f = (char  [6])s_PokemonCommand_0393a03e._8_6_;
  local_49 = 0;
  lVar1 = tpidr_el0;
  plVar5 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar5 = plVar3;
  }
  plVar3 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x2e0,8);
  FUN_00f1226c(plVar3,&local_60,&local_68,&local_70,&local_78,&local_80,&local_88,&local_90,
               &local_98,&local_a0,&local_a8,&local_b0,&local_b8,&local_c0,&local_c8,&local_d0,
               &local_d8,&local_e0,&local_e8,&local_f0,&local_f8,&local_100,&local_108,&local_110,
               &local_118,&local_120,&local_128,&local_130,&local_138,&local_140,&local_148,
               &local_150,&local_158,&local_160,&local_168);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar6);
  (**(code **)*plVar3)(plVar3,uVar6);
  (**(code **)(*plVar3 + 0x10))(plVar3);
  FUN_001522a0(uVar6,(ulong)&local_58 | 1);
  lVar2 = local_48;
  plVar3 = DAT_043f1798;
  if (((local_58 & 1) != 0) && (local_48 != 0)) {
    plVar5 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar5 = plVar3;
    }
    uVar4 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar4 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar5,lVar2,0,8);
        return;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar2,0,8);
  }
  return;
}


