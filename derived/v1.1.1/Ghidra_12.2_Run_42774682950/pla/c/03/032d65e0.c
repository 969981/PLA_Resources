/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d65e0; name: FUN_032d65e0
 */


void FUN_032d65e0(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  if (*param_1 == 0) {
    plVar3 = (long *)FUN_032cf5b0(0x48);
    FUN_032d665c();
    plVar4 = (long *)*param_1;
    if (((plVar4 != plVar3) && (*param_1 = (long)plVar3, plVar4 != (long *)0x0)) && (plVar4[1] != 0)
       ) {
      plVar3 = plVar4 + 2;
      do {
        lVar5 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x032d6658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x18))();
        return;
      }
    }
  }
  return;
}


