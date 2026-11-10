/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f58540; name: FUN_02f58540
 */


void FUN_02f58540(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  
  plVar1 = (long *)(param_1 + 0x8e0);
  if (*plVar1 == 0) {
    return;
  }
  do {
    lVar4 = *plVar1;
    while (*plVar1 == lVar4) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (lVar4 == 0) {
          return;
        }
        lVar7 = *(long *)(param_1 + 0x7e0);
        do {
          lVar5 = lVar4;
          lVar4 = *(long *)(lVar5 + 0x48);
          *(long *)(lVar5 + 0x48) = lVar7;
          if (*(long *)(param_1 + 0x7e0) == 0) {
            iVar6 = 1;
          }
          else {
            iVar6 = *(int *)(*(long *)(param_1 + 0x7e0) + 0x1c) + 1;
          }
          *(int *)(lVar5 + 0x1c) = iVar6;
          *(long *)(param_1 + 0x7e0) = lVar5;
          lVar7 = lVar5;
        } while (lVar4 != 0);
        return;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}


