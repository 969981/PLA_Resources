/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006de1d0; name: FUN_006de1d0
 */


void FUN_006de1d0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long local_40;
  long *local_38;
  
  nn::os::LockMutex((MutexType *)(param_2 + 200));
  if (*(long **)(param_2 + 0xb8) == (long *)0x0) {
    if ((*(byte *)(param_2 + 0x58) & 1) == 0) {
      lVar7 = param_2 + 0x59;
    }
    else {
      lVar7 = *(long *)(param_2 + 0x68);
    }
                    /* try { // try from 006de29c to 006de2a3 has its CatchHandler @ 006de5b0 */
    (**(code **)(**(long **)(param_2 + 0x110) + 0x38))
              (&local_40,*(long **)(param_2 + 0x110),param_2 + 0x20,param_2 + 0x10,lVar7,
               param_2 + 0x78);
    plVar1 = local_38;
    lVar7 = local_40;
    local_40 = 0;
    local_38 = (long *)0x0;
    if (lVar7 != 0) {
      *(undefined1 *)(lVar7 + 8) = 1;
    }
    plVar8 = *(long **)(param_2 + 0xc0);
    *(long *)(param_2 + 0xb8) = lVar7;
    *(long **)(param_2 + 0xc0) = plVar1;
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_38 != (long *)0x0) {
      plVar1 = local_38 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
        std::__shared_weak_count::__release_weak();
      }
    }
    *param_1 = *(undefined8 *)(param_2 + 0xb8);
    lVar7 = *(long *)(param_2 + 0xc0);
    param_1[1] = lVar7;
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  else {
    uVar4 = (**(code **)(**(long **)(param_2 + 0xb8) + 0x20))();
    if ((uVar4 & 1) == 0) {
      *param_1 = *(undefined8 *)(param_2 + 0xb8);
      lVar7 = *(long *)(param_2 + 0xc0);
      param_1[1] = lVar7;
      if (lVar7 != 0) {
        plVar1 = (long *)(lVar7 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    else {
      piVar5 = (int *)(**(code **)(**(long **)(param_2 + 0xb8) + 0x38))();
      if (*piVar5 == 0) {
        if (((*(long *)(param_2 + 0x140) == 0) ||
            (lVar7 = (**(code **)(**(long **)(param_2 + 0xb8) + 0x38))(),
            *(long *)(lVar7 + 0xb0) == 0)) ||
           ((*(char *)(param_2 + 0x158) == '\0' &&
            (lVar6 = std::chrono::steady_clock::now(),
            lVar6 + *(long *)(param_2 + 0x150) * 1000000 <= *(long *)(lVar7 + 0xb0))))) {
          *param_1 = *(undefined8 *)(param_2 + 0xb8);
          lVar7 = *(long *)(param_2 + 0xc0);
          param_1[1] = lVar7;
          if (lVar7 != 0) {
            plVar1 = (long *)(lVar7 + 8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = *plVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        else {
          *(undefined1 *)(param_2 + 0x158) = 0;
          if ((*(byte *)(param_2 + 0x58) & 1) == 0) {
            lVar6 = param_2 + 0x59;
          }
          else {
            lVar6 = *(long *)(param_2 + 0x68);
          }
                    /* try { // try from 006de4d4 to 006de4db has its CatchHandler @ 006de5a8 */
          (**(code **)(**(long **)(param_2 + 0x140) + 0x38))
                    (&local_40,*(long **)(param_2 + 0x140),param_2 + 0x20,param_2 + 0x10,lVar6,
                     lVar7 + 0x50);
          plVar1 = local_38;
          lVar7 = local_40;
          local_40 = 0;
          local_38 = (long *)0x0;
          if (lVar7 != 0) {
            *(undefined1 *)(lVar7 + 8) = 1;
          }
          plVar8 = *(long **)(param_2 + 0xc0);
          *(long *)(param_2 + 0xb8) = lVar7;
          *(long **)(param_2 + 0xc0) = plVar1;
          if (plVar8 != (long *)0x0) {
            plVar1 = plVar8 + 1;
            do {
              lVar7 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar7 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (local_38 != (long *)0x0) {
            plVar1 = local_38 + 1;
            do {
              lVar7 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar7 == 0) {
              (**(code **)(*local_38 + 0x10))(local_38);
              std::__shared_weak_count::__release_weak();
            }
          }
          *param_1 = *(undefined8 *)(param_2 + 0xb8);
          lVar7 = *(long *)(param_2 + 0xc0);
          param_1[1] = lVar7;
          if (lVar7 != 0) {
            plVar1 = (long *)(lVar7 + 8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = *plVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
      }
      else {
        if ((*(byte *)(param_2 + 0x58) & 1) == 0) {
          lVar7 = param_2 + 0x59;
        }
        else {
          lVar7 = *(long *)(param_2 + 0x68);
        }
                    /* try { // try from 006de3dc to 006de3e3 has its CatchHandler @ 006de5ac */
        (**(code **)(**(long **)(param_2 + 0x110) + 0x38))
                  (&local_40,*(long **)(param_2 + 0x110),param_2 + 0x20,param_2 + 0x10,lVar7,
                   param_2 + 0x78);
        plVar1 = local_38;
        lVar7 = local_40;
        local_40 = 0;
        local_38 = (long *)0x0;
        if (lVar7 != 0) {
          *(undefined1 *)(lVar7 + 8) = 1;
        }
        plVar8 = *(long **)(param_2 + 0xc0);
        *(long *)(param_2 + 0xb8) = lVar7;
        *(long **)(param_2 + 0xc0) = plVar1;
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 1;
          do {
            lVar7 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_38 != (long *)0x0) {
          plVar1 = local_38 + 1;
          do {
            lVar7 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*local_38 + 0x10))(local_38);
            std::__shared_weak_count::__release_weak();
          }
        }
        *param_1 = *(undefined8 *)(param_2 + 0xb8);
        lVar7 = *(long *)(param_2 + 0xc0);
        param_1[1] = lVar7;
        if (lVar7 != 0) {
          plVar1 = (long *)(lVar7 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_2 + 200));
  return;
}


