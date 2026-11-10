/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0281595c; name: FUN_0281595c
 */


void FUN_0281595c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  if (*(long **)(param_1 + 0xe8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xe8) + 0x20))();
  }
  plVar5 = *(long **)(param_1 + 200);
  if (plVar5 == (long *)0x0) {
LAB_028159a0:
    plVar5 = *(long **)(param_1 + 0xb8);
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
    if (iVar4 != 0) goto LAB_028159a0;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = *(long **)(param_1 + 0xb8);
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  plVar5 = *(long **)(param_1 + 0x98);
  if (plVar5 == (long *)0x0) {
LAB_028159d4:
    plVar5 = *(long **)(param_1 + 0x88);
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
    if (iVar4 != 0) goto LAB_028159d4;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = *(long **)(param_1 + 0x88);
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  plVar5 = *(long **)(param_1 + 0x68);
  if (plVar5 == (long *)0x0) {
LAB_02815a08:
    plVar5 = *(long **)(param_1 + 0x58);
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
    if (iVar4 != 0) goto LAB_02815a08;
    (**(code **)(*plVar5 + 0x10))();
    plVar5 = *(long **)(param_1 + 0x58);
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  plVar5 = *(long **)(param_1 + 0x38);
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
      plVar5 = *(long **)(param_1 + 0x28);
      goto joined_r0x02815a40;
    }
  }
  plVar5 = *(long **)(param_1 + 0x28);
joined_r0x02815a40:
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  plVar5 = *(long **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x02815aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}


