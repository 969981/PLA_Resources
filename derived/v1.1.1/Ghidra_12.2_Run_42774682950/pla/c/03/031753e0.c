/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031753e0; name: FUN_031753e0
 */


void FUN_031753e0(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  *(undefined1 *)(param_1 + 2) = 1;
  plVar3 = (long *)*param_1;
  plVar4 = (long *)*param_2;
  if (plVar3 != plVar4) {
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar4 = plVar4 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar3 = (long *)*param_1;
      plVar4 = (long *)*param_2;
    }
    *param_1 = (long)plVar4;
    if ((plVar3 != (long *)0x0) && (plVar3[1] != 0)) {
      plVar4 = plVar3 + 2;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x03175458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))();
        return;
      }
    }
  }
  return;
}


