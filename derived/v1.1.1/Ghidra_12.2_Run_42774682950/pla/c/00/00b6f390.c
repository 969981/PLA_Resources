/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b6f390; name: FUN_00b6f390
 */


void FUN_00b6f390(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *local_128;
  long *local_120;
  long *local_118;
  long *local_110;
  long *local_108;
  long *local_100;
  long local_f8;
  code *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long *plStack_d0;
  long local_c8;
  
  local_f8 = param_1;
  if (*(char *)(param_1 + 0xb0) == '\0') {
    FUN_00b73838(&local_f8);
  }
  else {
    if (((*PTR_DAT_0437add8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437add8), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437ae10,PTR_DAT_0437ade0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437add8);
    }
    lVar9 = *(long *)PTR_DAT_0437ade0;
    *(long *)PTR_DAT_0437ade8 = lVar9;
    lVar9 = *(long *)(lVar9 + 0x50);
    if (((*PTR_DAT_04379d48 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379d48), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437ad08,PTR_DAT_04379d50,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379d48);
    }
    uVar7 = *(undefined8 *)PTR_DAT_04379d50;
    *(undefined8 *)PTR_DAT_04379d58 = uVar7;
    FUN_00b57040(&local_100,uVar7,*(undefined8 *)(lVar9 + 8));
    plVar11 = local_100;
    if (local_100 != (long *)0x0) {
      lVar10 = local_100[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_00b70824;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    nn::os::LockMutex((MutexType *)(lVar9 + 0x448));
    local_d8 = (undefined1 *)0x0;
    plStack_d0 = plVar11;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    local_e0 = (undefined1 *)0x0;
    if (plVar11 != (long *)0x0) {
      lVar10 = plVar11[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_00b70824;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_f0 = FUN_00b741d0;
    local_e8 = FUN_00b7430c;
    local_e0 = &LAB_00b74344;
    local_d8 = &LAB_00b743d0;
    if (*(ulong *)(lVar9 + 0x418) < *(ulong *)(lVar9 + 0x420)) {
      local_c8 = param_1;
      FUN_00b6d82c(lVar9 + 0x428,*(ulong *)(lVar9 + 0x418),&local_f0);
      *(long *)(lVar9 + 0x418) = *(long *)(lVar9 + 0x418) + 0x80;
      pcVar4 = local_e8;
    }
    else {
      local_c8 = param_1;
      FUN_00b740a0(lVar9 + 0x410,&local_f0);
      pcVar4 = local_e8;
    }
    local_e8 = pcVar4;
    if (pcVar4 != (code *)0x0) {
      local_e0 = (undefined1 *)0x0;
      local_d8 = (undefined1 *)0x0;
      local_f0 = (code *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar4)(&plStack_d0);
    }
    nn::os::SignalConditionVariable((ConditionVariableType *)(lVar9 + 0x468));
    nn::os::UnlockMutex((MutexType *)(lVar9 + 0x448));
    if (plVar11 != (long *)0x0) {
      lVar9 = plVar11[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))(plVar11);
      }
    }
    if (local_100 != (long *)0x0) {
      lVar9 = local_100[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_100 + 0x20))();
      }
    }
  }
  if (*(char *)(param_1 + 0xb0) == '\0') {
    local_f8 = param_1;
    FUN_00b73c2c(&local_f8);
LAB_00b6f3dc:
    if (*(char *)(param_1 + 0xb0) != '\0') goto LAB_00b6f890;
LAB_00b6f3e4:
    FUN_00b74e00(param_1 + 0x310);
LAB_00b6f3ec:
    if (*(char *)(param_1 + 0xb0) != '\0') goto LAB_00b6fa60;
LAB_00b6f3f4:
    if (*(long *)(param_1 + 0x300) != 0) {
      if (*(long **)(param_1 + 0x2d8) != (long *)0x0) {
        lVar9 = tpidr_el0;
        plVar11 = *(long **)(param_1 + 0x2d8);
        do {
          while( true ) {
            plVar13 = (long *)*plVar11;
            FUN_00b7545c(plVar11 + 2);
            plVar12 = *(long **)(param_1 + 0x2e0);
            uVar6 = (**(code **)(*plVar12 + 0xc0))(plVar12);
            if ((uVar6 & 1) != 0) break;
LAB_00b6f488:
            (**(code **)(*plVar12 + 0x18))(plVar12,plVar11,0x50,8);
            plVar11 = plVar13;
            if (plVar13 == (long *)0x0) goto LAB_00b6f4cc;
          }
          if (*(char *)(lVar9 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar9 + 0x38d488) = 1;
            *(undefined8 *)(lVar9 + 0x38d478) = 0;
            *(undefined8 *)(lVar9 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar9 + 0x38d480) < 1) goto LAB_00b6f488;
          FUN_02bcc824(plVar12,plVar11,0x50,8);
          plVar11 = plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_00b6f4cc:
      uVar6 = *(ulong *)(param_1 + 0x2b0);
      *(undefined8 *)(param_1 + 0x2d8) = 0;
      if (uVar6 != 0) {
        uVar8 = uVar6 & 3;
        if (uVar6 - 1 < 3) {
          lVar9 = 0;
        }
        else {
          lVar9 = 0;
          do {
            lVar10 = lVar9 * 8;
            lVar9 = lVar9 + 4;
            *(undefined8 *)(*(long *)(param_1 + 0x2a8) + lVar10) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x2a8) + lVar10 + 8) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x2a8) + lVar10 + 0x10) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x2a8) + lVar10 + 0x18) = 0;
          } while (uVar6 - uVar8 != lVar9);
        }
        if (uVar8 != 0) {
          lVar9 = lVar9 << 3;
          do {
            *(undefined8 *)(*(long *)(param_1 + 0x2a8) + lVar9) = 0;
            uVar8 = uVar8 - 1;
            lVar9 = lVar9 + 8;
          } while (uVar8 != 0);
        }
      }
      *(undefined8 *)(param_1 + 0x300) = 0;
    }
