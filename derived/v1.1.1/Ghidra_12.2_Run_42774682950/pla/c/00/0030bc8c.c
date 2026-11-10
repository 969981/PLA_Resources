/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030bc8c; name: FUN_0030bc8c
 */


long * FUN_0030bc8c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  plVar4 = (long *)param_1[8];
  plVar1 = param_1 + 9;
  plVar5 = (long *)*plVar4;
  if (plVar4 == plVar1) {
    if (plVar5 == (long *)0x0) {
      return (long *)0x0;
    }
    param_1[8] = plVar5;
    plVar4 = plVar5;
    plVar5 = (long *)*plVar5;
  }
  if (plVar5 != (long *)0x0) {
    param_1[8] = plVar5;
    return plVar4;
  }
  if (plVar4 == (long *)*param_1) {
    *plVar1 = 0;
    do {
      puVar6 = (undefined8 *)*param_1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = plVar1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *puVar6 = plVar1;
    if (*plVar4 != 0) {
      param_1[8] = *plVar4;
      return plVar4;
    }
  }
  return (long *)0x0;
}


