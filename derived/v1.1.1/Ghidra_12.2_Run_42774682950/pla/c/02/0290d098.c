/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0290d098; name: FUN_0290d098
 */


long FUN_0290d098(long param_1)

{
  long lVar1;
  long lVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1f0));
  lVar1 = *(long *)(param_1 + 0x218);
  lVar2 = *(long *)(param_1 + 0x210);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1f0));
  return lVar1 - lVar2 >> 4;
}


