/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0067d200; name: FUN_0067d200
 */


void FUN_0067d200(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x90);
  if (plVar5 == (long *)0x0) {
LAB_0067d22c:
    if ((*(byte *)(param_1 + 0x68) & 1) == 0) goto LAB_0067d234;
LAB_0067d268:
    (**(code **)(**(long **)(param_1 + 0x80) + 0x18))
              (*(long **)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x78),
               *(ulong *)(param_1 + 0x68) & 0xfffffffffffffffe,1);
    if ((*(byte *)(param_1 + 0x48) & 1) == 0) goto LAB_0067d23c;
LAB_0067d28c:
    (**(code **)(**(long **)(param_1 + 0x60) + 0x18))
              (*(long **)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x58),
               *(ulong *)(param_1 + 0x48) & 0xfffffffffffffffe,1);
    plVar5 = *(long **)(param_1 + 0x38);
    if (plVar5 == (long *)0x0) goto LAB_0067d2c8;
LAB_0067d2b0:
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
    if (lVar4 != 0) goto LAB_0067d2c8;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__shared_weak_count::__release_weak();
    plVar5 = *(long **)(param_1 + 0x28);
    if (plVar5 != (long *)0x0) goto LAB_0067d2d0;
LAB_0067d32c:
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
    if (lVar4 != 0) goto LAB_0067d22c;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__shared_weak_count::__release_weak();
    if ((*(byte *)(param_1 + 0x68) & 1) != 0) goto LAB_0067d268;
LAB_0067d234:
    if ((*(byte *)(param_1 + 0x48) & 1) != 0) goto LAB_0067d28c;
LAB_0067d23c:
    plVar5 = *(long **)(param_1 + 0x38);
    if (plVar5 != (long *)0x0) goto LAB_0067d2b0;
LAB_0067d2c8:
    plVar5 = *(long **)(param_1 + 0x28);
    if (plVar5 == (long *)0x0) goto LAB_0067d32c;
LAB_0067d2d0:
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
    if (lVar4 != 0) goto LAB_0067d32c;
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
      goto joined_r0x0067d3a8;
    }
  }
  plVar5 = *(long **)(param_1 + 8);
joined_r0x0067d3a8:
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


