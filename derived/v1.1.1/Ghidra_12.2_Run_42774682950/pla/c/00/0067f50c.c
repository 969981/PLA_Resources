/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0067f50c; name: FUN_0067f50c
 */


void FUN_0067f50c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = *(long *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (lVar4 != 0) {
    plVar5 = *(long **)(param_1 + 0x68);
    FUN_003c73c4(lVar4);
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,0x198,8);
  }
  plVar5 = *(long **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (plVar5 == (long *)0x0) {
LAB_0067f570:
    plVar5 = *(long **)(param_1 + 0x38);
    if (plVar5 == (long *)0x0) goto LAB_0067f5d4;
LAB_0067f578:
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
    if (lVar4 != 0) goto LAB_0067f5d4;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__shared_weak_count::__release_weak();
    plVar5 = *(long **)(param_1 + 0x28);
    if (plVar5 != (long *)0x0) goto LAB_0067f5dc;
LAB_0067f5f4:
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
    if (lVar4 != 0) goto LAB_0067f570;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__shared_weak_count::__release_weak();
    plVar5 = *(long **)(param_1 + 0x38);
    if (plVar5 != (long *)0x0) goto LAB_0067f578;
LAB_0067f5d4:
    plVar5 = *(long **)(param_1 + 0x28);
    if (plVar5 == (long *)0x0) goto LAB_0067f5f4;
LAB_0067f5dc:
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
    if (lVar4 != 0) goto LAB_0067f5f4;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__shared_weak_count::__release_weak();
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
      plVar5 = *(long **)(param_1 + 8);
      goto joined_r0x0067f630;
    }
  }
  plVar5 = *(long **)(param_1 + 8);
joined_r0x0067f630:
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
      return;
    }
  }
  return;
}


