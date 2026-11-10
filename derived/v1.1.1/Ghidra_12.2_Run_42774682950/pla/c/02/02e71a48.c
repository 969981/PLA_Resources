/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e71a48; name: FUN_02e71a48
 */


void FUN_02e71a48(long param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x1e8));
  *(int *)(param_1 + 0x21c) = *(int *)(param_1 + 0x21c) + -1;
  nn::os::SignalConditionVariable((ConditionVariableType *)(param_1 + 0x208));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1e8));
  return;
}


