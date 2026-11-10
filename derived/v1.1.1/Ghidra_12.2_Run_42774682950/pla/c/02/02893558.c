/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02893558; name: FUN_02893558
 */


void FUN_02893558(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar6 = (long *)(param_1 + 0x120);
  do {
    if (*plVar6 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x114));
        while (*plVar6 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_028935b8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_028935b8:
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(ulong *)(param_1 + 0x108) = (ulong)*(uint *)(param_1 + 0x10c) << 0x20;
  *(undefined8 *)(param_1 + 0x120) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x114));
  lVar5 = *(long *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = 0;
  if (lVar5 != 0) {
    FUN_028968a8(param_1 + 0x138);
  }
  lVar5 = *(long *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (lVar5 != 0) {
    FUN_02896c44(param_1 + 0x58);
  }
  plVar6 = *(long **)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x198) = 0;
  if (plVar6 != (long *)0x0) {
    if (plVar6[1] != 0) {
      plVar1 = plVar6 + 2;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
    plVar6 = *(long **)(param_1 + 0x198);
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar1 = plVar6 + 2;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x178));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x158));
  lVar5 = *(long *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = 0;
  if (lVar5 != 0) {
    FUN_028968a8(param_1 + 0x138);
  }
  plVar6 = *(long **)(param_1 + 0x128);
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar1 = plVar6 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x114));
  lVar5 = *(long *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (lVar5 != 0) {
    FUN_02896c44(param_1 + 0x58);
  }
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 != 0) {
    plVar6 = *(long **)(param_1 + 0x30);
    *(long *)(param_1 + 0x20) = lVar5;
    lVar8 = *(long *)(param_1 + 0x28) - lVar5;
    uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar7 & 1) != 0) {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar6,lVar5,lVar8,4);
        plVar6 = *(long **)(param_1 + 0x10);
        goto joined_r0x02893714;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,lVar8,4);
  }
  plVar6 = *(long **)(param_1 + 0x10);
joined_r0x02893714:
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar1 = plVar6 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02893764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x18))();
      return;
    }
  }
  return;
}


