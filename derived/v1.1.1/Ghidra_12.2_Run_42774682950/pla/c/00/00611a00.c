/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00611a00; name: FUN_00611a00
 */


void FUN_00611a00(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_30;
  long *local_28;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 == (long *)0x0) {
    FUN_006105b0(&local_30,*param_1);
    plVar4 = local_28;
    uVar3 = local_30;
    local_30 = 0;
    local_28 = (long *)0x0;
    plVar6 = (long *)param_1[3];
    param_1[2] = uVar3;
    param_1[3] = plVar4;
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_28 != (long *)0x0) {
      plVar4 = local_28 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar4 = (long *)param_1[2];
  }
  (**(code **)(*plVar4 + 0x18))();
  lVar5 = param_1[1];
  while ((lVar5 != 0 && (0 < *(long *)(lVar5 + 8)))) {
    local_30 = 1000000;
                    /* try { // try from 00611ae0 to 00611ae7 has its CatchHandler @ 00611b88 */
    std::this_thread::sleep_for((duration *)&local_30);
    lVar5 = param_1[1];
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 4));
  plVar4 = (long *)param_1[3];
  if (plVar4 != (long *)0x0) {
    plVar6 = plVar4 + 1;
    do {
      lVar5 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar4 = (long *)param_1[1];
  if (plVar4 != (long *)0x0) {
    plVar6 = plVar4 + 1;
    do {
      lVar5 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


