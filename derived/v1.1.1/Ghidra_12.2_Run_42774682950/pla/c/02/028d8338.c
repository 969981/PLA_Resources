/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028d8338; name: FUN_028d8338
 */


void FUN_028d8338(long param_1,int *param_2)

{
  int *piVar1;
  long *plVar2;
  uint *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long local_38;
  undefined1 auStack_28 [8];
  
  if (*(ushort *)((long)param_2 - (long)*param_2) < 5) {
    local_38 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2];
    local_38 = 0;
    if (uVar9 != 0) {
      puVar3 = (uint *)((long)param_2 + uVar9);
      local_38 = (long)puVar3 + (ulong)*puVar3;
    }
  }
  lVar7 = FUN_028d7a80(auStack_28,*(undefined8 *)(param_1 + 0x78),&local_38);
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar8 = *(long **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 10;
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x70) = lVar7;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 7) {
    local_38 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3];
    local_38 = 0;
    if (uVar9 != 0) {
      puVar3 = (uint *)((long)param_2 + uVar9);
      local_38 = (long)puVar3 + (ulong)*puVar3;
    }
  }
  lVar7 = FUN_028d7a80(auStack_28,*(undefined8 *)(param_1 + 0xc0),&local_38);
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar8 = *(long **)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 10;
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  *(long *)(param_1 + 0xb8) = lVar7;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 9) {
    local_38 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4];
    local_38 = 0;
    if (uVar9 != 0) {
      puVar3 = (uint *)((long)param_2 + uVar9);
      local_38 = (long)puVar3 + (ulong)*puVar3;
    }
  }
  lVar7 = FUN_028d7a80(auStack_28,*(undefined8 *)(param_1 + 0x108),&local_38);
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar8 = *(long **)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = 0;
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 10;
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x100) = lVar7;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0xb) {
    local_38 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[5];
    local_38 = 0;
    if (uVar9 != 0) {
      puVar3 = (uint *)((long)param_2 + uVar9);
      local_38 = (long)puVar3 + (ulong)*puVar3;
    }
  }
  lVar7 = FUN_028d7a80(auStack_28,*(undefined8 *)(param_1 + 0x150),&local_38);
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar8 = *(long **)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x148) = 0;
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 10;
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x148) = lVar7;
  return;
}


