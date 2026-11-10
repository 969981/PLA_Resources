/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cc8a1c; name: FUN_02cc8a1c
 */


void FUN_02cc8a1c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_40;
  long *local_38;
  
  nn::os::LockMutex((MutexType *)(param_2 + 4));
  FUN_006105b0(&local_40,*param_2);
  plVar1 = local_38;
  uVar4 = local_40;
  local_40 = 0;
  local_38 = (long *)0x0;
  plVar6 = (long *)param_2[3];
  param_2[2] = uVar4;
  param_2[3] = plVar1;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      if (local_38 != (long *)0x0) {
        plVar1 = local_38 + 1;
        do {
          lVar5 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  *param_1 = param_2[2];
  lVar5 = param_2[3];
  param_1[1] = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  nn::os::UnlockMutex((MutexType *)(param_2 + 4));
  return;
}


