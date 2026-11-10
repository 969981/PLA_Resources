/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332afe8; name: FUN_0332afe8
 */


void FUN_0332afe8(long param_1)

{
  MutexType *pMVar1;
  SemaphoreType *pSVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  SemaphoreType *pSVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = (long)DAT_0444b53c;
  lVar9 = tpidr_el0;
  lVar7 = *(long *)(lVar9 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar9 + 0x38d490) = lVar7;
    iVar5 = DAT_0444b538;
    lVar10 = *(long *)(lVar7 + lVar10 * 8 + 0x18);
    if (lVar7 == 0) {
      lVar7 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar7;
      lVar9 = *(long *)(param_1 + 0x20);
      goto joined_r0x0332b174;
    }
  }
  else {
    lVar10 = *(long *)(lVar7 + lVar10 * 8 + 0x18);
  }
  lVar9 = *(long *)(param_1 + 0x20);
  iVar5 = DAT_0444b538;
joined_r0x0332b174:
  if (lVar10 == 0) {
    lVar7 = -1;
  }
  else {
    lVar7 = (long)*(int *)(lVar7 + (long)iVar5 * 8 + 0x18);
  }
  lVar9 = lVar9 + lVar7 * 0x80;
  pMVar1 = (MutexType *)(lVar9 + 0x28);
  nn::os::LockMutex(pMVar1);
  iVar5 = *(int *)(lVar9 + 0x24) + -1;
  *(int *)(lVar9 + 0x24) = iVar5;
  if (iVar5 != 0) {
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  piVar8 = (int *)(lVar9 + 0x20);
  if (*piVar8 == 1) {
    *piVar8 = 4;
    nn::os::UnlockMutex(pMVar1);
    piVar8 = (int *)(param_1 + 0x50);
    do {
      iVar5 = *piVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar4) {
        *piVar8 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      pSVar6 = *(SemaphoreType **)(param_1 + 0x48);
      pSVar2 = pSVar6 + 0x40;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pSVar2,0x10);
        if (bVar4) {
          *(int *)pSVar2 = *(int *)pSVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      nn::os::ReleaseSemaphore(pSVar6,1);
    }
  }
  else {
    if (*piVar8 != 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    *piVar8 = 3;
    nn::os::UnlockMutex(pMVar1);
  }
  *(undefined1 *)(lVar9 + 0x48) = 1;
  nn::os::AcquireSemaphore((SemaphoreType *)(lVar9 + 0x50));
  *(undefined1 *)(lVar9 + 0x48) = 0;
  return;
}


