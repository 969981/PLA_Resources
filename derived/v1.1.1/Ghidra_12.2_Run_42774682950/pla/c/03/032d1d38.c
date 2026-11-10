/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d1d38; name: FUN_032d1d38
 */


undefined8 FUN_032d1d38(long param_1,undefined8 param_2)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x1560) = param_2;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x10));
  return 0;
}


