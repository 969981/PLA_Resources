/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0092fa20; name: FUN_0092fa20
 */


void FUN_0092fa20(long param_1,long *param_2,undefined4 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  long *plVar6;
  long *local_58;
  long *local_50;
  long *local_48;
  
  plVar6 = *(long **)(param_1 + 0x70);
  if (plVar6 == (long *)0x0) {
    FUN_0092f04c(param_1,param_3,0);
  }
  else {
    plVar1 = plVar6 + 10;
    do {
      cVar5 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    FUN_0092f04c(param_1,param_3,0);
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar5 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  plVar6 = *(long **)(param_1 + 0x70);
  local_48 = plVar6;
  if (plVar6 == (long *)0x0) {
    cVar5 = FUN_0092fc40(&local_48);
  }
  else {
    plVar1 = plVar6 + 10;
    do {
      cVar5 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    cVar5 = FUN_0092fc40(&local_48);
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 10;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (cVar5 == '\x02') {
    param_2 = (long *)*param_2;
    local_50 = param_2;
    if (param_2 == (long *)0x0) {
      FUN_0092fcc8(param_1,&local_50,param_3,param_4);
      return;
    }
    plVar6 = param_2 + 10;
    do {
      cVar5 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    FUN_0092fcc8(param_1,&local_50,param_3,param_4);
    if (param_2 == (long *)0x0) {
      return;
    }
    plVar6 = param_2 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar5 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  else {
    param_2 = (long *)*param_2;
    local_58 = param_2;
    if (param_2 == (long *)0x0) {
      FUN_0092f880(param_1,&local_58,param_3,param_4);
      return;
    }
    plVar6 = param_2 + 10;
    do {
      cVar5 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    FUN_0092f880(param_1,&local_58,param_3,param_4);
    if (param_2 == (long *)0x0) {
      return;
    }
    plVar6 = param_2 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar5 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0092fbec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x10))(param_2);
    return;
  }
  return;
}


