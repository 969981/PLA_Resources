/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0064d90c; name: FUN_0064d90c
 */


void FUN_0064d90c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  
  plVar4 = *(long **)(param_1 + 0x90);
  if (plVar4 != (long *)0x0) {
    if (plVar4 == (long *)(param_1 + 0x70)) {
      pcVar5 = *(code **)(*plVar4 + 0x10);
    }
    else {
      pcVar5 = *(code **)(*plVar4 + 0x18);
    }
    (*pcVar5)();
  }
  if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x18))
              (*(long **)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x50),
               *(ulong *)(param_1 + 0x40) & 0xfffffffffffffffe,1);
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if (plVar4 == (long *)0x0) {
LAB_0064d984:
    plVar4 = *(long **)(param_1 + 0x28);
    if (plVar4 == (long *)0x0) goto LAB_0064d9e8;
LAB_0064d98c:
    plVar1 = plVar4 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 != 0) goto LAB_0064d9e8;
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__shared_weak_count::__release_weak();
    plVar4 = *(long **)(param_1 + 0x18);
  }
  else {
    plVar1 = plVar4 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 != 0) goto LAB_0064d984;
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__shared_weak_count::__release_weak();
    plVar4 = *(long **)(param_1 + 0x28);
    if (plVar4 != (long *)0x0) goto LAB_0064d98c;
LAB_0064d9e8:
    plVar4 = *(long **)(param_1 + 0x18);
  }
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
      lVar6 = *(long *)(param_1 + 8);
      goto joined_r0x0064da38;
    }
  }
  lVar6 = *(long *)(param_1 + 8);
joined_r0x0064da38:
  if (lVar6 == 0) {
    return;
  }
  std::__shared_weak_count::__release_weak();
  return;
}


