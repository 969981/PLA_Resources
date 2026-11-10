/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016725bc; name: FUN_016725bc
 */


void FUN_016725bc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  
  *param_1 = &PTR_FUN_042205d0;
  param_1[9] = &PTR_LAB_04220608;
  plVar5 = (long *)param_1[0x26];
  if (plVar5 == (long *)0x0) {
LAB_01672600:
    plVar5 = (long *)param_1[0x25];
    if (plVar5 == (long *)0x0) goto LAB_01672620;
LAB_01672608:
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
    if (iVar4 != 0) goto LAB_01672620;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)param_1[0x24];
    if (plVar5 != (long *)0x0) goto LAB_01672628;
LAB_01672634:
    plVar5 = (long *)param_1[0x23];
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
    if (iVar4 != 0) goto LAB_01672600;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)param_1[0x25];
    if (plVar5 != (long *)0x0) goto LAB_01672608;
LAB_01672620:
    plVar5 = (long *)param_1[0x24];
    if (plVar5 == (long *)0x0) goto LAB_01672634;
LAB_01672628:
    uVar6 = FUN_02a43a5c(plVar5[0xb]);
    if ((uVar6 & 1) == 0) goto LAB_01672634;
    (**(code **)(*plVar5 + 0x20))(plVar5);
    plVar5 = (long *)param_1[0x23];
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
      plVar5 = (long *)param_1[0x21];
      goto joined_r0x016726cc;
    }
  }
  plVar5 = (long *)param_1[0x21];
joined_r0x016726cc:
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
  FUN_0166f24c(param_1 + 0x12);
  FUN_01673c3c(param_1 + 0xb);
  return;
}


