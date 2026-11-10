/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03325f84; name: FUN_03325f84
 */


void FUN_03325f84(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = (long *)*param_1;
  if (*(int *)(param_1 + 1) != 0) {
    plVar7 = plVar6 + (long)*(int *)(param_1 + 1) * 2 + -2;
    plVar4 = (long *)*plVar7;
    if (plVar4 != (long *)0x0) goto LAB_03325fc0;
LAB_03325fb0:
    if (plVar7 != plVar6) {
      while( true ) {
        plVar7 = plVar7 + -2;
        plVar4 = (long *)*plVar7;
        if (plVar4 == (long *)0x0) break;
LAB_03325fc0:
        if (plVar4[1] == 0) break;
        plVar1 = plVar4 + 2;
        do {
          lVar5 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 + -1 != 0) break;
        (**(code **)(*plVar4 + 0x18))();
        if (plVar7 == plVar6) goto LAB_03325ff4;
      }
      goto LAB_03325fb0;
    }
LAB_03325ff4:
    plVar6 = (long *)*param_1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((plVar6 == param_1 + 2) || (*(int *)((long)param_1 + 0xc) < 0)) {
    return;
  }
  FUN_033281c0(PTR_PTR_0434a080,param_1);
  return;
}


