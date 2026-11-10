/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00c1d7a8; name: FUN_00c1d7a8
 */


void FUN_00c1d7a8(int *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  int *piVar8;
  long *plVar9;
  long *local_38;
  
  if (*(char *)(param_2 + 0x58) != '\0') {
    (**(code **)(**(long **)(param_2 + 0x10) + 0x50))
              (param_1,*(long **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x38),param_3);
    if (*param_1 == 3) {
      return;
    }
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  lVar6 = *(long *)(param_2 + 0x18);
  plVar9 = *(long **)(lVar6 + 0x10);
  if (plVar9 == (long *)0x0) {
    local_38 = *(long **)(param_2 + 0x10);
    if (local_38 != (long *)0x0) {
      plVar9 = local_38 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *(int *)plVar9 = (int)*plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_00cdb8e4(param_1,lVar6,&local_38,param_3);
    if (local_38 != (long *)0x0) {
      plVar9 = local_38 + 10;
      do {
        iVar5 = (int)*plVar9 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *(int *)plVar9 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
    if (*param_1 != 3) {
      return;
    }
    plVar9 = *(long **)(*(long *)(param_2 + 0x18) + 0x10);
    if (plVar9 == (long *)0x0) {
      piVar8 = (int *)FUN_00cd4374();
      *param_1 = *piVar8;
      return;
    }
  }
  plVar1 = plVar9 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  (**(code **)(*plVar9 + 0x50))(param_1,plVar9,*(undefined8 *)(param_2 + 0x38),param_3);
  if (*param_1 != 3) {
    plVar7 = *(long **)(*(long *)(param_2 + 0x18) + 0x10);
    *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x10) = 0;
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 10;
      do {
        iVar5 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
  }
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
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  return;
}


