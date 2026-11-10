/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fa2744; name: FUN_02fa2744
 */


void FUN_02fa2744(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)(param_1 + 0x30);
  plVar1 = (long *)0x0;
  if (*plVar4 != 0) {
    plVar1 = (long *)(*plVar4 + (long)plVar4);
  }
  lVar5 = 0;
  if (param_2 != 0) {
    lVar5 = param_2 - (long)plVar4;
  }
  *plVar4 = lVar5;
  if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
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
  if ((plVar1 != (long *)0x0) && (plVar1[1] != 0)) {
    plVar4 = plVar1 + 2;
    do {
      lVar5 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02fa27b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))();
      return;
    }
  }
  return;
}


