/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0279b098; name: FUN_0279b098
 */


undefined1 FUN_0279b098(long param_1)

{
  undefined1 uVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1a8));
  uVar1 = *(undefined1 *)(param_1 + 0x180);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1a8));
  return uVar1;
}


