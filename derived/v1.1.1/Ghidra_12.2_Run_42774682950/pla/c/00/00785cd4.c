/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00785cd4; name: FUN_00785cd4
 */


void FUN_00785cd4(int *param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 2));
  *param_1 = *param_1 + 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 2));
  return;
}


