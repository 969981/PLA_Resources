/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00538408; name: FUN_00538408
 */


long FUN_00538408(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 0x40);
  lVar4 = *plVar1;
  do {
    if (lVar4 < 0x10000) {
      return 0;
    }
    while (*plVar1 == lVar4) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + 0x10000;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        return param_1;
      }
    }
    ClearExclusiveLocal();
    lVar4 = *plVar1;
  } while( true );
}


