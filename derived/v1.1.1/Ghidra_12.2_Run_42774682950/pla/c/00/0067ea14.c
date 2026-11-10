/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0067ea14; name: FUN_0067ea14
 */


void FUN_0067ea14(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  *param_1 = (long)&PTR_LAB_04197b00;
  FUN_00782da0();
  (**(code **)(*(long *)param_1[0x23] + 0x18))
            ((long *)param_1[0x23],param_1[0x12],param_1[0x24],0x10);
  if (*(char *)((long)param_1 + 0x139) != '\0') {
    lVar6 = param_1[0x1f];
    if (lVar6 != 0) {
      lVar4 = param_1[0x20];
      if (lVar4 == lVar6) {
        lVar4 = lVar6;
      }
      else {
        do {
          lVar4 = lVar4 + -8;
          FUN_0064ef40(lVar4);
        } while (lVar6 != lVar4);
        lVar4 = param_1[0x1f];
      }
      param_1[0x20] = lVar6;
      (**(code **)(*(long *)param_1[0x22] + 0x18))
                ((long *)param_1[0x22],lVar4,param_1[0x21] - lVar4,8);
    }
    lVar6 = param_1[0x1b];
    if (lVar6 != 0) {
      lVar4 = param_1[0x1c];
      if (lVar4 == lVar6) {
        lVar4 = lVar6;
      }
      else {
        do {
          lVar4 = lVar4 + -8;
          FUN_00680b34(lVar4);
        } while (lVar6 != lVar4);
        lVar4 = param_1[0x1b];
      }
      param_1[0x1c] = lVar6;
      (**(code **)(*(long *)param_1[0x1e] + 0x18))
                ((long *)param_1[0x1e],lVar4,param_1[0x1d] - lVar4,8);
    }
    plVar5 = (long *)param_1[0x1a];
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        std::__shared_weak_count::__release_weak();
      }
    }
    *(undefined1 *)((long)param_1 + 0x139) = 0;
  }
  plVar5 = (long *)param_1[0x26];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar5 = (long *)param_1[0x16];
  *param_1 = (long)(PTR_DAT_04373130 + 0x10);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
      FUN_00784118(param_1);
      return;
    }
  }
  FUN_00784118(param_1);
  return;
}


