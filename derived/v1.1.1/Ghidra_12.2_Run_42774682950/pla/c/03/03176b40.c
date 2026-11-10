/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03176b40; name: FUN_03176b40
 */


void FUN_03176b40(long param_1,int *param_2,long *param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *local_38;
  int local_30 [2];
  int local_28 [2];
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 < 1) {
    lVar4 = 0xffffffff;
  }
  else {
    lVar4 = 0;
    plVar5 = (long *)(*(long *)(param_1 + 0x38) + 0x10);
    do {
      if ((*(int *)((long)plVar5 + 0xc) == (int)param_3[3]) && (*plVar5 != 0)) goto LAB_03176ba8;
      lVar4 = lVar4 + 1;
      plVar5 = plVar5 + 0x1e;
    } while (iVar1 != lVar4);
    lVar4 = 0xffffffff;
  }
LAB_03176ba8:
  local_28[0] = (int)lVar4;
  if (iVar1 < 1) {
    lVar4 = 0xffffffff;
  }
  else {
    lVar4 = 0;
    plVar5 = (long *)(*(long *)(param_1 + 0x38) + 0x10);
    do {
      if ((*(int *)((long)plVar5 + 0xc) == *(int *)((long)param_3 + 0x1c)) && (*plVar5 != 0))
      goto LAB_03176bf8;
      lVar4 = lVar4 + 1;
      plVar5 = plVar5 + 0x1e;
    } while (iVar1 != lVar4);
    lVar4 = 0xffffffff;
  }
LAB_03176bf8:
  local_30[0] = (int)lVar4;
  if (((local_28[0] != -1) && (local_30[0] != -1)) &&
     ((local_28[0] == *param_2 || (local_30[0] == *param_2)))) {
    lVar4 = *(long *)(param_1 + 0x38);
    if ((param_3 != (long *)0x0) && (param_3[1] != 0)) {
      plVar5 = param_3 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_38 = param_3;
    FUN_03178490(lVar4 + (long)local_28[0] * 0xf0 + 0xc0,local_30,&local_38);
    if ((local_38 != (long *)0x0) && (local_38[1] != 0)) {
      plVar5 = local_38 + 2;
      do {
        lVar4 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 + -1 == 0) {
        (**(code **)(*local_38 + 0x18))();
      }
    }
    lVar4 = *(long *)(param_1 + 0x38);
    if ((param_3 != (long *)0x0) && (param_3[1] != 0)) {
      plVar5 = param_3 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_38 = param_3;
    FUN_03178490(lVar4 + (long)local_30[0] * 0xf0 + 0xc0,local_28,&local_38);
    if ((local_38 != (long *)0x0) && (local_38[1] != 0)) {
      plVar5 = local_38 + 2;
      do {
        lVar4 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 + -1 == 0) {
        (**(code **)(*local_38 + 0x18))();
      }
    }
  }
  return;
}


