/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013d8214; name: FUN_013d8214
 */


void FUN_013d8214(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  if ((*(long *)(param_1 + 0x5c8) != 0) && (*(char *)(*(long *)(param_1 + 0x5c8) + 0x1e1) != '\0'))
  {
    puVar5 = (undefined8 *)FUN_02ad8108();
    plVar6 = (long *)*puVar5;
    if (plVar6 == (long *)0x0) {
      FUN_02b21610(0);
      FUN_02b195f8(0,*(undefined8 *)(param_1 + 0x5f0),param_1 + 0x5c0);
      return;
    }
    plVar1 = plVar6 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_02b21610(plVar6);
    FUN_02b195f8(0,*(undefined8 *)(param_1 + 0x5f0),param_1 + 0x5c0);
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
                    /* WARNING: Could not recover jumptable at 0x013d82ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x10))(plVar6);
      return;
    }
  }
  return;
}


