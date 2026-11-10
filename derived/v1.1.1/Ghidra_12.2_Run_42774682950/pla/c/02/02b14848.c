/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b14848; name: FUN_02b14848
 */


void FUN_02b14848(long param_1)

{
  MutexType *pMVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long local_28;
  
  if (((*PTR_DAT_043880c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_043880c0), iVar2 != 0))
  {
    FUN_00100250(&LAB_02b14928,PTR_DAT_043880c8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_043880c0);
  }
  lVar4 = *(long *)PTR_DAT_043880c8;
  *(long *)PTR_DAT_043880d0 = lVar4;
  pMVar1 = (MutexType *)(lVar4 + 0x170);
  local_28 = param_1;
  uVar3 = nn::os::IsMutexLockedByCurrentThread(pMVar1);
  if ((uVar3 & 1) == 0) {
    nn::os::LockMutex(pMVar1);
    FUN_02b14f54(lVar4 + (ulong)*(uint *)(lVar4 + 0x168) * 0x38 + 0x50,&local_28);
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    FUN_02b14f54(lVar4 + 0x130,&local_28);
  }
                    /* WARNING: Could not recover jumptable at 0x02b148e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0xa0))();
  return;
}


