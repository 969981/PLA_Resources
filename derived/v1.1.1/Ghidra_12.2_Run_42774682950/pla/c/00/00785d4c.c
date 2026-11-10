/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00785d4c; name: FUN_00785d4c
 */


void FUN_00785d4c(int *param_1)

{
  MutexType *pMVar1;
  
  pMVar1 = (MutexType *)(param_1 + 2);
  nn::os::LockMutex(pMVar1);
  if (0 < *param_1) {
    do {
      nn::os::WaitConditionVariable((ConditionVariableType *)(param_1 + 10),pMVar1);
    } while (0 < *param_1);
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


