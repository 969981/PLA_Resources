/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ff99b8; name: FUN_02ff99b8
 */


void FUN_02ff99b8(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  plVar2 = (long *)(*param_1 + (long)param_1);
  if ((*param_1 != 0 && plVar2 != (long *)0x0) && (plVar2[1] != 0)) {
    plVar1 = plVar2 + 2;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))();
    }
  }
  lVar5 = 0;
  if (*param_2 != 0) {
    lVar5 = (long)param_2 + (*param_2 - (long)param_1);
  }
  *param_1 = lVar5;
  *param_2 = 0;
  return;
}


