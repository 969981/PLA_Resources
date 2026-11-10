/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a73068; name: FUN_02a73068
 */


void FUN_02a73068(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x210);
  *(undefined1 *)(lVar4 + 0x20c) = 1;
  if (*(char *)(lVar4 + 0x20d) != '\0') {
    lVar4 = *(long *)(lVar4 + 0x18);
    piVar1 = (int *)(lVar4 + 0x5e4);
    if (*piVar1 != 2) {
      if (*piVar1 != 0) {
LAB_02a730c4:
        nn::os::LockMutex((MutexType *)(lVar4 + 0x560));
        nn::os::ClearEvent((EventType *)(*(long *)(lVar4 + 0x5c0) + 0x68));
        nn::os::SignalConditionVariable((ConditionVariableType *)(lVar4 + 0x5b8));
        nn::os::UnlockMutex((MutexType *)(lVar4 + 0x560));
        return;
      }
      do {
        if (*piVar1 != 0) {
          ClearExclusiveLocal();
          goto LAB_02a730c4;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = 2;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  return;
}


