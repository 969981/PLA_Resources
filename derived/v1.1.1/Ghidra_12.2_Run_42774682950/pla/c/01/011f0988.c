/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011f0988; name: FUN_011f0988
 */


void FUN_011f0988(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *local_48;
  undefined8 uStack_40;
  undefined2 local_38;
  undefined1 local_36;
  
  plVar8 = *(long **)(param_1 + 0x2c8);
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_00d42690(param_1,1,1);
  FUN_00d428b0(param_1,0);
  uVar6 = FUN_00d40878(param_1);
  FUN_00d37c90(&local_48,uVar6,0);
  plVar9 = (long *)local_48[0xd];
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (local_48 != (long *)0x0) {
    lVar7 = local_48[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
      plVar10 = (long *)plVar8[0x38];
      goto joined_r0x011f0a34;
    }
  }
  plVar10 = (long *)plVar8[0x38];
joined_r0x011f0a34:
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
  local_48 = (long *)0x8b3ba6f82b48a00f;
  if (*(int *)(param_1 + 0x6f8) != 0) {
    local_48 = (long *)0x8b3ba5f82b489e5c;
  }
  FUN_02c2e7d0(plVar9,&local_48,plVar10);
  local_36 = 0;
  uStack_40 = 0;
  local_38 = 0x101;
  local_48 = plVar10;
  FUN_00d67ea8(param_1,&local_48);
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 10;
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
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      iVar3 = (int)*plVar10 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  plVar9 = plVar8 + 10;
  do {
    iVar3 = (int)*plVar9 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *(int *)plVar9 = iVar3;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar3 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return;
}


