/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006d8fbc; name: FUN_006d8fbc
 */


void FUN_006d8fbc(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long local_30;
  long *local_28;
  
  if (*(long *)(param_2 + 8) == 0) {
                    /* try { // try from 006d9000 to 006d9003 has its CatchHandler @ 006d90d0 */
    FUN_003f23f0();
    FUN_00784290(&local_30,*(undefined8 *)(param_2 + 0x18));
    plVar1 = local_28;
    lVar4 = local_30;
    local_30 = 0;
    local_28 = (long *)0x0;
    if (lVar4 != 0) {
      *(undefined1 *)(lVar4 + 8) = 1;
    }
    plVar5 = *(long **)(param_2 + 0x10);
    *(long *)(param_2 + 8) = lVar4;
    *(long **)(param_2 + 0x10) = plVar1;
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
      }
    }
    if (local_28 != (long *)0x0) {
      plVar1 = local_28 + 1;
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
        (**(code **)(*local_28 + 0x10))(local_28);
        std::__shared_weak_count::__release_weak();
      }
    }
    *param_1 = *(long *)(param_2 + 8);
    lVar4 = *(long *)(param_2 + 0x10);
    param_1[1] = lVar4;
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 8);
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
    *param_1 = *(long *)(param_2 + 8);
    lVar4 = *(long *)(param_2 + 0x10);
    param_1[1] = lVar4;
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 8);
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
  return;
}


