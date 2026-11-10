/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333ddd4; name: FUN_0333ddd4
 */


void FUN_0333ddd4(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar4;
  
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x48);
  if (UNRECOVERED_JUMPTABLE == (code *)0x1) {
    plVar4 = (long *)(lVar3 + -8);
    do {
      lVar3 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 != 0) {
      return;
    }
  }
  else if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0333ddf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(lVar3,0);
    return;
  }
  FUN_0333dda0();
  return;
}


