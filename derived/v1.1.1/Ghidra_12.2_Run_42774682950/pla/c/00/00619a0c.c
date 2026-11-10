/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00619a0c; name: FUN_00619a0c
 */


void FUN_00619a0c(long param_1,undefined8 *param_2)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x20) = *param_2;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  return;
}


