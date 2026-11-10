/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b6ae7c; name: FUN_00b6ae7c
 */


void FUN_00b6ae7c(long param_1)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  byte *pbVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  int iVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  undefined8 *local_120;
  undefined8 uStack_118;
  undefined8 *local_110;
  undefined8 local_108;
  long *local_100;
  undefined8 local_f8;
  code *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long *plStack_d0;
  long local_c8;
  undefined8 *local_70 [2];
  
  if (*(char *)(param_1 + 0x1ef) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x1f0) != '\0') {
    return;
  }
  uVar14 = FUN_00b7083c(**(undefined8 **)(param_1 + 0x340));
  if ((uVar14 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x38c) == '\0') {
    *(undefined1 *)(param_1 + 0x38c) = 1;
    if (*(char *)(param_1 + 0x2b0) != '\0') {
      if (((*PTR_DAT_0437add8 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_0437add8), iVar13 != 0)) {
        FUN_00100250(&LAB_00b6d4dc,PTR_DAT_0437ade0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437add8);
      }
      lVar19 = *(long *)PTR_DAT_0437ade0;
      *(long *)PTR_DAT_0437ade8 = lVar19;
      lVar19 = *(long *)(lVar19 + 0x50);
      if (((*PTR_DAT_04379d48 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379d48), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_0437ad08,PTR_DAT_04379d50,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379d48);
      }
      uVar15 = *(undefined8 *)PTR_DAT_04379d50;
      *(undefined8 *)PTR_DAT_04379d58 = uVar15;
      FUN_00b57040(&local_100,uVar15,*(undefined8 *)(lVar19 + 8));
      plVar22 = local_100;
      if (local_100 != (long *)0x0) {
        lVar18 = local_100[0xb];
        if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_00b6bbb4;
        if (*(long *)(lVar18 + 0x10) == 0) {
          uVar15 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
          *(undefined8 *)(lVar18 + 0x10) = uVar15;
        }
        piVar1 = (int *)(lVar18 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      nn::os::LockMutex((MutexType *)(lVar19 + 0x448));
      local_d8 = (undefined1 *)0x0;
      plStack_d0 = plVar22;
      local_f0 = (code *)0x0;
      local_e8 = (code *)0x0;
      local_e0 = (undefined1 *)0x0;
      if (plVar22 != (long *)0x0) {
        lVar18 = plVar22[0xb];
        if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_00b6bbb4;
        if (*(long *)(lVar18 + 0x10) == 0) {
          uVar15 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
          *(undefined8 *)(lVar18 + 0x10) = uVar15;
        }
        piVar1 = (int *)(lVar18 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      local_f0 = FUN_00b6dbfc;
      local_e8 = FUN_00b6dd38;
      local_e0 = &LAB_00b6dd70;
      local_d8 = &LAB_00b6ddfc;
      local_c8 = param_1;
      if (*(ulong *)(lVar19 + 0x418) < *(ulong *)(lVar19 + 0x420)) {
        FUN_00b6d82c(lVar19 + 0x428,*(ulong *)(lVar19 + 0x418),&local_f0);
        *(long *)(lVar19 + 0x418) = *(long *)(lVar19 + 0x418) + 0x80;
        pcVar5 = local_e8;
      }
      else {
        FUN_00b6d74c(lVar19 + 0x410,&local_f0);
        pcVar5 = local_e8;
      }
      local_e8 = pcVar5;
      if (pcVar5 != (code *)0x0) {
        local_e0 = (undefined1 *)0x0;
        local_d8 = (undefined1 *)0x0;
        local_f0 = (code *)0x0;
        local_e8 = (code *)0x0;
        (*pcVar5)(&plStack_d0);
      }
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar19 + 0x468));
      nn::os::UnlockMutex((MutexType *)(lVar19 + 0x448));
      if (plVar22 != (long *)0x0) {
        lVar19 = plVar22[0xb];
        piVar1 = (int *)(lVar19 + 0xc);
        do {
          iVar13 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar19 + 0x18) = 0;
          (**(code **)(*plVar22 + 0x20))(plVar22);
        }
      }
      if (local_100 != (long *)0x0) {
        lVar19 = local_100[0xb];
        piVar1 = (int *)(lVar19 + 0xc);
        do {
          iVar13 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar19 + 0x18) = 0;
          (**(code **)(*local_100 + 0x20))();
          lVar19 = *(long *)(param_1 + 0x360);
          goto joined_r0x00b6b360;
        }
      }
      goto LAB_00b6aee8;
    }
    FUN_00b6bed4(param_1);
    lVar19 = *(long *)(param_1 + 0x360);
  }
  else {
LAB_00b6aee8:
    lVar19 = *(long *)(param_1 + 0x360);
  }
