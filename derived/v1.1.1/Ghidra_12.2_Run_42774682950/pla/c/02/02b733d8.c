/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b733d8; name: FUN_02b733d8
 */


void FUN_02b733d8(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *local_30;
  long *local_28;
  
  plVar5 = param_1 + 0x17;
  if ((char)*plVar5 == '\0') {
    return;
  }
  FUN_02b3365c(&local_28,*param_2,plVar5);
  if (local_28 != (long *)0x0) {
    plVar1 = param_1 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    local_30 = param_1;
    FUN_02b2ae3c(local_28,&local_30);
    if (local_30 != (long *)0x0) {
      plVar1 = local_30 + 10;
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
        (**(code **)(*local_30 + 0x10))();
        cVar2 = (char)*plVar5;
        goto joined_r0x02b73454;
      }
    }
  }
  cVar2 = (char)*plVar5;
joined_r0x02b73454:
  if (cVar2 != '\0') {
    if ((long *)param_1[0x1b] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x1b] + 0x20))();
    }
    *(char *)plVar5 = '\0';
  }
  if (local_28 != (long *)0x0) {
    plVar5 = local_28 + 10;
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
      (**(code **)(*local_28 + 0x10))();
    }
  }
  return;
}


