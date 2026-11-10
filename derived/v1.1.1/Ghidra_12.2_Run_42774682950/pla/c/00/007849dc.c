/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007849dc; name: FUN_007849dc
 */


void FUN_007849dc(long param_1)

{
  MutexType *pMVar1;
  MutexType *pMVar2;
  int iVar3;
  ulong uVar4;
  
  *(undefined1 *)(param_1 + 0x110) = 1;
  nn::os::SignalEvent((EventType *)(param_1 + 0x28));
  FUN_00785d4c(param_1 + 0xe0);
  pMVar1 = (MutexType *)(param_1 + 0xc0);
  uVar4 = nn::os::TryLockMutex(pMVar1);
  if ((uVar4 & 1) != 0) {
    pMVar2 = (MutexType *)(param_1 + 0xa0);
    nn::os::LockMutex(pMVar2);
    if ((*(long *)(param_1 + 0x20) == param_1 + 0x18) && (*(long *)(param_1 + 0x10) == param_1 + 8))
    {
      iVar3 = *(int *)(param_1 + 0x98);
      nn::os::UnlockMutex(pMVar2);
      nn::os::UnlockMutex(pMVar1);
      if (iVar3 == 0) {
        nn::os::FinalizeConditionVariable((ConditionVariableType *)(param_1 + 0x108));
        nn::os::FinalizeMutex((MutexType *)(param_1 + 0xe8));
        nn::os::FinalizeMutex(pMVar1);
        nn::os::FinalizeMutex(pMVar2);
        FUN_00783174(param_1 + 0x50);
        nn::os::FinalizeEvent((EventType *)(param_1 + 0x28));
        return;
      }
    }
    else {
      nn::os::UnlockMutex(pMVar2);
      nn::os::UnlockMutex(pMVar1);
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