LAB_00b6fc98:
    if (*(char *)(param_1 + 0xb0) != '\0') goto LAB_00b6fda0;
LAB_00b6fca0:
    if (*(long *)(param_1 + 0x298) != 0) {
      if (*(long **)(param_1 + 0x270) != (long *)0x0) {
        lVar9 = tpidr_el0;
        plVar11 = *(long **)(param_1 + 0x270);
        do {
          while( true ) {
            plVar13 = (long *)*plVar11;
            FUN_00b7545c(plVar11 + 2);
            plVar12 = *(long **)(param_1 + 0x278);
            uVar6 = (**(code **)(*plVar12 + 0xc0))(plVar12);
            if ((uVar6 & 1) != 0) break;
LAB_00b6fd34:
            (**(code **)(*plVar12 + 0x18))(plVar12,plVar11,0x50,8);
            plVar11 = plVar13;
            if (plVar13 == (long *)0x0) goto LAB_00b6fd78;
          }
          if (*(char *)(lVar9 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar9 + 0x38d488) = 1;
            *(undefined8 *)(lVar9 + 0x38d478) = 0;
            *(undefined8 *)(lVar9 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar9 + 0x38d480) < 1) goto LAB_00b6fd34;
          FUN_02bcc824(plVar12,plVar11,0x50,8);
          plVar11 = plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_00b6fd78:
      uVar6 = *(ulong *)(param_1 + 0x248);
      *(undefined8 *)(param_1 + 0x270) = 0;
      if (uVar6 != 0) {
        uVar8 = uVar6 & 3;
        if (uVar6 - 1 < 3) {
          lVar9 = 0;
        }
        else {
          lVar9 = 0;
          do {
            lVar10 = lVar9 * 8;
            lVar9 = lVar9 + 4;
            *(undefined8 *)(*(long *)(param_1 + 0x240) + lVar10) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x240) + lVar10 + 8) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x240) + lVar10 + 0x10) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x240) + lVar10 + 0x18) = 0;
          } while (uVar6 - uVar8 != lVar9);
        }
        if (uVar8 != 0) {
          lVar9 = lVar9 << 3;
          do {
            *(undefined8 *)(*(long *)(param_1 + 0x240) + lVar9) = 0;
            uVar8 = uVar8 - 1;
            lVar9 = lVar9 + 8;
          } while (uVar8 != 0);
        }
      }
      *(undefined8 *)(param_1 + 0x298) = 0;
    }
