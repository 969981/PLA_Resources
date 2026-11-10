/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333d77c; name: FUN_0333d77c
 */


void FUN_0333d77c(MutexType *param_1)

{
  MutexType *pMVar1;
  
  nn::os::LockMutex(param_1);
  pMVar1 = param_1 + 0x20;
  nn::os::LockMutex(pMVar1);
  if (*(int *)(param_1 + 0x68) == *(int *)(param_1 + 0x6c)) {
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  param_1[0x70] = (MutexType)0x1;
  nn::os::UnlockMutex(pMVar1);
  nn::os::AcquireSemaphore((SemaphoreType *)(param_1 + 0x40));
  param_1[0x70] = (MutexType)0x0;
  return;
}


