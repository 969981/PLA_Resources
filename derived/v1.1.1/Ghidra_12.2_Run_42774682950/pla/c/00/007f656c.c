/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f656c; name: FUN_007f656c
 */


void FUN_007f656c(long *param_1)

{
  MutexType *pMVar1;
  ulong uVar2;
  
  pMVar1 = (MutexType *)(param_1 + 0x1f);
  nn::os::LockMutex(pMVar1);
  if (*(char *)((long)param_1 + 0x24d) != '\0') {
    (**(code **)(*(long *)param_1[0x23] + 0x10))();
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  uVar2 = (**(code **)(*param_1 + 0x178))(param_1);
  if ((uVar2 & 1) != 0) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x4a));
    (**(code **)(*(long *)param_1[0x23] + 0x18))((long *)param_1[0x23],param_1[0x4e]);
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x4a));
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


