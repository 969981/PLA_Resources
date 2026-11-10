/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a6c80; name: FUN_031a6c80
 */


void FUN_031a6c80(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined4 local_40;
  undefined2 local_3c;
  undefined4 local_38;
  long local_30;
  
  if (*(long *)(param_1 + 0x148) != param_2) {
    local_38 = *(undefined4 *)(param_1 + 0x23c);
    local_40 = 0x8000020;
    local_3c = 0x31;
    local_30 = param_2;
    FUN_031aa380(*(long *)(param_1 + 0x180) + 0x28,*(long *)(param_1 + 0x180),&local_40);
    if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
      plVar4 = (long *)(param_2 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar4 = *(long **)(param_1 + 0x148);
    *(long *)(param_1 + 0x148) = param_2;
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
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
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
    *(undefined1 *)(param_1 + 0x199) = 1;
    *(long *)(param_1 + 0xe0) = param_2;
    if ((*(int *)(param_1 + 0x40) == 1) && (*(int *)(param_1 + 0x28) != 0)) {
      FUN_031a7148(param_1);
    }
  }
  return;
}


