/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0287c530; name: FUN_0287c530
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0287c530(undefined8 param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined4 uVar13;
  int iVar14;
  long *plVar15;
  undefined8 *puVar16;
  char *pcVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  long *local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined5 local_158;
  undefined3 uStack_153;
  undefined1 *local_150;
  long *local_148;
  undefined1 auStack_140 [104];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [8];
  undefined4 local_a8 [2];
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulong local_88;
  char *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined2 local_6c;
  
  puVar6 = PTR_DAT_0437b160;
  lVar19 = *(long *)PTR_DAT_0437b160;
  uVar21 = *(undefined8 *)(lVar19 + 0x1c8);
  uVar22 = *(undefined8 *)(lVar19 + 0x268);
  uVar24 = *(undefined8 *)(lVar19 + 8);
  uVar23 = *(undefined8 *)(lVar19 + 0x228);
  uVar25 = *(undefined8 *)(lVar19 + 0x308);
  local_90 = *(undefined8 *)(lVar19 + 0x328);
  local_98 = *(undefined8 *)(lVar19 + 0x208);
  nn::oe::SetPerformanceConfiguration(0,0x92220008);
  FUN_02880b50(*(undefined8 *)(*(long *)puVar6 + 0xa8));
  FUN_0287d608();
  FUN_0287d798(param_1);
  FUN_02dac138(*(undefined8 *)(*(long *)puVar6 + 200));
  FUN_0287d988();
  FUN_0287da58();
  FUN_0287dcf4();
  plVar15 = (long *)FUN_02882758();
  lVar19 = *plVar15;
  *(long *)PTR_DAT_04387f08 = lVar19;
  uVar26 = *(undefined8 *)(lVar19 + 0x68);
  if (((*PTR_DAT_0437b4f8 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_0437b4f8), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_0437b590,PTR_DAT_0437b500,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b4f8);
  }
  lVar19 = *(long *)PTR_DAT_0437b500;
  *(long *)PTR_DAT_0437b508 = lVar19;
  lVar27 = *(long *)(lVar19 + 0x50);
  lVar19 = nn::os::GetCurrentThread();
  plVar15 = (long *)(lVar27 + 0x208);
  do {
    if (*plVar15 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar27 + 0x1fc));
        while (*plVar15 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *plVar15 = lVar19;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0287c654;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar4) {
      *plVar15 = lVar19;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0287c654:
  FUN_02a70468(lVar27,uVar26,0);
  *(undefined8 *)(lVar27 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar27 + 0x1fc));
  FUN_02cac328();
  FUN_0287e4e8(uVar23);
  local_160 = (undefined4)uVar23;
  uStack_15c = (undefined4)((ulong)uVar23 >> 0x20);
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  uVar26 = *(undefined8 *)PTR_DAT_04379668;
  *(undefined8 *)PTR_DAT_04379670 = uVar26;
  FUN_00d7d424(uVar26,&local_160);
  FUN_0287e5b0(param_1);
  FUN_0287efcc(uVar23);
  local_160 = 0;
  if (((*PTR_DAT_0437a480 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_0437a480), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_0437b4a8,PTR_DAT_0437a488,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a480);
  }
  uVar26 = *(undefined8 *)PTR_DAT_0437a488;
  *(undefined8 *)PTR_DAT_0437a490 = uVar26;
  FUN_00d7e1e4(uVar26,&local_160);
  FUN_02aacdb0(0,0x3e6b851f,0x3e4ccccd);
  FUN_0287f094(uVar23);
  local_a0 = (long *)0x0;
  local_a8[0] = 1;
  if (((*PTR_DAT_04379cd0 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379cd0);
  }
  uVar26 = *(undefined8 *)PTR_DAT_04379cd8;
  *(undefined8 *)PTR_DAT_04379ce0 = uVar26;
  FUN_02a47cd8(&local_160,uVar26,"bin/message/grammar/");
  plVar1 = local_a0;
  local_a0 = (long *)0x0;
  plVar15 = (long *)CONCAT44(uStack_15c,local_160);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  local_a0 = plVar15;
  puVar16 = (undefined8 *)FUN_00d1603c();
  uVar26 = *puVar16;
  *(undefined8 *)PTR_DAT_0437b198 = uVar26;
  FUN_02c2bf80(uVar26,uVar23,local_a8);
  FUN_0287f104(uVar25);
  FUN_0287f1cc(uVar23);
  if (((*PTR_DAT_0437b228 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_0437b228), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_0437b240,PTR_DAT_0437b230,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b228);
  }
  uVar26 = *(undefined8 *)PTR_DAT_0437b230;
  *(undefined8 *)PTR_DAT_0437b238 = uVar26;
  uVar13 = FUN_010c4560();
  FUN_010b4e8c(uVar26,uVar25,uVar13);
  FUN_0287f294(uVar24);
  puVar16 = (undefined8 *)FUN_00d14a3c();
  puVar10 = PTR_DAT_0437b1b8;
  *(undefined8 *)PTR_DAT_0437b1b8 = *puVar16;
  FUN_00d13200();
  puVar16 = (undefined8 *)FUN_00d14a3c();
  *(undefined8 *)puVar10 = *puVar16;
  FUN_00d143d8();
  FUN_0287f304(uVar23);
  if (((*PTR_DAT_0437b648 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_0437b648), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_0437b660,PTR_DAT_0437b650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b648);
  }
  *(undefined8 *)PTR_DAT_0437b658 = *(undefined8 *)PTR_DAT_0437b650;
  FUN_00db6ae4();
  local_b0[0] = 1;
  FUN_0287f3cc(uVar23);
  if (((*PTR_DAT_043796b8 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_043796b8), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_04379c58,PTR_DAT_043796c0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_043796b8);
  }
  uVar24 = *(undefined8 *)PTR_DAT_043796c0;
  *(undefined8 *)PTR_DAT_043796c8 = uVar24;
  FUN_00d9e700(uVar24,uVar23,local_b0);
  FUN_0287f494(local_90,&local_90);
  FUN_0287f568(uVar23);
  puVar10 = PTR_DAT_04379678;
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379678), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  puVar12 = PTR_DAT_04379688;
  puVar11 = PTR_DAT_04379680;
  uVar24 = *(undefined8 *)PTR_DAT_04379680;
  *(undefined8 *)PTR_DAT_04379688 = uVar24;
  FUN_00d8ae6c(uVar24,uVar23);
  FUN_0287f630(uVar23);
  FUN_0287f6f8(local_98,&local_98);
  if (((*PTR_DAT_04379e28 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379e28), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_0437a500,PTR_DAT_04379e30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379e28);
  }
  uVar24 = *(undefined8 *)PTR_DAT_04379e30;
  *(undefined8 *)PTR_DAT_04379e38 = uVar24;
  FUN_00d2669c(uVar24,0);
  FUN_0287f7cc(uVar23);
  puVar7 = PTR_DAT_0437b668;
  if (((*PTR_DAT_0437b668 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_0437b668), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_0437e4e0,PTR_DAT_0437b670,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b668);
  }
  puVar9 = PTR_DAT_0437b678;
  puVar8 = PTR_DAT_0437b670;
  *(undefined8 *)PTR_DAT_0437b678 = *(undefined8 *)PTR_DAT_0437b670;
  FUN_00da9df0();
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_0437b668), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_0437e4e0,PTR_DAT_0437b670,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b668);
  }
  *(undefined8 *)puVar9 = *(undefined8 *)puVar8;
  pcVar17 = (char *)FUN_00da9e60();
  if (*pcVar17 == '\0') {
    local_c0 = 0;
    local_b8 = 0;
    local_c8 = 0;
    bVar2 = *puVar7;
  }
  else {
    if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_0437b668), iVar14 != 0)) {
      FUN_00100250(PTR_LAB_0437e4e0,PTR_DAT_0437b670,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b668);
    }
    *(undefined8 *)puVar9 = *(undefined8 *)puVar8;
    lVar19 = FUN_00da9e60();
    local_c0 = *(undefined8 *)(lVar19 + 0x10);
    local_b8 = *(undefined8 *)(lVar19 + 0x18);
    local_c8 = *(undefined8 *)(lVar19 + 8);
    bVar2 = *puVar7;
  }
  if (((bVar2 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_0437b668), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_0437e4e0,PTR_DAT_0437b670,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b668);
  }
  *(undefined8 *)puVar9 = *(undefined8 *)puVar8;
  local_d8 = FUN_00da9e68();
  FUN_0287f894(*(undefined8 *)(*(long *)puVar6 + 0x1e8));
  puVar7 = PTR_DAT_04379558;
  if ((*PTR_DAT_04379558 & 1) == 0) {
    iVar14 = __cxa_guard_acquire(PTR_DAT_04379558);
    if (iVar14 != 0) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
  }
  puVar9 = PTR_DAT_04379568;
  puVar8 = PTR_DAT_04379560;
  uVar24 = *(undefined8 *)PTR_DAT_04379560;
  *(undefined8 *)PTR_DAT_04379568 = uVar24;
  FUN_01147c34(uVar24,local_d8);
  if ((*puVar7 & 1) == 0) {
    iVar14 = __cxa_guard_acquire(PTR_DAT_04379558);
    if (iVar14 != 0) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
  }
  uVar24 = *(undefined8 *)puVar8;
  *(undefined8 *)puVar9 = uVar24;
  local_160 = 0x2888768;
  uStack_15c = 0;
  local_158 = 0x2888770;
  uStack_153 = 0;
  local_150 = &LAB_02888a60;
  local_148 = (long *)&LAB_02888a64;
  FUN_0114899c(uVar24,&local_160);
  pcVar5 = (code *)CONCAT35(uStack_153,local_158);
  if (pcVar5 != (code *)0x0) {
    local_150 = (undefined1 *)0x0;
    local_148 = (long *)0x0;
    local_160 = 0;
    uStack_15c = 0;
    local_158 = 0;
    uStack_153 = 0;
    (*pcVar5)(auStack_140);
  }
  FUN_0287f95c(*(undefined8 *)(*(long *)puVar6 + 0x1e8));
  uVar24 = *(undefined8 *)(*(long *)puVar6 + 0x1e8);
  local_160 = (undefined4)uVar24;
  uStack_15c = (undefined4)((ulong)uVar24 >> 0x20);
  FUN_0287fa24(uVar24,&local_160);
  FUN_01145410();
  puVar7 = PTR_DAT_0437b548;
  plVar15 = *(long **)(*(long *)puVar6 + 0x368);
  local_168 = plVar15;
  if ((*PTR_DAT_0437b548 & 1) == 0) {
    iVar14 = __cxa_guard_acquire(PTR_DAT_0437b548);
    if (iVar14 != 0) {
      FUN_00100250(PTR_LAB_04387ce0,PTR_DAT_0437b550,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b548);
    }
  }
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar14 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar6 = PTR_DAT_04379528;
    if (iVar14 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar19 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar19 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = plVar15;
  *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
  puVar16 = (undefined8 *)(**(code **)(*plVar15 + 0x10))(plVar15,0xb0,8);
  if (puVar16 == (undefined8 *)0x0) {
    (**(code **)(*plVar15 + 0xb8))(plVar15);
  }
  plVar1 = local_168;
  FUN_0275c248(puVar16);
  *puVar16 = &PTR_LAB_0426b650;
  *(undefined4 *)(puVar16 + 0xe) = 0;
  puVar16[9] = &PTR_LAB_0426b680;
  puVar16[10] = plVar1;
  puVar16[0xb] = plVar1;
  puVar16[0xc] = 0x1fffffffffffffff;
  puVar16[0xd] = 0;
  puVar16[0x10] = 0x1fffffffffffffff;
  puVar16[0x11] = 0;
  puVar16[0x12] = puVar16[0xe];
  puVar16[0x13] = 0;
  puVar16[0xf] = plVar1;
  puVar16[0x14] = 0;
  puVar16[0x15] = 0;
  FUN_0275c858(puVar16 + 0xf,8);
  local_148 = (long *)((ulong)local_148 & 0xffffffffffff0000);
  local_160 = (undefined4)local_c8;
  uStack_15c = (undefined4)((ulong)local_c8 >> 0x20);
  local_158 = (undefined5)local_c0;
  uStack_153 = (undefined3)((ulong)local_c0 >> 0x28);
  local_150 = (undefined1 *)local_b8;
  FUN_02cc46a0(plVar1,&local_160);
  DAT_043ea510 = plVar1;
  local_88 = 0xa0607a5ef5508ad1;
  local_80 = "TradeMatchmakingConfig";
  uStack_78 = 0x16;
  local_70 = 0x20001;
  local_6c = 2;
  FUN_02da29b0(&local_88);
  puVar16[1] = plVar15;
  puVar16[2] = puVar16;
  puVar16[3] = 0xb0;
  puVar16[4] = 8;
  *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
  puVar6 = PTR_DAT_0437b550;
  FUN_0288918c(PTR_DAT_0437b550,puVar16);
  if (0x3ff < DAT_043eeed0) {
                    /* WARNING: Subroutine does not return */
    FUN_02a47540();
  }
  lVar27 = *(long *)puVar6;
  lVar19 = 0;
  if (lVar27 != 0) {
    lVar19 = lVar27 + 0x48;
  }
  *(long *)(&DAT_043eced0 + (long)(int)DAT_043eeed0 * 8) = lVar19;
  DAT_043eeed0 = DAT_043eeed0 + 1;
  FUN_0287faa4(plVar1,&local_168);
  FUN_0287fb24(plVar1);
  FUN_0287fb94(plVar1);
  FUN_0287fc04(plVar1);
  FUN_0287fccc(plVar1);
  FUN_0287fd94(plVar1,&local_168);
  FUN_0287fe14(plVar1,&local_168);
  if ((*puVar7 & 1) == 0) {
    iVar14 = __cxa_guard_acquire(PTR_DAT_0437b548);
    if (iVar14 != 0) {
      FUN_00100250(PTR_LAB_04387ce0,PTR_DAT_0437b550,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b548);
    }
  }
  lVar19 = *(long *)puVar6;
  *(long *)PTR_DAT_0437b558 = lVar19;
  if (lVar19 != 0) {
    plVar15 = (long *)FUN_027bd638();
    DAT_043ec250 = *plVar15;
    lVar27 = 0;
    if (DAT_043ec250 != 0) {
      lVar27 = DAT_043ec250 + 0x50;
    }
    FUN_0275c520(lVar19,lVar27);
    plVar15 = (long *)FUN_0120ca1c();
    lVar20 = *plVar15;
    *(long *)PTR_DAT_0437e8f8 = lVar20;
    lVar27 = 0;
    if (lVar20 != 0) {
      lVar27 = lVar20 + 0x50;
    }
    FUN_0275c520(lVar19,lVar27);
    if ((*PTR_DAT_043821d8 & 1) == 0) {
      iVar14 = __cxa_guard_acquire(PTR_DAT_043821d8);
      if (iVar14 != 0) {
        FUN_00100250(PTR_LAB_04387d08,PTR_DAT_043821e0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043821d8);
      }
    }
    lVar20 = *(long *)PTR_DAT_043821e0;
    *(long *)PTR_DAT_043821e8 = lVar20;
    lVar27 = 0;
    if (lVar20 != 0) {
      lVar27 = lVar20 + 0x50;
    }
    FUN_0275c520(lVar19,lVar27);
  }
  FUN_0287fe94(local_168,&local_168);
  FUN_0287ff68(uVar23);
  if ((*PTR_DAT_0437b1a0 & 1) == 0) {
    iVar14 = __cxa_guard_acquire(PTR_DAT_0437b1a0);
    if (iVar14 != 0) {
      FUN_00100250(PTR_LAB_0437e390,PTR_DAT_0437b1a8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b1a0);
    }
  }
  uVar24 = *(undefined8 *)PTR_DAT_0437b1a8;
  *(undefined8 *)PTR_DAT_0437b1b0 = uVar24;
  FUN_010c87c4(uVar24,uVar23);
  if ((*puVar10 & 1) == 0) {
    iVar14 = __cxa_guard_acquire(PTR_DAT_04379678);
    if (iVar14 != 0) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
  }
  lVar19 = *(long *)puVar11;
  *(long *)puVar12 = lVar19;
  plVar15 = *(long **)(lVar19 + 0xd0);
  if (plVar15 == (long *)0x0) {
    FUN_02841ea8(0x90,local_90);
  }
  else {
    plVar1 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_02841ea8(plVar15 + 0x12,local_90);
    do {
      iVar14 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  plVar15 = *(long **)(lVar19 + 0xd0);
  while( true ) {
    if (plVar15 == (long *)0x0) {
      uVar18 = FUN_0284226c(0x90);
    }
    else {
      plVar1 = plVar15 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar18 = FUN_0284226c(plVar15 + 0x12);
      do {
        iVar14 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar14;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar14 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
    if ((uVar18 & 1) != 0) break;
    plVar15 = *(long **)(lVar19 + 0xd0);
  }
  plVar15 = *(long **)(lVar19 + 0xd0);
  if (plVar15 == (long *)0x0) {
    FUN_02842428(0x90,local_90);
  }
  else {
    plVar1 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_02842428(plVar15 + 0x12,local_90);
    do {
      iVar14 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  FUN_02880030(local_90);
  if ((*PTR_DAT_0437e3e0 & 1) == 0) {
    iVar14 = __cxa_guard_acquire(PTR_DAT_0437e3e0);
    if (iVar14 != 0) {
      FUN_00100250(PTR_LAB_04387f10,PTR_DAT_0437e3e8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437e3e0);
    }
  }
  uVar24 = *(undefined8 *)PTR_DAT_0437e3e8;
  *(undefined8 *)PTR_DAT_0437e3f0 = uVar24;
  FUN_0284fea0(uVar24,local_90);
  if ((*PTR_DAT_04379690 & 1) == 0) {
    iVar14 = __cxa_guard_acquire(PTR_DAT_04379690);
    if (iVar14 != 0) {
      FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379690);
    }
  }
  *(undefined8 *)PTR_DAT_043796a0 = *(undefined8 *)PTR_DAT_04379698;
  FUN_02869af8();
  local_160 = (undefined4)(undefined5)DAT_03a7e8be;
  uStack_15c = CONCAT31(DAT_03a7e8be._5_3_,(char)((uint5)(undefined5)DAT_03a7e8be >> 0x20));
  local_158 = _UNK_03a7e8c6;
  FUN_0281534c(&local_160);
  FUN_028800f8(uVar23);
  if ((*PTR_DAT_0437b6a8 & 1) == 0) {
    iVar14 = __cxa_guard_acquire(PTR_DAT_0437b6a8);
    if (iVar14 != 0) {
      FUN_00100250(PTR_LAB_0437e4b8,PTR_DAT_0437b6b0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b6a8);
    }
  }
  *(undefined8 *)PTR_DAT_0437e4b0 = *(undefined8 *)PTR_DAT_0437b6b0;
  FUN_00db8730();
  FUN_028801c0(uVar21);
  if ((*PTR_DAT_04379578 & 1) == 0) {
    iVar14 = __cxa_guard_acquire(PTR_DAT_04379578);
    if (iVar14 != 0) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379578);
    }
  }
  *(undefined8 *)PTR_DAT_04379588 = *(undefined8 *)PTR_DAT_04379580;
  FUN_0094d75c();
  FUN_02880288(uVar23);
  local_88 = local_88 & 0xffffffff00000000;
  local_160 = 0x8489cbf5;
  uStack_15c = 0x88a93e1a;
  local_158 = 0x3a824c8;
  uStack_153 = 0;
  local_150 = (undefined1 *)0x1f;
  local_148 = (long *)0x0;
  FUN_02ad63f8(&local_160,&local_88);
  if (local_148 != (long *)0x0) {
    (**(code **)(*local_148 + 0x20))();
  }
  FUN_02880350(uVar22);
  FUN_00d181f0(uVar23);
  FUN_02880418();
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  return;
}


