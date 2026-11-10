/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0150469c; name: FUN_0150469c
 */


/* WARNING: Removing unreachable block (ram,0x0150471c) */
/* WARNING: Removing unreachable block (ram,0x01504720) */
/* WARNING: Removing unreachable block (ram,0x01504728) */
/* WARNING: Removing unreachable block (ram,0x01504730) */
/* WARNING: Removing unreachable block (ram,0x015048a8) */

void FUN_0150469c(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *local_48;
  long *local_40;
  long *local_38;
  long *local_30;
  undefined8 local_28;
  
  FUN_014fa460(&local_40,*(undefined8 *)(param_1 + 8));
  plVar8 = local_40;
  local_40 = (long *)0x0;
  lVar6 = *(long *)(param_1 + 0x600);
  *(long **)(param_1 + 0x600) = plVar8;
  if (lVar6 == 0) {
    *(undefined8 *)(param_1 + 0x618) = local_28;
    *(long **)(param_1 + 0x610) = local_30;
    *(long **)(param_1 + 0x608) = local_38;
  }
  else {
    FUN_01500820(param_1 + 0x608);
    plVar8 = local_40;
    *(undefined8 *)(param_1 + 0x618) = local_28;
    *(long **)(param_1 + 0x610) = local_30;
    *(long **)(param_1 + 0x608) = local_38;
    local_40 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      FUN_01500820(&local_38);
    }
  }
  local_38 = (long *)0x0;
  local_30 = (long *)0x0;
  local_40 = *(long **)(param_1 + 0x2c8);
  if (local_40 != (long *)0x0) {
    plVar8 = local_40 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_00d37c90(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb0),0);
  plVar8 = local_38;
  plVar7 = (long *)local_48[0xd];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_38 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  local_38 = plVar7;
  if (local_48 != (long *)0x0) {
    lVar6 = local_48[0xb];
    piVar2 = (int *)(lVar6 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
      plVar8 = *(long **)(param_1 + 0x510);
      plVar7 = local_30;
      goto joined_r0x015047bc;
    }
  }
  plVar8 = *(long **)(param_1 + 0x510);
  plVar7 = local_30;
joined_r0x015047bc:
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_30 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  local_30 = plVar8;
  FUN_014f0c30(*(undefined8 *)(param_1 + 0x600),&local_40);
  if (local_30 != (long *)0x0) {
    plVar8 = local_30 + 10;
    do {
      iVar5 = (int)*plVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  if (local_38 != (long *)0x0) {
    plVar8 = local_38 + 10;
    do {
      iVar5 = (int)*plVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  if (local_40 != (long *)0x0) {
    plVar8 = local_40 + 10;
    do {
      iVar5 = (int)*plVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  return;
}


