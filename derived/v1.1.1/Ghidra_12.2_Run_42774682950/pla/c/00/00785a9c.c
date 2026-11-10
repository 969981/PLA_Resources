/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00785a9c; name: FUN_00785a9c
 */


void FUN_00785a9c(long param_1)

{
  MutexType *pMVar1;
  MutexType *pMVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long extraout_x1;
  undefined8 local_48;
  
  FUN_00785cd4(param_1 + 0xe0);
  local_48 = 0;
  cVar3 = *(char *)(param_1 + 0x110);
  while ((cVar3 == '\0' &&
         ((uVar5 = FUN_007850e8(param_1,&local_48), (uVar5 & 1) != 0 ||
          (uVar5 = FUN_007853a8(param_1,&local_48), (uVar5 & 1) != 0))))) {
    FUN_00785034(param_1,local_48);
    cVar3 = *(char *)(param_1 + 0x110);
  }
  if (*(char *)(param_1 + 0x110) != '\0') {
LAB_00785c50:
    FUN_00785d0c(param_1 + 0xe0);
    return;
  }
  pMVar1 = (MutexType *)(param_1 + 0xc0);
  pMVar2 = (MutexType *)(param_1 + 0xa0);
LAB_00785b20:
  uVar5 = nn::os::TryLockMutex(pMVar1);
  if ((uVar5 & 1) != 0) {
    nn::os::LockMutex(pMVar2);
    if ((*(long *)(param_1 + 0x20) == param_1 + 0x18) && (*(long *)(param_1 + 0x10) == param_1 + 8))
    {
      iVar4 = *(int *)(param_1 + 0x98);
      nn::os::UnlockMutex(pMVar2);
      nn::os::UnlockMutex(pMVar1);
      if (iVar4 == 0) goto LAB_00785c50;
    }
    else {
      nn::os::UnlockMutex(pMVar2);
      nn::os::UnlockMutex(pMVar1);
    }
  }
  nn::os::LockMutex(pMVar1);
  cVar3 = *(char *)(param_1 + 0x110);
  do {
    if (cVar3 != '\0') {
LAB_00785c48:
      nn::os::UnlockMutex(pMVar1);
      goto LAB_00785c50;
    }
    uVar5 = nn::os::TryLockMutex(pMVar1);
    if ((uVar5 & 1) != 0) {
      nn::os::LockMutex(pMVar2);
      if ((*(long *)(param_1 + 0x20) == param_1 + 0x18) &&
         (*(long *)(param_1 + 0x10) == param_1 + 8)) {
        iVar4 = *(int *)(param_1 + 0x98);
        nn::os::UnlockMutex(pMVar2);
        nn::os::UnlockMutex(pMVar1);
        if (iVar4 == 0) goto LAB_00785c48;
      }
      else {
        nn::os::UnlockMutex(pMVar2);
        nn::os::UnlockMutex(pMVar1);
      }
    }
    iVar4 = FUN_0078558c(param_1,0);
    if (iVar4 == 0) {
      lVar6 = FUN_00785674(param_1);
      if (lVar6 != 0) break;
    }
    else {
      if (iVar4 != 2) {
        if (iVar4 == 1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
                    /* WARNING: Subroutine does not return */
        nn::detail::UnexpectedDefaultImpl("","",0);
      }
      lVar6 = extraout_x1;
      if (extraout_x1 != 0) break;
    }
    cVar3 = *(char *)(param_1 + 0x110);
  } while( true );
  nn::os::UnlockMutex(pMVar1);
  FUN_00785034(param_1,lVar6);
  if (*(char *)(param_1 + 0x110) != '\0') goto LAB_00785c50;
  goto LAB_00785b20;
}


