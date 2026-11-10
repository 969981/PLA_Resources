/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332a954; name: FUN_0332a954
 */


void FUN_0332a954(long param_1)

{
  MutexType *pMVar1;
  SemaphoreType *pSVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  SemaphoreType *pSVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  
  lVar10 = (long)DAT_0444b53c;
  lVar11 = tpidr_el0;
  lVar8 = *(long *)(lVar11 + 0x38d490);
  if (lVar8 == 0) {
    lVar8 = FUN_0333d16c(0,1);
    *(long *)(lVar11 + 0x38d490) = lVar8;
    iVar9 = DAT_0444b538;
    lVar10 = *(long *)(lVar8 + lVar10 * 8 + 0x18);
    if (lVar8 == 0) {
      lVar8 = FUN_0333d16c(0,1);
      *(long *)(lVar11 + 0x38d490) = lVar8;
    }
  }
  else {
    lVar10 = *(long *)(lVar8 + lVar10 * 8 + 0x18);
    iVar9 = DAT_0444b538;
  }
  if (lVar10 == 0) {
    iVar9 = -1;
  }
  else {
    iVar9 = *(int *)(lVar8 + (long)iVar9 * 8 + 0x18);
  }
  lVar11 = *(long *)(param_1 + 0x20);
  FUN_0332a5c4(param_1);
  lVar11 = lVar11 + (long)iVar9 * 0x80;
  piVar12 = (int *)(lVar11 + 0x20);
  if ((*piVar12 == 1) && (uVar6 = nn::os::GetSystemTick(), *(ulong *)(param_1 + 0x40) < uVar6)) {
    pMVar1 = (MutexType *)(lVar11 + 0x28);
    nn::os::LockMutex(pMVar1);
    if (*piVar12 != 1) {
      nn::os::UnlockMutex(pMVar1);
      return;
    }
    *piVar12 = 2;
    nn::os::UnlockMutex(pMVar1);
    pSVar7 = *(SemaphoreType **)(param_1 + 0x48);
    pSVar2 = pSVar7 + 0x2c;
    do {
      iVar3 = *(int *)pSVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pSVar2,0x10);
      if (bVar5) {
        *(int *)pSVar2 = iVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(int *)(*(long *)(pSVar7 + 0x30) + (long)iVar3 * 4) = iVar9;
    nn::os::ReleaseSemaphore(pSVar7,1);
    *(undefined1 *)(lVar11 + 0x48) = 1;
    nn::os::AcquireSemaphore((SemaphoreType *)(lVar11 + 0x50));
    *(undefined1 *)(lVar11 + 0x48) = 0;
    if (*(char *)(lVar11 + 0x1d) == '\x02') {
      FUN_0332a5c4(param_1);
      return;
    }
  }
  return;
}


