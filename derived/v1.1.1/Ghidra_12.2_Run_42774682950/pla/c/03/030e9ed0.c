/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030e9ed0; name: FUN_030e9ed0
 */


void FUN_030e9ed0(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if (param_2 == 0) {
    lVar5 = *(long *)(param_1 + 0x8f0);
    if ((lVar5 != 0) && (*(long *)(lVar5 + 8) != 0)) {
      plVar4 = (long *)(lVar5 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar4 = *(long **)(param_1 + 0x8e8);
    *(long *)(param_1 + 0x8e8) = lVar5;
    if (plVar4 == (long *)0x0) {
      return;
    }
    if (plVar4[1] == 0) {
      return;
    }
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (*(long *)(param_2 + 8) != 0) {
      plVar4 = (long *)(param_2 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar4 = *(long **)(param_1 + 0x8e8);
    *(long *)(param_1 + 0x8e8) = param_2;
    if (plVar4 == (long *)0x0) {
      return;
    }
    if (plVar4[1] == 0) {
      return;
    }
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (lVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x030e9f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x18))(plVar4);
    return;
  }
  return;
}


