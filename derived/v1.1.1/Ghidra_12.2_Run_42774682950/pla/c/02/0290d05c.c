/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0290d05c; name: FUN_0290d05c
 */


void FUN_0290d05c(long param_1,byte param_2)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x1f0));
  *(byte *)(param_1 + 0x2a0) = param_2 & 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1f0));
  return;
}