LAB_00b6ffd8:
    cVar2 = *(char *)(param_1 + 0xb0);
  }
  else {
    local_f8 = param_1;
    if (((*PTR_DAT_0437add8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437add8), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437ae10,PTR_DAT_0437ade0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437add8);
    }
    lVar9 = *(long *)PTR_DAT_0437ade0;
    *(long *)PTR_DAT_0437ade8 = lVar9;
    lVar9 = *(long *)(lVar9 + 0x50);
    if (((*PTR_DAT_04379d48 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379d48), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437ad08,PTR_DAT_04379d50,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379d48);
    }
    uVar7 = *(undefined8 *)PTR_DAT_04379d50;
    *(undefined8 *)PTR_DAT_04379d58 = uVar7;
    FUN_00b57040(&local_108,uVar7,*(undefined8 *)(lVar9 + 8));
    plVar11 = local_108;
    if (local_108 != (long *)0x0) {
      lVar10 = local_108[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_00b70824;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    nn::os::LockMutex((MutexType *)(lVar9 + 0x448));
    local_d8 = (undefined1 *)0x0;
    plStack_d0 = plVar11;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    local_e0 = (undefined1 *)0x0;
    if (plVar11 != (long *)0x0) {
      lVar10 = plVar11[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_00b70824;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_f0 = FUN_00b7467c;
    local_e8 = FUN_00b747b8;
    local_e0 = &LAB_00b747f0;
    local_d8 = &LAB_00b7487c;
    if (*(ulong *)(lVar9 + 0x418) < *(ulong *)(lVar9 + 0x420)) {
      local_c8 = param_1;
      FUN_00b6d82c(lVar9 + 0x428,*(ulong *)(lVar9 + 0x418),&local_f0);
      *(long *)(lVar9 + 0x418) = *(long *)(lVar9 + 0x418) + 0x80;
      pcVar4 = local_e8;
    }
    else {
      local_c8 = param_1;
      FUN_00b740a0(lVar9 + 0x410,&local_f0);
      pcVar4 = local_e8;
    }
    local_e8 = pcVar4;
    if (pcVar4 != (code *)0x0) {
      local_e0 = (undefined1 *)0x0;
      local_d8 = (undefined1 *)0x0;
      local_f0 = (code *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar4)(&plStack_d0);
    }
    nn::os::SignalConditionVariable((ConditionVariableType *)(lVar9 + 0x468));
    nn::os::UnlockMutex((MutexType *)(lVar9 + 0x448));
    if (plVar11 != (long *)0x0) {
      lVar9 = plVar11[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))(plVar11);
      }
    }
    if (local_108 == (long *)0x0) goto LAB_00b6f3dc;
    lVar9 = local_108[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 != 0) goto LAB_00b6f3dc;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*local_108 + 0x20))();
    if (*(char *)(param_1 + 0xb0) == '\0') goto LAB_00b6f3e4;
LAB_00b6f890:
    if (((*PTR_DAT_0437add8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437add8), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437ae10,PTR_DAT_0437ade0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437add8);
    }
    lVar9 = *(long *)PTR_DAT_0437ade0;
    *(long *)PTR_DAT_0437ade8 = lVar9;
    lVar9 = *(long *)(lVar9 + 0x50);
    if (((*PTR_DAT_04379d48 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379d48), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437ad08,PTR_DAT_04379d50,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379d48);
    }
    uVar7 = *(undefined8 *)PTR_DAT_04379d50;
    *(undefined8 *)PTR_DAT_04379d58 = uVar7;
    FUN_00b57040(&local_110,uVar7,*(undefined8 *)(lVar9 + 8));
    plVar11 = local_110;
    if (local_110 != (long *)0x0) {
      lVar10 = local_110[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_00b70824;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    nn::os::LockMutex((MutexType *)(lVar9 + 0x448));
    local_d8 = (undefined1 *)0x0;
    plStack_d0 = plVar11;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    local_e0 = (undefined1 *)0x0;
    if (plVar11 != (long *)0x0) {
      lVar10 = plVar11[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_00b70824;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_f0 = FUN_00b74be4;
    local_e8 = FUN_00b74d24;
    local_e0 = &LAB_00b74d5c;
    local_d8 = &LAB_00b74de8;
    if (*(ulong *)(lVar9 + 0x418) < *(ulong *)(lVar9 + 0x420)) {
      local_c8 = param_1;
      FUN_00b6d82c(lVar9 + 0x428,*(ulong *)(lVar9 + 0x418),&local_f0);
      *(long *)(lVar9 + 0x418) = *(long *)(lVar9 + 0x418) + 0x80;
      pcVar4 = local_e8;
    }
    else {
      local_c8 = param_1;
      FUN_00b740a0(lVar9 + 0x410,&local_f0);
      pcVar4 = local_e8;
    }
    local_e8 = pcVar4;
    if (pcVar4 != (code *)0x0) {
      local_e0 = (undefined1 *)0x0;
      local_d8 = (undefined1 *)0x0;
      local_f0 = (code *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar4)(&plStack_d0);
    }
    nn::os::SignalConditionVariable((ConditionVariableType *)(lVar9 + 0x468));
    nn::os::UnlockMutex((MutexType *)(lVar9 + 0x448));
    if (plVar11 != (long *)0x0) {
      lVar9 = plVar11[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))(plVar11);
      }
    }
    if (local_110 == (long *)0x0) goto LAB_00b6f3ec;
    lVar9 = local_110[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 != 0) goto LAB_00b6f3ec;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*local_110 + 0x20))();
    if (*(char *)(param_1 + 0xb0) == '\0') goto LAB_00b6f3f4;
LAB_00b6fa60:
    if (((*PTR_DAT_0437add8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437add8), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437ae10,PTR_DAT_0437ade0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437add8);
    }
    lVar9 = *(long *)PTR_DAT_0437ade0;
    *(long *)PTR_DAT_0437ade8 = lVar9;
    lVar9 = *(long *)(lVar9 + 0x50);
    if (((*PTR_DAT_04379d48 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379d48), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437ad08,PTR_DAT_04379d50,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379d48);
    }
    uVar7 = *(undefined8 *)PTR_DAT_04379d50;
    *(undefined8 *)PTR_DAT_04379d58 = uVar7;
    FUN_00b57040(&local_118,uVar7,*(undefined8 *)(lVar9 + 8));
    plVar11 = local_118;
    if (local_118 != (long *)0x0) {
      lVar10 = local_118[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_00b70824;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    nn::os::LockMutex((MutexType *)(lVar9 + 0x448));
    local_d8 = (undefined1 *)0x0;
    plStack_d0 = plVar11;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    local_e0 = (undefined1 *)0x0;
    if (plVar11 != (long *)0x0) {
      lVar10 = plVar11[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_00b70824;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_f0 = FUN_00b7507c;
    local_e8 = FUN_00b75380;
    local_e0 = &LAB_00b753b8;
    local_d8 = &LAB_00b75444;
    if (*(ulong *)(lVar9 + 0x418) < *(ulong *)(lVar9 + 0x420)) {
      local_c8 = param_1;
      FUN_00b6d82c(lVar9 + 0x428,*(ulong *)(lVar9 + 0x418),&local_f0);
      *(long *)(lVar9 + 0x418) = *(long *)(lVar9 + 0x418) + 0x80;
      pcVar4 = local_e8;
    }
    else {
      local_c8 = param_1;
      FUN_00b740a0(lVar9 + 0x410,&local_f0);
      pcVar4 = local_e8;
    }
    local_e8 = pcVar4;
    if (pcVar4 != (code *)0x0) {
      local_e0 = (undefined1 *)0x0;
      local_d8 = (undefined1 *)0x0;
      local_f0 = (code *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar4)(&plStack_d0);
    }
    nn::os::SignalConditionVariable((ConditionVariableType *)(lVar9 + 0x468));
    nn::os::UnlockMutex((MutexType *)(lVar9 + 0x448));
    if (plVar11 != (long *)0x0) {
      lVar9 = plVar11[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))(plVar11);
      }
    }
    if (local_118 == (long *)0x0) goto LAB_00b6fc98;
    lVar9 = local_118[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 != 0) goto LAB_00b6fc98;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*local_118 + 0x20))();
    if (*(char *)(param_1 + 0xb0) == '\0') goto LAB_00b6fca0;
LAB_00b6fda0:
    if (((*PTR_DAT_0437add8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437add8), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437ae10,PTR_DAT_0437ade0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437add8);
    }
    lVar9 = *(long *)PTR_DAT_0437ade0;
    *(long *)PTR_DAT_0437ade8 = lVar9;
    lVar9 = *(long *)(lVar9 + 0x50);
    if (((*PTR_DAT_04379d48 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379d48), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437ad08,PTR_DAT_04379d50,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379d48);
    }
    uVar7 = *(undefined8 *)PTR_DAT_04379d50;
    *(undefined8 *)PTR_DAT_04379d58 = uVar7;
    FUN_00b57040(&local_120,uVar7,*(undefined8 *)(lVar9 + 8));
    plVar11 = local_120;
    if (local_120 != (long *)0x0) {
      lVar10 = local_120[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_00b70824;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    nn::os::LockMutex((MutexType *)(lVar9 + 0x448));
    local_d8 = (undefined1 *)0x0;
    plStack_d0 = plVar11;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    local_e0 = (undefined1 *)0x0;
    if (plVar11 != (long *)0x0) {
      lVar10 = plVar11[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_00b70824;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_f0 = FUN_00b756d8;
    local_e8 = FUN_00b759dc;
    local_e0 = &LAB_00b75a14;
    local_d8 = &LAB_00b75aa0;
    if (*(ulong *)(lVar9 + 0x418) < *(ulong *)(lVar9 + 0x420)) {
      local_c8 = param_1;
      FUN_00b6d82c(lVar9 + 0x428,*(ulong *)(lVar9 + 0x418),&local_f0);
      *(long *)(lVar9 + 0x418) = *(long *)(lVar9 + 0x418) + 0x80;
      pcVar4 = local_e8;
    }
    else {
      local_c8 = param_1;
      FUN_00b740a0(lVar9 + 0x410,&local_f0);
      pcVar4 = local_e8;
    }
    local_e8 = pcVar4;
    if (pcVar4 != (code *)0x0) {
      local_e0 = (undefined1 *)0x0;
      local_d8 = (undefined1 *)0x0;
      local_f0 = (code *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar4)(&plStack_d0);
    }
    nn::os::SignalConditionVariable((ConditionVariableType *)(lVar9 + 0x468));
    nn::os::UnlockMutex((MutexType *)(lVar9 + 0x448));
    if (plVar11 != (long *)0x0) {
      lVar9 = plVar11[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))(plVar11);
      }
    }
    if (local_120 == (long *)0x0) goto LAB_00b6ffd8;
    lVar9 = local_120[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 != 0) goto LAB_00b6ffd8;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*local_120 + 0x20))();
    cVar2 = *(char *)(param_1 + 0xb0);
  }
  if (cVar2 == '\0') {
    if (*(long *)(param_1 + 0x230) != 0) {
      if (*(long **)(param_1 + 0x208) != (long *)0x0) {
        lVar9 = tpidr_el0;
        plVar11 = *(long **)(param_1 + 0x208);
        do {
          while( true ) {
            plVar13 = (long *)*plVar11;
            FUN_00b7545c(plVar11 + 2);
            plVar12 = *(long **)(param_1 + 0x210);
            uVar6 = (**(code **)(*plVar12 + 0xc0))(plVar12);
            if ((uVar6 & 1) != 0) break;
LAB_00b70074:
            (**(code **)(*plVar12 + 0x18))(plVar12,plVar11,0x50,8);
            plVar11 = plVar13;
            if (plVar13 == (long *)0x0) goto LAB_00b700b8;
          }
          if (*(char *)(lVar9 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar9 + 0x38d488) = 1;
            *(undefined8 *)(lVar9 + 0x38d478) = 0;
            *(undefined8 *)(lVar9 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar9 + 0x38d480) < 1) goto LAB_00b70074;
          FUN_02bcc824(plVar12,plVar11,0x50,8);
          plVar11 = plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_00b700b8:
      uVar6 = *(ulong *)(param_1 + 0x1e0);
      *(undefined8 *)(param_1 + 0x208) = 0;
      if (uVar6 != 0) {
        uVar8 = uVar6 & 3;
        if (uVar6 - 1 < 3) {
          lVar9 = 0;
        }
        else {
          lVar9 = 0;
          do {
            lVar10 = lVar9 * 8;
            lVar9 = lVar9 + 4;
            *(undefined8 *)(*(long *)(param_1 + 0x1d8) + lVar10) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x1d8) + lVar10 + 8) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x1d8) + lVar10 + 0x10) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x1d8) + lVar10 + 0x18) = 0;
          } while (uVar6 - uVar8 != lVar9);
        }
        if (uVar8 != 0) {
          lVar9 = lVar9 << 3;
          do {
            *(undefined8 *)(*(long *)(param_1 + 0x1d8) + lVar9) = 0;
            uVar8 = uVar8 - 1;
            lVar9 = lVar9 + 8;
          } while (uVar8 != 0);
        }
      }
      *(undefined8 *)(param_1 + 0x230) = 0;
    }
    *(undefined1 *)(param_1 + 0x418) = 1;
  }
  else {
    if (((*PTR_DAT_0437add8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437add8), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437ae10,PTR_DAT_0437ade0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437add8);
    }
    lVar9 = *(long *)PTR_DAT_0437ade0;
    *(long *)PTR_DAT_0437ade8 = lVar9;
    lVar9 = *(long *)(lVar9 + 0x50);
    if (((*PTR_DAT_04379d48 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379d48), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437ad08,PTR_DAT_04379d50,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379d48);
    }
    uVar7 = *(undefined8 *)PTR_DAT_04379d50;
    *(undefined8 *)PTR_DAT_04379d58 = uVar7;
    FUN_00b57040(&local_128,uVar7,*(undefined8 *)(lVar9 + 8));
    plVar11 = local_128;
    if (local_128 != (long *)0x0) {
      lVar10 = local_128[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_00b70824;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    nn::os::LockMutex((MutexType *)(lVar9 + 0x448));
    local_d8 = (undefined1 *)0x0;
    plStack_d0 = plVar11;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    local_e0 = (undefined1 *)0x0;
    if (plVar11 != (long *)0x0) {
      lVar10 = plVar11[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_00b70824:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_f0 = (code *)&LAB_00b75ab8;
    local_e8 = FUN_00b75dc4;
    local_e0 = &LAB_00b75dfc;
    local_d8 = &LAB_00b75e88;
    if (*(ulong *)(lVar9 + 0x418) < *(ulong *)(lVar9 + 0x420)) {
      local_c8 = param_1;
      FUN_00b6d82c(lVar9 + 0x428,*(ulong *)(lVar9 + 0x418),&local_f0);
      *(long *)(lVar9 + 0x418) = *(long *)(lVar9 + 0x418) + 0x80;
      pcVar4 = local_e8;
    }
    else {
      local_c8 = param_1;
      FUN_00b740a0(lVar9 + 0x410,&local_f0);
      pcVar4 = local_e8;
    }
    local_e8 = pcVar4;
    if (pcVar4 != (code *)0x0) {
      local_e0 = (undefined1 *)0x0;
      local_d8 = (undefined1 *)0x0;
      local_f0 = (code *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar4)(&plStack_d0);
    }
    nn::os::SignalConditionVariable((ConditionVariableType *)(lVar9 + 0x468));
    nn::os::UnlockMutex((MutexType *)(lVar9 + 0x448));
    if (plVar11 != (long *)0x0) {
      lVar9 = plVar11[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))(plVar11);
      }
    }
    if (local_128 != (long *)0x0) {
      lVar9 = local_128[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_128 + 0x20))();
      }
    }
  }
  return;
}


