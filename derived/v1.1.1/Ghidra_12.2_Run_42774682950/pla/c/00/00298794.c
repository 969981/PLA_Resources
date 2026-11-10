/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00298794; name: FUN_00298794
 */


void FUN_00298794(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  
  plVar4 = *(long **)(param_1 + 0x140);
  if (plVar4 != (long *)0x0) {
    if (plVar4 == (long *)(param_1 + 0x120)) {
      pcVar5 = *(code **)(*plVar4 + 0x10);
    }
    else {
      pcVar5 = *(code **)(*plVar4 + 0x18);
    }
    (*pcVar5)();
  }
  plVar4 = *(long **)(param_1 + 0x110);
  if (plVar4 != (long *)0x0) {
    if (plVar4 == (long *)(param_1 + 0xf0)) {
      pcVar5 = *(code **)(*plVar4 + 0x10);
    }
    else {
      pcVar5 = *(code **)(*plVar4 + 0x18);
    }
    (*pcVar5)();
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 200));
  plVar4 = *(long **)(param_1 + 0xc0);
  if (plVar4 == (long *)0x0) {
LAB_00298818:
    if ((*(byte *)(param_1 + 0x98) & 1) == 0) goto LAB_00298820;
LAB_0029885c:
    (**(code **)(**(long **)(param_1 + 0xb0) + 0x18))
              (*(long **)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xa8),
               *(ulong *)(param_1 + 0x98) & 0xfffffffffffffffe,1);
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_00298828;
LAB_00298880:
    (**(code **)(**(long **)(param_1 + 0x90) + 0x18))
              (*(long **)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x88),
               *(ulong *)(param_1 + 0x78) & 0xfffffffffffffffe,1);
    if ((*(byte *)(param_1 + 0x58) & 1) == 0) goto LAB_00298830;
LAB_002988a4:
    (**(code **)(**(long **)(param_1 + 0x70) + 0x18))
              (*(long **)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x68),
               *(ulong *)(param_1 + 0x58) & 0xfffffffffffffffe,1);
    plVar4 = *(long **)(param_1 + 0x48);
    if (plVar4 != (long *)0x0) goto LAB_002988c8;
LAB_002988e0:
    plVar4 = *(long **)(param_1 + 0x38);
    if (plVar4 == (long *)0x0) goto LAB_00298944;
LAB_002988e8:
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
    if (lVar6 != 0) goto LAB_00298944;
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__shared_weak_count::__release_weak();
    plVar4 = *(long **)(param_1 + 0x28);
    if (plVar4 != (long *)0x0) goto LAB_0029894c;
LAB_00298964:
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
    if (lVar6 != 0) goto LAB_00298818;
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__shared_weak_count::__release_weak();
    if ((*(byte *)(param_1 + 0x98) & 1) != 0) goto LAB_0029885c;
LAB_00298820:
    if ((*(byte *)(param_1 + 0x78) & 1) != 0) goto LAB_00298880;
LAB_00298828:
    if ((*(byte *)(param_1 + 0x58) & 1) != 0) goto LAB_002988a4;
LAB_00298830:
    plVar4 = *(long **)(param_1 + 0x48);
    if (plVar4 == (long *)0x0) goto LAB_002988e0;
LAB_002988c8:
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
    if (lVar6 != 0) goto LAB_002988e0;
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__shared_weak_count::__release_weak();
    plVar4 = *(long **)(param_1 + 0x38);
    if (plVar4 != (long *)0x0) goto LAB_002988e8;
LAB_00298944:
    plVar4 = *(long **)(param_1 + 0x28);
    if (plVar4 == (long *)0x0) goto LAB_00298964;
LAB_0029894c:
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
    if (lVar6 != 0) goto LAB_00298964;
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__shared_weak_count::__release_weak();
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
      goto joined_r0x002989a0;
    }
  }
  lVar6 = *(long *)(param_1 + 8);
joined_r0x002989a0:
  if (lVar6 == 0) {
    return;
  }
  std::__shared_weak_count::__release_weak();
  return;
}


