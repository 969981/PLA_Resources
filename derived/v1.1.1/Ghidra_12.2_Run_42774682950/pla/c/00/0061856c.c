/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0061856c; name: FUN_0061856c
 */


void FUN_0061856c(long param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 local_50;
  long *local_48;
  undefined1 auStack_40 [8];
  long *local_38;
  
  FUN_00783fac(auStack_40,param_1 + 0x38);
  uVar6 = nn::nifm::IsNetworkAvailable();
  uVar8 = FUN_00783cf4(auStack_40);
  if ((uVar8 & 1) == 0) {
    do {
      local_50 = 3000000000;
      FUN_006119e0(&local_50,auStack_40);
      uVar7 = nn::nifm::IsNetworkAvailable();
      uVar3 = uVar6 ^ uVar7;
      uVar2 = uVar7;
      if ((uVar3 & 1) == 0) {
        uVar2 = uVar6;
      }
      uVar6 = uVar2;
      if (((uVar7 & 1) != 0) && ((uVar3 & 1) != 0)) {
        nn::os::LockMutex((MutexType *)(param_1 + 8));
        FUN_00784040(param_1 + 0x28);
        uVar9 = FUN_00612290();
        FUN_00783f38(&local_50,uVar9);
        plVar1 = local_48;
        uVar9 = local_50;
        local_50 = 0;
        local_48 = (long *)0x0;
        plVar11 = *(long **)(param_1 + 0x30);
        *(undefined8 *)(param_1 + 0x28) = uVar9;
        *(long **)(param_1 + 0x30) = plVar1;
        if (plVar11 != (long *)0x0) {
          plVar1 = plVar11 + 1;
          do {
            lVar10 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            std::__shared_weak_count::__release_weak();
            if (local_48 != (long *)0x0) {
              plVar1 = local_48 + 1;
              do {
                lVar10 = *plVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *plVar1 = lVar10 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar10 == 0) {
                (**(code **)(*local_48 + 0x10))(local_48);
                std::__shared_weak_count::__release_weak();
              }
            }
          }
        }
        nn::os::UnlockMutex((MutexType *)(param_1 + 8));
        uVar6 = 1;
      }
      uVar8 = FUN_00783cf4(auStack_40);
    } while ((uVar8 & 1) == 0);
  }
  if (local_38 != (long *)0x0) {
    plVar1 = local_38 + 1;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_38 + 0x10))(local_38);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


