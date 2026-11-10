/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b0dd10; name: FUN_01b0dd10
 */


void FUN_01b0dd10(long param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *local_18;
  
  if (*(long *)(param_1 + 0xbf0) == 0) {
    local_18 = (long *)0x0;
    plVar5 = local_18;
  }
  else {
    FUN_01b2463c(&local_18,*(long *)(param_1 + 0xbf0));
    plVar5 = local_18;
  }
  local_18 = plVar5;
  if (((param_2 & 1) == 0) || (*(int *)((long)plVar5 + 0x20c) < 1)) {
    FUN_01a8d684(param_1,param_2 & 1);
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
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
  }
  return;
}


