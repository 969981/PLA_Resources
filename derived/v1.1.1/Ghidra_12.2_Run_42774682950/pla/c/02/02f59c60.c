/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f59c60; name: FUN_02f59c60
 */


void FUN_02f59c60(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if ((*(int *)(param_1 + 8) != 2) || (*(int *)(param_1 + 0x1c) + 1 != *(int *)(param_1 + 0x10))) {
    plVar1 = (long *)(param_1 + 0x20);
    do {
      do {
        lVar4 = *plVar1;
        *param_2 = lVar4;
      } while (lVar4 == -1);
      while (*plVar1 == lVar4) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
          *(long **)(param_1 + 0x20) = param_2;
          return;
        }
      }
      ClearExclusiveLocal();
    } while( true );
  }
  plVar1 = (long *)(*(long *)(param_1 + 0x40) + 0x8e0);
  do {
    lVar4 = *plVar1;
    *(long *)(param_1 + 0x48) = lVar4;
    while (*plVar1 == lVar4) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = param_1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        return;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}


