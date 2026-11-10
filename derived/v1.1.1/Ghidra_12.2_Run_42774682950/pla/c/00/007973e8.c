/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007973e8; name: FUN_007973e8
 */


void FUN_007973e8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x70);
  if (plVar5 == (long *)0x0) {
LAB_00797414:
    plVar5 = *(long **)(param_1 + 0x60);
    if (plVar5 == (long *)0x0) goto LAB_00797478;
LAB_0079741c:
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
    if (lVar4 != 0) goto LAB_00797478;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__shared_weak_count::__release_weak();
    plVar5 = *(long **)(param_1 + 0x48);
    if (plVar5 != (long *)0x0) goto LAB_00797480;
LAB_00797498:
    plVar5 = *(long **)(param_1 + 0x28);
    if (plVar5 == (long *)0x0) goto LAB_007974fc;
LAB_007974a0:
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
    if (lVar4 != 0) goto LAB_007974fc;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__shared_weak_count::__release_weak();
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
    if (lVar4 != 0) goto LAB_00797414;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__shared_weak_count::__release_weak();
    plVar5 = *(long **)(param_1 + 0x60);
    if (plVar5 != (long *)0x0) goto LAB_0079741c;
LAB_00797478:
    plVar5 = *(long **)(param_1 + 0x48);
    if (plVar5 == (long *)0x0) goto LAB_00797498;
LAB_00797480:
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
    if (lVar4 != 0) goto LAB_00797498;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__shared_weak_count::__release_weak();
    plVar5 = *(long **)(param_1 + 0x28);
    if (plVar5 != (long *)0x0) goto LAB_007974a0;
LAB_007974fc:
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
      goto joined_r0x00797578;
    }
  }
  plVar5 = *(long **)(param_1 + 8);
joined_r0x00797578:
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


