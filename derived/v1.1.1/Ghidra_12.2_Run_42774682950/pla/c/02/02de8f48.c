/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02de8f48; name: FUN_02de8f48
 */


void FUN_02de8f48(long param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x218));
  if (*(char *)(param_1 + 0x50) == '\0') {
    FUN_02de7d58(param_1 + -0x48);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x218));
  return;
}


