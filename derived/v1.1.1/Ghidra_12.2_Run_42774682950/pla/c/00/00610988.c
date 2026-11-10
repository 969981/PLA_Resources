/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00610988; name: FUN_00610988
 */


void FUN_00610988(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long local_40;
  long *local_38;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x158));
  if (*(long *)(param_2 + 0x308) == 0) {
    FUN_0061687c(&local_40,param_2 + 0x28);
    uVar2 = *(undefined8 *)(local_40 + 8);
    lVar5 = *(long *)(local_40 + 0x10);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar6 = *(long **)(param_2 + 0x310);
    *(undefined8 *)(param_2 + 0x308) = uVar2;
    *(long *)(param_2 + 0x310) = lVar5;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_38 != (long *)0x0) {
      plVar6 = local_38 + 1;
      do {
        lVar5 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
        std::__shared_weak_count::__release_weak();
      }
    }
    *param_1 = *(long *)(param_2 + 0x308);
    lVar5 = *(long *)(param_2 + 0x310);
    param_1[1] = lVar5;
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  else {
    *param_1 = *(long *)(param_2 + 0x308);
    lVar5 = *(long *)(param_2 + 0x310);
    param_1[1] = lVar5;
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x158));
  return;
}


