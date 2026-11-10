/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0300ff98; name: FUN_0300ff98
 */


void FUN_0300ff98(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  if (param_2 != 0) {
    FUN_032d645c(param_2);
  }
  plVar6 = (long *)(param_1 + 0x50);
  if (((*plVar6 != 0) && (plVar2 = (long *)(*plVar6 + (long)plVar6), plVar2 != (long *)0x0)) &&
     (plVar2[1] != 0)) {
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
  if (param_2 != 0) {
    lVar5 = param_2 - (long)plVar6;
  }
  *plVar6 = lVar5;
  return;
}


