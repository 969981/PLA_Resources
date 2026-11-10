/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01698094; name: FUN_01698094
 */


void FUN_01698094(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_04224370;
  param_1[9] = &PTR_LAB_042243a8;
  plVar5 = (long *)param_1[0x1d];
  if (plVar5 == (long *)0x0) {
LAB_016980d8:
    plVar5 = (long *)param_1[0x1c];
    if (plVar5 == (long *)0x0) goto LAB_016980f8;
LAB_016980e0:
    plVar1 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 != 0) goto LAB_016980f8;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)param_1[0x1b];
    if (plVar5 != (long *)0x0) goto LAB_01698100;
LAB_01698118:
    plVar5 = (long *)param_1[0x1a];
  }
  else {
    plVar1 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 != 0) goto LAB_016980d8;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)param_1[0x1c];
    if (plVar5 != (long *)0x0) goto LAB_016980e0;
LAB_016980f8:
    plVar5 = (long *)param_1[0x1b];
    if (plVar5 == (long *)0x0) goto LAB_01698118;
LAB_01698100:
    plVar1 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 != 0) goto LAB_01698118;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)param_1[0x1a];
  }
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
      plVar5 = (long *)param_1[0x19];
      goto joined_r0x016981c8;
    }
  }
  plVar5 = (long *)param_1[0x19];
joined_r0x016981c8:
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  FUN_01699b58(param_1 + 0x12);
  FUN_01699cd4(param_1 + 0xb);
  return;
}


