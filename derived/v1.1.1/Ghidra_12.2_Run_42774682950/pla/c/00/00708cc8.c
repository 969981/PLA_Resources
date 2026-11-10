/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00708cc8; name: FUN_00708cc8
 */


long * FUN_00708cc8(long *param_1)

{
  (**(code **)(*param_1 + 0x18))();
  nn::os::LockMutex((MutexType *)(param_1 + 7));
  nn::os::UnlockMutex((MutexType *)(param_1 + 7));
  return param_1 + 0xb;
}


