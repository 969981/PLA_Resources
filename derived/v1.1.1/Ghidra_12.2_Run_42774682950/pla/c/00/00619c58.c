/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00619c58; name: FUN_00619c58
 */


void FUN_00619c58(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_00784040(param_1 + 0x58);
  plVar5 = *(long **)(param_1 + 0x60);
  if (plVar5 == (long *)0x0) {
LAB_00619c8c:
    plVar5 = *(long **)(param_1 + 0x50);
    if (plVar5 == (long *)0x0) goto LAB_00619cf8;
LAB_00619c94:
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
    if (lVar4 != 0) goto LAB_00619cf8;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__shared_weak_count::__release_weak();
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x28));
    plVar5 = *(long **)(param_1 + 0x18);
  }
  else {
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
    if (lVar4 != 0) goto LAB_00619c8c;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__shared_weak_count::__release_weak();
    plVar5 = *(long **)(param_1 + 0x50);
    if (plVar5 != (long *)0x0) goto LAB_00619c94;
LAB_00619cf8:
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x28));
    plVar5 = *(long **)(param_1 + 0x18);
  }
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
      lVar4 = *(long *)(param_1 + 8);
      goto joined_r0x00619d50;
    }
  }
  lVar4 = *(long *)(param_1 + 8);
joined_r0x00619d50:
  if (lVar4 == 0) {
    return;
  }
  std::__shared_weak_count::__release_weak();
  return;
}


