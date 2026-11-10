/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0107da6c; name: FUN_0107da6c
 */


void FUN_0107da6c(undefined8 param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long *plStack_a0;
  undefined8 local_98;
  long *local_38;
  
  if (((*PTR_DAT_0437add8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437add8), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_0437ae10,PTR_DAT_0437ade0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437add8);
  }
  lVar8 = *(long *)PTR_DAT_0437ade0;
  *(long *)PTR_DAT_0437ade8 = lVar8;
  lVar8 = *(long *)(lVar8 + 0x50);
  if (((*PTR_DAT_04379d48 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379d48), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_0437ad08,PTR_DAT_04379d50,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379d48);
  }
  uVar7 = *(undefined8 *)PTR_DAT_04379d50;
  *(undefined8 *)PTR_DAT_04379d58 = uVar7;
  FUN_00b57040(&local_38,uVar7,*(undefined8 *)(lVar8 + 8));
  plVar5 = local_38;
  if (local_38 != (long *)0x0) {
    lVar9 = local_38[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_0107dd1c;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  nn::os::LockMutex((MutexType *)(lVar8 + 0x448));
  local_a8 = (undefined1 *)0x0;
  plStack_a0 = plVar5;
  local_c0 = (undefined1 *)0x0;
  local_b8 = (code *)0x0;
  local_b0 = (undefined1 *)0x0;
  if (plVar5 != (long *)0x0) {
    lVar9 = plVar5[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
LAB_0107dd1c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_c0 = &LAB_0107e7fc;
  local_b8 = FUN_0107e938;
  local_b0 = &LAB_0107e970;
  local_a8 = &LAB_0107e9fc;
  local_98 = param_1;
  if (*(ulong *)(lVar8 + 0x418) < *(ulong *)(lVar8 + 0x420)) {
    FUN_00b6d82c(lVar8 + 0x428,*(ulong *)(lVar8 + 0x418),&local_c0);
    *(long *)(lVar8 + 0x418) = *(long *)(lVar8 + 0x418) + 0x80;
    pcVar4 = local_b8;
  }
  else {
    FUN_0107e45c(lVar8 + 0x410,&local_c0);
    pcVar4 = local_b8;
  }
  local_b8 = pcVar4;
  if (pcVar4 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar4)(&plStack_a0);
  }
  nn::os::SignalConditionVariable((ConditionVariableType *)(lVar8 + 0x468));
  nn::os::UnlockMutex((MutexType *)(lVar8 + 0x448));
  if (plVar5 != (long *)0x0) {
    lVar8 = plVar5[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
  }
  if (local_38 != (long *)0x0) {
    lVar8 = local_38[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


