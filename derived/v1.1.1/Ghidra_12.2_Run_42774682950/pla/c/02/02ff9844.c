/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ff9844; name: FUN_02ff9844
 */


void FUN_02ff9844(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  
  *param_1 = 0;
  lVar3 = 0;
  if (*param_2 != 0) {
    lVar3 = (long)param_2 + (*param_2 - (long)param_1);
  }
  lVar2 = lVar3 + (long)param_1;
  *param_1 = lVar3;
  if ((lVar3 != 0 && lVar2 != 0) && (*(long *)(lVar2 + 8) != 0)) {
    plVar1 = (long *)(lVar2 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  return;
}


