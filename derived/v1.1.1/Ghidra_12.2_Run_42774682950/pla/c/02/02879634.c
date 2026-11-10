/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02879634; name: FUN_02879634
 */


void FUN_02879634(long *param_1,long param_2,byte param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  if (*(long *)(param_2 + 8) == 0) {
    *param_1 = 0;
  }
  else {
    if (param_3 < 0x10) {
      plVar5 = *(long **)(*(long *)(param_2 + 8) + (ulong)param_3 * 0x18 + 0x18);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)0x0;
      }
      else {
        FUN_02a439f4(plVar5[0xb]);
      }
    }
    else {
      plVar5 = (long *)0x0;
    }
    lVar6 = plVar5[0xd];
    *param_1 = lVar6;
    if (lVar6 != 0) {
      piVar1 = (int *)(lVar6 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (plVar5 != (long *)0x0) {
      lVar6 = plVar5[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar6 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x028796b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x20))();
        return;
      }
    }
  }
  return;
}


