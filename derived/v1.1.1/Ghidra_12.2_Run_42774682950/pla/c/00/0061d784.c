/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0061d784; name: FUN_0061d784
 */


void FUN_0061d784(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  long local_40;
  long *local_38;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x10));
  uVar5 = (**(code **)(**(long **)(param_2 + 0x50) + 0x20))();
  if ((uVar5 & 1) == 0) {
    *param_1 = *(undefined8 *)(param_2 + 0x50);
    lVar7 = *(long *)(param_2 + 0x58);
    param_1[1] = lVar7;
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  else {
    piVar6 = (int *)(**(code **)(**(long **)(param_2 + 0x50) + 0x38))();
    if (*piVar6 == 0) {
      plVar1 = *(long **)(param_2 + 0x60);
      plVar8 = *(long **)(param_2 + 0x68);
      if (plVar8 != (long *)0x0) {
        plVar2 = plVar8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar5 = (**(code **)(*plVar1 + 0x20))();
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 1;
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
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__shared_weak_count::__release_weak();
        }
      }
      if ((uVar5 & 1) == 0) {
        *param_1 = *(undefined8 *)(param_2 + 0x50);
        lVar7 = *(long *)(param_2 + 0x58);
        param_1[1] = lVar7;
        if (lVar7 != 0) {
          plVar1 = (long *)(lVar7 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
      }
      else {
        FUN_0061d434(&local_40,param_2);
        plVar1 = local_38;
        lVar7 = local_40;
        local_40 = 0;
        local_38 = (long *)0x0;
        if (lVar7 != 0) {
          *(undefined1 *)(lVar7 + 8) = 1;
        }
        plVar8 = *(long **)(param_2 + 0x58);
        *(long *)(param_2 + 0x50) = lVar7;
        *(long **)(param_2 + 0x58) = plVar1;
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 1;
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
            (**(code **)(*plVar8 + 0x10))(plVar8);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_38 != (long *)0x0) {
          plVar1 = local_38 + 1;
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
            (**(code **)(*local_38 + 0x10))(local_38);
            std::__shared_weak_count::__release_weak();
          }
        }
        *param_1 = *(undefined8 *)(param_2 + 0x50);
        lVar7 = *(long *)(param_2 + 0x58);
        param_1[1] = lVar7;
        if (lVar7 != 0) {
          plVar1 = (long *)(lVar7 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
      }
    }
    else {
      FUN_0061d434(&local_40,param_2);
      plVar1 = local_38;
      lVar7 = local_40;
      local_40 = 0;
      local_38 = (long *)0x0;
      if (lVar7 != 0) {
        *(undefined1 *)(lVar7 + 8) = 1;
      }
      plVar8 = *(long **)(param_2 + 0x58);
      *(long *)(param_2 + 0x50) = lVar7;
      *(long **)(param_2 + 0x58) = plVar1;
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 1;
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
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_38 != (long *)0x0) {
        plVar1 = local_38 + 1;
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
          (**(code **)(*local_38 + 0x10))(local_38);
          std::__shared_weak_count::__release_weak();
        }
      }
      *param_1 = *(undefined8 *)(param_2 + 0x50);
      lVar7 = *(long *)(param_2 + 0x58);
      param_1[1] = lVar7;
      if (lVar7 != 0) {
        plVar1 = (long *)(lVar7 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x10));
  return;
}


