/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01299078; name: FUN_01299078
 */


void FUN_01299078(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  long *local_28;
  
  local_38 = (long *)0x0;
  local_50 = (long *)&DAT_e2c06acab97c29c2;
  pcStack_48 = "CommonOptionBar";
  local_40 = 0xf;
  uVar6 = FUN_00d6adf4(param_1 + 0x180,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  FUN_00d37c90(&local_50,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb0),0);
  plVar9 = (long *)local_50[0xd];
  if (plVar9 != (long *)0x0) {
    plVar7 = plVar9 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (local_50 != (long *)0x0) {
    lVar8 = local_50[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_50 + 0x20))();
      plVar7 = *(long **)(param_1 + 0x2c8);
      goto joined_r0x01299134;
    }
  }
  plVar7 = *(long **)(param_1 + 0x2c8);
joined_r0x01299134:
  if (plVar7 != (long *)0x0) {
    plVar10 = plVar7 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar10 = (long *)plVar7[0x38];
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar2 = plVar7 + 10;
  do {
    iVar3 = (int)*plVar2 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = iVar3;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar3 == 0) {
    (**(code **)(*plVar7 + 0x10))();
  }
  FUN_02814e04(uVar6);
  local_50 = (long *)0xb77176f893a1b9de;
  FUN_02c2e7d0(plVar9,&local_50,plVar10);
  if (plVar10 != (long *)0x0) {
    plVar7 = plVar10 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_28 = plVar10;
  FUN_02814858(uVar6,0,1,&local_28);
  if (local_28 != (long *)0x0) {
    plVar7 = local_28 + 10;
    do {
      iVar3 = (int)*plVar7 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  FUN_02814a44(uVar6,1);
  if (plVar10 != (long *)0x0) {
    plVar7 = plVar10 + 10;
    do {
      iVar3 = (int)*plVar7 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  if (plVar9 != (long *)0x0) {
    plVar7 = plVar9 + 10;
    do {
      iVar3 = (int)*plVar7 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  return;
}


