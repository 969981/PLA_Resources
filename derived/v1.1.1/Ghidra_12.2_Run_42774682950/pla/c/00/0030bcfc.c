/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030bcfc; name: FUN_0030bcfc
 */


long * FUN_0030bcfc(undefined8 *param_1,undefined1 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  plVar4 = (long *)param_1[8];
  plVar1 = param_1 + 9;
  plVar6 = (long *)*plVar4;
  if (plVar4 == plVar1) {
    if (plVar6 == (long *)0x0) {
      *param_2 = 1;
      return (long *)0x0;
    }
    param_1[8] = plVar6;
    plVar4 = plVar6;
    plVar6 = (long *)*plVar6;
  }
  if (plVar6 != (long *)0x0) {
    *param_2 = 0;
    param_1[8] = plVar6;
    return plVar4;
  }
  if (plVar4 != (long *)*param_1) {
    *param_2 = 0;
    return (long *)0x0;
  }
  *plVar1 = 0;
  do {
    puVar7 = (undefined8 *)*param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = plVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *puVar7 = plVar1;
  lVar5 = *plVar4;
  *param_2 = 0;
  if (lVar5 == 0) {
    return (long *)0x0;
  }
  param_1[8] = lVar5;
  return plVar4;
}


