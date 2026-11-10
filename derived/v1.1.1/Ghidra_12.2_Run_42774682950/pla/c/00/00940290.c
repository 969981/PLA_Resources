/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00940290; name: FUN_00940290
 */


void FUN_00940290(long param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  
  lVar9 = *param_3;
  if (lVar9 != 0) {
    piVar2 = (int *)(lVar9 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar9;
  if (plVar7 == (long *)0x0) {
LAB_009402f4:
    lVar9 = param_3[1];
  }
  else {
    plVar3 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 != 0) goto LAB_009402f4;
    (**(code **)(*plVar7 + 0x10))();
    lVar9 = param_3[1];
  }
  if (lVar9 != 0) {
    piVar2 = (int *)(lVar9 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x60);
  *(long *)(param_1 + 0x60) = lVar9;
  if (plVar7 == (long *)0x0) {
LAB_00940334:
    lVar9 = param_3[2];
  }
  else {
    plVar3 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 != 0) goto LAB_00940334;
    (**(code **)(*plVar7 + 0x10))();
    lVar9 = param_3[2];
  }
  if (lVar9 != 0) {
    piVar2 = (int *)(lVar9 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x68);
  *(long *)(param_1 + 0x68) = lVar9;
  if (plVar7 != (long *)0x0) {
    plVar3 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
      lVar9 = param_3[3];
      goto joined_r0x00940378;
    }
  }
  lVar9 = param_3[3];
joined_r0x00940378:
  if (lVar9 != 0) {
    FUN_02a439f4(*(undefined8 *)(lVar9 + 0x58));
  }
  plVar7 = *(long **)(param_1 + 0x70);
  *(long *)(param_1 + 0x70) = lVar9;
  if ((plVar7 == (long *)0x0) || (uVar8 = FUN_02a43a5c(plVar7[0xb]), (uVar8 & 1) == 0)) {
    lVar9 = param_3[4];
  }
  else {
    (**(code **)(*plVar7 + 0x20))(plVar7);
    lVar9 = param_3[4];
  }
  if (lVar9 != 0) {
    piVar2 = (int *)(lVar9 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x78);
  *(long *)(param_1 + 0x78) = lVar9;
  if (plVar7 != (long *)0x0) {
    plVar3 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  FUN_009421cc(&local_80);
  plVar7 = local_58;
  local_80 = *(undefined8 *)(param_1 + 8);
  local_78 = *(undefined8 *)(param_1 + 0xe0);
  local_70 = *(undefined8 *)(param_1 + 0x58);
  local_68 = *(undefined8 *)(param_1 + 0x60);
  lVar9 = *(long *)(param_1 + 0x68);
  if (lVar9 != 0) {
    piVar2 = (int *)(lVar9 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_58 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    plVar3 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x70);
  local_58 = (long *)lVar9;
  if (plVar7 != (long *)0x0) {
    FUN_02a439f4(*(undefined8 *)((long)plVar7 + 0x58));
  }
  plVar3 = local_50;
  if ((local_50 == (long *)0x0) ||
     (plVar1 = local_50 + 0xb, local_50 = plVar7, uVar8 = FUN_02a43a5c(*plVar1), plVar7 = local_50,
     (uVar8 & 1) == 0)) {
    local_50 = plVar7;
    lVar9 = *(long *)(param_1 + 0x78);
    plVar7 = local_48;
  }
  else {
    (**(code **)(*plVar3 + 0x20))(plVar3);
    lVar9 = *(long *)(param_1 + 0x78);
    plVar7 = local_48;
  }
  if (lVar9 != 0) {
    piVar2 = (int *)(lVar9 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_48 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    plVar3 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  local_60 = param_3[5];
  local_48 = (long *)lVar9;
  FUN_009424e0(*(undefined8 *)(param_1 + 0x80),*param_2,&local_80);
  FUN_009421d8(&local_80);
  local_80 = *(undefined8 *)(param_1 + 0xe0);
  FUN_009470d0(*(undefined8 *)(param_1 + 0xa0),&local_80);
  return;
}


