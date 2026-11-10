/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ac8360; name: FUN_02ac8360
 */


void FUN_02ac8360(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *local_18;
  
  plVar5 = *(long **)(*param_1 + 0x80);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_18 = DAT_043ef548;
  if (DAT_043ef548 != (long *)0x0) {
    plVar1 = DAT_043ef548 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_02bb11cc(plVar5,2,0xd,&local_18);
  if (local_18 != (long *)0x0) {
    plVar1 = local_18 + 10;
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
      (**(code **)(*local_18 + 0x10))();
    }
  }
  local_18 = DAT_043ef550;
  if (DAT_043ef550 != (long *)0x0) {
    plVar1 = DAT_043ef550 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_02bb11cc(plVar5,2,0xc,&local_18);
  if (local_18 != (long *)0x0) {
    plVar1 = local_18 + 10;
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
      (**(code **)(*local_18 + 0x10))();
    }
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return;
}


