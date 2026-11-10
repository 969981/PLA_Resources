/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02465a10; name: FUN_02465a10
 */


void FUN_02465a10(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined1 *local_1b0;
  undefined8 uStack_1a8;
  undefined1 *local_1a0;
  undefined8 uStack_198;
  undefined1 *local_190;
  undefined8 uStack_188;
  undefined1 *local_180;
  undefined8 uStack_178;
  undefined1 *local_170;
  undefined8 uStack_168;
  code *local_160;
  undefined8 uStack_158;
  undefined1 *local_150;
  undefined8 uStack_148;
  undefined1 *local_140;
  undefined8 uStack_138;
  undefined1 *local_130;
  undefined8 uStack_128;
  undefined1 *local_120;
  undefined8 uStack_118;
  undefined1 *local_110;
  undefined8 uStack_108;
  undefined1 *local_100;
  undefined8 uStack_f8;
  undefined1 *local_f0;
  undefined8 uStack_e8;
  undefined1 *local_e0;
  undefined8 uStack_d8;
  undefined1 *local_d0;
  undefined8 uStack_c8;
  undefined1 *local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined8 uStack_a8;
  undefined1 *local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  undefined8 uStack_48;
  
  plVar4 = DAT_043f1798;
  local_50 = &LAB_0268c784;
  uStack_48 = 0;
  local_70 = &LAB_0268d348;
  uStack_68 = 0;
  local_80 = &LAB_0268d354;
  uStack_78 = 0;
  local_a0 = &LAB_0268d4d8;
  uStack_98 = 0;
  local_b0 = &LAB_0268e10c;
  uStack_a8 = 0;
  local_d0 = &LAB_0268d5e8;
  uStack_c8 = 0;
  local_e0 = &LAB_0268d664;
  uStack_d8 = 0;
  local_60 = &LAB_0268d33c;
  uStack_58 = 0;
  local_100 = &LAB_0268d6dc;
  uStack_f8 = 0;
  local_90 = &LAB_0268d454;
  uStack_88 = 0;
  local_110 = &LAB_0268d768;
  uStack_108 = 0;
  local_c0 = &LAB_0268d55c;
  uStack_b8 = 0;
  local_130 = &LAB_0268dbfc;
  uStack_128 = 0;
  local_f0 = &LAB_0268d66c;
  uStack_e8 = 0;
  local_140 = &LAB_0268e020;
  uStack_138 = 0;
  local_120 = &LAB_0268db70;
  uStack_118 = 0;
  local_160 = FUN_0268ea10;
  uStack_158 = 0;
  local_150 = &LAB_0268e090;
  uStack_148 = 0;
  local_170 = &LAB_0268ea88;
  uStack_168 = 0;
  local_180 = &LAB_0268ebd8;
  uStack_178 = 0;
  local_190 = &LAB_0268ecd0;
  uStack_188 = 0;
  local_1a0 = &LAB_0268eef4;
  uStack_198 = 0;
  local_1b0 = &LAB_0268ef70;
  uStack_1a8 = 0;
  lVar1 = tpidr_el0;
  plVar6 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar6 = plVar4;
  }
  pcVar3 = (char *)(**(code **)(*plVar6 + 0x10))(plVar6,0x20,8);
  uVar2 = s_RideRingumaControllerComponent_0392248a._8_8_;
  uVar7 = CONCAT62(s_RideRingumaControllerComponent_0392248a._24_6_,
                   s_RideRingumaControllerComponent_0392248a._22_2_);
  *(undefined8 *)pcVar3 = s_RideRingumaControllerComponent_0392248a._0_8_;
  *(undefined8 *)(pcVar3 + 0x16) = uVar7;
  uVar7 = CONCAT26(s_RideRingumaControllerComponent_0392248a._22_2_,
                   s_RideRingumaControllerComponent_0392248a._16_6_);
  *(undefined8 *)(pcVar3 + 8) = uVar2;
  *(undefined8 *)(pcVar3 + 0x10) = uVar7;
  pcVar3[0x1e] = '\0';
  plVar4 = DAT_043f1798;
  plVar6 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar6 = plVar4;
  }
  plVar4 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x2e0,8);
  FUN_02465dfc(plVar4,&local_50,&local_60,&local_70,&local_80,&local_90,&local_a0,&local_b0,
               &local_c0,&local_d0,&local_e0,&local_f0,&local_100,&local_110,&local_120,&local_130,
               &local_140,&local_150,&local_160,&local_170,&local_180,&local_190,&local_1a0,
               &local_1b0);
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


