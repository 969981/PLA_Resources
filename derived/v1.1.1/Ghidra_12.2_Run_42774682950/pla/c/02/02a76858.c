/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a76858; name: FUN_02a76858
 */


void FUN_02a76858(long param_1)

{
  MutexType *pMVar1;
  
  pMVar1 = (MutexType *)(param_1 + 0x180);
  nn::os::LockMutex(pMVar1);
  if (*(char *)(param_1 + 0x1e1) == '\0') {
    do {
      nn::os::WaitConditionVariable((ConditionVariableType *)(param_1 + 0x1a0),pMVar1);
    } while (*(char *)(param_1 + 0x1e1) == '\0');
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


