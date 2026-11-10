/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01948c34; name: FUN_01948c34
 */


void FUN_01948c34(long *param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_2 + 0x48);
  if (lVar8 != 0) {
    piVar2 = (int *)(lVar8 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar7 = (long *)*param_1;
  *param_1 = lVar8;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  uVar3 = *(undefined4 *)(param_2 + 0x58);
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = uVar3;
  lVar8 = *(long *)(param_2 + 0x60);
  if (lVar8 != 0) {
    piVar2 = (int *)(lVar8 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar7 = (long *)param_1[0xc];
  param_1[0xc] = lVar8;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  uVar3 = *(undefined4 *)(param_2 + 0x70);
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = uVar3;
  lVar8 = *(long *)(param_2 + 0x78);
  if (lVar8 != 0) {
    piVar2 = (int *)(lVar8 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar7 = (long *)param_1[0x18];
  param_1[0x18] = lVar8;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  uVar3 = *(undefined4 *)(param_2 + 0x88);
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((long)param_1 + 0xdc) = uVar3;
  return;
}


