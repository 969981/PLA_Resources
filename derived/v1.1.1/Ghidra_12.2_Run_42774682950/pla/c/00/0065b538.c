/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0065b538; name: FUN_0065b538
 */


void FUN_0065b538(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_30 [8];
  long *local_28;
  
  FUN_0065b85c(auStack_30);
  if (local_28 == (long *)0x0) {
LAB_0065b570:
    lVar4 = *(long *)(param_1 + 0x238);
  }
  else {
    plVar6 = local_28 + 1;
    do {
      lVar4 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 != 0) goto LAB_0065b570;
    (**(code **)(*local_28 + 0x10))(local_28);
    std::__shared_weak_count::__release_weak();
    lVar4 = *(long *)(param_1 + 0x238);
  }
  if (lVar4 != 0) {
    lVar5 = *(long *)(param_1 + 0x240);
    if (lVar5 == lVar4) {
      lVar5 = lVar4;
    }
    else {
      do {
        lVar5 = lVar5 + -0x20;
        FUN_00689be4(lVar5);
      } while (lVar4 != lVar5);
      lVar5 = *(long *)(param_1 + 0x238);
    }
    *(long *)(param_1 + 0x240) = lVar4;
    (**(code **)(**(long **)(param_1 + 0x250) + 0x18))
              (*(long **)(param_1 + 0x250),lVar5,*(long *)(param_1 + 0x248) - lVar5,8);
  }
  lVar4 = *(long *)(param_1 + 0x218);
  if (lVar4 != 0) {
    lVar5 = *(long *)(param_1 + 0x220);
    if (lVar5 == lVar4) {
      lVar5 = lVar4;
    }
    else {
      do {
        lVar5 = lVar5 + -0x28;
        FUN_006888c8(lVar5);
      } while (lVar4 != lVar5);
      lVar5 = *(long *)(param_1 + 0x218);
    }
    *(long *)(param_1 + 0x220) = lVar4;
    (**(code **)(**(long **)(param_1 + 0x230) + 0x18))
              (*(long **)(param_1 + 0x230),lVar5,*(long *)(param_1 + 0x228) - lVar5,8);
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x1f0));
  FUN_0066230c(param_1 + 0x1d0,*(undefined8 *)(param_1 + 0x1d8));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x1a8));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x180));
  plVar6 = *(long **)(param_1 + 0x178);
  if (plVar6 == (long *)0x0) {
LAB_0065b680:
    plVar6 = *(long **)(param_1 + 0x168);
    if (plVar6 == (long *)0x0) goto LAB_0065b6e4;
LAB_0065b688:
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 != 0) goto LAB_0065b6e4;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__shared_weak_count::__release_weak();
    plVar6 = *(long **)(param_1 + 0x158);
    if (plVar6 != (long *)0x0) goto LAB_0065b6ec;
LAB_0065b704:
    plVar6 = *(long **)(param_1 + 0x138);
    if (plVar6 == (long *)0x0) goto LAB_0065b768;
LAB_0065b70c:
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 != 0) goto LAB_0065b768;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__shared_weak_count::__release_weak();
    plVar6 = *(long **)(param_1 + 0x128);
  }
  else {
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 != 0) goto LAB_0065b680;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__shared_weak_count::__release_weak();
    plVar6 = *(long **)(param_1 + 0x168);
    if (plVar6 != (long *)0x0) goto LAB_0065b688;
LAB_0065b6e4:
    plVar6 = *(long **)(param_1 + 0x158);
    if (plVar6 == (long *)0x0) goto LAB_0065b704;
LAB_0065b6ec:
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 != 0) goto LAB_0065b704;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__shared_weak_count::__release_weak();
    plVar6 = *(long **)(param_1 + 0x138);
    if (plVar6 != (long *)0x0) goto LAB_0065b70c;
LAB_0065b768:
    plVar6 = *(long **)(param_1 + 0x128);
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_0065f108(param_1 + 0xb0);
  FUN_0065f280(param_1 + 0x30);
  plVar6 = *(long **)(param_1 + 0x28);
  if (plVar6 == (long *)0x0) {
LAB_0065b7d0:
    plVar6 = *(long **)(param_1 + 0x18);
  }
  else {
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 != 0) goto LAB_0065b7d0;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__shared_weak_count::__release_weak();
    plVar6 = *(long **)(param_1 + 0x18);
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      lVar4 = *(long *)(param_1 + 8);
      goto joined_r0x0065b80c;
    }
  }
  lVar4 = *(long *)(param_1 + 8);
joined_r0x0065b80c:
  if (lVar4 == 0) {
    return;
  }
  std::__shared_weak_count::__release_weak();
  return;
}


