/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b7083c; name: FUN_00b7083c
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00b7083c(long *param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  char *pcVar12;
  undefined **ppuVar13;
  long *plVar14;
  int iVar15;
  undefined8 *puVar16;
  code *pcVar17;
  ulong uVar18;
  uint *puVar19;
  int *piVar20;
  ulong uVar21;
  byte *pbVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long *plVar27;
  long *local_170;
  long *local_168;
  long *local_160;
  undefined1 auStack_158 [24];
  long local_140;
  long *local_138;
  long local_130;
  long local_128;
  long *local_120;
  undefined1 auStack_118 [24];
  long *local_100;
  undefined **local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long *local_d0;
  long *local_c8;
  
  iVar9 = (int)param_1[0x3a];
  iVar15 = 8;
  switch(iVar9) {
  case 0:
    break;
  case 1:
    goto switchD_00b70884_caseD_1;
  case 2:
    lVar24 = param_1[0x33];
    goto LAB_00b70bf0;
  case 3:
    goto switchD_00b70884_caseD_3;
  case 4:
    goto switchD_00b70884_caseD_4;
  case 5:
    plVar23 = (long *)param_1[0x4e];
    goto joined_r0x00b7088c;
  case 6:
    goto switchD_00b70884_caseD_6;
  case 7:
    goto switchD_00b70884_caseD_7;
  case 8:
    goto switchD_00b70884_caseD_8;
  case 9:
    if ((char)param_1[0x16] == '\0') {
      local_120 = param_1;
      FUN_00b770ec(&local_120);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x3a) = 0xc;
    local_120 = param_1;
    if ((*PTR_DAT_0437add8 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_0437add8);
      if (iVar9 != 0) {
        FUN_00100250(PTR_LAB_0437ae10,PTR_DAT_0437ade0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437add8);
      }
    }
    lVar24 = *(long *)PTR_DAT_0437ade0;
    *(long *)PTR_DAT_0437ade8 = lVar24;
    lVar24 = *(long *)(lVar24 + 0x50);
    if (((*PTR_DAT_04379d48 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379d48), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_0437ad08,PTR_DAT_04379d50,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379d48);
    }
    uVar10 = *(undefined8 *)PTR_DAT_04379d50;
    *(undefined8 *)PTR_DAT_04379d58 = uVar10;
    FUN_00b57040(&local_160,uVar10,*(undefined8 *)(lVar24 + 8));
    plVar23 = local_160;
    if (local_160 != (long *)0x0) {
      lVar25 = local_160[0xb];
      if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_00b725b0;
      if (*(long *)(lVar25 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
        *(undefined8 *)(lVar25 + 0x10) = uVar10;
      }
      piVar20 = (int *)(lVar25 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar4) {
          *piVar20 = *piVar20 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    nn::os::LockMutex((MutexType *)(lVar24 + 0x448));
    local_d8 = (undefined1 *)0x0;
    local_d0 = plVar23;
    local_f0 = (undefined **)0x0;
    local_e8 = (code *)0x0;
    local_e0 = (undefined1 *)0x0;
    if (plVar23 != (long *)0x0) {
      lVar25 = plVar23[0xb];
      if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_00b725b0;
      if (*(long *)(lVar25 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
        *(undefined8 *)(lVar25 + 0x10) = uVar10;
      }
      piVar20 = (int *)(lVar25 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar4) {
          *piVar20 = *piVar20 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    local_f0 = (undefined **)FUN_00b7ecbc;
    local_e8 = FUN_00b7edf8;
    local_e0 = &LAB_00b7ee30;
    local_d8 = &LAB_00b7eebc;
    if (*(ulong *)(lVar24 + 0x418) < *(ulong *)(lVar24 + 0x420)) {
      local_c8 = param_1;
      FUN_00b6d82c(lVar24 + 0x428,*(ulong *)(lVar24 + 0x418),&local_f0);
      *(long *)(lVar24 + 0x418) = *(long *)(lVar24 + 0x418) + 0x80;
      pcVar17 = local_e8;
    }
    else {
      local_c8 = param_1;
      FUN_00b740a0(lVar24 + 0x410,&local_f0);
      pcVar17 = local_e8;
    }
    local_e8 = pcVar17;
    if (pcVar17 != (code *)0x0) {
      local_e0 = (undefined1 *)0x0;
      local_d8 = (undefined1 *)0x0;
      local_f0 = (undefined **)0x0;
      local_e8 = (code *)0x0;
      (*pcVar17)(&local_d0);
    }
    nn::os::SignalConditionVariable((ConditionVariableType *)(lVar24 + 0x468));
    nn::os::UnlockMutex((MutexType *)(lVar24 + 0x448));
    local_170 = local_160;
    if (plVar23 != (long *)0x0) {
      lVar24 = plVar23[0xb];
      piVar20 = (int *)(lVar24 + 0xc);
      do {
        iVar9 = *piVar20;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar4) {
          *piVar20 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar24 + 0x18) = 0;
        (**(code **)(*plVar23 + 0x20))(plVar23);
        local_170 = local_160;
      }
    }
    if (local_170 == (long *)0x0) {
      return 0;
    }
    lVar24 = local_170[0xb];
    piVar20 = (int *)(lVar24 + 0xc);
    do {
      bVar8 = *piVar20 + -1 == 0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar4) {
        *piVar20 = *piVar20 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    goto LAB_00b712f8;
  case 10:
    if ((char)param_1[0x16] == '\0') {
      local_120 = param_1;
      FUN_00b77258(&local_120);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x3a) = 0xc;
    local_120 = param_1;
    if ((*PTR_DAT_0437add8 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_0437add8);
      if (iVar9 != 0) {
        FUN_00100250(PTR_LAB_0437ae10,PTR_DAT_0437ade0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437add8);
      }
    }
    lVar24 = *(long *)PTR_DAT_0437ade0;
    *(long *)PTR_DAT_0437ade8 = lVar24;
    lVar24 = *(long *)(lVar24 + 0x50);
    if (((*PTR_DAT_04379d48 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379d48), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_0437ad08,PTR_DAT_04379d50,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379d48);
    }
    uVar10 = *(undefined8 *)PTR_DAT_04379d50;
    *(undefined8 *)PTR_DAT_04379d58 = uVar10;
    FUN_00b57040(&local_168,uVar10,*(undefined8 *)(lVar24 + 8));
    plVar23 = local_168;
    if (local_168 != (long *)0x0) {
      lVar25 = local_168[0xb];
      if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_00b725b0;
      if (*(long *)(lVar25 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
        *(undefined8 *)(lVar25 + 0x10) = uVar10;
      }
      piVar20 = (int *)(lVar25 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar4) {
          *piVar20 = *piVar20 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    nn::os::LockMutex((MutexType *)(lVar24 + 0x448));
    local_d8 = (undefined1 *)0x0;
    local_d0 = plVar23;
    local_f0 = (undefined **)0x0;
    local_e8 = (code *)0x0;
    local_e0 = (undefined1 *)0x0;
    if (plVar23 != (long *)0x0) {
      lVar25 = plVar23[0xb];
      if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_00b725b0;
      if (*(long *)(lVar25 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
        *(undefined8 *)(lVar25 + 0x10) = uVar10;
      }
      piVar20 = (int *)(lVar25 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar4) {
          *piVar20 = *piVar20 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    local_f0 = (undefined **)&LAB_00b82998;
    local_e8 = FUN_00b82ad4;
    local_e0 = &LAB_00b82b0c;
    local_d8 = &LAB_00b82b98;
    if (*(ulong *)(lVar24 + 0x418) < *(ulong *)(lVar24 + 0x420)) {
      local_c8 = param_1;
      FUN_00b6d82c(lVar24 + 0x428,*(ulong *)(lVar24 + 0x418),&local_f0);
      *(long *)(lVar24 + 0x418) = *(long *)(lVar24 + 0x418) + 0x80;
      pcVar17 = local_e8;
    }
    else {
      local_c8 = param_1;
      FUN_00b740a0(lVar24 + 0x410,&local_f0);
      pcVar17 = local_e8;
    }
    local_e8 = pcVar17;
    if (pcVar17 != (code *)0x0) {
      local_e0 = (undefined1 *)0x0;
      local_d8 = (undefined1 *)0x0;
      local_f0 = (undefined **)0x0;
      local_e8 = (code *)0x0;
      (*pcVar17)(&local_d0);
    }
    nn::os::SignalConditionVariable((ConditionVariableType *)(lVar24 + 0x468));
    nn::os::UnlockMutex((MutexType *)(lVar24 + 0x448));
    local_170 = local_168;
    if (plVar23 != (long *)0x0) {
      lVar24 = plVar23[0xb];
      piVar20 = (int *)(lVar24 + 0xc);
      do {
        iVar9 = *piVar20;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar4) {
          *piVar20 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar24 + 0x18) = 0;
        (**(code **)(*plVar23 + 0x20))(plVar23);
        local_170 = local_168;
      }
    }
    if (local_170 == (long *)0x0) {
      return 0;
    }
    lVar24 = local_170[0xb];
    piVar20 = (int *)(lVar24 + 0xc);
    do {
      bVar8 = *piVar20 + -1 == 0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar4) {
        *piVar20 = *piVar20 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_00b712f8:
    if (!bVar8) {
      return 0;
    }
    *(undefined8 *)(lVar24 + 0x18) = 0;
    (**(code **)(*local_170 + 0x20))();
    return 0;
  case 0xb:
    if ((char)param_1[0x16] != '\0') {
      *(undefined4 *)(param_1 + 0x3a) = 0xc;
      if (((*PTR_DAT_0437add8 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_0437add8), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_0437ae10,PTR_DAT_0437ade0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437add8);
      }
      lVar24 = *(long *)PTR_DAT_0437ade0;
      *(long *)PTR_DAT_0437ade8 = lVar24;
      lVar24 = *(long *)(lVar24 + 0x50);
      if (((*PTR_DAT_04379d48 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379d48), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_0437ad08,PTR_DAT_04379d50,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379d48);
      }
      uVar10 = *(undefined8 *)PTR_DAT_04379d50;
      *(undefined8 *)PTR_DAT_04379d58 = uVar10;
      FUN_00b57040(&local_170,uVar10,*(undefined8 *)(lVar24 + 8));
      plVar23 = local_170;
      if (local_170 != (long *)0x0) {
        lVar25 = local_170[0xb];
        if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_00b725b0;
        if (*(long *)(lVar25 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
          *(undefined8 *)(lVar25 + 0x10) = uVar10;
        }
        piVar20 = (int *)(lVar25 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar4) {
            *piVar20 = *piVar20 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      nn::os::LockMutex((MutexType *)(lVar24 + 0x448));
      local_d8 = (undefined1 *)0x0;
      local_d0 = plVar23;
      local_f0 = (undefined **)0x0;
      local_e8 = (code *)0x0;
      local_e0 = (undefined1 *)0x0;
      if (plVar23 != (long *)0x0) {
        lVar25 = plVar23[0xb];
        if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_00b725b0;
        if (*(long *)(lVar25 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
          *(undefined8 *)(lVar25 + 0x10) = uVar10;
        }
        piVar20 = (int *)(lVar25 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar4) {
            *piVar20 = *piVar20 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      local_f0 = (undefined **)&LAB_00b83108;
      local_e8 = FUN_00b83418;
      local_e0 = &LAB_00b83450;
      local_d8 = &LAB_00b834dc;
      if (*(ulong *)(lVar24 + 0x418) < *(ulong *)(lVar24 + 0x420)) {
        local_c8 = param_1;
        FUN_00b6d82c(lVar24 + 0x428,*(ulong *)(lVar24 + 0x418),&local_f0);
        *(long *)(lVar24 + 0x418) = *(long *)(lVar24 + 0x418) + 0x80;
        pcVar17 = local_e8;
      }
      else {
        local_c8 = param_1;
        FUN_00b740a0(lVar24 + 0x410,&local_f0);
        pcVar17 = local_e8;
      }
      local_e8 = pcVar17;
      if (pcVar17 != (code *)0x0) {
        local_e0 = (undefined1 *)0x0;
        local_d8 = (undefined1 *)0x0;
        local_f0 = (undefined **)0x0;
        local_e8 = (code *)0x0;
        (*pcVar17)(&local_d0);
      }
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar24 + 0x468));
      nn::os::UnlockMutex((MutexType *)(lVar24 + 0x448));
      if (plVar23 != (long *)0x0) {
        lVar24 = plVar23[0xb];
        piVar20 = (int *)(lVar24 + 0xc);
        do {
          iVar9 = *piVar20;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar4) {
            *piVar20 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar24 + 0x18) = 0;
          (**(code **)(*plVar23 + 0x20))(plVar23);
        }
      }
      if (local_170 == (long *)0x0) {
        return 0;
      }
      lVar24 = local_170[0xb];
      piVar20 = (int *)(lVar24 + 0xc);
      do {
        bVar8 = *piVar20 + -1 == 0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar4) {
          *piVar20 = *piVar20 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_00b712f8;
    }
    plVar23 = (long *)param_1[0x28];
    if (plVar23 == (long *)0x0) {
      plVar23 = *(long **)(param_1[0x13] + 0x98);
      *(undefined8 *)(param_1[0x13] + 0x98) = 0;
      if (plVar23 != (long *)0x0) {
        lVar24 = plVar23[0xb];
        piVar20 = (int *)(lVar24 + 0xc);
        do {
          iVar9 = *piVar20;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar4) {
            *piVar20 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar24 + 0x18) = 0;
          pcVar17 = *(code **)(*plVar23 + 0x20);
LAB_00b71478:
          (*pcVar17)(plVar23);
        }
      }
    }
    else {
      lVar24 = plVar23[0xb];
      if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_00b725b0;
      if (*(long *)(lVar24 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
        *(undefined8 *)(lVar24 + 0x10) = uVar10;
      }
      piVar20 = (int *)(lVar24 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar4) {
          *piVar20 = *piVar20 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar24 = plVar23[0xb];
      if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_00b725b0;
      lVar25 = param_1[0x13];
      if (*(long *)(lVar24 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
        *(undefined8 *)(lVar24 + 0x10) = uVar10;
      }
      piVar20 = (int *)(lVar24 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar4) {
          *piVar20 = *piVar20 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar11 = *(long **)(lVar25 + 0x98);
      *(long **)(lVar25 + 0x98) = plVar23;
      if (plVar11 != (long *)0x0) {
        lVar24 = plVar11[0xb];
        piVar20 = (int *)(lVar24 + 0xc);
        do {
          iVar9 = *piVar20;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar4) {
            *piVar20 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar24 + 0x18) = 0;
          (**(code **)(*plVar11 + 0x20))();
        }
      }
      lVar24 = plVar23[0xb];
      piVar20 = (int *)(lVar24 + 0xc);
      do {
        iVar9 = *piVar20;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar4) {
          *piVar20 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar24 + 0x18) = 0;
        pcVar17 = *(code **)(*plVar23 + 0x20);
        goto LAB_00b71478;
      }
    }
    local_e8 = (code *)param_1[0x13];
    local_f0 = &PTR_LAB_041e7cf0;
    if (local_e8 != (code *)0x0) {
      pcVar17 = local_e8 + 0x50;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar17,0x10);
        if (bVar4) {
          *(int *)pcVar17 = *(int *)pcVar17 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    (**(code **)(**(long **)(param_1[0x29] + 0x10) + 0x48))
              (&local_120,*(long **)(param_1[0x29] + 0x10),&local_f0);
    local_f0 = &PTR_LAB_041e7cf0;
    if (local_e8 != (code *)0x0) {
      pcVar17 = local_e8 + 0x50;
      do {
        iVar9 = *(int *)pcVar17;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar17,0x10);
        if (bVar4) {
          *(int *)pcVar17 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        (**(code **)(*(long *)local_e8 + 0x10))();
      }
    }
    iVar9 = 0xd;
    goto LAB_00b72228;
  case 0xc:
    goto switchD_00b70884_caseD_c;
  default:
    return 1;
  }
  snprintf((char *)&local_f0,0x80,"%s/%s.aibt",(char *)param_1[5],(char *)param_1[1]);
  FUN_00aad744(&local_120,&local_f0);
  lVar24 = param_1[0x14];
  if ((code *)param_1[0x18] == (code *)0x0) {
    local_d0 = (long *)0x0;
    local_c8 = (long *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (undefined **)(PTR_DAT_0437a508 + 0x10);
    local_e8 = (code *)0x0;
  }
  else {
    (*(code *)param_1[0x18])(&local_f0,param_1 + 0x1c,auStack_118);
  }
  FUN_00b75ea0(&local_140,lVar24,&local_f0);
  lVar24 = local_140;
  local_140 = 0;
  lVar25 = param_1[0x33];
  param_1[0x33] = lVar24;
  if (lVar25 != 0) {
    FUN_02bcbe58(auStack_158,0);
    FUN_00936104(lVar25);
    plVar23 = (long *)param_1[0x34];
    lVar24 = param_1[0x35];
    lVar26 = param_1[0x36];
    uVar21 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar21 & 1) == 0) {
LAB_00b713c4:
      (**(code **)(*plVar23 + 0x18))(plVar23,lVar25,lVar24,lVar26);
    }
    else {
      lVar5 = tpidr_el0;
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_00b713c4;
      FUN_02bcc824(plVar23,lVar25,lVar24,lVar26);
    }
    lVar24 = tpidr_el0;
    if (*(char *)(lVar24 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar24 + 0x38d488) = 1;
      *(undefined8 *)(lVar24 + 0x38d478) = 0;
      *(undefined8 *)(lVar24 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar9 = *(int *)(lVar24 + 0x38d480) + -1;
    *(int *)(lVar24 + 0x38d480) = iVar9;
    if (iVar9 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar24 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar24 + 0x38d488) = 1;
        *(undefined8 *)(lVar24 + 0x38d478) = 0;
        *(undefined8 *)(lVar24 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar24 + 0x38d484) = 0;
    }
  }
  param_1[0x35] = local_130;
  param_1[0x36] = local_128;
  param_1[0x34] = (long)local_138;
  FUN_00936104(&local_f0);
  lVar24 = param_1[0x33];
  if ((((*(long *)(lVar24 + 8) == 0) || (*(char *)(*(long *)(lVar24 + 8) + 0x1e1) == '\0')) &&
      (uVar21 = FUN_00938764(lVar24,1,&local_120,0,param_1[0x14],param_1[0x12]), (uVar21 & 1) != 0))
     && (plVar23 = *(long **)(lVar24 + 0x28), plVar23 != (long *)0x0)) {
    lVar24 = plVar23[0xb];
    if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_00b725b0;
    if (*(long *)(lVar24 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
      *(undefined8 *)(lVar24 + 0x10) = uVar10;
    }
    piVar20 = (int *)(lVar24 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar4) {
        *piVar20 = *piVar20 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar24 = plVar23[0xb];
    piVar20 = (int *)(lVar24 + 0xc);
    do {
      iVar9 = *piVar20;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar4) {
        *piVar20 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar24 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
  }
  if (*(long *)(param_1[0x33] + 8) == 0) {
    plVar23 = (long *)FUN_00b779ac();
    lVar24 = *plVar23;
    if (lVar24 != 0) goto LAB_00b70b28;
LAB_00b7197c:
    puVar16 = (undefined8 *)PTR_PTR_04379d00;
  }
  else {
    lVar24 = *(long *)(*(long *)(param_1[0x33] + 8) + 0x68);
    if (lVar24 == 0) goto LAB_00b7197c;
LAB_00b70b28:
    puVar16 = (undefined8 *)(lVar24 + 0x60);
  }
  pcVar12 = strrchr((char *)*puVar16,0x2f);
  if (pcVar12 == (char *)0x0) {
    pcVar12 = (char *)0x0;
    if (cRam0000000000000000 != '\0') goto LAB_00b70b48;
LAB_00b71994:
    ppuVar13 = (undefined **)FUN_00938550();
    if (ppuVar13 != (undefined **)0x0) {
      (**(code **)(*ppuVar13 + 0x18))(ppuVar13);
    }
  }
  else {
    pcVar12 = pcVar12 + 1;
    if (*pcVar12 == '\0') goto LAB_00b71994;
LAB_00b70b48:
    if (((*PTR_DAT_04379cd0 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar10 = *(undefined8 *)PTR_DAT_04379cd8;
    *(undefined8 *)PTR_DAT_04379ce0 = uVar10;
    FUN_02a47cd8(&local_f0,uVar10,pcVar12);
    ppuVar13 = local_f0;
  }
  plVar23 = (long *)param_1[0x39];
  param_1[0x39] = 0;
  if (plVar23 != (long *)0x0) {
    (**(code **)(*plVar23 + 0x20))();
  }
  param_1[0x39] = (long)ppuVar13;
  *(int *)(param_1 + 0x3a) = (int)param_1[0x3a] + 1;
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 0x20))();
  }
switchD_00b70884_caseD_1:
  lVar24 = param_1[0x33];
  if ((*(long *)(lVar24 + 8) != 0) && (*(char *)(*(long *)(lVar24 + 8) + 0x1e1) != '\0')) {
    *(int *)(param_1 + 0x3a) = (int)param_1[0x3a] + 1;
LAB_00b70bf0:
    puVar19 = *(uint **)(*(long *)(lVar24 + 8) + 0x250);
    piVar20 = (int *)((long)puVar19 + (ulong)*puVar19);
    if ((*(ushort *)((long)piVar20 - (long)*piVar20) < 5) ||
       (uVar21 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[2], uVar21 == 0)) {
      piVar20 = (int *)0x0;
    }
    else {
      puVar19 = (uint *)((long)piVar20 + uVar21);
      piVar20 = (int *)((long)puVar19 + (ulong)*puVar19);
    }
    if ((*(ushort *)((long)piVar20 - (long)*piVar20) < 5) ||
       (uVar21 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[2], uVar21 == 0)) {
      lVar24 = 0;
    }
    else {
      puVar19 = (uint *)((long)piVar20 + uVar21);
      lVar24 = (long)puVar19 + (ulong)*puVar19;
    }
    snprintf((char *)&local_f0,0x80,"%s/%s.aibb",(char *)param_1[9],(char *)(lVar24 + 4));
    FUN_00aad744(&local_120,&local_f0);
    if ((code *)param_1[0x18] == (code *)0x0) {
      local_d0 = (long *)0x0;
      local_c8 = (long *)0x0;
      local_e0 = (undefined1 *)0x0;
      local_d8 = (undefined1 *)0x0;
      local_f0 = (undefined **)(PTR_DAT_0437a508 + 0x10);
      local_e8 = (code *)0x0;
    }
    else {
      (*(code *)param_1[0x18])(&local_f0,param_1 + 0x1c,auStack_118);
    }
    FUN_00ae2200(param_1 + 0x2e,&local_e8);
    plVar23 = (long *)param_1[0x30];
    param_1[0x30] = 0;
    if (plVar23 != (long *)0x0) {
      plVar11 = plVar23 + 10;
      do {
        iVar9 = (int)*plVar11 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *(int *)plVar11 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar23 + 0x10))();
      }
    }
    puVar7 = local_d8;
    local_d8 = (undefined1 *)0x0;
    plVar23 = (long *)param_1[0x31];
    param_1[0x30] = (long)puVar7;
    param_1[0x31] = 0;
    if (plVar23 != (long *)0x0) {
      plVar11 = plVar23 + 10;
      do {
        iVar9 = (int)*plVar11 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *(int *)plVar11 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar23 + 0x10))();
      }
    }
    plVar23 = local_d0;
    local_d0 = (long *)0x0;
    plVar11 = (long *)param_1[0x32];
    param_1[0x31] = (long)plVar23;
    param_1[0x32] = 0;
    if (plVar11 != (long *)0x0) {
      lVar24 = plVar11[0xb];
      piVar20 = (int *)(lVar24 + 0xc);
      do {
        iVar9 = *piVar20;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar4) {
          *piVar20 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar24 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))();
      }
    }
    plVar23 = local_c8;
    local_c8 = (long *)0x0;
    param_1[0x32] = (long)plVar23;
    FUN_00936104(&local_f0);
    if ((((param_1[0x2e] == 0) || (*(char *)(param_1[0x2e] + 0x1e1) == '\0')) &&
        (uVar21 = FUN_00938764(param_1 + 0x2d,1,&local_120,0,param_1[0x14],param_1[0x12]),
        (uVar21 & 1) != 0)) && (plVar23 = (long *)param_1[0x32], plVar23 != (long *)0x0)) {
      lVar24 = plVar23[0xb];
      if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_00b725b0;
      if (*(long *)(lVar24 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
        *(undefined8 *)(lVar24 + 0x10) = uVar10;
      }
      piVar20 = (int *)(lVar24 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar4) {
          *piVar20 = *piVar20 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar24 = plVar23[0xb];
      piVar20 = (int *)(lVar24 + 0xc);
      do {
        iVar9 = *piVar20;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar4) {
          *piVar20 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar24 + 0x18) = 0;
        (**(code **)(*plVar23 + 0x20))(plVar23);
      }
    }
    *(int *)(param_1 + 0x3a) = (int)param_1[0x3a] + 1;
    if (local_100 != (long *)0x0) {
      (**(code **)(*local_100 + 0x20))();
    }
    if (local_120 != (long *)0x0) {
      (**(code **)(*local_120 + 0x20))();
    }
switchD_00b70884_caseD_3:
    if ((param_1[0x2e] != 0) && (*(char *)(param_1[0x2e] + 0x1e1) != '\0')) {
      *(int *)(param_1 + 0x3a) = (int)param_1[0x3a] + 1;
switchD_00b70884_caseD_4:
      FUN_00b75ff4(param_1,param_1 + 0x33);
      *(int *)(param_1 + 0x3a) = (int)param_1[0x3a] + 1;
      plVar23 = (long *)param_1[0x4e];
joined_r0x00b7088c:
      if (plVar23 != (long *)0x0) {
        plVar11 = plVar23;
        do {
          if (*(long *)(plVar11[3] + 8) == 0) {
            return 0;
          }
          if (*(char *)(*(long *)(plVar11[3] + 8) + 0x1e1) == '\0') {
            return 0;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
        do {
          FUN_00b7926c(param_1 + 0x55,plVar23 + 2,plVar23 + 3);
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
      if (param_1[0x53] != 0) {
        if ((long *)param_1[0x4e] != (long *)0x0) {
          lVar24 = tpidr_el0;
          plVar23 = (long *)param_1[0x4e];
          do {
            while( true ) {
              plVar27 = (long *)*plVar23;
              FUN_00b7545c(plVar23 + 2);
              plVar11 = (long *)param_1[0x4f];
              uVar21 = (**(code **)(*plVar11 + 0xc0))(plVar11);
              if ((uVar21 & 1) != 0) break;
LAB_00b719f0:
              (**(code **)(*plVar11 + 0x18))(plVar11,plVar23,0x50,8);
              plVar23 = plVar27;
              if (plVar27 == (long *)0x0) goto LAB_00b71a8c;
            }
            if (*(char *)(lVar24 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar24 + 0x38d488) = 1;
              *(undefined8 *)(lVar24 + 0x38d478) = 0;
              *(undefined8 *)(lVar24 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar24 + 0x38d480) < 1) goto LAB_00b719f0;
            FUN_02bcc824(plVar11,plVar23,0x50,8);
            plVar23 = plVar27;
          } while (plVar27 != (long *)0x0);
        }
LAB_00b71a8c:
        uVar21 = param_1[0x49];
        param_1[0x4e] = 0;
        if (uVar21 != 0) {
          uVar18 = uVar21 & 3;
          if (uVar21 - 1 < 3) {
            lVar24 = 0;
          }
          else {
            lVar24 = 0;
            do {
              lVar25 = lVar24 * 8;
              lVar24 = lVar24 + 4;
              *(undefined8 *)(param_1[0x48] + lVar25) = 0;
              *(undefined8 *)(param_1[0x48] + lVar25 + 8) = 0;
              *(undefined8 *)(param_1[0x48] + lVar25 + 0x10) = 0;
              *(undefined8 *)(param_1[0x48] + lVar25 + 0x18) = 0;
            } while (uVar21 - uVar18 != lVar24);
          }
          if (uVar18 != 0) {
            lVar24 = lVar24 << 3;
            do {
              *(undefined8 *)(param_1[0x48] + lVar24) = 0;
              uVar18 = uVar18 - 1;
              lVar24 = lVar24 + 8;
            } while (uVar18 != 0);
          }
        }
        param_1[0x53] = 0;
      }
      plVar23 = (long *)param_1[0x5b];
      if (plVar23 != (long *)0x0) {
        do {
          FUN_00b75ff4(param_1,plVar23 + 3);
          FUN_00b7926c(param_1 + 0x3b,plVar23 + 2,plVar23 + 3);
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
      if (param_1[0x60] != 0) {
        if ((long *)param_1[0x5b] != (long *)0x0) {
          lVar24 = tpidr_el0;
          plVar23 = (long *)param_1[0x5b];
          do {
            while( true ) {
              plVar27 = (long *)*plVar23;
              FUN_00b7545c(plVar23 + 2);
              plVar11 = (long *)param_1[0x5c];
              uVar21 = (**(code **)(*plVar11 + 0xc0))(plVar11);
              if ((uVar21 & 1) != 0) break;
LAB_00b71bd0:
              (**(code **)(*plVar11 + 0x18))(plVar11,plVar23,0x50,8);
              plVar23 = plVar27;
              if (plVar27 == (long *)0x0) goto LAB_00b71c6c;
            }
            if (*(char *)(lVar24 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar24 + 0x38d488) = 1;
              *(undefined8 *)(lVar24 + 0x38d478) = 0;
              *(undefined8 *)(lVar24 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar24 + 0x38d480) < 1) goto LAB_00b71bd0;
            FUN_02bcc824(plVar11,plVar23,0x50,8);
            plVar23 = plVar27;
          } while (plVar27 != (long *)0x0);
        }
LAB_00b71c6c:
        uVar21 = param_1[0x56];
        param_1[0x5b] = 0;
        if (uVar21 != 0) {
          uVar18 = uVar21 & 3;
          if (uVar21 - 1 < 3) {
            lVar24 = 0;
          }
          else {
            lVar24 = 0;
            do {
              lVar25 = lVar24 * 8;
              lVar24 = lVar24 + 4;
              *(undefined8 *)(param_1[0x55] + lVar25) = 0;
              *(undefined8 *)(param_1[0x55] + lVar25 + 8) = 0;
              *(undefined8 *)(param_1[0x55] + lVar25 + 0x10) = 0;
              *(undefined8 *)(param_1[0x55] + lVar25 + 0x18) = 0;
            } while (uVar21 - uVar18 != lVar24);
          }
          if (uVar18 != 0) {
            lVar24 = lVar24 << 3;
            do {
              *(undefined8 *)(param_1[0x55] + lVar24) = 0;
              uVar18 = uVar18 - 1;
              lVar24 = lVar24 + 8;
            } while (uVar18 != 0);
          }
        }
        param_1[0x60] = 0;
      }
      if (param_1[0x53] == 0) {
        iVar9 = (int)param_1[0x3a] + 1;
        *(int *)(param_1 + 0x3a) = iVar9;
switchD_00b70884_caseD_6:
        puVar6 = PTR_DAT_04379c88;
        plVar23 = (long *)param_1[0x41];
        if (plVar23 != (long *)0x0) {
          ppuVar13 = (undefined **)(PTR_DAT_0437a508 + 0x10);
          do {
            puVar19 = *(uint **)(*(long *)(plVar23[3] + 8) + 0x250);
            piVar20 = (int *)((long)puVar19 + (ulong)*puVar19);
            if ((*(ushort *)((long)piVar20 - (long)*piVar20) < 5) ||
               (uVar21 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[2], uVar21 == 0)) {
              piVar20 = (int *)0x0;
            }
            else {
              puVar19 = (uint *)((long)piVar20 + uVar21);
              piVar20 = (int *)((long)puVar19 + (ulong)*puVar19);
            }
            if ((*(ushort *)((long)piVar20 - (long)*piVar20) < 5) ||
               (uVar21 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[2], uVar21 == 0)) {
              lVar24 = 0;
            }
            else {
              puVar19 = (uint *)((long)piVar20 + uVar21);
              lVar24 = (long)puVar19 + (ulong)*puVar19;
            }
            if (*(char *)(lVar24 + 4) != '\0') {
              pcVar12 = (char *)(lVar24 + 5);
              do {
                cVar3 = *pcVar12;
                pcVar12 = pcVar12 + 1;
              } while (cVar3 != '\0');
              snprintf((char *)&local_f0,0x80,"%s/%s.aibb",(char *)param_1[9],(char *)(lVar24 + 4));
              FUN_00aad744(&local_120,&local_f0);
              plVar27 = (long *)param_1[99];
              for (plVar11 = (long *)param_1[0x62]; plVar11 != plVar27; plVar11 = plVar11 + 4) {
                if (*(long *)(*plVar11 + 8) == 0) {
                  plVar14 = (long *)FUN_00b779ac();
                  lVar24 = *plVar14;
                  if (lVar24 != 0) goto LAB_00b71e84;
LAB_00b72560:
                  plVar14 = (long *)puVar6;
                }
                else {
                  lVar24 = *(long *)(*(long *)(*plVar11 + 8) + 0x68);
                  if (lVar24 == 0) goto LAB_00b72560;
LAB_00b71e84:
                  plVar14 = (long *)(lVar24 + 0x58);
                }
                plVar1 = (long *)puVar6;
                if (local_120 != (long *)0x0) {
                  plVar1 = local_120 + 0xb;
                }
                if (*plVar14 == *plVar1) goto joined_r0x00b7235c;
              }
              lVar24 = param_1[0x14];
              if ((code *)param_1[0x18] == (code *)0x0) {
                local_d0 = (long *)0x0;
                local_c8 = (long *)0x0;
                local_e0 = (undefined1 *)0x0;
                local_d8 = (undefined1 *)0x0;
                local_e8 = (code *)0x0;
                local_f0 = ppuVar13;
              }
              else {
                (*(code *)param_1[0x18])(&local_f0,param_1 + 0x1c,auStack_118);
              }
              FUN_00b75ea0(&local_140,lVar24,&local_f0);
              FUN_00936104(&local_f0);
              lVar24 = local_140;
              if ((((*(long *)(local_140 + 8) == 0) ||
                   (*(char *)(*(long *)(local_140 + 8) + 0x1e1) == '\0')) &&
                  (uVar21 = FUN_00938764(local_140,1,&local_120,0,param_1[0x14],param_1[0x12]),
                  (uVar21 & 1) != 0)) &&
                 (plVar11 = *(long **)(lVar24 + 0x28), plVar11 != (long *)0x0)) {
                lVar24 = plVar11[0xb];
                if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_00b725b0;
                if (*(long *)(lVar24 + 0x10) == 0) {
                  uVar10 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
                  *(undefined8 *)(lVar24 + 0x10) = uVar10;
                }
                piVar20 = (int *)(lVar24 + 0xc);
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
                  if (bVar4) {
                    *piVar20 = *piVar20 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                lVar24 = plVar11[0xb];
                piVar20 = (int *)(lVar24 + 0xc);
                do {
                  iVar9 = *piVar20;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
                  if (bVar4) {
                    *piVar20 = iVar9 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar9 + -1 == 0) {
                  *(undefined8 *)(lVar24 + 0x18) = 0;
                  (**(code **)(*plVar11 + 0x20))(plVar11);
                }
              }
              if ((ulong)param_1[99] < (ulong)param_1[100]) {
                FUN_00b796e4(param_1 + 0x65,param_1[99],&local_140);
                param_1[99] = param_1[99] + 0x20;
              }
              else {
                FUN_00b795ac(param_1 + 0x62,&local_140);
              }
              lVar24 = local_140;
              local_140 = 0;
              if (lVar24 != 0) {
                FUN_02bcbe58(&local_f0,0);
                FUN_00936104(lVar24);
                lVar5 = local_128;
                lVar26 = local_130;
                plVar11 = local_138;
                uVar21 = (**(code **)(*local_138 + 0xc0))(local_138);
                lVar25 = tpidr_el0;
                if ((uVar21 & 1) == 0) {
LAB_00b722b0:
                  (**(code **)(*plVar11 + 0x18))(plVar11,lVar24,lVar26,lVar5);
                }
                else {
                  if (*(char *)(lVar25 + 0x38d488) == '\0') {
                    *(undefined1 *)(lVar25 + 0x38d488) = 1;
                    *(undefined8 *)(lVar25 + 0x38d478) = 0;
                    *(undefined8 *)(lVar25 + 0x38d480) = 0;
                    __cxa_thread_atexit(&LAB_02bcbe54,lVar25 + 0x80078,&PTR_LOOP_0411a000);
                  }
                  if (*(int *)(lVar25 + 0x38d480) < 1) goto LAB_00b722b0;
                  FUN_02bcc824(plVar11,lVar24,lVar26,lVar5);
                }
                if (*(char *)(lVar25 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar25 + 0x38d488) = 1;
                  *(undefined8 *)(lVar25 + 0x38d478) = 0;
                  *(undefined8 *)(lVar25 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar25 + 0x80078,&PTR_LOOP_0411a000);
                }
                iVar9 = *(int *)(lVar25 + 0x38d480) + -1;
                *(int *)(lVar25 + 0x38d480) = iVar9;
                if (iVar9 == 0) {
                  FUN_02bcc320();
                  if (*(char *)(lVar25 + 0x38d488) == '\0') {
                    *(undefined1 *)(lVar25 + 0x38d488) = 1;
                    *(undefined8 *)(lVar25 + 0x38d478) = 0;
                    *(undefined8 *)(lVar25 + 0x38d480) = 0;
                    __cxa_thread_atexit(&LAB_02bcbe54,lVar25 + 0x80078,&PTR_LOOP_0411a000);
                  }
                  *(undefined4 *)(lVar25 + 0x38d484) = 0;
                }
              }
joined_r0x00b7235c:
              if (local_100 != (long *)0x0) {
                (**(code **)(*local_100 + 0x20))();
              }
              if (local_120 != (long *)0x0) {
                (**(code **)(*local_120 + 0x20))();
              }
            }
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
          iVar9 = (int)param_1[0x3a];
        }
        *(int *)(param_1 + 0x3a) = iVar9 + 1;
        iVar15 = iVar9 + 2;
switchD_00b70884_caseD_7:
        for (plVar23 = (long *)param_1[0x62]; plVar23 != (long *)param_1[99]; plVar23 = plVar23 + 4)
        {
          if (*(long *)(*plVar23 + 8) == 0) {
            return 0;
          }
          if (*(char *)(*(long *)(*plVar23 + 8) + 0x1e1) == '\0') {
            return 0;
          }
        }
        *(int *)(param_1 + 0x3a) = iVar15;
switchD_00b70884_caseD_8:
        piVar20 = (int *)((long)*(uint **)(param_1[0x2e] + 0x250) +
                         (ulong)**(uint **)(param_1[0x2e] + 0x250));
        if ((*(ushort *)((long)piVar20 - (long)*piVar20) < 5) ||
           (uVar21 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[2], uVar21 == 0)) {
          piVar20 = (int *)0x0;
        }
        else {
          puVar19 = (uint *)((long)piVar20 + uVar21);
          piVar20 = (int *)((long)puVar19 + (ulong)*puVar19);
        }
        if (*(ushort *)((long)piVar20 - (long)*piVar20) < 5) {
          lVar24 = 0;
        }
        else {
          uVar21 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[2];
          lVar24 = 0;
          if (uVar21 != 0) {
            puVar19 = (uint *)((long)piVar20 + uVar21);
            lVar24 = (long)puVar19 + (ulong)*puVar19;
          }
        }
        bVar2 = *(byte *)(lVar24 + 4);
        local_120 = (long *)&DAT_cbf29ce484222645;
        if (bVar2 != 0) {
          pbVar22 = (byte *)(lVar24 + 5);
          do {
            local_120 = (long *)(((ulong)local_120 ^ (ulong)bVar2) * 0x100000001b3);
            bVar2 = *pbVar22;
            pbVar22 = pbVar22 + 1;
          } while (bVar2 != 0);
        }
        plVar23 = (long *)param_1[0x14];
        local_140 = param_1[0x15];
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar9 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar6 = PTR_DAT_04379528;
          if (iVar9 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar24 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (0xf < *(ulong *)(lVar24 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar24 + *(ulong *)(lVar24 + 0x80) * 8) = plVar23;
        *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + 1;
        lVar25 = (**(code **)(*plVar23 + 0x10))(plVar23,0xb0,0x10);
        if (lVar25 == 0) {
          (**(code **)(*plVar23 + 0xb8))(plVar23);
        }
        FUN_00cdcfdc(lVar25,&local_120,&local_140);
        *(long **)(lVar25 + 8) = plVar23;
        *(long *)(lVar25 + 0x10) = lVar25;
        *(undefined8 *)(lVar25 + 0x18) = 0xb0;
        *(undefined8 *)(lVar25 + 0x20) = 0x10;
        *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + -1;
        if (lVar25 != 0) {
          lVar24 = *(long *)(lVar25 + 0x58);
          if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) {
LAB_00b725b0:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar24 + 0x10) == 0) {
            uVar10 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
            *(undefined8 *)(lVar24 + 0x10) = uVar10;
          }
          piVar20 = (int *)(lVar24 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar4) {
              *piVar20 = *piVar20 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plVar23 = (long *)param_1[0x28];
        param_1[0x28] = 0;
        if (plVar23 != (long *)0x0) {
          lVar24 = plVar23[0xb];
          piVar20 = (int *)(lVar24 + 0xc);
          do {
            iVar9 = *piVar20;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar4) {
              *piVar20 = iVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar24 + 0x18) = 0;
            (**(code **)(*plVar23 + 0x20))();
          }
        }
        param_1[0x28] = lVar25;
        piVar20 = (int *)((long)*(uint **)(param_1[0x2e] + 0x250) +
                         (ulong)**(uint **)(param_1[0x2e] + 0x250));
        puVar19 = (uint *)((long)piVar20 + (ulong)*(ushort *)((long)piVar20 + (6 - (long)*piVar20)))
        ;
        puVar19 = (uint *)((long)puVar19 + (ulong)*puVar19);
        lVar24 = (ulong)*puVar19 << 2;
        if ((ulong)*puVar19 != 0) {
          do {
            puVar19 = puVar19 + 1;
            local_f0 = (undefined **)((long)puVar19 + (ulong)*puVar19);
            FUN_00b79bc0(param_1,&local_f0);
            lVar24 = lVar24 + -4;
          } while (lVar24 != 0);
        }
        plVar11 = (long *)param_1[99];
        for (plVar23 = (long *)param_1[0x62]; plVar23 != plVar11; plVar23 = plVar23 + 4) {
          puVar19 = *(uint **)(*(long *)(*plVar23 + 8) + 0x250);
          piVar20 = (int *)((long)puVar19 + (ulong)*puVar19);
          puVar19 = (uint *)((long)piVar20 +
                            (ulong)*(ushort *)((long)piVar20 + (6 - (long)*piVar20)));
          puVar19 = (uint *)((long)puVar19 + (ulong)*puVar19);
          lVar24 = (ulong)*puVar19 << 2;
          if ((ulong)*puVar19 != 0) {
            do {
              puVar19 = puVar19 + 1;
              local_f0 = (undefined **)((long)puVar19 + (ulong)*puVar19);
              FUN_00b79bc0(param_1,&local_f0);
              lVar24 = lVar24 + -4;
            } while (lVar24 != 0);
          }
        }
        iVar9 = (int)param_1[0x3a] + 1;
LAB_00b72228:
        *(int *)(param_1 + 0x3a) = iVar9;
      }
    }
  }
switchD_00b70884_caseD_c:
  return 0;
}


