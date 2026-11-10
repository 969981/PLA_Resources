/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0061fc60; name: FUN_0061fc60
 */


void FUN_0061fc60(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = (long *)param_1[10];
  *param_1 = (long)(PTR_DAT_043754c8 + 0x10);
  if (plVar5 == (long *)0x0) {
LAB_0061fc9c:
    plVar5 = (long *)param_1[8];
    param_1[8] = 0;
  }
  else {
    plVar6 = plVar5 + 1;
    do {
      lVar4 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 != 0) goto LAB_0061fc9c;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__shared_weak_count::__release_weak();
    plVar5 = (long *)param_1[8];
    param_1[8] = 0;
  }
  if (plVar5 != (long *)0x0) {
    plVar6 = (long *)plVar5[2];
    *plVar5 = (long)(PTR_DAT_043754e8 + 0x10);
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
    FUN_002e2ea0(PTR_LAB_04373088,plVar5);
  }
  plVar5 = (long *)param_1[6];
  if (plVar5 == (long *)0x0) {
LAB_0061fd20:
    plVar5 = (long *)param_1[4];
  }
  else {
    plVar6 = plVar5 + 1;
    do {
      lVar4 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 != 0) goto LAB_0061fd20;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__shared_weak_count::__release_weak();
    plVar5 = (long *)param_1[4];
  }
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 1;
    do {
      lVar4 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
      plVar5 = (long *)param_1[2];
      goto joined_r0x0061fd5c;
    }
  }
  plVar5 = (long *)param_1[2];
joined_r0x0061fd5c:
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 1;
    do {
      lVar4 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar4 + -1;
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


