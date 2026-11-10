/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c2574; name: FUN_031c2574
 */


void FUN_031c2574(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *local_48;
  
  lVar8 = (long)DAT_0444b53c;
  lVar7 = tpidr_el0;
  lVar6 = *(long *)(lVar7 + 0x38d490);
  if (lVar6 == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar6;
  }
  if (*(long *)(lVar6 + lVar8 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  plVar1 = param_1 + 4;
  do {
    if ((char)*plVar1 != '\0') goto LAB_031c2730;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(char *)plVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar6 = *(long *)(lVar7 + 0x38d490);
  if (lVar6 == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar6;
  }
  plVar4 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
  lVar6 = (**(code **)(*plVar4 + 0x10))(plVar4,0x60,0);
  FUN_031be8a4();
  plVar4 = (long *)param_1[6];
  param_1[6] = lVar6;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar5 = plVar4 + 2;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  (**(code **)(*param_1 + 0x20))(&local_48,param_1,param_2);
  plVar4 = local_48;
  local_48 = (long *)0x0;
  plVar5 = (long *)param_1[5];
  param_1[5] = (long)plVar4;
  if (plVar5 != (long *)0x0) {
    if (plVar5[1] != 0) {
      plVar4 = plVar5 + 2;
      do {
        lVar6 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((lVar6 + -1 == 0) && ((**(code **)(*plVar5 + 0x18))(), local_48 != (long *)0x0)) &&
         (local_48[1] != 0)) {
        plVar4 = local_48 + 2;
        do {
          lVar6 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 + -1 == 0) {
          (**(code **)(*local_48 + 0x18))();
        }
      }
    }
    plVar4 = (long *)param_1[5];
  }
  if (plVar4 == (long *)0x0) {
    lVar7 = param_1[6];
    *(undefined8 *)(lVar7 + 0x50) = 0xffffffff00000000;
    *(undefined1 *)(lVar7 + 0x5c) = 5;
  }
  else {
    FUN_031bdbe8(plVar4,param_4);
    FUN_031be2e8(param_1[5]);
    lVar8 = (long)DAT_0444b53c;
    lVar6 = *(long *)(lVar7 + 0x38d490);
    if (lVar6 == 0) {
      lVar6 = FUN_0333d16c(0,1);
      *(long *)(lVar7 + 0x38d490) = lVar6;
    }
    if (*(long *)(lVar6 + lVar8 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    FUN_031bdbfc(param_2,param_1[5],param_1[6]);
    FUN_031be2ec(param_1[6]);
  }
  while ((char)*plVar1 == '\x01') {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(char *)plVar1 = '\x02';
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      return;
    }
  }
LAB_031c2730:
  ClearExclusiveLocal();
  return;
}


