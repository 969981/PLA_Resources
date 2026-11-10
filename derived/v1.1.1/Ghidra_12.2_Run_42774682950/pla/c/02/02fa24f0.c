/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fa24f0; name: FUN_02fa24f0
 */


void FUN_02fa24f0(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_1 + 0x30);
  if ((*plVar6 != 0) && (plVar2 = (long *)(*plVar6 + (long)plVar6), plVar2 != (long *)0x0)) {
    if (plVar2[1] != 0) {
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
    *plVar6 = 0;
  }
  return;
}


