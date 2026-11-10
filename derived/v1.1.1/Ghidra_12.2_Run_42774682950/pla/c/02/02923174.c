/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02923174; name: FUN_02923174
 */


void FUN_02923174(long param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x5a8));
  *(int *)(param_1 + 0x5a0) = *(int *)(param_1 + 0x5a0) + 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x5a8));
  return;
}