joined_r0x00b6b360:
  if (lVar19 == 0) {
    return;
  }
  plVar22 = *(long **)(param_1 + 0x340);
  if (*(char *)(*plVar22 + 0x418) == '\0') {
    return;
  }
  *(undefined8 *)(param_1 + 0x340) = 0;
  if (plVar22 != (long *)0x0) {
    FUN_02bcbe58(&local_f0,0);
    FUN_00b6f128(plVar22);
    plVar17 = *(long **)(param_1 + 0x348);
    uVar15 = *(undefined8 *)(param_1 + 0x350);
    uVar16 = *(undefined8 *)(param_1 + 0x358);
    uVar14 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    lVar19 = tpidr_el0;
    if ((uVar14 & 1) == 0) {
LAB_00b6b3e0:
      (**(code **)(*plVar17 + 0x18))(plVar17,plVar22,uVar15,uVar16);
    }
    else {
      if (*(char *)(lVar19 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar19 + 0x38d488) = 1;
        *(undefined8 *)(lVar19 + 0x38d478) = 0;
        *(undefined8 *)(lVar19 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar19 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar19 + 0x38d480) < 1) goto LAB_00b6b3e0;
      FUN_02bcc824(plVar17,plVar22,uVar15,uVar16);
    }
    if (*(char *)(lVar19 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar19 + 0x38d488) = 1;
      *(undefined8 *)(lVar19 + 0x38d478) = 0;
      *(undefined8 *)(lVar19 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar19 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar13 = *(int *)(lVar19 + 0x38d480) + -1;
    *(int *)(lVar19 + 0x38d480) = iVar13;
    if (iVar13 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar19 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar19 + 0x38d488) = 1;
        *(undefined8 *)(lVar19 + 0x38d478) = 0;
        *(undefined8 *)(lVar19 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar19 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar19 + 0x38d484) = 0;
    }
    lVar19 = *(long *)(param_1 + 0x360);
  }
  plVar22 = *(long **)(*(long *)(lVar19 + 0x158) + 0x98);
  if (plVar22 != (long *)0x0) {
    lVar19 = plVar22[0xb];
    if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) {
LAB_00b6bbb4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar19 + 0x10) == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
      *(undefined8 *)(lVar19 + 0x10) = uVar15;
    }
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_f0 = (code *)0x0;
  local_e8 = (code *)0x0;
  FUN_008802f0(&local_f0,plVar22 + 0xb);
  local_100 = (long *)0x0;
  local_f8 = 0;
  FUN_00880560(&local_100,&local_f0);
  pcVar5 = local_f0;
  puVar9 = PTR_DAT_043794a8;
  puVar8 = PTR_DAT_043794a0;
  puVar7 = PTR_DAT_04379498;
  if (local_f0 != (code *)0x0) {
    pcVar2 = local_f0 + 8;
    do {
      iVar13 = *(int *)pcVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar4) {
        *(int *)pcVar2 = iVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(local_f0 + 0x10) = 0;
      if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *(long *)puVar8;
      *(long *)puVar9 = lVar19;
      local_110 = *(undefined8 **)pcVar5;
      FUN_02a44274(lVar19 + 0xd8,&local_110);
    }
  }
  local_110 = (undefined8 *)0x0;
  local_108 = 0;
  do {
    uVar15 = local_f8;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(&local_f8,0x10);
    if (bVar4) {
      local_f8 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  uVar16 = *(undefined8 *)puVar8;
  *(undefined8 *)puVar9 = uVar16;
  FUN_02a44e0c(local_70,uVar16,uVar15);
  plVar17 = local_100;
  local_100 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    plVar23 = plVar17 + 1;
    do {
      iVar13 = (int)*plVar23 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar4) {
        *(int *)plVar23 = iVar13;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 == 0) {
      plVar17[2] = 0;
      if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *(long *)puVar8;
      *(long *)puVar9 = lVar19;
      local_f0 = (code *)*plVar17;
      FUN_02a44274(lVar19 + 0xd8,&local_f0);
    }
  }
  puVar12 = local_110;
  local_110 = (undefined8 *)0x0;
  if (local_70[0] == (undefined8 *)0x0) {
    if (puVar12 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar12 + 1);
      do {
        iVar13 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar13 == 1) {
        puVar12[2] = 0;
        if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar19 = *(long *)puVar8;
        *(long *)puVar9 = lVar19;
        local_f0 = (code *)*puVar12;
        FUN_02a44274(lVar19 + 0xd8,&local_f0);
      }
    }
    uVar15 = 0;
  }
  else {
    puVar20 = local_70[0];
    if (puVar12 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar12 + 1);
      do {
        iVar13 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar13 + -1 == 0) {
        puVar12[2] = 0;
        if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar19 = *(long *)puVar8;
        *(long *)puVar9 = lVar19;
        local_f0 = (code *)*puVar12;
        FUN_02a44274(lVar19 + 0xd8,&local_f0);
      }
      puVar20 = local_70[0];
    }
    local_70[0] = (undefined8 *)0x0;
    local_110 = puVar20;
  }
  puVar12 = local_70[0];
  local_108 = uVar15;
  if (local_70[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_70[0] + 1);
    do {
      iVar13 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 + -1 == 0) {
      local_70[0][2] = 0;
      if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *(long *)puVar8;
      *(long *)puVar9 = lVar19;
      local_f0 = (code *)*puVar12;
      FUN_02a44274(lVar19 + 0xd8,&local_f0);
    }
  }
  plVar17 = local_100;
  if (local_100 != (long *)0x0) {
    plVar23 = local_100 + 1;
    do {
      iVar13 = (int)*plVar23 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar4) {
        *(int *)plVar23 = iVar13;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 == 0) {
      local_100[2] = 0;
      if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *(long *)puVar8;
      *(long *)puVar9 = lVar19;
      local_f0 = (code *)*plVar17;
      FUN_02a44274(lVar19 + 0xd8,&local_f0);
    }
  }
  if (plVar22 != (long *)0x0) {
    lVar19 = plVar22[0xb];
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*plVar22 + 0x20))(plVar22);
      lVar19 = *(long *)(param_1 + 0x380);
      pbVar6 = PTR_DAT_04379520;
      goto joined_r0x00b6b16c;
    }
  }
  lVar19 = *(long *)(param_1 + 0x380);
  pbVar6 = PTR_DAT_04379520;
