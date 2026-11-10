/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00293ad8; name: FUN_00293ad8
 */


void FUN_00293ad8(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = *(long **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (plVar6 != (long *)0x0) {
    plVar7 = *(long **)(param_1 + 0x48);
    plVar3 = (long *)plVar6[4];
    if (plVar3 != (long *)0x0) {
      if (plVar3 == plVar6) {
        pcVar4 = *(code **)(*plVar3 + 0x10);
      }
      else {
        pcVar4 = *(code **)(*plVar3 + 0x18);
      }
      (*pcVar4)();
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,plVar6,0x30,0x10);
  }
  plVar6 = *(long **)(param_1 + 0x38);
  if (plVar6 == (long *)0x0) {
LAB_00293b54:
    plVar6 = *(long **)(param_1 + 0x28);
    if (plVar6 == (long *)0x0) goto LAB_00293bb8;
LAB_00293b5c:
    plVar3 = plVar6 + 1;
    do {
      lVar5 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 != 0) goto LAB_00293bb8;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__shared_weak_count::__release_weak();
    plVar6 = *(long **)(param_1 + 0x18);
  }
  else {
    plVar3 = plVar6 + 1;
    do {
      lVar5 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 != 0) goto LAB_00293b54;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__shared_weak_count::__release_weak();
    plVar6 = *(long **)(param_1 + 0x28);
    if (plVar6 != (long *)0x0) goto LAB_00293b5c;
LAB_00293bb8:
    plVar6 = *(long **)(param_1 + 0x18);
  }
  if (plVar6 != (long *)0x0) {
    plVar3 = plVar6 + 1;
    do {
      lVar5 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      plVar6 = *(long **)(param_1 + 8);
      goto joined_r0x00293bdc;
    }
  }
  plVar6 = *(long **)(param_1 + 8);
joined_r0x00293bdc:
  if (plVar6 != (long *)0x0) {
    plVar3 = plVar6 + 1;
    do {
      lVar5 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


