/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0065b85c; name: FUN_0065b85c
 */


void FUN_0065b85c(undefined8 *param_1,long param_2)

{
  MutexType *pMVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x1a8));
  FUN_00784040(param_2 + 0x130);
  *(undefined1 *)(param_2 + 0x1c8) = 1;
  nn::os::LockMutex((MutexType *)(param_2 + 0x180));
  if (*(char *)(param_2 + 0x1a0) == '\0') {
    lVar5 = *(long *)(param_2 + 0x150);
    pMVar1 = (MutexType *)(lVar5 + 0x38);
    nn::os::LockMutex(pMVar1);
    nn::os::SignalEvent((EventType *)(lVar5 + 0x10));
    nn::os::UnlockMutex(pMVar1);
    *(undefined1 *)(param_2 + 0x1a0) = 1;
  }
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x180));
  *param_1 = *(undefined8 *)(param_2 + 0x120);
  lVar5 = *(long *)(param_2 + 0x128);
  param_1[1] = lVar5;
  if (lVar5 != 0) {
    plVar2 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x1a8));
  return;
}


