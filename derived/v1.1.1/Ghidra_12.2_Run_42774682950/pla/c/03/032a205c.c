/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a205c; name: FUN_032a205c
 */


void FUN_032a205c(long param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x1c0));
  if (*(int *)(param_1 + 0x1b8) == 1) {
    *(undefined4 *)(param_1 + 0x1b8) = 0;
  }
  else {
    *(int *)(param_1 + 0x1b4) = *(int *)(param_1 + 0x1b4) + -1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1c0));
  return;
}


