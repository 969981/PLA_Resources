/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00667360; name: FUN_00667360
 */


void FUN_00667360(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  
  plVar4 = (long *)FUN_0064bcb4(*param_2);
  uVar7 = *param_3;
  plVar4 = *(long **)(*plVar4 + 400);
  plVar5 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,0x200,0x10);
  plVar8 = plVar5 + 1;
  *plVar8 = 0;
  plVar9 = plVar5 + 2;
  *plVar9 = 0;
  puVar3 = PTR_DAT_043759c0;
  plVar5[4] = (long)plVar4;
  plVar4 = plVar5 + 6;
  *plVar5 = (long)(puVar3 + 0x10);
  FUN_0066e948(plVar4,param_2,uVar7,param_4,param_5);
  lVar6 = plVar5[8];
  plVar5[6] = (long)(PTR_DAT_043759c8 + 0x10);
  if ((lVar6 == 0) || (*(long *)(lVar6 + 8) == -1)) {
    if (plVar5 != (long *)0x0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = *plVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = *plVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar5[7] = (long)plVar4;
    plVar5[8] = (long)plVar5;
    if (lVar6 != 0) {
      std::__shared_weak_count::__release_weak();
    }
    do {
      lVar6 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
    FUN_00667504(param_1,plVar4,param_3);
  }
  else {
    FUN_00667504(param_1,plVar4,param_3);
    if (plVar5 == (long *)0x0) {
      return;
    }
  }
  do {
    lVar6 = *plVar8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


