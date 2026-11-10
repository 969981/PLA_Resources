/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01099430; name: FUN_01099430
 */


void FUN_01099430(undefined8 *param_1,int param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  if (param_2 != 0) {
    FUN_02c60b20(*param_1);
    plVar6 = (long *)*param_1;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if ((param_3 & 1) != 0) {
      for (lVar5 = 0; (&DAT_03a84b1c)[lVar5] != param_2; lVar5 = lVar5 + 2) {
        if (lVar5 == 0x3c) goto LAB_010994c0;
        if ((&DAT_03a84b20)[lVar5] == param_2) {
          lVar5 = lVar5 + 1;
          break;
        }
      }
      FUN_02c870fc(plVar6[0x13],lVar5,1);
    }
LAB_010994c0:
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 10;
      do {
        iVar4 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01099504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}


