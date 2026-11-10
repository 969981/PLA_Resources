/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a6adc8; name: FUN_02a6adc8
 */


void FUN_02a6adc8(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  code *pcVar12;
  long lVar13;
  long *plVar14;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  iVar7 = *(int *)((long)param_1 + 0x204);
  if (iVar7 != *(int *)(param_1 + 0x40)) {
    *(int *)(param_1 + 0x40) = iVar7;
  }
  if (param_1[2] == 0) {
    plVar14 = (long *)*param_1;
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar14;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    plVar9 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x3a0,8);
    if (plVar9 == (long *)0x0) {
      (**(code **)(*plVar14 + 0xb8))(plVar14);
    }
    FUN_02a6f65c(plVar9,param_1);
    *plVar9 = (long)&DAT_0427eb50;
    plVar9[0x72] = 0;
    plVar9[9] = (long)&PTR_LAB_0427ebd8;
    plVar9[10] = (long)&PTR_LAB_0427ec20;
    plVar11 = plVar9;
    if ((long *)plVar9[0x3b] != (long *)0x0) {
      plVar11 = (long *)plVar9[0x3b];
    }
    plVar9[0x71] = 0;
    *(undefined1 *)((long)plVar9 + 0x39c) = 0;
    *(undefined4 *)(plVar9 + 0x73) = 0;
    if (plVar11 != plVar9) {
      (**(code **)(*plVar11 + 0x60))(plVar11,0);
    }
    plVar11 = (long *)plVar9[0x3a];
    if ((plVar11 != (long *)0x0) && (plVar11 != plVar9)) {
      (**(code **)(*plVar11 + 0x60))(plVar11,0);
    }
    plVar9[1] = (long)plVar14;
    plVar9[2] = (long)plVar9;
    plVar9[3] = 0x3a0;
    plVar9[4] = 8;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    lVar8 = plVar9[0xb];
    plVar9[0x3c] = plVar9[0x3c] | 8;
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar14 = (long *)param_1[2];
    param_1[2] = 0;
    if (plVar14 != (long *)0x0) {
      lVar8 = plVar14[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))();
      }
    }
    iVar7 = *(int *)(param_1 + 0x40);
    param_1[2] = plVar9;
  }
  iVar3 = *(int *)(param_1 + 0x41);
  *(undefined1 *)((long)param_1 + 0x20c) = 0;
  *(int *)(param_1 + 0x41) = iVar3 + 1;
  if (0 < iVar7) {
    uVar10 = *param_2;
    lVar8 = param_1[3];
    *(int *)(lVar8 + 0x5d0) = iVar3 + 1;
    *(undefined8 *)(lVar8 + 0x5c8) = uVar10;
    if (1 < *(int *)(param_1 + 0x40)) {
      lVar8 = 4;
      do {
        uVar10 = *param_2;
        lVar13 = param_1[lVar8];
        *(undefined4 *)(lVar13 + 0x5d0) = *(undefined4 *)(param_1 + 0x41);
        *(undefined8 *)(lVar13 + 0x5c8) = uVar10;
        lVar13 = lVar8 + -2;
        lVar8 = lVar8 + 1;
      } while (lVar13 < *(int *)(param_1 + 0x40));
    }
  }
  FUN_02a6b204(param_1);
  FUN_02a69b58(param_1);
  lVar8 = param_1[3];
  (**(code **)(*(long *)param_1[1] + 0x68))((long *)param_1[1],lVar8 + 0x5c8);
  piVar1 = (int *)(lVar8 + 0x5e4);
  if (*piVar1 != 2) {
    if (*piVar1 == 0) {
      do {
        if (*piVar1 != 0) {
          ClearExclusiveLocal();
          goto LAB_02a6b01c;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = 2;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else {
LAB_02a6b01c:
      nn::os::LockMutex((MutexType *)(lVar8 + 0x560));
      nn::os::ClearEvent((EventType *)(*(long *)(lVar8 + 0x5c0) + 0x68));
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar8 + 0x5b8));
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x560));
    }
  }
  if (*(char *)((long)param_1 + 0x20d) != '\0') {
    cVar4 = *(char *)((long)param_1 + 0x20c);
    while (cVar4 == '\0') {
      FUN_02a6d6b8(param_1[3]);
      cVar4 = *(char *)((long)param_1 + 0x20c);
    }
  }
  FUN_02a6c704(param_1 + 0xd);
  FUN_02a6b204(param_1);
  FUN_02a69b58(param_1);
  if ((code *)param_1[0x30] != (code *)0x0) {
    local_c0 = param_1[1];
    puVar2 = param_1 + 0x34;
    (*(code *)param_1[0x30])(puVar2,&local_c0);
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = (code *)0x0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    pcVar12 = (code *)param_1[0x31];
    if (pcVar12 != (code *)0x0) {
      param_1[0x32] = 0;
      param_1[0x33] = 0;
      param_1[0x30] = 0;
      param_1[0x31] = 0;
      (*pcVar12)(puVar2);
      if (local_a8 != (code *)0x0) {
        (*local_a8)(&local_a0,puVar2);
        pcVar12 = local_b8;
        param_1[0x33] = local_a8;
        param_1[0x30] = local_c0;
        param_1[0x31] = local_b8;
        param_1[0x32] = local_b0;
        if (local_b8 != (code *)0x0) {
          local_b0 = 0;
          local_a8 = (code *)0x0;
          local_c0 = 0;
          local_b8 = (code *)0x0;
          (*pcVar12)(&local_a0);
        }
      }
    }
    pcVar12 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = 0;
      local_a8 = (code *)0x0;
      local_c0 = 0;
      local_b8 = (code *)0x0;
      (*pcVar12)(&local_a0);
    }
  }
  return;
}


