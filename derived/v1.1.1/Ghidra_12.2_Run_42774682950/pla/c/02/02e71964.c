/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e71964; name: FUN_02e71964
 */


void FUN_02e71964(long param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x1e8));
  *(undefined1 *)(param_1 + 0x268) = 0;
  nn::os::SignalConditionVariable((ConditionVariableType *)(param_1 + 0x208));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1e8));
  if (*(char *)(param_1 + 0x50) == '\0') {
    return;
  }
  nn::os::WaitThread((ThreadType *)(param_1 + 0x10));
  FUN_02e719d0((ThreadType *)(param_1 + 0x10));
  return;
}


