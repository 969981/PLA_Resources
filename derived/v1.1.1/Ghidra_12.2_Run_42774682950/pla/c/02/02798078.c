/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02798078; name: FUN_02798078
 */


bool FUN_02798078(long param_1)

{
  int iVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x188));
  iVar1 = *(int *)(param_1 + 0x70);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x188));
  return iVar1 == 0;
}


