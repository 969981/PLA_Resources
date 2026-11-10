/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011cc710; name: FUN_011cc710
 */


void FUN_011cc710(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  if ((long *)param_1[0x2d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2d] + 0x20))();
  }
  if ((long *)param_1[0x26] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x26] + 0x20))();
  }
  if ((long *)param_1[0x22] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x22] + 0x20))();
  }
  if ((long *)param_1[0x1e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1e] + 0x20))();
  }
  if ((long *)param_1[0x1a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1a] + 0x20))();
  }
  if ((long *)param_1[0x16] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x16] + 0x20))();
  }
  if ((long *)param_1[0x12] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x12] + 0x20))();
  }
  if ((long *)param_1[0xe] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xe] + 0x20))();
  }
  if ((long *)param_1[10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[10] + 0x20))();
  }
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 0x20))();
  }
  plVar5 = (long *)param_1[2];
  if (plVar5 == (long *)0x0) {
LAB_011cc808:
    plVar5 = (long *)param_1[1];
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
    if (iVar4 != 0) goto LAB_011cc808;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)param_1[1];
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
      param_1 = (long *)*param_1;
      goto joined_r0x011cc87c;
    }
  }
  param_1 = (long *)*param_1;
joined_r0x011cc87c:
  if (param_1 != (long *)0x0) {
    plVar5 = param_1 + 10;
    do {
      iVar4 = (int)*plVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *(int *)plVar5 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x011cc894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}


