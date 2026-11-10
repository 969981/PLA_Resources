/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00867f58; name: FUN_00867f58
 */


void FUN_00867f58(undefined8 param_1,long param_2)

{
  nn::os::LockMutex((MutexType *)(param_2 + 0x18));
  (**(code **)(**(long **)(param_2 + 8) + 0xa8))(param_1);
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x18));
  return;
}


