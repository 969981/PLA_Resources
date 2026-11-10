/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006e2064; name: FUN_006e2064
 */


void FUN_006e2064(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = (long)&PTR_LAB_0419cf20;
  FUN_00782da0();
  (**(code **)(*(long *)param_1[0x44] + 0x18))
            ((long *)param_1[0x44],param_1[0x12],param_1[0x45],0x10);
  if (*(char *)((long)param_1 + 0x241) != '\0') {
    FUN_006e18cc(param_1 + 0x1a);
    *(undefined1 *)((long)param_1 + 0x241) = 0;
  }
  plVar5 = (long *)param_1[0x47];
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
  plVar5 = (long *)param_1[0x16];
  *param_1 = (long)(PTR_DAT_04373130 + 0x10);
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
      FUN_00784118(param_1);
      return;
    }
  }
  FUN_00784118(param_1);
  return;
}


