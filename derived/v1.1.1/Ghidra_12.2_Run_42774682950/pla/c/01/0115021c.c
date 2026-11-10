/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0115021c; name: FUN_0115021c
 */


void FUN_0115021c(long param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x478));
  *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_1 + 0x498);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x478));
  return;
}


