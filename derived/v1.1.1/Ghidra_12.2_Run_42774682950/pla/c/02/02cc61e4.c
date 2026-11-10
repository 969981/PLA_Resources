/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cc61e4; name: FUN_02cc61e4
 */


void FUN_02cc61e4(long *param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined1 auStack_78 [24];
  
  param_1[7] = 0;
  puVar5 = PTR_DAT_043796d0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  puVar5 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar6 = PTR_DAT_04379528;
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar9 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = 0;
    if (*(long *)(lVar9 + 0x80) != 0) {
      lVar15 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)&DAT_04296de0;
  param_1[1] = lVar15;
  param_1[9] = (long)&PTR_LAB_04296e10;
  lVar9 = FUN_027812ec();
  *(undefined1 *)(lVar9 + 8) = 1;
  *param_1 = (long)&PTR_FUN_04296cc0;
  param_1[9] = (long)&PTR_LAB_04296cf0;
  plVar11 = param_1 + 10;
  *plVar11 = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0xb] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x18] = (long)param_2;
  param_1[0x19] = 0x1fffffffffffffff;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  plVar10 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x28,8);
  if (plVar10 == (long *)0x0) {
    plVar17 = (long *)0x0;
    lVar9 = 0;
    lVar15 = 0;
  }
  else {
    if (((*puVar5 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar8 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_02cc68cc;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = param_2;
    puVar7 = PTR_DAT_0437a000;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    *plVar10 = (long)(puVar7 + 0x10);
    if (((DAT_043f1fd0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043f1fd0), iVar8 != 0)) {
      nn::os::InitializeLightEvent(&DAT_043f1fbc,0,1);
      DAT_043f1fc8 = 0;
      FUN_00100250(PTR_LAB_04381908,&DAT_043f1fb8,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043f1fd0);
    }
    lVar15 = nn::os::GetCurrentThread();
    do {
      if (DAT_043f1fc8 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)&DAT_043f1fbc);
          while (DAT_043f1fc8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(0x43f1fc8,0x10);
            if (bVar3) {
              cVar2 = ExclusiveMonitorsStatus();
              DAT_043f1fc8 = lVar15;
            }
            if (cVar2 == '\0') goto LAB_02cc63b0;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x43f1fc8,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        DAT_043f1fc8 = lVar15;
      }
    } while (cVar2 != '\0');
LAB_02cc63b0:
    if (0xff < DAT_043f1fb0) goto LAB_02cc68cc;
    (&DAT_043f17b0)[DAT_043f1fb0] = plVar10;
    DAT_043f1fb0 = DAT_043f1fb0 + 1;
    DAT_043f1fc8 = 0;
    nn::os::SignalLightEvent((LightEventType *)&DAT_043f1fbc);
    plVar10[4] = 0;
    *plVar10 = (long)&PTR_LAB_04296e30;
    plVar10[1] = 0;
    lVar15 = 8;
    plVar10[2] = 0;
    plVar10[3] = 0;
    DAT_04408ba0 = plVar10;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    lVar9 = 0x28;
    plVar17 = param_2;
  }
  lVar14 = *plVar11;
  *plVar11 = (long)plVar10;
  if (lVar14 != 0) {
    FUN_02cc8b20(param_1 + 0xb);
  }
  param_1[0xb] = (long)plVar17;
  param_1[0xc] = lVar9;
  param_1[0xd] = lVar15;
  plVar10 = DAT_04408ba0;
  DAT_04408ba0[2] = (long)param_2;
  plVar10[4] = 0x1800000;
  plVar11 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x1800000,0x10);
  plVar10[3] = (long)plVar11;
  if (plVar11 == (long *)0x0) {
    (**(code **)(*(long *)plVar10[2] + 0xb8))();
  }
  else {
    FUN_0287a808(plVar11,plVar11 + 0x16,&LAB_017fff50);
    plVar10[1] = (long)plVar11;
    (**(code **)(*plVar11 + 0xb0))(plVar11,"ResourceType::kNPLN");
  }
  param_1[0xe] = (long)plVar11;
  puVar12 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x10,8);
  if (puVar12 == (undefined8 *)0x0) {
    param_2 = (long *)0x0;
    lVar15 = 0;
    lVar9 = 0;
  }
  else {
    if (((*puVar5 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar8 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
    if (0xf < *(ulong *)(lVar14 + 0x80)) {
LAB_02cc68cc:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = param_2;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    lVar15 = param_1[0xe];
    lVar9 = 8;
    *puVar12 = &PTR_LAB_04296e60;
    puVar12[1] = lVar15;
    lVar15 = 0x10;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
  }
  lVar14 = param_1[0xf];
  param_1[0xf] = (long)puVar12;
  if (lVar14 == 0) goto LAB_02cc6660;
  FUN_02bcbe58(auStack_78,0);
  plVar10 = (long *)param_1[0x10];
  lVar1 = param_1[0x11];
  lVar16 = param_1[0x12];
  uVar13 = (**(code **)(*plVar10 + 0xc0))(plVar10);
  lVar4 = tpidr_el0;
  if ((uVar13 & 1) == 0) {
LAB_02cc65c0:
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar14,lVar1,lVar16);
  }
  else {
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_02cc65c0;
    FUN_02bcc824(plVar10,lVar14,lVar1,lVar16);
  }
  if (*(char *)(lVar4 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar4 + 0x38d488) = 1;
    *(undefined8 *)(lVar4 + 0x38d478) = 0;
    *(undefined8 *)(lVar4 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar8 = *(int *)(lVar4 + 0x38d480) + -1;
  *(int *)(lVar4 + 0x38d480) = iVar8;
  if (iVar8 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar4 + 0x38d484) = 0;
  }
  puVar12 = (undefined8 *)param_1[0xf];
LAB_02cc6660:
  param_1[0x10] = (long)param_2;
  param_1[0x11] = lVar15;
  param_1[0x12] = lVar9;
  FUN_006d6600(puVar12);
  return;
}


