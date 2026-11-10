/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333d74c; name: FUN_0333d74c
 */


void FUN_0333d74c(MutexType *param_1)

{
  nn::os::FinalizeSemaphore((SemaphoreType *)(param_1 + 0x40));
  nn::os::FinalizeMutex(param_1 + 0x20);
  nn::os::FinalizeMutex(param_1);
  return;
}


