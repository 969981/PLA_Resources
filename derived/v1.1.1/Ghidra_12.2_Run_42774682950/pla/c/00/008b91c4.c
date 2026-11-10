/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008b91c4; name: FUN_008b91c4
 */


void FUN_008b91c4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  
  plVar8 = *(long **)(**(long **)(param_1 + 0x70) + 0x30);
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 10;
    do {
      cVar5 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar9 = (long *)plVar8[0x21];
  if (plVar9 == (long *)0x0) {
    iVar6 = FUN_00972e84(0);
  }
  else {
    plVar1 = plVar9 + 10;
    do {
      cVar5 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    iVar6 = FUN_00972e84(plVar9);
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar5 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  plVar9 = plVar8 + 10;
  do {
    iVar4 = (int)*plVar9 + -1;
    cVar5 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *(int *)plVar9 = iVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  if (iVar6 == 1) {
    plVar8 = *(long **)(**(long **)(param_1 + 0x70) + 0x30);
    if (plVar8 != (long *)0x0) {
      plVar9 = plVar8 + 10;
      do {
        cVar5 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *(int *)plVar9 = (int)*plVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar9 = (long *)plVar8[0x21];
    if (plVar9 == (long *)0x0) {
      uVar7 = FUN_00972e8c(0);
      uVar7 = uVar7 & 0xffffffff;
    }
    else {
      plVar1 = plVar9 + 10;
      do {
        cVar5 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      uVar7 = FUN_00972e8c(plVar9);
      uVar7 = uVar7 & 0xffffffff;
      do {
        iVar6 = (int)*plVar1 + -1;
        cVar5 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar6;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    plVar9 = plVar8 + 10;
    do {
      iVar6 = (int)*plVar9 + -1;
      cVar5 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar6;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    FUN_00927320(*(undefined8 *)(**(long **)(param_1 + 0x70) + 0xf0),
                 uVar7 & 0xffff |
                 (ulong)*(byte *)(*(long *)(**(long **)(param_1 + 0x70) + 0x100) + 0x71) << 0x10);
    return;
  }
  if (iVar6 != 2) {
    return;
  }
  plVar8 = *(long **)(**(long **)(param_1 + 0x70) + 0x30);
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 10;
    do {
      cVar5 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar9 = (long *)plVar8[0x21];
  if (plVar9 == (long *)0x0) {
    cVar5 = FUN_00972e94(0);
  }
  else {
    plVar1 = plVar9 + 10;
    do {
      cVar5 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    cVar5 = FUN_00972e94(plVar9);
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  plVar9 = plVar8 + 10;
  do {
    iVar6 = (int)*plVar9 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *(int *)plVar9 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  if (cVar5 == '\x1f') {
    return;
  }
  FUN_00927310(*(undefined8 *)(**(long **)(param_1 + 0x70) + 0xf0),cVar5);
  return;
}


