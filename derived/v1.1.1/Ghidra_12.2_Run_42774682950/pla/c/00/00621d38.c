/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00621d38; name: FUN_00621d38
 */


void FUN_00621d38(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0xe8);
  if (plVar5 == (long *)0x0) {
LAB_00621d64:
    FUN_0061f3dc(param_1 + 0x60);
    plVar5 = *(long **)(param_1 + 0x58);
    if (plVar5 == (long *)0x0) goto LAB_00621de0;
LAB_00621d74:
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
    if (lVar4 != 0) goto LAB_00621de0;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__shared_weak_count::__release_weak();
    FUN_0062d384(param_1 + 0x30);
    plVar5 = *(long **)(param_1 + 0x28);
    if (plVar5 != (long *)0x0) goto LAB_00621df0;
LAB_00621e08:
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
    if (lVar4 != 0) goto LAB_00621d64;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__shared_weak_count::__release_weak();
    FUN_0061f3dc(param_1 + 0x60);
    plVar5 = *(long **)(param_1 + 0x58);
    if (plVar5 != (long *)0x0) goto LAB_00621d74;
LAB_00621de0:
    FUN_0062d384(param_1 + 0x30);
    plVar5 = *(long **)(param_1 + 0x28);
    if (plVar5 == (long *)0x0) goto LAB_00621e08;
LAB_00621df0:
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
    if (lVar4 != 0) goto LAB_00621e08;
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
      lVar4 = *(long *)(param_1 + 8);
      goto joined_r0x00621e44;
    }
  }
  lVar4 = *(long *)(param_1 + 8);
joined_r0x00621e44:
  if (lVar4 == 0) {
    return;
  }
  std::__shared_weak_count::__release_weak();
  return;
}


