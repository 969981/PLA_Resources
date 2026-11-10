/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029231ac; name: FUN_029231ac
 */


void FUN_029231ac(long param_1)

{
  int iVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x5a8));
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x5a0)) {
    iVar1 = *(int *)(param_1 + 0x5a0) + -1;
  }
  *(int *)(param_1 + 0x5a0) = iVar1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x5a8));
  return;
}


