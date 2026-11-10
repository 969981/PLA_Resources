/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea9fd0; name: FUN_02ea9fd0
 */


void FUN_02ea9fd0(long param_1)

{
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  return;
}


