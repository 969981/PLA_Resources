/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6bef0; name: FUN_02e6bef0
 */


undefined8 FUN_02e6bef0(long param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  *(undefined1 *)(param_1 + 0xc2) = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  FUN_02e6b230(param_1);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  return 1;
}


