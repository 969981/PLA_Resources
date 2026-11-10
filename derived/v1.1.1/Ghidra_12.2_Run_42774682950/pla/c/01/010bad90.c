/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010bad90; name: FUN_010bad90
 */


void FUN_010bad90(long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)FUN_010badf8(param_1 + 0x58);
  plVar5 = (long *)*plVar4;
  *plVar4 = 0;
  if (plVar5 != (long *)0x0) {
    plVar4 = plVar5 + 10;
    do {
      iVar3 = (int)*plVar4 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *(int *)plVar4 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  FUN_010bb998(param_1 + 0x58,param_2);
  return;
}


