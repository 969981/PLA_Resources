/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006644f4; name: FUN_006644f4
 */


void FUN_006644f4(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  nn::os::LockMutex((MutexType *)(param_1 + 8));
  plVar8 = (long *)*param_1;
  plVar6 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x78,8);
  plVar6[2] = 0;
  plVar9 = plVar6 + 1;
  *plVar9 = 0;
  puVar5 = PTR_DAT_043753e0;
  plVar6[3] = (long)plVar8;
  plVar8 = plVar6 + 4;
  *plVar6 = (long)(puVar5 + 0x10);
  FUN_00782ef8(plVar8);
  plVar6[4] = (long)(PTR_DAT_043753e8 + 0x10);
  nn::os::InitializeEvent(plVar6 + 6,0,0);
  plVar6[4] = (long)(PTR_DAT_043753f0 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar6 + 0xb),false,0);
  if (plVar6 != (long *)0x0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = (long *)param_1[3];
  param_1[2] = (long)plVar8;
  param_1[3] = (long)plVar6;
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
    }
  }
  param_1[4] = (long)plVar8;
  plVar8 = (long *)param_1[5];
  param_1[5] = (long)plVar6;
  if (plVar8 != (long *)0x0) {
    plVar6 = plVar8 + 1;
    do {
      lVar7 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar7 = param_1[4];
  lVar2 = param_1[5];
  param_1[4] = 0;
  param_1[5] = 0;
  plVar8 = (long *)param_1[7];
  param_1[6] = lVar7;
  param_1[7] = lVar2;
  if (plVar8 != (long *)0x0) {
    plVar6 = plVar8 + 1;
    do {
      lVar7 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
    }
  }
  *(undefined1 *)(param_1 + 0xc) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 8));
  return;
}


