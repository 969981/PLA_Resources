/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028c6228; name: FUN_028c6228
 */


void FUN_028c6228(long param_1)

{
  MutexType *pMVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    pMVar1 = (MutexType *)(lVar2 + 0x180);
    nn::os::LockMutex(pMVar1);
    if (*(char *)(lVar2 + 0x1e1) == '\0') {
      do {
        nn::os::WaitConditionVariable((ConditionVariableType *)(lVar2 + 0x1a0),pMVar1);
      } while (*(char *)(lVar2 + 0x1e1) == '\0');
    }
    nn::os::UnlockMutex(pMVar1);
  }
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    pMVar1 = (MutexType *)(lVar2 + 0x180);
    nn::os::LockMutex(pMVar1);
    if (*(char *)(lVar2 + 0x1e1) == '\0') {
      do {
        nn::os::WaitConditionVariable((ConditionVariableType *)(lVar2 + 0x1a0),pMVar1);
      } while (*(char *)(lVar2 + 0x1e1) == '\0');
    }
    nn::os::UnlockMutex(pMVar1);
  }
  lVar2 = *(long *)(param_1 + 0x68);
  if (lVar2 == 0) {
    return;
  }
  pMVar1 = (MutexType *)(lVar2 + 0x180);
  nn::os::LockMutex(pMVar1);
  if (*(char *)(lVar2 + 0x1e1) == '\0') {
    do {
      nn::os::WaitConditionVariable((ConditionVariableType *)(lVar2 + 0x1a0),pMVar1);
    } while (*(char *)(lVar2 + 0x1e1) == '\0');
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


