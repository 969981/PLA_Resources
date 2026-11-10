/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333befc; name: FUN_0333befc
 */


void FUN_0333befc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x330) = 0;
  if (*(int *)(param_1 + 0x3c0) == 0) {
LAB_0333bf90:
    *(undefined4 *)(param_1 + 0x3c0) = 0;
    return;
  }
  plVar6 = *(long **)(param_1 + 0x3b8);
  plVar7 = plVar6 + (long)*(int *)(param_1 + 0x3c0) + -1;
  plVar5 = (long *)*plVar7;
  if (plVar5 == (long *)0x0) goto LAB_0333bf5c;
  if (plVar5[1] == 0) goto LAB_0333bf5c;
  plVar1 = plVar5 + 2;
  do {
    lVar4 = *plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
LAB_0333bf5c:
    do {
      if (plVar7 == plVar6) goto LAB_0333bf90;
      plVar7 = plVar7 + -1;
      plVar5 = (long *)*plVar7;
    } while ((plVar5 == (long *)0x0) || (plVar5[1] == 0));
    plVar1 = plVar5 + 2;
    do {
      lVar4 = *plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  } while( true );
}


