/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bc0f5c; name: FUN_02bc0f5c
 */


void FUN_02bc0f5c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x118));
  nn::os::FinalizeConditionVariable((ConditionVariableType *)(param_1 + 0x110));
  nn::os::FinalizeConditionVariable((ConditionVariableType *)(param_1 + 0x108));
  plVar6 = *(long **)(param_1 + 0x100);
  if (plVar6 == (long *)0x0) {
LAB_02bc0fb0:
    plVar6 = *(long **)(param_1 + 0xf8);
    if (plVar6 == (long *)0x0) goto LAB_02bc0fd4;
LAB_02bc0fb8:
    lVar8 = plVar6[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 != 0) goto LAB_02bc0fd4;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = *(long **)(param_1 + 0xf0);
  }
  else {
    lVar8 = plVar6[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 != 0) goto LAB_02bc0fb0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = *(long **)(param_1 + 0xf8);
    if (plVar6 != (long *)0x0) goto LAB_02bc0fb8;
LAB_02bc0fd4:
    plVar6 = *(long **)(param_1 + 0xf0);
  }
  if (plVar6 != (long *)0x0) {
    lVar8 = plVar6[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  lVar8 = *(long *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = 0;
  if (lVar8 != 0) {
    FUN_02bc1db0(param_1 + 0xd0);
  }
  lVar8 = *(long *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (lVar8 != 0) {
    FUN_02bc1db0(param_1 + 0xb0);
  }
  lVar8 = *(long *)(param_1 + 0x70);
  if (lVar8 != 0) {
    plVar6 = *(long **)(param_1 + 0x88);
    *(long *)(param_1 + 0x78) = lVar8;
    lVar9 = *(long *)(param_1 + 0x80) - lVar8;
    uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar7 & 1) != 0) {
      lVar5 = tpidr_el0;
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar6,lVar8,lVar9,8);
        goto LAB_02bc10a8;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,lVar9,8);
  }
LAB_02bc10a8:
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x5c));
  lVar8 = *(long *)(param_1 + 0x20);
  if (lVar8 == 0) {
    return;
  }
  plVar6 = *(long **)(param_1 + 0x38);
  *(long *)(param_1 + 0x28) = lVar8;
  lVar9 = *(long *)(param_1 + 0x30) - lVar8;
  uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  if ((uVar7 & 1) != 0) {
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar5 + 0x38d480)) {
      FUN_02bcc824(plVar6,lVar8,lVar9,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02bc1144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,lVar9,8);
  return;
}


