/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014bc478; name: FUN_014bc478
 */


undefined8 FUN_014bc478(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  
  if (*(int *)(param_1 + 0x78) == 1) {
    uVar7 = 1;
  }
  else {
    if ((*(int *)(param_1 + 0x78) == 0) &&
       (uVar5 = FUN_01363394(*(undefined8 *)(param_1 + 0x70)), (uVar5 & 1) != 0)) {
      plVar6 = *(long **)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x70) = 0;
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
          (**(code **)(*plVar6 + 0x10))();
        }
      }
      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    }
    uVar7 = 0;
  }
  return uVar7;
}


