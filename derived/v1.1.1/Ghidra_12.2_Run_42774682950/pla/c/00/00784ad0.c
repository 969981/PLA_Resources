/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00784ad0; name: FUN_00784ad0
 */


bool FUN_00784ad0(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = nn::os::TryLockMutex((MutexType *)(param_1 + 0xc0));
  if ((uVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1 + 0xa0));
    if ((*(long *)(param_1 + 0x20) == param_1 + 0x18) && (*(long *)(param_1 + 0x10) == param_1 + 8))
    {
      bVar1 = *(int *)(param_1 + 0x98) == 0;
    }
    else {
      bVar1 = false;
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0xa0));
    nn::os::UnlockMutex((MutexType *)(param_1 + 0xc0));
  }
  return bVar1;
}


