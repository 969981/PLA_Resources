/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e70cc8; name: FUN_02e70cc8
 */


bool FUN_02e70cc8(long param_1)

{
  long lVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  lVar1 = *(long *)(param_1 + 0xc0);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  return lVar1 == 0;
}


