/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cc8774; name: FUN_02cc8774
 */


void FUN_02cc8774(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x630));
  FUN_02cc8880(param_1 + 0x610,*(undefined8 *)(param_1 + 0x618));
  plVar5 = *(long **)(param_1 + 0x608);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_00784830(param_1 + 0x490);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x5d8));
  FUN_0078449c(param_1 + 0x490);
  FUN_00617840(param_1 + 0x2f0);
  FUN_00617840(param_1 + 0x3b8);
  plVar5 = *(long **)(param_1 + 0x488);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_00617798(param_1 + 0x3b8);
  FUN_00617798(param_1 + 0x2f0);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x2d0));
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  std::__shared_weak_count::__release_weak();
  return;
}


