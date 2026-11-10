/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0066d108; name: FUN_0066d108
 */


void FUN_0066d108(long *param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_30 [8];
  long *local_28;
  
  *param_1 = (long)(PTR_DAT_043759f0 + 0x10);
  FUN_0066a8e8(auStack_30);
  if (local_28 == (long *)0x0) {
LAB_0066d150:
    plVar7 = (long *)param_1[0x39];
    if (plVar7 == (long *)0x0) goto LAB_0066d1b4;
LAB_0066d158:
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 != 0) goto LAB_0066d1b4;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__shared_weak_count::__release_weak();
    plVar7 = (long *)param_1[0x36];
    if (plVar7 != (long *)0x0) goto LAB_0066d1bc;
LAB_0066d1d4:
    plVar7 = (long *)param_1[0x34];
    if (plVar7 == (long *)0x0) goto LAB_0066d238;
LAB_0066d1dc:
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 != 0) goto LAB_0066d238;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__shared_weak_count::__release_weak();
    plVar7 = (long *)param_1[0x32];
    if (plVar7 != (long *)0x0) goto LAB_0066d240;
LAB_0066d258:
    bVar2 = *(byte *)(param_1 + 0x2d);
  }
  else {
    plVar7 = local_28 + 1;
    do {
      lVar6 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 != 0) goto LAB_0066d150;
    (**(code **)(*local_28 + 0x10))(local_28);
    std::__shared_weak_count::__release_weak();
    plVar7 = (long *)param_1[0x39];
    if (plVar7 != (long *)0x0) goto LAB_0066d158;
LAB_0066d1b4:
    plVar7 = (long *)param_1[0x36];
    if (plVar7 == (long *)0x0) goto LAB_0066d1d4;
LAB_0066d1bc:
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 != 0) goto LAB_0066d1d4;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__shared_weak_count::__release_weak();
    plVar7 = (long *)param_1[0x34];
    if (plVar7 != (long *)0x0) goto LAB_0066d1dc;
LAB_0066d238:
    plVar7 = (long *)param_1[0x32];
    if (plVar7 == (long *)0x0) goto LAB_0066d258;
LAB_0066d240:
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 != 0) goto LAB_0066d258;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__shared_weak_count::__release_weak();
    bVar2 = *(byte *)(param_1 + 0x2d);
  }
  if ((bVar2 & 1) != 0) {
    (**(code **)(*(long *)param_1[0x30] + 0x18))
              ((long *)param_1[0x30],param_1[0x2f],param_1[0x2d] & 0xfffffffffffffffe,1);
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x29));
  plVar7 = (long *)param_1[0x28];
  if (plVar7 == (long *)0x0) {
LAB_0066d2a4:
    plVar7 = (long *)param_1[0x26];
    if (plVar7 == (long *)0x0) goto LAB_0066d32c;
LAB_0066d2ac:
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 != 0) goto LAB_0066d32c;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__shared_weak_count::__release_weak();
    plVar7 = (long *)param_1[0x24];
    if (plVar7 != (long *)0x0) goto LAB_0066d334;
LAB_0066d34c:
    cVar3 = *(char *)((long)param_1 + 0x114);
  }
  else {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 != 0) goto LAB_0066d2a4;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__shared_weak_count::__release_weak();
    plVar7 = (long *)param_1[0x26];
    if (plVar7 != (long *)0x0) goto LAB_0066d2ac;
LAB_0066d32c:
    plVar7 = (long *)param_1[0x24];
    if (plVar7 == (long *)0x0) goto LAB_0066d34c;
LAB_0066d334:
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 != 0) goto LAB_0066d34c;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__shared_weak_count::__release_weak();
    cVar3 = *(char *)((long)param_1 + 0x114);
  }
  if (cVar3 != '\0') {
    FUN_0066724c(param_1 + 0x20);
  }
  if (param_1[0x21] != 0) {
    std::__shared_weak_count::__release_weak();
  }
  if (*(char *)((long)param_1 + 0xfc) != '\0') {
    FUN_0066724c(param_1 + 0x1d);
  }
  if (param_1[0x1e] != 0) {
    std::__shared_weak_count::__release_weak();
  }
  if (*(char *)((long)param_1 + 0xe4) != '\0') {
    FUN_0066724c(param_1 + 0x1a);
  }
  if (param_1[0x1b] != 0) {
    std::__shared_weak_count::__release_weak();
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x16));
  FUN_0066e7b0(param_1 + 0x12,param_1[0x13]);
  plVar7 = (long *)param_1[0x10];
  if (plVar7 != (long *)0x0) {
    if (plVar7 == param_1 + 0xc) {
      pcVar5 = *(code **)(*plVar7 + 0x10);
    }
    else {
      pcVar5 = *(code **)(*plVar7 + 0x18);
    }
    (*pcVar5)();
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 8));
  plVar7 = (long *)param_1[6];
  if (plVar7 == (long *)0x0) {
LAB_0066d428:
    plVar7 = (long *)param_1[4];
  }
  else {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 != 0) goto LAB_0066d428;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__shared_weak_count::__release_weak();
    plVar7 = (long *)param_1[4];
  }
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
      lVar6 = param_1[2];
      goto joined_r0x0066d464;
    }
  }
  lVar6 = param_1[2];
joined_r0x0066d464:
  if (lVar6 == 0) {
    return;
  }
  std::__shared_weak_count::__release_weak();
  return;
}