joined_r0x00b6b16c:
  PTR_DAT_04379520 = pbVar6;
  if (lVar19 == 0) {
    plVar22 = *(long **)(param_1 + 8);
    if (((*pbVar6 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(pbVar6), puVar10 = PTR_DAT_04379528, iVar13 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar10,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    puVar10 = PTR_DAT_04379528;
    lVar19 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar19 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = plVar22;
    *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
    plVar17 = (long *)(**(code **)(*plVar22 + 0x10))(plVar22,0x68,8);
    if (plVar17 == (long *)0x0) {
      (**(code **)(*plVar22 + 0xb8))(plVar22);
    }
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    FUN_00b6c658(&local_f0,&local_110);
    puVar11 = PTR_DAT_043796d0;
    plVar17[7] = 0;
    *(undefined4 *)(plVar17 + 8) = 0;
    *(undefined4 *)(plVar17 + 6) = 0;
    plVar17[2] = 0;
    plVar17[3] = 0;
    *plVar17 = (long)(puVar11 + 0x10);
    plVar17[4] = 0;
    plVar17[5] = 0;
    if (((*pbVar6 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_04379520), puVar11 = PTR_DAT_04379528, iVar13 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar11,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar18 = nn::os::GetTlsValue(*(undefined4 *)puVar10);
    if (lVar18 == 0) {
      lVar21 = 0;
    }
    else {
      lVar21 = 0;
      if (*(long *)(lVar18 + 0x80) != 0) {
        lVar21 = *(long *)(lVar18 + *(long *)(lVar18 + 0x80) * 8 + -8);
      }
    }
    plVar17[1] = lVar21;
    plVar23 = plVar17 + 10;
    *(int *)plVar23 = 0;
    *plVar17 = (long)&PTR_LAB_041d58b0;
    plVar17[9] = (long)&PTR_LAB_041d58e8;
    plVar17[0xb] = 0;
    plVar17[0xc] = 0;
    FUN_00b6c658(plVar17 + 0xb,&local_f0);
    pcVar5 = local_f0;
    if (local_f0 != (code *)0x0) {
      pcVar2 = local_f0 + 8;
      do {
        iVar13 = *(int *)pcVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar4) {
          *(int *)pcVar2 = iVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(local_f0 + 0x10) = 0;
        if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar18 = *(long *)puVar8;
        *(long *)puVar9 = lVar18;
        local_100 = *(long **)pcVar5;
        FUN_02a44274(lVar18 + 0xd8,&local_100);
      }
    }
    plVar17[1] = (long)plVar22;
    plVar17[2] = (long)plVar17;
    plVar17[3] = 0x68;
    plVar17[4] = 8;
    *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar4) {
        *(int *)plVar23 = (int)*plVar23 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar22 = *(long **)(param_1 + 0x380);
    *(undefined8 *)(param_1 + 0x380) = 0;
    if (plVar22 != (long *)0x0) {
      plVar23 = plVar22 + 10;
      do {
        iVar13 = (int)*plVar23 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar4) {
          *(int *)plVar23 = iVar13;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar13 == 0) {
        (**(code **)(*plVar22 + 0x10))();
      }
    }
    *(long **)(param_1 + 0x380) = plVar17;
  }
  else {
    local_120 = (undefined8 *)0x0;
    uStack_118 = 0;
    FUN_00b6c658(&local_120,&local_110);
    FUN_00b6c658(lVar19 + 0x58,&local_120);
    puVar12 = local_120;
    if (local_120 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_120 + 1);
      do {
        iVar13 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar13 + -1 == 0) {
        local_120[2] = 0;
        if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar19 = *(long *)puVar8;
        *(long *)puVar9 = lVar19;
        local_f0 = (code *)*puVar12;
        FUN_02a44274(lVar19 + 0xd8,&local_f0);
      }
    }
  }
  puVar12 = local_110;
  *(undefined1 *)(param_1 + 0x1f0) = 1;
  if (local_110 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_110 + 1);
    do {
      iVar13 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 + -1 == 0) {
      local_110[2] = 0;
      if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *(long *)puVar8;
      *(long *)puVar9 = lVar19;
      local_f0 = (code *)*puVar12;
      FUN_02a44274(lVar19 + 0xd8,&local_f0);
    }
  }
  return;
}


