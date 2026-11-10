/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a2b6dc; name: FUN_01a2b6dc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a2b6dc(long param_1,undefined4 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = *(long **)(param_1 + 0x240);
  *(undefined4 *)(param_1 + 0x288) = param_2;
  plVar7 = *(long **)(param_1 + 0x248);
  for (; plVar6 != plVar7; plVar6 = plVar6 + 1) {
    plVar5 = (long *)*plVar6;
    if (plVar5 == (long *)0x0) {
      _DAT_0000012c = param_2;
    }
    else {
      plVar1 = plVar5 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *(undefined4 *)((long)plVar5 + 300) = param_2;
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
        (**(code **)(*plVar5 + 0x10))();
      }
    }
  }
  return;
}


