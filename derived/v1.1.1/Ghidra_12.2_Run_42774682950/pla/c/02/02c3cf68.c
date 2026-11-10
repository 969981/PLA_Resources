/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c3cf68; name: FUN_02c3cf68
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c3cf68(long param_1,undefined4 *param_2)

{
  int *piVar1;
  long *plVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined1 auStack_68 [24];
  
  *(undefined4 *)(param_1 + 200) = *param_2;
  lVar18 = *(long *)(param_2 + 2);
  if (lVar18 != 0) {
    piVar1 = (int *)(lVar18 + 0x50);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar12 = *(long **)(param_1 + 0xd0);
  *(long *)(param_1 + 0xd0) = lVar18;
  if (plVar12 != (long *)0x0) {
    plVar2 = plVar12 + 10;
    do {
      iVar11 = (int)*plVar2 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar11;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  puVar8 = PTR_DAT_04379520;
  plVar12 = *(long **)(param_1 + 8);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379520), puVar9 = PTR_DAT_04379528, iVar11 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar9 = PTR_DAT_04379528;
  lVar18 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar18 + 0x80)) {
LAB_02c3d850:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar12;
  *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
  lVar13 = (**(code **)(*plVar12 + 0x10))(plVar12,0x60,8);
  if (lVar13 == 0) {
    (**(code **)(*plVar12 + 0xb8))(plVar12);
    FUN_02c3f3f0(0);
    _DAT_00000010 = 0;
    _DAT_00000018 = 0x60;
    _DAT_00000020 = 8;
    _DAT_00000008 = plVar12;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
  }
  else {
    FUN_02c3f3f0(lVar13);
    *(long **)(lVar13 + 8) = plVar12;
    *(long *)(lVar13 + 0x10) = lVar13;
    *(undefined8 *)(lVar13 + 0x18) = 0x60;
    *(undefined8 *)(lVar13 + 0x20) = 8;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
    piVar1 = (int *)(lVar13 + 0x50);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar12 = *(long **)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  if (plVar12 != (long *)0x0) {
    plVar2 = plVar12 + 10;
    do {
      iVar11 = (int)*plVar2 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar11;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  *(long *)(param_1 + 0xd8) = lVar13;
  plVar12 = *(long **)(param_1 + 8);
  if (((*puVar8 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379520), puVar10 = PTR_DAT_04379528, iVar11 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar10,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar18 = nn::os::GetTlsValue(*(undefined4 *)puVar9);
  if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_02c3d850;
  *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar12;
  *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
  lVar13 = (**(code **)(*plVar12 + 0x10))(plVar12,0x5e0,0x10);
  if (lVar13 == 0) {
    (**(code **)(*plVar12 + 0xb8))(plVar12);
    FUN_02c49b24(0);
    _DAT_00000010 = 0;
    _DAT_00000018 = 0x5e0;
    _DAT_00000020 = 0x10;
    _DAT_00000008 = plVar12;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
  }
  else {
    FUN_02c49b24(lVar13);
    *(long **)(lVar13 + 8) = plVar12;
    *(long *)(lVar13 + 0x10) = lVar13;
    *(undefined8 *)(lVar13 + 0x18) = 0x5e0;
    *(undefined8 *)(lVar13 + 0x20) = 0x10;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
    lVar18 = *(long *)(lVar13 + 0x58);
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar12 = *(long **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (plVar12 != (long *)0x0) {
    lVar18 = plVar12[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))();
    }
  }
  *(long *)(param_1 + 0x50) = lVar13;
  uVar14 = *(undefined8 *)(param_2 + 6);
  uVar19 = *(undefined8 *)(param_2 + 8);
  uVar5 = param_2[10];
  *(undefined8 *)(lVar13 + 0x470) = *(undefined8 *)(param_2 + 4);
  *(undefined4 *)(lVar13 + 0x488) = uVar5;
  *(undefined8 *)(lVar13 + 0x480) = uVar19;
  *(undefined8 *)(lVar13 + 0x478) = uVar14;
  *(undefined1 *)(lVar13 + 0x48d) = 1;
  FUN_02c3a000(lVar13 + 0x440);
  FUN_02c3a2c4(lVar13 + 0x440,param_2 + 0xc);
  *(undefined8 *)(*(long *)(param_1 + 0x50) + 0x500) = *(undefined8 *)(param_2 + 0x18);
  plVar12 = *(long **)(param_1 + 8);
  if (((*PTR_DAT_043882a0 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_043882a0), iVar11 != 0)) {
    FUN_00100250(&LAB_02c3e740,PTR_DAT_043882a8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_043882a0);
    bVar3 = *puVar8;
  }
  else {
    bVar3 = *puVar8;
  }
  if (((bVar3 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528, iVar11 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar18 = nn::os::GetTlsValue(*(undefined4 *)puVar9);
  if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_02c3d850;
  *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar12;
  *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
  puVar15 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12,0x68,8);
  if (puVar15 == (undefined8 *)0x0) {
    (**(code **)(*plVar12 + 0xb8))(plVar12);
    _DAT_00000060 = 0;
    _DAT_00000058 = 0;
    _DAT_00000050 = 0;
    _DAT_00000048 = 0;
    _DAT_00000040 = 0;
    _DAT_00000038 = 0;
    _DAT_00000030 = 0;
    _DAT_00000028 = 0;
    _DAT_00000020 = 0;
    _DAT_00000018 = 0;
    uRam0000000000000000 = 0;
    _DAT_00000010 = 0;
    _DAT_00000008 = (long *)0x0;
    FUN_02c3e9a8();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar15[0xb] = 0;
  puVar15[0xc] = 0;
  *puVar15 = 0;
  puVar15[9] = 0;
  puVar15[10] = 0;
  puVar15[7] = 0;
  puVar15[8] = 0;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[3] = 0;
  puVar15[4] = 0;
  puVar15[1] = 0;
  puVar15[2] = 0;
  FUN_02c3e9a8();
  *puVar15 = &PTR_LAB_0428a290;
  puVar15[1] = plVar12;
  puVar15[2] = puVar15;
  puVar15[3] = 0x68;
  puVar15[4] = 8;
  puVar15[9] = &PTR_LAB_0428a2c0;
  puVar15[10] = 0;
  puVar15[0xb] = 0;
  puVar15[0xc] = 0;
  puVar8 = PTR_DAT_043882a8;
  *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
  puVar20 = *(undefined8 **)puVar8;
  *(undefined8 **)puVar8 = puVar15;
  if (puVar20 == (undefined8 *)0x0) goto LAB_02c3d440;
  plVar12 = (long *)puVar20[1];
  uVar19 = puVar20[2];
  uVar14 = puVar20[3];
  uVar4 = puVar20[4];
  FUN_02bcbe58(auStack_68,0);
  (**(code **)*puVar20)(puVar20);
  uVar16 = (**(code **)(*plVar12 + 0xc0))(plVar12);
  lVar18 = tpidr_el0;
  if ((uVar16 & 1) == 0) {
LAB_02c3d3a0:
    (**(code **)(*plVar12 + 0x18))(plVar12,uVar19,uVar14,uVar4);
  }
  else {
    if (*(char *)(lVar18 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar18 + 0x38d488) = 1;
      *(undefined8 *)(lVar18 + 0x38d478) = 0;
      *(undefined8 *)(lVar18 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar18 + 0x38d480) < 1) goto LAB_02c3d3a0;
    FUN_02bcc824(plVar12,uVar19,uVar14,uVar4);
  }
  if (*(char *)(lVar18 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar18 + 0x38d488) = 1;
    *(undefined8 *)(lVar18 + 0x38d478) = 0;
    *(undefined8 *)(lVar18 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar11 = *(int *)(lVar18 + 0x38d480) + -1;
  *(int *)(lVar18 + 0x38d480) = iVar11;
  if (iVar11 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar18 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar18 + 0x38d488) = 1;
      *(undefined8 *)(lVar18 + 0x38d478) = 0;
      *(undefined8 *)(lVar18 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar18 + 0x38d484) = 0;
  }
  puVar15 = *(undefined8 **)puVar8;
LAB_02c3d440:
  lVar18 = (long)(int)DAT_043eeed0;
  if (0x3ff < DAT_043eeed0) {
                    /* WARNING: Subroutine does not return */
    FUN_02a47540();
  }
  DAT_043eeed0 = DAT_043eeed0 + 1;
  puVar20 = (undefined8 *)0x0;
  if (puVar15 != (undefined8 *)0x0) {
    puVar20 = puVar15 + 9;
  }
  *(undefined8 **)(&DAT_043eced0 + lVar18 * 8) = puVar20;
  uVar14 = FUN_02c3d8f0(0);
  lVar18 = FUN_02c3d8f0(1);
  lVar13 = FUN_02c3d8f0(2);
  lVar17 = nn::os::GetCurrentThread();
  plVar12 = (long *)(lVar18 + 0x208);
  do {
    if (*plVar12 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0x1fc));
        while (*plVar12 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar7) {
            *plVar12 = lVar17;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_02c3d4dc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar7) {
      *plVar12 = lVar17;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_02c3d4dc:
  FUN_02a70468(lVar18,uVar14,0);
  FUN_02a70468(lVar18,0,lVar13);
  *(undefined8 *)(lVar18 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar18 + 0x1fc));
  lVar18 = nn::os::GetCurrentThread();
  plVar12 = (long *)(lVar13 + 0x208);
  do {
    if (*plVar12 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x1fc));
        while (*plVar12 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar7) {
            *plVar12 = lVar18;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_02c3d554;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar7) {
      *plVar12 = lVar18;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_02c3d554:
  if (((*PTR_DAT_0437b4f8 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_0437b4f8), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_0437b590,PTR_DAT_0437b500,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b4f8);
  }
  lVar18 = *(long *)PTR_DAT_0437b500;
  *(long *)PTR_DAT_0437b508 = lVar18;
  FUN_02a70468(lVar13,0,*(undefined8 *)(lVar18 + 0x50));
  *(undefined8 *)(lVar13 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x1fc));
  return;
}


