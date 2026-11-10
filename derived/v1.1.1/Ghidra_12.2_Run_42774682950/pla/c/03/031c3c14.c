/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c3c14; name: FUN_031c3c14
 */


void FUN_031c3c14(long param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  MutexType *pMVar7;
  long local_38;
  
  if (param_2 == param_3) {
    return;
  }
  iVar4 = (int)((ulong)(param_3 - param_2) >> 4);
  if (1 < iVar4) {
    FUN_031c6260(param_2,0,iVar4 + -1,&LAB_031c3d14);
  }
  pMVar7 = *(MutexType **)(param_1 + 0x28);
  nn::os::LockMutex(pMVar7);
  local_38 = param_2;
  do {
    plVar6 = *(long **)(local_38 + 8);
    if (plVar6 != (long *)0x0) {
      if (plVar6[1] != 0) {
        plVar1 = plVar6 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_031c2b38(*(undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)*(byte *)(plVar6 + 3) * 8),
                   plVar6);
      if (plVar6[1] != 0) {
        plVar1 = plVar6 + 2;
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
          (**(code **)(*plVar6 + 0x18))(plVar6);
        }
      }
    }
    local_38 = local_38 + 0x10;
  } while (local_38 != param_3);
  nn::os::UnlockMutex(pMVar7);
  return;
}


