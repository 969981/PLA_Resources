/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029562c0; name: FUN_029562c0
 */


void FUN_029562c0(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_28 [8];
  
  FUN_029563a0(param_2);
  lVar6 = FUN_02956bdc(auStack_28,*param_1,param_1 + 6,param_1 + 5,param_1 + 7,param_1 + 9,param_1);
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
  plVar7 = (long *)*param_2;
  *param_2 = 0;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  *param_2 = lVar6;
  FUN_029565fc(param_1,param_2);
  FUN_029567f0(param_1,param_2);
  if (*(char *)(param_1 + 4) == '\0') {
    lVar6 = param_2[(ulong)*(uint *)((long)param_1 + 0x1c) + 1];
    *(long *)(lVar6 + 0x500) = *param_2;
    *(undefined1 *)(lVar6 + 0x508) = 1;
  }
  return;
}


