/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f51b8; name: FUN_007f51b8
 */


void FUN_007f51b8(long param_1)

{
  if (*(long **)(param_1 + 0x128) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x128) + 0x10))();
  }
  if (*(long *)(param_1 + 0x120) != 0) {
    nn::os::LockMutex((MutexType *)(param_1 + 0xd8));
    (**(code **)(**(long **)(param_1 + 0x120) + 0x10))();
    nn::os::UnlockMutex((MutexType *)(param_1 + 0xd8));
  }
  if (*(long *)(param_1 + 0x118) != 0) {
    nn::os::LockMutex((MutexType *)(param_1 + 0xf8));
    (**(code **)(**(long **)(param_1 + 0x118) + 0x10))();
    nn::os::UnlockMutex((MutexType *)(param_1 + 0xf8));
  }
  if (*(long *)(param_1 + 0x270) == 0) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x250));
  (**(code **)(**(long **)(param_1 + 0x270) + 0x10))();
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x250));
  return;
}


