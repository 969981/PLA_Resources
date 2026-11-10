/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002a0d44; name: FUN_002a0d44
 */


void FUN_002a0d44(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = (long)&PTR_LAB_0414ed68;
  FUN_00782da0();
  (**(code **)(*(long *)param_1[0x25] + 0x18))
            ((long *)param_1[0x25],param_1[0x12],param_1[0x26],0x10);
  if (*(char *)((long)param_1 + 0x149) != '\0') {
    if ((*(byte *)(param_1 + 0x21) & 1) != 0) {
      (**(code **)(*(long *)param_1[0x24] + 0x18))
                ((long *)param_1[0x24],param_1[0x23],param_1[0x21] & 0xfffffffffffffffe,1);
    }
    if ((*(byte *)(param_1 + 0x1d) & 1) != 0) {
      (**(code **)(*(long *)param_1[0x20] + 0x18))
                ((long *)param_1[0x20],param_1[0x1f],param_1[0x1d] & 0xfffffffffffffffe,1);
    }
    plVar5 = (long *)param_1[0x1b];
    param_1[0x19] = (long)(PTR_DAT_043730c8 + 0x10);
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
    *(undefined1 *)((long)param_1 + 0x149) = 0;
  }
  plVar5 = (long *)param_1[0x28];
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


